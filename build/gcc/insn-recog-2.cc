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
pattern1 (rtx x1, int *pnum_clobbers)
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
    case AND:
      return pattern0 (x1, pnum_clobbers); /* [-1, 0] */

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
      return 1;

    default:
      return -1;
    }
}

int
pattern16 (rtx x1)
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
pattern25 (rtx x1, machine_mode i1)
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
pattern27 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode)
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern36 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 8
      || GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 9
      || GET_MODE (x5) != E_XFmode)
    return -1;
  x6 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 10
      || GET_MODE (x7) != E_XFmode)
    return -1;
  x8 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 11
      || GET_MODE (x9) != E_XFmode)
    return -1;
  x10 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 12
      || GET_MODE (x11) != E_XFmode)
    return -1;
  x12 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XEXP (x12, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 13
      || GET_MODE (x13) != E_XFmode)
    return -1;
  x14 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x14, 0);
  if (GET_CODE (x15) != REG
      || REGNO (x15) != 14
      || GET_MODE (x15) != E_XFmode)
    return -1;
  x16 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x16) != CLOBBER)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 15
      || GET_MODE (x17) != E_XFmode)
    return -1;
  return 0;
}

int
pattern46 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !general_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !general_operand (operands[2], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_general_operand (operands[2], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !x86_64_general_operand (operands[2], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern56 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern60 (rtx x1, machine_mode i1)
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
pattern63 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], E_V4HImode)
      || !register_mmxmem_operand (operands[2], E_V4HImode))
    return -1;
  return 0;
}

int
pattern69 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  return pattern68 (x1); /* [-1, 2] */
}

int
pattern73 (rtx x1, machine_mode i1)
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
pattern78 (rtx x1)
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
  if (!x86_64_general_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern85 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ASHIFT
      || GET_MODE (x4) != E_TImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ZERO_EXTEND
      || GET_MODE (x5) != E_TImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != ZERO_EXTEND
      || GET_MODE (x6) != E_TImode)
    return -1;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  return pattern84 (x2, 
E_TImode, 
E_DImode); /* [-1, 1] */
}

int
pattern92 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCZmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[1] = x5;
  if (!memory_operand (operands[1], E_XImode))
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
pattern104 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[2] = x4;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern103 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern103 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern113 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_DImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern121 (rtx x1, machine_mode i1)
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

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern130 (rtx x1, machine_mode i1)
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
pattern138 (rtx x1)
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
    case E_V64QImode:
      return pattern126 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern126 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern126 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern126 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern126 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern126 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern146 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern151 (rtx x1, machine_mode i1)
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
pattern153 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V32HImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_V32HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_V32HImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern156 (rtx x1, machine_mode i1)
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
  if (!register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern163 (rtx x1)
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
      return pattern162 (x3, 
E_V32HFmode, 
E_V64QImode, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern162 (x3, 
E_V16HFmode, 
E_V32QImode, 
E_V16QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern174 (rtx x1)
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
      return pattern169 (x3, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern169 (x3, 
E_V8SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern169 (x3, 
E_V4SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern182 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[3], i1)
      || !vector_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern187 (rtx x1)
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
      if (GET_CODE (x14) != CONST_INT)
        return -1;
      x15 = XVECEXP (x4, 0, 3);
      if (GET_CODE (x15) != CONST_INT)
        return -1;
      x16 = XVECEXP (x4, 0, 4);
      if (GET_CODE (x16) != CONST_INT)
        return -1;
      x17 = XVECEXP (x4, 0, 5);
      if (GET_CODE (x17) != CONST_INT)
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
      if (GET_CODE (x22) != CONST_INT)
        return -1;
      x23 = XVECEXP (x7, 0, 3);
      if (GET_CODE (x23) != CONST_INT)
        return -1;
      x24 = XVECEXP (x7, 0, 4);
      if (GET_CODE (x24) != CONST_INT)
        return -1;
      x25 = XVECEXP (x7, 0, 5);
      if (GET_CODE (x25) != CONST_INT)
        return -1;
      x26 = XVECEXP (x7, 0, 6);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x27 = XVECEXP (x7, 0, 7);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
        return -1;
      switch (XWINT (x14, 0))
        {
        case 4L:
          if (XWINT (x15, 0) != 6L
              || XWINT (x16, 0) != 8L
              || XWINT (x17, 0) != 10L
              || XWINT (x22, 0) != 5L
              || XWINT (x23, 0) != 7L
              || XWINT (x24, 0) != 9L
              || XWINT (x25, 0) != 11L
              || pattern186 (x1, 
E_V16HImode, 
E_V8HImode) != 0)
            return -1;
          return 1;

        case 8L:
          if (XWINT (x15, 0) != 10L
              || XWINT (x16, 0) != 4L
              || XWINT (x17, 0) != 6L
              || XWINT (x22, 0) != 9L
              || XWINT (x23, 0) != 11L
              || XWINT (x24, 0) != 5L
              || XWINT (x25, 0) != 7L
              || pattern184 (x1, 
E_V16SImode, 
E_V8SImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case 4:
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
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x7, 0) != 4)
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
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern186 (x1, 
E_V8SImode, 
E_V4SImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern219 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
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
  x9 = XEXP (x2, 0);
  operands[2] = x9;
  switch (GET_MODE (operands[0]))
    {
    case E_HFmode:
      return pattern218 (x7, 
E_V8HFmode, 
E_HFmode); /* [-1, 0] */

    case E_SFmode:
      if (pattern218 (x7, 
E_V4SFmode, 
E_SFmode) != 0)
        return -1;
      return 1;

    case E_DFmode:
      if (pattern218 (x7, 
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern232 (rtx x1)
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
    case E_V4HImode:
      return pattern231 (x1, 
E_V4HImode); /* [-1, 0] */

    case E_V2SImode:
      if (pattern231 (x1, 
E_V2SImode) != 0)
        return -1;
      return 1;

    case E_V2HImode:
      if (pattern231 (x1, 
E_V2HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern242 (rtx x1)
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
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return pattern241 (x6); /* [-1, 1] */
}

int
pattern251 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
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
      x13 = XEXP (x3, 1);
      operands[2] = x13;
      if (!nonmemory_operand (operands[2], E_QImode))
        return -1;
      return pattern250 (x1); /* [-1, 2] */

    default:
      return -1;
    }
}

int
pattern273 (rtx x1, machine_mode i1, machine_mode i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3]
      || !register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x5 = XEXP (x1, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern282 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCCmode
      || GET_MODE (x2) != E_CCCmode)
    return -1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  return 0;
}

int
pattern289 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case LTU:
    case UNLT:
      operands[4] = x5;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x5, 0);
      operands[3] = x7;
      if (!flags_reg_operand (operands[3], E_VOIDmode))
        return -1;
      return 0;

    case EQ:
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x5, 0);
      operands[3] = x7;
      if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern301 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_DImode
      || !register_operand (operands[0], E_DImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  if (!register_mmxmem_operand (operands[2], E_DImode))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  operands[3] = x4;
  if (!const_0_to_255_mul_8_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern310 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x1, 1);
  operands[2] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern308 (x1, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern308 (x1, 
E_V8SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern308 (x1, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V8DImode:
      res = pattern309 (x1, 
E_V8DImode);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case E_V4DImode:
      res = pattern309 (x1, 
E_V4DImode);
      if (res >= 0)
        return res + 5; /* [5, 6] */
      return -1;

    case E_V2DImode:
      res = pattern309 (x1, 
E_V2DImode);
      if (res >= 0)
        return res + 7; /* [7, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern325 (rtx x1)
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
          || GET_MODE (x1) != E_V8SImode)
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
          || GET_MODE (x1) != E_V4SImode)
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
          || GET_MODE (x1) != E_V8DImode)
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
          || GET_MODE (x1) != E_V4DImode)
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
          || GET_MODE (x1) != E_V2DImode)
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
pattern342 (rtx x1)
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
      if (GET_MODE (x2) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode)
          || !x86_64_general_operand (operands[2], E_QImode))
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode))
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
pattern359 (rtx x1)
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
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern357 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern357 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern358 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern358 (x3, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern368 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_DImode)
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
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x3) != E_DImode)
    return -1;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  if (!x86_64_zext_immediate_operand (operands[2], E_DImode))
    return -1;
  return 0;
}

int
pattern376 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
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
          return pattern375 (x4, 
E_DImode); /* [-1, 0] */

        case E_TImode:
          if (pattern375 (x4, 
E_TImode) != 0)
            return -1;
          return 1;

        case E_QImode:
          if (pattern375 (x4, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_HImode:
          if (pattern375 (x4, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_SImode:
          if (pattern375 (x4, 
E_SImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case USE:
      x8 = XEXP (x7, 0);
      operands[2] = x8;
      return 5;

    default:
      return -1;
    }
}

int
pattern395 (rtx x1, machine_mode i1)
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
      || !nonmemory_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern402 (rtx x1)
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
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || GET_MODE (x2) != E_QImode
          || !memory_operand (operands[1], E_QImode)
          || !const_int_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!memory_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!memory_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!memory_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!memory_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (!memory_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode))
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
pattern426 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !immediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern435 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
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
          || !nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_general_operand (operands[2], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern448 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  return pattern447 (x1); /* [-1, 1] */
}

int
pattern453 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_V32QImode:
      if (!vector_operand (operands[1], E_V32QImode)
          || !vector_operand (operands[2], E_V32QImode)
          || !const0_operand (operands[3], E_V32QImode))
        return -1;
      return 0;

    case E_V32HImode:
      if (!vector_operand (operands[1], E_V32HImode)
          || !vector_operand (operands[2], E_V32HImode)
          || !const0_operand (operands[3], E_V32HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern461 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V32HImode
      || !register_operand (operands[0], E_V32HImode)
      || GET_MODE (x1) != E_V32HImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_V32HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  if (!nonimm_or_0_operand (operands[3], E_V32HImode))
    return -1;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  return 0;
}

int
pattern473 (rtx x1, machine_mode i1)
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
  if (!const_0_to_255_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x1, 1);
  operands[4] = x6;
  x7 = XEXP (x1, 2);
  operands[5] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern472 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern472 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern472 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern483 (rtx x1)
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
      operands[4] = x6;
      x7 = XEXP (x1, 2);
      operands[5] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern481 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SImode:
          if (pattern481 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SImode:
          if (pattern481 (x1, 
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
pattern499 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_V2HFmode
      || !vector_operand (operands[1], i1)
      || !const0_operand (operands[3], E_V2HFmode)
      || !const0_operand (operands[4], E_V6HFmode))
    return -1;
  return 0;
}

int
pattern501 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x1, 1);
  operands[4] = x5;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case VEC_SELECT:
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      x9 = XEXP (x2, 2);
      operands[3] = x9;
      switch (XVECLEN (x7, 0))
        {
        case 4:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x12 = XVECEXP (x7, 0, 2);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x13 = XVECEXP (x7, 0, 3);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode
              || GET_MODE (x2) != E_V4HFmode
              || GET_MODE (x3) != E_V4HFmode
              || GET_MODE (x6) != E_V4HFmode
              || !nonimm_or_0_operand (operands[2], E_V8HFmode))
            return -1;
          return pattern496 (); /* [-1, 1] */

        case 2:
          res = pattern498 (x1, 
E_V2DImode);
          if (res >= 0)
            return res + 2; /* [2, 3] */
          return -1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[3] = x6;
      x9 = XEXP (x2, 2);
      operands[2] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode)
            return -1;
          switch (GET_MODE (x2))
            {
            case E_V4HFmode:
              if (GET_MODE (x3) != E_V4HFmode
                  || !const0_operand (operands[3], E_V4HFmode))
                return -1;
              res = pattern496 ();
              if (res >= 0)
                return res + 4; /* [4, 5] */
              return -1;

            case E_V2HFmode:
              if (pattern499 (x3, 
E_V2DImode) != 0)
                return -1;
              return 6;

            default:
              return -1;
            }

        case E_V4SFmode:
          if (pattern500 (x1, 
E_V2DImode) != 0)
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
pattern526 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !permvar_truncate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern534 (rtx x1, machine_mode i1)
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
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1)
      || !regmem_or_bitnot_regmem_operand (operands[3], i1)
      || !regmem_or_bitnot_regmem_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern539 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern541 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 8:
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
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || GET_MODE (x2) != E_V8QImode
          || !register_operand (operands[1], E_V16QImode))
        return -1;
      return pattern539 (x1); /* [-1, 2] */

    case 4:
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
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          res = pattern540 (x1, 
E_V4SImode);
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        case E_V4DImode:
          res = pattern540 (x1, 
E_V4DImode);
          if (res >= 0)
            return res + 5; /* [5, 6] */
          return -1;

        default:
          return -1;
        }

    case 2:
      x4 = XVECEXP (x3, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      switch (GET_MODE (x2))
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
pattern569 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 174)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern568 (x5, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern568 (x5, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern568 (x5, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern568 (x5, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern584 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x8 = XEXP (x4, 1);
  operands[2] = x8;
  if (!general_operand (operands[2], E_QImode))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  return pattern583 (x9); /* [-1, 2] */
}

int
pattern588 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  return pattern220 (x1); /* [-1, 1] */
}

int
pattern591 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != US_MINUS)
    return -1;
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

    case E_HImode:
      res = pattern417 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_SImode:
      res = pattern453 (x1);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case E_QImode:
      if (pattern418 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern601 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SUBREG
      || maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      return 0;

    default:
      return -1;
    }
}

int
pattern606 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i2)
      || !const_int_operand (operands[2], E_QImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[3] = x4;
  if (!nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern613 (rtx x1, machine_mode i1)
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
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern620 (rtx x1, machine_mode i1)
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
pattern628 (rtx x1, machine_mode i1)
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
pattern633 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
pattern639 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[3] = x3;
      return pattern638 (x1); /* [-1, 28] */

    case NEG:
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      return 29;

    default:
      return -1;
    }
}

int
pattern642 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
pattern647 (rtx x1, machine_mode i1)
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
pattern652 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern657 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern663 (rtx x1)
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
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      return pattern661 (x1, 
E_V8SImode, 
E_V8SFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern661 (x1, 
E_V4SImode, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V4DFmode:
      if (pattern661 (x1, 
E_V4DImode, 
E_V4DFmode) != 0)
        return -1;
      return 2;

    case E_V2DFmode:
      if (pattern661 (x1, 
E_V2DImode, 
E_V2DFmode) != 0)
        return -1;
      return 3;

    case E_V32QImode:
      if (pattern662 (x1, 
E_V32QImode) != 0)
        return -1;
      return 4;

    case E_V16QImode:
      if (pattern662 (x1, 
E_V16QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern673 (rtx x1)
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
pattern709 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != i2
      || XINT (x3, 1) != i1
      || GET_MODE (x3) != E_V16QImode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != i2
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x4, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XVECEXP (x1, 0, 0);
  x8 = XEXP (x7, 0);
  operands[0] = x8;
  return 0;
}

int
pattern716 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_QImode)
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
pattern723 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (XINT (x3, 1) != i1
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != i2
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_V16QImode)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != UNSPEC
      || XVECLEN (x7, 0) != i2
      || XINT (x7, 1) != i1
      || pattern722 (x6, 
E_CCmode, 
17) != 0)
    return -1;
  return 0;
}

int
pattern731 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PLUS
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!register_operand (operands[3], i1))
    return -1;
  x4 = XEXP (x2, 0);
  operands[4] = x4;
  if (!register_operand (operands[4], i1))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!x86_64_nonmemory_operand (operands[2], i1))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  return pattern729 (x6, 
i1); /* [-1, 0] */
}

int
pattern741 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode))
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode))
        return -1;
      return 2;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode))
        return -1;
      return 3;

    case E_V4DImode:
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode))
        return -1;
      return 4;

    case E_V2DImode:
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern761 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  return pattern284 (x1); /* [-1, 1] */
}

int
pattern771 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 1)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x4, 0);
  operands[1] = x7;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  x9 = XEXP (x1, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern770 (x1, 
E_HFmode, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern770 (x1, 
E_SFmode, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern770 (x1, 
E_DFmode, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern783 (rtx x1, machine_mode i1)
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
pattern790 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (!rtx_equal_p (x2, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern789 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern789 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern789 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern789 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern789 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern789 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern789 (x1, 
E_V16SImode, 
E_HImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern789 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern789 (x1, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern789 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern789 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern789 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 11;

    case E_V32HFmode:
      if (pattern789 (x1, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      return 12;

    case E_V16HFmode:
      if (pattern789 (x1, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      return 13;

    case E_V8HFmode:
      if (pattern789 (x1, 
E_V8HFmode, 
E_QImode) != 0)
        return -1;
      return 14;

    case E_V32BFmode:
      if (pattern789 (x1, 
E_V32BFmode, 
E_SImode) != 0)
        return -1;
      return 15;

    case E_V16BFmode:
      if (pattern789 (x1, 
E_V16BFmode, 
E_HImode) != 0)
        return -1;
      return 16;

    case E_V8BFmode:
      if (pattern789 (x1, 
E_V8BFmode, 
E_QImode) != 0)
        return -1;
      return 17;

    case E_V16SFmode:
      if (pattern789 (x1, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      return 18;

    case E_V8SFmode:
      if (pattern789 (x1, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      return 19;

    case E_V4SFmode:
      if (pattern789 (x1, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      return 20;

    case E_V8DFmode:
      if (pattern789 (x1, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      return 21;

    case E_V4DFmode:
      if (pattern789 (x1, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      return 22;

    case E_V2DFmode:
      if (pattern789 (x1, 
E_V2DFmode, 
E_QImode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern833 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_TFmode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_TFmode
      || !vector_operand (operands[1], E_TFmode))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!vector_operand (operands[2], E_TFmode))
    return -1;
  return 0;
}

int
pattern841 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x2, operands[0]))
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_CODE (x3) != PC)
        return -1;
      return 0;

    case CALL:
      x4 = XEXP (x2, 0);
      if (GET_CODE (x4) != MEM
          || GET_MODE (x4) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[2] = x3;
      x5 = XEXP (x2, 1);
      operands[3] = x5;
      x6 = XEXP (x4, 0);
      if (!rtx_equal_p (x6, operands[0]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern848 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != EQ)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != EQ)
    return -1;
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  x6 = XEXP (x4, 1);
  operands[4] = x6;
  x7 = XEXP (x3, 1);
  operands[5] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      if (!register_operand (operands[0], E_V8QImode)
          || GET_MODE (x1) != E_V8QImode
          || !register_operand (operands[1], E_V8QImode)
          || !register_operand (operands[2], E_V8QImode)
          || GET_MODE (x2) != E_V8QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4HImode:
          return pattern847 (x4, 
E_V4HImode); /* [-1, 0] */

        case E_V2SImode:
          if (pattern847 (x4, 
E_V2SImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V4QImode:
      if (!register_operand (operands[0], E_V4QImode)
          || GET_MODE (x1) != E_V4QImode
          || !register_operand (operands[1], E_V4QImode)
          || !register_operand (operands[2], E_V4QImode)
          || GET_MODE (x2) != E_V4QImode
          || GET_MODE (x3) != E_V2HImode
          || pattern847 (x4, 
E_V2HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern865 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern874 (rtx x1, machine_mode i1)
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
pattern882 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (XWINT (x2, 0) != 1L)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      return pattern628 (x1, 
E_V4SFmode); /* [-1, 0] */

    case E_V8HFmode:
      if (pattern628 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern890 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!reg_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern900 (rtx x1)
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
pattern908 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
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
pattern915 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern920 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
      || GET_MODE (x2) != E_V2SImode
      || !nonimmediate_operand (operands[1], E_V2DFmode))
    return -1;
  return pattern502 (x2); /* [-1, 1] */
}

int
pattern926 (rtx x1, machine_mode i1)
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
pattern931 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
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
  x8 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x1, 0, 12);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x1, 0, 13);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x1, 0, 14);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x1, 0, 15);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  return 0;
}

int
pattern950 (rtx x1, rtx_code i1)
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
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x10 = XEXP (x9, 1);
      if (GET_CODE (x10) != SUBREG
          || maybe_ne (SUBREG_BYTE (x10), 0))
        return -1;
      x11 = XEXP (x10, 0);
      if (GET_CODE (x11) != i1
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
          if (!flags_reg_operand (operands[4], E_VOIDmode))
            return -1;
          operands[5] = x3;
          if (!compare_operator (operands[5], E_VOIDmode)
              || GET_MODE (x4) != E_QImode)
            return -1;
          x18 = XEXP (x6, 0);
          operands[1] = x18;
          if (!int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          return pattern583 (x9); /* [-1, 2] */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern976 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_SFmode)
      || GET_MODE (x1) != E_SFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V2SFmode:
      if (!nonimmediate_operand (operands[1], E_V2SFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern979 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  switch (XWINT (x3, 0))
    {
    case 0L:
      x4 = XVECEXP (x2, 0, 1);
      if (XWINT (x4, 0) != 2L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          return pattern269 (x1, 
E_V2SFmode, 
E_V4SFmode); /* [-1, 0] */

        case E_V2SImode:
          if (pattern270 (x1, 
E_V2SImode, 
E_V4SImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case 1L:
      x4 = XVECEXP (x2, 0, 1);
      if (XWINT (x4, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (pattern269 (x1, 
E_V2SFmode, 
E_V4SFmode) != 0)
            return -1;
          return 2;

        case E_V2SImode:
          if (pattern270 (x1, 
E_V2SImode, 
E_V4SImode) != 0)
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
pattern986 (rtx x1, machine_mode i1)
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
    case E_HImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V4HImode:
          if (!register_operand (operands[1], E_V4HImode)
              || !const_0_to_3_operand (operands[2], E_SImode))
            return -1;
          return 0;

        case E_V2HImode:
          if (!register_operand (operands[1], E_V2HImode)
              || !const_0_to_1_operand (operands[2], E_SImode))
            return -1;
          return 1;

        case E_V8HImode:
          if (!register_operand (operands[1], E_V8HImode)
              || !const_0_to_7_operand (operands[2], E_SImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_QImode:
      res = pattern985 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern998 (rtx x1)
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
pattern1011 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1019 (rtx x1, machine_mode i1)
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
pattern1027 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1036 (rtx x1)
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
pattern1043 ()
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
pattern1046 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
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
      if (GET_CODE (x7) != SUBREG
          || maybe_ne (SUBREG_BYTE (x7), 0)
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x7, 0);
      switch (GET_CODE (x8))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          operands[4] = x8;
          x9 = XEXP (x8, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x10 = XEXP (x8, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x2) != E_QImode)
            return -1;
          return pattern1045 (x1); /* [-1, 5] */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1060 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode
      || !register_operand (operands[0], E_XFmode)
      || !register_operand (operands[1], E_XFmode))
    return -1;
  return 0;
}

int
pattern1066 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_DImode)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!nonimmediate_operand (operands[0], E_DImode))
    return -1;
  x4 = XEXP (x1, 2);
  operands[1] = x4;
  if (!const_0_to_63_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern1072 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1083 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (maybe_ne (SUBREG_BYTE (x1), 0))
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case VEC_MERGE:
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
          return pattern1082 (x2, 
E_V8SImode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern1082 (x2, 
E_V4SImode) != 0)
            return -1;
          return 1;

        case E_V4DFmode:
          if (pattern1082 (x2, 
E_V4DImode) != 0)
            return -1;
          return 2;

        case E_V2DFmode:
          if (pattern1082 (x2, 
E_V2DImode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case ASHIFTRT:
      x5 = XEXP (x2, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (x1))
        {
        case E_V8SFmode:
          if (GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_V8SImode))
            return -1;
          return 4;

        case E_V4SFmode:
          if (GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_V4SImode))
            return -1;
          return 5;

        case E_V4DFmode:
          if (GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_V4DImode))
            return -1;
          return 6;

        case E_V2DFmode:
          if (GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[1], E_V2DImode))
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
pattern1109 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (XWINT (x2, 0) != 1L
      || !const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  return pattern1108 (x1); /* [-1, 2] */
}

int
pattern1113 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1116 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1124 (rtx x1, machine_mode i1)
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
pattern1133 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[3], E_SImode))
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

    case E_V16SFmode:
      if (pattern1132 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 2;

    case E_V8SFmode:
      if (pattern1132 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 3;

    case E_V8DFmode:
      if (pattern1132 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 4;

    case E_V4DFmode:
      if (pattern1132 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern1142 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1151 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
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

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1163 (rtx x1)
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
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern1162 (x3, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern1162 (x3, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1172 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC_VOLATILE
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != i2
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern1179 (rtx x1)
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
      return pattern556 (x1); /* [-1, 1] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (GET_MODE (x2) != E_DImode)
            return -1;
          return 2;

        case E_TImode:
          if (pattern564 (x2, 
E_TImode) != 0)
            return -1;
          return 3;

        case E_HImode:
          if (GET_MODE (x2) != E_HImode
              || !const_int_operand (operands[2], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (GET_MODE (x2) != E_SImode
              || !const_int_operand (operands[2], E_SImode))
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
pattern1195 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30;
  int res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  switch (GET_CODE (x5))
    {
    case COMPARE:
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 1);
      if (GET_MODE (x8) != i1)
        return -1;
      x9 = XEXP (x7, 0);
      if (!rtx_equal_p (x9, operands[0]))
        return -1;
      x10 = XEXP (x2, 0);
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      x11 = XEXP (x5, 0);
      switch (GET_CODE (x11))
        {
        case REG:
          return pattern1190 (x1, 
i1); /* [-1, 0] */

        case ZERO_EXTEND:
          if (GET_MODE (x11) != i2)
            return -1;
          x12 = XEXP (x5, 1);
          if (GET_CODE (x12) != PLUS
              || GET_MODE (x12) != i2)
            return -1;
          x13 = XEXP (x12, 0);
          if (!ix86_carry_flag_operator (x13, i2))
            return -1;
          operands[4] = x13;
          x14 = XEXP (x13, 1);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XEXP (x12, 1);
          if (GET_CODE (x15) != ZERO_EXTEND
              || GET_MODE (x15) != i2
              || GET_MODE (x6) != E_CCCmode
              || GET_MODE (x5) != E_CCCmode)
            return -1;
          x16 = XEXP (x11, 0);
          switch (GET_CODE (x16))
            {
            case PLUS:
              if (GET_MODE (x16) != i1)
                return -1;
              x17 = XEXP (x16, 0);
              if (GET_CODE (x17) != PLUS
                  || GET_MODE (x17) != i1)
                return -1;
              x18 = XEXP (x17, 0);
              if (!ix86_carry_flag_operator (x18, i1))
                return -1;
              operands[5] = x18;
              x19 = XEXP (x18, 1);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || GET_CODE (x8) != PLUS)
                return -1;
              x20 = XEXP (x8, 0);
              if (GET_CODE (x20) != PLUS
                  || GET_MODE (x20) != i1)
                return -1;
              x21 = XEXP (x20, 0);
              switch (GET_CODE (x21))
                {
                case LTU:
                case UNLT:
                  if (!rtx_equal_p (x21, operands[5]))
                    return -1;
                  x22 = XEXP (x18, 0);
                  operands[3] = x22;
                  if (!flags_reg_operand (operands[3], E_VOIDmode))
                    return -1;
                  x23 = XEXP (x16, 1);
                  operands[2] = x23;
                  if (!memory_operand (operands[2], i1))
                    return -1;
                  x24 = XEXP (x17, 1);
                  if (!rtx_equal_p (x24, operands[0]))
                    return -1;
                  x25 = XEXP (x13, 0);
                  if (!rtx_equal_p (x25, operands[3]))
                    return -1;
                  x26 = XEXP (x15, 0);
                  if (!rtx_equal_p (x26, operands[2]))
                    return -1;
                  x27 = XEXP (x20, 1);
                  if (!rtx_equal_p (x27, operands[0]))
                    return -1;
                  x28 = XEXP (x8, 1);
                  if (!rtx_equal_p (x28, operands[2]))
                    return -1;
                  return 1;

                default:
                  return -1;
                }

            case REG:
              if (!rtx_equal_p (x16, operands[0])
                  || GET_CODE (x8) != MINUS)
                return -1;
              x20 = XEXP (x8, 0);
              if (GET_CODE (x20) != MINUS
                  || GET_MODE (x20) != i1)
                return -1;
              x27 = XEXP (x20, 1);
              if (!ix86_carry_flag_operator (x27, i1))
                return -1;
              operands[5] = x27;
              x29 = XEXP (x27, 1);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x25 = XEXP (x13, 0);
              operands[3] = x25;
              if (!flags_reg_operand (operands[3], E_VOIDmode))
                return -1;
              x26 = XEXP (x15, 0);
              operands[2] = x26;
              if (!memory_operand (operands[2], i1))
                return -1;
              x21 = XEXP (x20, 0);
              if (!rtx_equal_p (x21, operands[0]))
                return -1;
              x30 = XEXP (x27, 0);
              if (!rtx_equal_p (x30, operands[3]))
                return -1;
              x28 = XEXP (x8, 1);
              if (!rtx_equal_p (x28, operands[2]))
                return -1;
              return 2;

            default:
              return -1;
            }

        case PLUS:
          if (pattern1191 (x1, 
i1) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case PLUS:
      res = pattern1193 (x1, 
i1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    case MINUS:
      res = pattern1194 (x1, 
i1);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1263 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
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
pattern1272 (rtx x1, machine_mode i1)
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
pattern1279 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i3)
      || pattern480 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1286 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode
      || !nonimmediate_operand (operands[1], E_V8HFmode)
      || !nonimm_or_0_operand (operands[3], E_V8HFmode)
      || !register_operand (operands[2], E_V8HFmode))
    return -1;
  return 0;
}

int
pattern1296 (rtx x1, machine_mode i1, machine_mode i2)
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
  return pattern1295 (x3, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1305 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern1304 (x1, 
E_HImode, 
E_V16SImode, 
E_V16SFmode); /* [-1, 0] */

    case E_V8SImode:
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
      if (pattern1304 (x1, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0)
        return -1;
      return 3;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8DImode)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_MODE (x3) != E_V8DImode
          || !nonimm_or_0_operand (operands[2], E_V8DImode)
          || !register_operand (operands[3], E_QImode))
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
      x3 = XEXP (x2, 0);
      if (GET_MODE (x3) != E_V4DImode
          || !nonimm_or_0_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_QImode))
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
pattern1347 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[3] = x3;
  if (!general_gr_operand (operands[3], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (3));
  return pattern962 (x4, 
i1); /* [-1, 0] */
}

int
pattern1352 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1363 (rtx x1)
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
pattern1375 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1374 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1382 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[2], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1389 (rtx x1, machine_mode i1)
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
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern1399 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x4, 1);
  if (!register_operand (x6, i1))
    return -1;
  return 0;
}

int
pattern1406 (rtx x1)
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
      return pattern1405 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1405 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1405 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1416 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
      || !vector_operand (operands[1], i2))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i1
      || !vector_operand (operands[2], i2)
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1428 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1)
    return -1;
  return 0;
}

int
pattern1438 (rtx x1, machine_mode i1)
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
pattern1445 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1450 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1458 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1466 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1475 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1482 (rtx x1)
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
pattern1493 (rtx x1, machine_mode i1)
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
pattern1499 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !memory_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1505 (rtx x1, machine_mode i1)
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
pattern1509 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  x5 = XEXP (x4, 1);
  x6 = XVECEXP (x5, 0, 0);
  operands[1] = x6;
  return 0;
}

int
pattern1518 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      operands[4] = x4;
      x5 = XEXP (x3, 2);
      operands[5] = x5;
      x6 = XVECEXP (x1, 0, 1);
      operands[6] = x6;
      x7 = XEXP (x2, 1);
      if (!rtx_equal_p (x7, operands[1]))
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
pattern1539 (rtx x1, machine_mode i1)
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
pattern1545 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1556 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[4], E_V4HFmode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1562 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1574 (rtx x1, machine_mode i1)
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
pattern1580 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1589 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1599 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
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
pattern1606 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[6], i2)
      || !register_operand (operands[2], i1))
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
pattern1615 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1614 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1614 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1626 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1632 (rtx x1, machine_mode i1)
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
pattern1641 (rtx x1)
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
      return pattern1640 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1640 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1640 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1650 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1649 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1649 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1665 (machine_mode i1)
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
pattern1672 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1)
      || GET_MODE (x1) != i1
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1679 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1688 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 1);
  operands[4] = x4;
  if (!const_int_operand (operands[4], E_SImode))
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x7, 1);
  if (!rtx_equal_p (x9, operands[0]))
    return -1;
  x10 = XEXP (x6, 0);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  x11 = PATTERN (peep2_next_insn (2));
  return pattern1536 (x11); /* [-1, 0] */
}

int
pattern1701 (machine_mode i1)
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
pattern1707 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
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
pattern1715 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1714 (x3, 
E_HImode, 
E_V16SImode); /* [-1, 1] */

    case E_QImode:
      x2 = XVECEXP (x1, 0, 2);
      x3 = XEXP (x2, 0);
      res = pattern1714 (x3, 
E_QImode, 
E_V8DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1728 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 4);
  if (XWINT (x4, 0) != 6L)
    return -1;
  x5 = XVECEXP (x3, 0, 5);
  if (XWINT (x5, 0) != 14L)
    return -1;
  x6 = XVECEXP (x3, 0, 6);
  if (XWINT (x6, 0) != 7L)
    return -1;
  x7 = XVECEXP (x3, 0, 7);
  if (XWINT (x7, 0) != 15L)
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
pattern1736 (machine_mode i1)
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
pattern1741 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1740 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1740 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1755 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !x86_64_dwzext_immediate_operand (operands[2], i2)
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1762 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i2)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1772 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1771 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1771 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1784 (machine_mode i1)
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
pattern1791 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern1799 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  operands[4] = x1;
  if (!register_operand (operands[4], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[4]))
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
  if (!rtx_equal_p (x9, operands[4]))
    return -1;
  return 0;
}

int
pattern1811 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return pattern1810 (x1, 
i1); /* [-1, 1] */
}

int
pattern1819 (rtx x1)
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
pattern1835 (rtx x1, machine_mode i1)
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
pattern1843 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vsib_mem_operator (operands[6], i3)
      || !register_operand (operands[4], i2)
      || !scratch_operand (operands[1], i1))
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
pattern1852 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      x7 = XEXP (x3, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      if (!rtx_equal_p (x9, operands[2]))
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      x11 = XEXP (x10, 1);
      x12 = XEXP (x11, 1);
      if (!rtx_equal_p (x12, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          return 0;

        case E_SImode:
          return 1;

        case E_DImode:
          return 2;

        case E_TImode:
          return 3;

        default:
          return -1;
        }

    case CONST_INT:
      operands[6] = x5;
      x7 = XEXP (x3, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      operands[2] = x9;
      x10 = XVECEXP (x1, 0, 1);
      x11 = XEXP (x10, 1);
      x12 = XEXP (x11, 1);
      if (!rtx_equal_p (x12, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          return 4;

        case E_SImode:
          return 5;

        case E_DImode:
          return 6;

        case E_TImode:
          return 7;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1864 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  x6 = XEXP (x2, 1);
  if (GET_CODE (x6) != LABEL_REF)
    return -1;
  x7 = XEXP (x2, 2);
  if (GET_CODE (x7) != PC)
    return -1;
  x8 = XEXP (x1, 0);
  if (GET_CODE (x8) != PC)
    return -1;
  return 0;
}

int
pattern1872 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1879 (rtx x1)
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
recog_2 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_1 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || !bt_comparison_operator (x3, E_VOIDmode))
        return -1;
      x4 = XEXP (x3, 1);
      if (GET_CODE (x4) != CONST_INT)
        return -1;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          switch (XWINT (x4, 0))
            {
            case 0L:
              x6 = XEXP (x2, 1);
              if (GET_CODE (x6) != PLUS
                  || GET_MODE (x6) != E_HImode)
                return -1;
              x7 = XEXP (x6, 1);
              if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
                return -1;
              x8 = XEXP (x1, 0);
              operands[0] = x8;
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode)
                return -1;
              operands[1] = x3;
              operands[2] = x5;
              if (!register_operand (operands[2], E_HImode))
                return -1;
              x9 = XEXP (x2, 2);
              operands[3] = x9;
              if (!nonimmediate_operand (operands[3], E_HImode))
                return -1;
              x10 = XEXP (x6, 0);
              if (!rtx_equal_p (x10, operands[2])
                  || !
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE))
                return -1;
              *pnum_clobbers = 1;
              return 449; /* *dec_cmovhi */

            case -1L:
              x6 = XEXP (x2, 1);
              switch (GET_CODE (x6))
                {
                case LABEL_REF:
                  x9 = XEXP (x2, 2);
                  if (GET_CODE (x9) != PC)
                    return -1;
                  x8 = XEXP (x1, 0);
                  if (GET_CODE (x8) != PC)
                    return -1;
                  operands[0] = x3;
                  operands[1] = x5;
                  x10 = XEXP (x6, 0);
                  operands[2] = x10;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_QImode:
                      if (!register_operand (operands[1], E_QImode)
                          || !(
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2624; /* *kortest_cmpqi_jcc */

                    case E_HImode:
                      if (!register_operand (operands[1], E_HImode)
                          || !
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2625; /* *kortest_cmphi_jcc */

                    case E_SImode:
                      if (!register_operand (operands[1], E_SImode)
                          || !
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2626; /* *kortest_cmpsi_jcc */

                    case E_DImode:
                      if (!register_operand (operands[1], E_DImode)
                          || !(
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2627; /* *kortest_cmpdi_jcc */

                    default:
                      return -1;
                    }

                case REG:
                case SUBREG:
                case MEM:
                  operands[2] = x6;
                  x8 = XEXP (x1, 0);
                  operands[0] = x8;
                  operands[1] = x3;
                  operands[4] = x5;
                  x9 = XEXP (x2, 2);
                  operands[3] = x9;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_QImode:
                      if (!register_operand (operands[0], E_QImode)
                          || GET_MODE (x2) != E_QImode
                          || !register_operand (operands[2], E_QImode)
                          || !register_operand (operands[3], E_QImode))
                        return -1;
                      switch (pattern1364 ())
                        {
                        case 0:
                          if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2628; /* *kortest_cmpqi_movqicc */

                        case 1:
                          if (!
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2629; /* *kortest_cmphi_movqicc */

                        case 2:
                          if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2630; /* *kortest_cmpsi_movqicc */

                        case 3:
                          if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2631; /* *kortest_cmpdi_movqicc */

                        default:
                          return -1;
                        }

                    case E_HImode:
                      switch (pattern1365 (x2, 
E_HImode))
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
                          return 2632; /* *kortest_cmpqi_movhicc */

                        case 1:
                          if (!
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2635; /* *kortest_cmphi_movhicc */

                        case 2:
                          if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2638; /* *kortest_cmpsi_movhicc */

                        case 3:
                          if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2641; /* *kortest_cmpdi_movhicc */

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

        case ZERO_EXTRACT:
          x11 = XEXP (x5, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x4, 0) != 0L)
            return -1;
          x6 = XEXP (x2, 1);
          if (GET_CODE (x6) != LABEL_REF)
            return -1;
          x9 = XEXP (x2, 2);
          if (GET_CODE (x9) != PC)
            return -1;
          x8 = XEXP (x1, 0);
          if (GET_CODE (x8) != PC)
            return -1;
          operands[0] = x3;
          x12 = XEXP (x5, 0);
          operands[1] = x12;
          x13 = XEXP (x5, 2);
          switch (GET_CODE (x13))
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
              operands[2] = x13;
              if (nonmemory_operand (operands[2], E_QImode))
                {
                  x10 = XEXP (x6, 0);
                  operands[3] = x10;
                  switch (GET_MODE (x5))
                    {
                    case E_SImode:
                      if (nonimmediate_operand (operands[1], E_SImode)
                          && 
#line 19189 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()))
                        {
                          *pnum_clobbers = 1;
                          return 1424; /* *jcc_btsi */
                        }
                      break;

                    case E_DImode:
                      if (nonimmediate_operand (operands[1], E_DImode)
                          && (
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
                        {
                          *pnum_clobbers = 1;
                          return 1425; /* *jcc_btdi */
                        }
                      break;

                    default:
                      break;
                    }
                }
              if (GET_CODE (x13) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x13), 0)
                  || GET_MODE (x13) != E_QImode)
                return -1;
              x14 = XEXP (x13, 0);
              if (GET_CODE (x14) != AND)
                return -1;
              x15 = XEXP (x14, 0);
              operands[2] = x15;
              x16 = XEXP (x14, 1);
              operands[3] = x16;
              if (!const_int_operand (operands[3], E_VOIDmode))
                return -1;
              x10 = XEXP (x6, 0);
              operands[4] = x10;
              switch (GET_MODE (x5))
                {
                case E_SImode:
                  switch (pattern1760 (x14, 
E_SImode))
                    {
                    case 0:
                      if (!
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1428; /* *jcc_btsi_mask_1 */

                    case 1:
                      if (!
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                        return -1;
                      *pnum_clobbers = 1;
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
                      *pnum_clobbers = 1;
                      return 1432; /* *jcc_btsi_mask_1 */

                    default:
                      return -1;
                    }

                case E_DImode:
                  switch (pattern1760 (x14, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1429; /* *jcc_btdi_mask_1 */

                    case 1:
                      if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1431; /* *jcc_btdi_mask_1 */

                    case 2:
                      if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1433; /* *jcc_btdi_mask_1 */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case AND:
              if (GET_MODE (x13) != E_QImode)
                return -1;
              x14 = XEXP (x13, 0);
              operands[2] = x14;
              if (!register_operand (operands[2], E_QImode))
                return -1;
              x17 = XEXP (x13, 1);
              operands[3] = x17;
              if (!const_int_operand (operands[3], E_VOIDmode))
                return -1;
              x10 = XEXP (x6, 0);
              operands[4] = x10;
              switch (GET_MODE (x5))
                {
                case E_SImode:
                  if (!register_operand (operands[1], E_SImode)
                      || !
#line 19228 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1426; /* *jcc_btsi_mask */

                case E_DImode:
                  if (!register_operand (operands[1], E_DImode)
                      || !(
#line 19228 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1427; /* *jcc_btdi_mask */

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
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (pattern243 (x2, 
E_SFmode) != 0
              || !
#line 26567 "../../gcc/config/i386/i386.md"
(TARGET_XOP))
            return -1;
          return 1807; /* *xop_pcmov_sf */

        case E_DFmode:
          if (pattern243 (x2, 
E_DFmode) != 0
              || !
#line 26567 "../../gcc/config/i386/i386.md"
(TARGET_XOP))
            return -1;
          return 1808; /* *xop_pcmov_df */

        case E_V8QImode:
          if (pattern244 (x2, 
E_V8QImode) != 0
              || !
#line 4466 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2246; /* *xop_pcmov_v8qi */

        case E_V4HImode:
          if (pattern244 (x2, 
E_V4HImode) != 0
              || !
#line 4466 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2247; /* *xop_pcmov_v4hi */

        case E_V2SImode:
          if (pattern244 (x2, 
E_V2SImode) != 0
              || !
#line 4466 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2248; /* *xop_pcmov_v2si */

        case E_V2SFmode:
          if (pattern244 (x2, 
E_V2SFmode) != 0
              || !
#line 4466 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2249; /* *xop_pcmov_v2sf */

        case E_V4HFmode:
          if (pattern244 (x2, 
E_V4HFmode) != 0
              || !
#line 4477 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2250; /* *xop_pcmov_v4hf */

        case E_V4BFmode:
          if (pattern244 (x2, 
E_V4BFmode) != 0
              || !
#line 4477 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2251; /* *xop_pcmov_v4bf */

        case E_V4QImode:
          if (pattern244 (x2, 
E_V4QImode) != 0
              || !
#line 4488 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2252; /* *xop_pcmov_v4qi */

        case E_V2QImode:
          if (pattern244 (x2, 
E_V2QImode) != 0
              || !
#line 4488 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2253; /* *xop_pcmov_v2qi */

        case E_V2HImode:
          if (pattern244 (x2, 
E_V2HImode) != 0
              || !
#line 4488 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2254; /* *xop_pcmov_v2hi */

        case E_V2HFmode:
          if (pattern244 (x2, 
E_V2HFmode) != 0
              || !
#line 4499 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2255; /* *xop_pcmov_v2hf */

        case E_V2BFmode:
          if (pattern244 (x2, 
E_V2BFmode) != 0
              || !
#line 4499 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2256; /* *xop_pcmov_v2bf */

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x2, 1);
      if (pattern245 (x6) != 0)
        return -1;
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      x5 = XEXP (x3, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x10 = XEXP (x6, 0);
      operands[1] = x10;
      x9 = XEXP (x2, 2);
      if (!rtx_equal_p (x9, operands[0]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HFmode:
          if (pattern1450 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 1737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2497; /* avx512f_storehf_mask */

        case E_SFmode:
          if (pattern1450 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !
#line 1737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2498; /* avx512f_storesf_mask */

        case E_DFmode:
          if (pattern1450 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !
#line 1737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2499; /* avx512f_storedf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_25 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 1);
      operands[3] = x5;
      x6 = XEXP (x3, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x6;
          switch (pattern68 (x2))
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
              return 145; /* *insvti_highpart_1 */

            case 1:
              if (!
#line 3726 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1))
                return -1;
              return 148; /* *insvti_lowpart_1 */

            case 2:
              if (!
#line 3748 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll))
                return -1;
              return 151; /* *insvdi_lowpart_1 */

            default:
              return -1;
            }

        case XOR:
          if (pnum_clobbers == NULL
              || GET_MODE (x6) != E_HImode
              || !register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || GET_MODE (x3) != E_HImode)
            return -1;
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          x8 = XEXP (x6, 1);
          operands[2] = x8;
          if (!nonimmediate_operand (operands[2], E_HImode)
              || !nonimmediate_operand (operands[3], E_HImode))
            return -1;
          x9 = XEXP (x2, 1);
          if (!rtx_equal_p (x9, operands[1])
              || !
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 840; /* *xor2andn */

        default:
          return -1;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x6 = XEXP (x3, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          switch (pattern607 (x2))
            {
            case 0:
              if (!
#line 8015 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 373; /* *leaqi_general_4 */

            case 1:
              if (!
#line 8015 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 375; /* *leahi_general_4 */

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
              return 933; /* *concatditi3_5 */

            case 3:
              if (!(
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 897; /* *concatditi3_1 */

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
              return 912; /* *concatditi3_3 */

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
              return 942; /* *concatditi3_6 */

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
              return 915; /* *concatditi3_3 */

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
              return 945; /* *concatditi3_6 */

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
              return 727; /* *xorqi_1_slp */
            }
          break;

        case 1:
          if (
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 730; /* *xorhi_1_slp */
            }
          break;

        case 2:
          if ((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 822; /* *xorti3_doubleword */
            }
          break;

        case 3:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 825; /* *xorhi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && true))
            {
              *pnum_clobbers = 1;
              return 826; /* *xorhi_1 */
            }
          break;

        case 4:
          if (
#line 1357 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return 2073; /* xorv2sf3 */
          break;

        case 5:
          if (
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2107; /* xorv2bf3 */
          break;

        case 6:
          if ((
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2110; /* xorv4bf3 */
          break;

        case 7:
          if (
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2113; /* xorv2hf3 */
          break;

        case 8:
          if ((
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2116; /* xorv4hf3 */
          break;

        case 9:
          if (
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V8QImode, operands)))
            return 2270; /* *mmx_xorv8qi3 */
          break;

        case 10:
          if (
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V4HImode, operands)))
            return 2273; /* *mmx_xorv4hi3 */
          break;

        case 11:
          if (
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V2SImode, operands)))
            return 2276; /* *mmx_xorv2si3 */
          break;

        case 12:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V4QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2279; /* *xorv4qi3 */
            }
          break;

        case 13:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2282; /* *xorv2qi3 */
            }
          break;

        case 14:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2HImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2285; /* *xorv2hi3 */
            }
          break;

        case 15:
          if (
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3780; /* xorbf3 */
          break;

        case 16:
          if (
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3783; /* xorhf3 */
          break;

        case 17:
          if (
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3786; /* xorsf3 */
          break;

        case 18:
          if ((
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../gcc/config/i386/i386.md"
(TARGET_SSE2)))
            return 3789; /* xordf3 */
          break;

        case 19:
          if (
#line 5723 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 3792; /* *xortf3 */
          break;

        default:
          break;
        }
      if (pnum_clobbers != NULL
          && pattern76 (x2) == 0)
        {
          x6 = XEXP (x3, 0);
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          switch (pattern1265 (x1))
            {
            case 0:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 733; /* *xorqi_exthi_1_slp */
                }
              break;

            case 1:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 736; /* *xorqi_extsi_1_slp */
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
                  return 739; /* *xorqi_extdi_1_slp */
                }
              break;

            case 3:
              *pnum_clobbers = 1;
              return 757; /* *xorqi_exthi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 760; /* *xorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                {
                  *pnum_clobbers = 1;
                  return 763; /* *xorqi_extdi_0 */
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
                      return 742; /* *xorqi_exthi_2_slp */
                    }
                  break;

                case 1:
                  if (
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 745; /* *xorqi_extsi_2_slp */
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
                      return 748; /* *xorqi_extdi_2_slp */
                    }
                  break;

                case 3:
                  *pnum_clobbers = 1;
                  return 766; /* *xorqi_ext2hi_0 */

                case 4:
                  *pnum_clobbers = 1;
                  return 769; /* *xorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 772; /* *xorqi_ext2di_0 */
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
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 869; /* *xorqi_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 13775 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 870; /* *xorqi_1 */

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
          return 903; /* *concatditi3_2 */

        case 1:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 924; /* *concatditi3_4 */

        case 2:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 927; /* *concatditi3_4 */

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
          return 951; /* *concatditi3_7 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_43 (rtx x1 ATTRIBUTE_UNUSED,
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
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1292; /* *rotlqi3_mask_1 */

    case 1:
      if (!
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1294; /* *rotlhi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1308; /* *rotlqi3_add_1 */

    case 3:
      if (!
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1310; /* *rotlhi3_add_1 */

    case 4:
      if (!
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1324; /* *rotlqi3_sub_1 */

    case 5:
      if (!
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1326; /* *rotlhi3_sub_1 */

    case 6:
      x2 = XEXP (x1, 0);
      operands[0] = x2;
      x3 = XEXP (x1, 1);
      switch (pattern265 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1284; /* *rotlqi3_mask */
            }
          break;

        case 1:
          if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1286; /* *rotlhi3_mask */
            }
          break;

        case 2:
          if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1300; /* *rotlqi3_add */
            }
          break;

        case 3:
          if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1302; /* *rotlhi3_add */
            }
          break;

        case 4:
          if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1316; /* *rotlqi3_sub */
            }
          break;

        case 5:
          if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1318; /* *rotlhi3_sub */
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
              return 1333; /* ix86_rotlti3_doubleword */
            }
          x4 = XEXP (x3, 1);
          if (XWINT (x4, 0) == 64L
              && register_operand (operands[0], E_TImode)
              && GET_MODE (x3) == E_TImode
              && register_operand (operands[1], E_TImode)
              && 
#line 18445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 1338; /* rotl64ti2_doubleword */
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
(ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1373; /* *rotlqi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1374; /* *rotlqi3_1 */

        case 1:
          if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1377; /* *rotlhi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1378; /* *rotlhi3_1 */

        case 2:
          if (!
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1381; /* *rotlqi3_1_slp */

        case 3:
          if (!
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1383; /* *rotlhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_51 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode
          || !nonimmediate_operand (operands[1], E_HImode))
        return -1;
      if (
#line 22375 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_APX_NF))
        return 1632; /* popcounthi2_nf */
      if (pnum_clobbers == NULL
          || !
#line 22375 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && true))
        return -1;
      *pnum_clobbers = 1;
      return 1633; /* popcounthi2 */

    case E_V8QImode:
      if (!register_operand (operands[0], E_V8QImode)
          || GET_MODE (x3) != E_V8QImode
          || !register_operand (operands[1], E_V8QImode)
          || !(
#line 6931 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG) && 
#line 76 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2383; /* popcountv8qi2 */

    case E_V4QImode:
      if (!register_operand (operands[0], E_V4QImode)
          || GET_MODE (x3) != E_V4QImode
          || !register_operand (operands[1], E_V4QImode)
          || !
#line 6931 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG))
        return -1;
      return 2384; /* popcountv4qi2 */

    case E_V2QImode:
      if (!register_operand (operands[0], E_V2QImode)
          || GET_MODE (x3) != E_V2QImode
          || !register_operand (operands[1], E_V2QImode)
          || !
#line 6931 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG))
        return -1;
      return 2385; /* popcountv2qi2 */

    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode
          || !register_operand (operands[1], E_V4HImode)
          || !(
#line 6938 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG) && 
#line 73 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2386; /* popcountv4hi2 */

    case E_V2HImode:
      if (!register_operand (operands[0], E_V2HImode)
          || GET_MODE (x3) != E_V2HImode
          || !register_operand (operands[1], E_V2HImode)
          || !
#line 6938 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG))
        return -1;
      return 2387; /* popcountv2hi2 */

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !register_operand (operands[1], E_V2SImode)
          || !
#line 6945 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VPOPCNTDQ && TARGET_AVX512VL && TARGET_MMX_WITH_SSE))
        return -1;
      return 2388; /* popcountv2si2 */

    default:
      return -1;
    }
}

 int
recog_57 (rtx x1 ATTRIBUTE_UNUSED,
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
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode)
              || !general_operand (operands[2], E_HImode))
            return -1;
          if ((
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
            return 590; /* *mulhi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
            return -1;
          *pnum_clobbers = 1;
          return 591; /* *mulhi3_1 */

        case E_QImode:
          if (pattern5 (x3, 
E_QImode) != 0)
            return -1;
          if (
#line 10691 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 602; /* *mulqi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 10691 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 603; /* *mulqi3_1 */

        case E_HFmode:
          if (pattern5 (x3, 
E_HFmode) != 0
              || !
#line 23304 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 1672; /* *mulhf */

        case E_V2SImode:
          if (pattern7 (x3, 
E_V2SImode) != 0
              || !
#line 3352 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2152; /* mulv2si3 */

        case E_V4HImode:
          if (pattern8 (x3, 
E_V4HImode) != 0
              || !
#line 3381 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
            return -1;
          return 2153; /* *mmx_mulv4hi3 */

        case E_V2HImode:
          if (pattern7 (x3, 
E_V2HImode) != 0
              || !
#line 3396 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2154; /* mulv2hi3 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != ZERO_EXTEND)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x7 = XEXP (x5, 0);
          operands[2] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (pnum_clobbers == NULL
                  || pattern856 (x3, 
E_DImode, 
E_TImode) != 0
                  || !(
#line 10994 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 618; /* *umulditi3_1 */

            case E_HImode:
              if (pattern856 (x3, 
E_QImode, 
E_HImode) != 0)
                return -1;
              if (
#line 11060 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
                return 625; /* *umulqihi3_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 11060 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 626; /* *umulqihi3_1 */

            default:
              return -1;
            }

        case VEC_SELECT:
          if (GET_MODE (x6) != E_V1SImode)
            return -1;
          x8 = XEXP (x6, 1);
          if (GET_CODE (x8) != PARALLEL
              || XVECLEN (x8, 0) != 1)
            return -1;
          x9 = XVECEXP (x8, 0, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x5, 0);
          if (GET_CODE (x7) != VEC_SELECT
              || GET_MODE (x7) != E_V1SImode)
            return -1;
          x10 = XEXP (x7, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return -1;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V1DImode)
              || GET_MODE (x3) != E_V1DImode
              || GET_MODE (x4) != E_V1DImode)
            return -1;
          x12 = XEXP (x6, 0);
          operands[1] = x12;
          if (!register_mmxmem_operand (operands[1], E_V2SImode)
              || GET_MODE (x5) != E_V1DImode)
            return -1;
          x13 = XEXP (x7, 0);
          operands[2] = x13;
          if (!register_mmxmem_operand (operands[2], E_V2SImode)
              || !
#line 3636 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2
   && ix86_binary_operator_ok (MULT, V2SImode, operands)))
            return -1;
          return 2161; /* *sse2_umulv1siv1di3 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != SIGN_EXTEND)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x5, 0);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pattern856 (x3, 
E_DImode, 
E_TImode) != 0)
            return -1;
          if ((
#line 11040 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 621; /* *mulditi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 1199 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && (
#line 11040 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          *pnum_clobbers = 1;
          return 622; /* *mulditi3_1 */

        case E_HImode:
          if (pattern856 (x3, 
E_QImode, 
E_HImode) != 0)
            return -1;
          if (
#line 11060 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 623; /* *mulqihi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 11060 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 624; /* *mulqihi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_65 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern45 (x3))
        {
        case 0:
          if (!
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)))
            return -1;
          return 2132; /* *mmx_ssaddv8qi3 */

        case 1:
          if (!
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)))
            return -1;
          return 2136; /* *mmx_ssaddv4hi3 */

        case 2:
          if (!
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2140; /* ssaddv4qi3 */

        case 3:
          if (!
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2144; /* ssaddv2qi3 */

        case 4:
          if (!
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2148; /* ssaddv2hi3 */

        default:
          return -1;
        }

    case VEC_SELECT:
      if (pattern100 (x3) != 0
          || !
#line 22615 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 8593; /* ssse3_phaddswv4hi3 */

    case MULT:
      if (GET_MODE (x4) != E_V4HImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != ZERO_EXTEND
          || GET_MODE (x5) != E_V4HImode)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != VEC_SELECT
          || GET_MODE (x6) != E_V4QImode)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL
          || XVECLEN (x7, 0) != 4
          || pattern1077 (x7, 
6, 
4, 
2, 
0) != 0)
        return -1;
      x8 = XEXP (x4, 1);
      if (pattern1271 (x8, 
E_V4QImode, 
E_V4HImode) != 0)
        return -1;
      x9 = XEXP (x8, 0);
      x10 = XEXP (x9, 1);
      if (pattern1617 (x10, 
6, 
4, 
2, 
0) != 0)
        return -1;
      x11 = XEXP (x3, 1);
      if (pattern1780 (x11, 
E_V4QImode, 
E_V4HImode, 
ZERO_EXTEND) != 0
          || !register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode)
        return -1;
      x12 = XEXP (x6, 0);
      operands[1] = x12;
      if (!register_operand (operands[1], E_V8QImode))
        return -1;
      x13 = XEXP (x9, 0);
      operands[2] = x13;
      if (!register_mmxmem_operand (operands[2], E_V8QImode))
        return -1;
      x14 = XEXP (x11, 0);
      x15 = XEXP (x14, 0);
      x16 = XEXP (x15, 0);
      if (!rtx_equal_p (x16, operands[1]))
        return -1;
      x17 = XEXP (x11, 1);
      x18 = XEXP (x17, 0);
      x19 = XEXP (x18, 0);
      if (!rtx_equal_p (x19, operands[2])
          || !
#line 22899 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 8612; /* ssse3_pmaddubsw */

    default:
      return -1;
    }
}

 int
recog_69 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:
      if (pnum_clobbers == NULL
          || !const_int_operand (operands[2], E_QImode)
          || !
#line 17266 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
        return -1;
      *pnum_clobbers = 1;
      return 1170; /* *ashrsi3_cvt_zext */

    case REG:
    case SUBREG:
      if (!register_operand (operands[2], E_SImode)
          || !
#line 17445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      return 1185; /* *bmi2_ashrsi3_1_zext */

    default:
      return -1;
    }
}

 int
recog_70 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      switch (XINT (x3, 1))
        {
        case 19:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 23052 "../../gcc/config/i386/i386.md"
(TARGET_X32))
            return -1;
          return 1654; /* *load_tp_x32_zext */

        case 49:
          x4 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x4))
            {
            case REG:
            case SUBREG:
              operands[1] = x4;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SFmode:
                  if (register_operand (operands[1], E_V8SFmode)
                      && (
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8510; /* *avx_movmskps256_uext */
                  break;

                case E_V4SFmode:
                  if (register_operand (operands[1], E_V4SFmode)
                      && 
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return 8512; /* *sse_movmskps_uext */
                  break;

                case E_V4DFmode:
                  if (register_operand (operands[1], E_V4DFmode)
                      && (
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8514; /* *avx_movmskpd256_uext */
                  break;

                case E_V2DFmode:
                  if (register_operand (operands[1], E_V2DFmode)
                      && (
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 8516; /* *sse2_movmskpd_uext */
                  break;

                case E_V32QImode:
                  if (register_operand (operands[1], E_V32QImode)
                      && (
#line 22101 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return 8555; /* *avx2_pmovmskb_zext */
                  break;

                case E_V16QImode:
                  if (register_operand (operands[1], E_V16QImode)
                      && 
#line 22101 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                    return 8556; /* *sse2_pmovmskb_zext */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x4) != SUBREG)
                return -1;
              switch (pattern1083 (x4))
                {
                case 0:
                  if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8534; /* *avx_movmskps256_uext_lt_avx512 */

                case 1:
                  if (!
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return -1;
                  return 8536; /* *sse_movmskps_uext_lt_avx512 */

                case 2:
                  if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8538; /* *avx_movmskpd256_uext_lt_avx512 */

                case 3:
                  if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8540; /* *sse2_movmskpd_uext_lt_avx512 */

                case 4:
                  if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8546; /* *avx_movmskps256_uext_shift */

                case 5:
                  if (!
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return -1;
                  return 8548; /* *sse_movmskps_uext_shift */

                case 6:
                  if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8550; /* *avx_movmskpd256_uext_shift */

                case 7:
                  if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8552; /* *sse2_movmskpd_uext_shift */

                default:
                  return -1;
                }

            case LT:
              switch (pattern982 (x4))
                {
                case 0:
                  if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8526; /* *avx_movmskps256_uext_lt */

                case 1:
                  if (!
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return -1;
                  return 8528; /* *sse_movmskps_uext_lt */

                case 2:
                  if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8530; /* *avx_movmskpd256_uext_lt */

                case 3:
                  if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8532; /* *sse2_movmskpd_uext_lt */

                case 4:
                  if (!(
#line 22263 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8563; /* *avx2_pmovmskb_zext_lt */

                case 5:
                  if (!
#line 22263 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                    return -1;
                  return 8564; /* *sse2_pmovmskb_zext_lt */

                default:
                  return -1;
                }

            case VEC_MERGE:
              switch (pattern984 (x4))
                {
                case 0:
                  if (!(
#line 22292 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8565; /* *avx2_pmovmskb_zext_lt_avx512 */

                case 1:
                  if (!
#line 22292 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                    return -1;
                  return 8566; /* *sse2_pmovmskb_zext_lt_avx512 */

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
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      switch (XINT (x3, 1))
        {
        case 95:
          if (GET_MODE (x3) != E_SImode
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !register_operand (operands[1], E_SImode)
              || !nonimmediate_operand (operands[2], E_DImode)
              || !
#line 28917 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CRC32))
            return -1;
          return 1888; /* sse4_2_crc32di */

        case 158:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              switch (pattern870 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8154; /* *avx512bw_testmv64qi3_zext */

                case 1:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8157; /* *avx512vl_testmv32qi3_zext */

                case 2:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8163; /* *avx512bw_testmv32hi3_zext */

                case 3:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8160; /* *avx512vl_testmv16qi3_zext */

                case 4:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8166; /* *avx512vl_testmv16hi3_zext */

                case 5:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8172; /* *avx512f_testmv16si3_zext */

                case 6:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8169; /* *avx512vl_testmv8hi3_zext */

                case 7:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8175; /* *avx512vl_testmv8si3_zext */

                case 8:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8178; /* *avx512vl_testmv4si3_zext */

                case 9:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8181; /* *avx512f_testmv8di3_zext */

                case 10:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8184; /* *avx512vl_testmv4di3_zext */

                case 11:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8187; /* *avx512vl_testmv2di3_zext */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern870 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8155; /* *avx512bw_testmv64qi3_zext */

                case 1:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8158; /* *avx512vl_testmv32qi3_zext */

                case 2:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8164; /* *avx512bw_testmv32hi3_zext */

                case 3:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8161; /* *avx512vl_testmv16qi3_zext */

                case 4:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8167; /* *avx512vl_testmv16hi3_zext */

                case 5:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8173; /* *avx512f_testmv16si3_zext */

                case 6:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8170; /* *avx512vl_testmv8hi3_zext */

                case 7:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8176; /* *avx512vl_testmv8si3_zext */

                case 8:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8179; /* *avx512vl_testmv4si3_zext */

                case 9:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8182; /* *avx512f_testmv8di3_zext */

                case 10:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8185; /* *avx512vl_testmv4di3_zext */

                case 11:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
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
                  return 8188; /* *avx512vl_testmv2di3_zext */

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
              switch (pattern870 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8226; /* *avx512bw_testnmv64qi3_zext */

                case 1:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8229; /* *avx512vl_testnmv32qi3_zext */

                case 2:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8235; /* *avx512bw_testnmv32hi3_zext */

                case 3:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8232; /* *avx512vl_testnmv16qi3_zext */

                case 4:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8238; /* *avx512vl_testnmv16hi3_zext */

                case 5:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8244; /* *avx512f_testnmv16si3_zext */

                case 6:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8241; /* *avx512vl_testnmv8hi3_zext */

                case 7:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8247; /* *avx512vl_testnmv8si3_zext */

                case 8:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8250; /* *avx512vl_testnmv4si3_zext */

                case 9:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8253; /* *avx512f_testnmv8di3_zext */

                case 10:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8256; /* *avx512vl_testnmv4di3_zext */

                case 11:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8259; /* *avx512vl_testnmv2di3_zext */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern870 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8227; /* *avx512bw_testnmv64qi3_zext */

                case 1:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8230; /* *avx512vl_testnmv32qi3_zext */

                case 2:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8236; /* *avx512bw_testnmv32hi3_zext */

                case 3:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8233; /* *avx512vl_testnmv16qi3_zext */

                case 4:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8239; /* *avx512vl_testnmv16hi3_zext */

                case 5:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8245; /* *avx512f_testnmv16si3_zext */

                case 6:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8242; /* *avx512vl_testnmv8hi3_zext */

                case 7:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8248; /* *avx512vl_testnmv8si3_zext */

                case 8:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8251; /* *avx512vl_testnmv4si3_zext */

                case 9:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8254; /* *avx512f_testnmv8di3_zext */

                case 10:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8257; /* *avx512vl_testnmv4di3_zext */

                case 11:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
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
                  return 8260; /* *avx512vl_testnmv2di3_zext */

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
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern1085 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3326; /* *avx512f_cmpv16si3_zero_extendsi */

                case 1:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3347; /* *avx512vl_cmpv16hf3_zero_extendsi */

                case 2:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3353; /* *avx512f_cmpv16sf3_zero_extendsi */

                case 3:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3446; /* *avx512vl_cmpv16qi3_zero_extendsi */

                case 4:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3455; /* *avx512vl_cmpv16hi3_zero_extendsi */

                case 5:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3329; /* *avx512vl_cmpv8si3_zero_extendsi */

                case 6:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3332; /* *avx512vl_cmpv4si3_zero_extendsi */

                case 7:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3335; /* *avx512f_cmpv8di3_zero_extendsi */

                case 8:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3338; /* *avx512vl_cmpv4di3_zero_extendsi */

                case 9:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3341; /* *avx512vl_cmpv2di3_zero_extendsi */

                case 10:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3350; /* *avx512fp16_cmpv8hf3_zero_extendsi */

                case 11:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3356; /* *avx512vl_cmpv8sf3_zero_extendsi */

                case 12:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3359; /* *avx512vl_cmpv4sf3_zero_extendsi */

                case 13:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3362; /* *avx512f_cmpv8df3_zero_extendsi */

                case 14:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3365; /* *avx512vl_cmpv4df3_zero_extendsi */

                case 15:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3368; /* *avx512vl_cmpv2df3_zero_extendsi */

                case 16:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3458; /* *avx512vl_cmpv8hi3_zero_extendsi */

                case 17:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return -1;
                  return 3344; /* *avx512bw_cmpv32hf3_zero_extendsi */

                case 18:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3449; /* *avx512vl_cmpv32qi3_zero_extendsi */

                case 19:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3452; /* *avx512bw_cmpv32hi3_zero_extendsi */

                case 20:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3443; /* *avx512bw_cmpv64qi3_zero_extendsi */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1085 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3327; /* *avx512f_cmpv16si3_zero_extenddi */

                case 1:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3348; /* *avx512vl_cmpv16hf3_zero_extenddi */

                case 2:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3354; /* *avx512f_cmpv16sf3_zero_extenddi */

                case 3:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3447; /* *avx512vl_cmpv16qi3_zero_extenddi */

                case 4:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3456; /* *avx512vl_cmpv16hi3_zero_extenddi */

                case 5:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3330; /* *avx512vl_cmpv8si3_zero_extenddi */

                case 6:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3333; /* *avx512vl_cmpv4si3_zero_extenddi */

                case 7:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3336; /* *avx512f_cmpv8di3_zero_extenddi */

                case 8:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3339; /* *avx512vl_cmpv4di3_zero_extenddi */

                case 9:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3342; /* *avx512vl_cmpv2di3_zero_extenddi */

                case 10:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3351; /* *avx512fp16_cmpv8hf3_zero_extenddi */

                case 11:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3357; /* *avx512vl_cmpv8sf3_zero_extenddi */

                case 12:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3360; /* *avx512vl_cmpv4sf3_zero_extenddi */

                case 13:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3363; /* *avx512f_cmpv8df3_zero_extenddi */

                case 14:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3366; /* *avx512vl_cmpv4df3_zero_extenddi */

                case 15:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3369; /* *avx512vl_cmpv2df3_zero_extenddi */

                case 16:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3459; /* *avx512vl_cmpv8hi3_zero_extenddi */

                case 17:
                  if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return -1;
                  return 3345; /* *avx512bw_cmpv32hf3_zero_extenddi */

                case 18:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3450; /* *avx512vl_cmpv32qi3_zero_extenddi */

                case 19:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3453; /* *avx512bw_cmpv32hi3_zero_extenddi */

                case 20:
                  if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3444; /* *avx512bw_cmpv64qi3_zero_extenddi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 157:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern1087 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3527; /* *avx512bw_ucmpv64qi3_zero_extendsi */

                case 1:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3530; /* *avx512vl_ucmpv16qi3_zero_extendsi */

                case 2:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3539; /* *avx512vl_ucmpv16hi3_zero_extendsi */

                case 3:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3604; /* *avx512f_ucmpv16si3_zero_extendsi */

                case 4:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3533; /* *avx512vl_ucmpv32qi3_zero_extendsi */

                case 5:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3536; /* *avx512bw_ucmpv32hi3_zero_extendsi */

                case 6:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3542; /* *avx512vl_ucmpv8hi3_zero_extendsi */

                case 7:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3605; /* *avx512vl_ucmpv8si3_zero_extendsi */

                case 8:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3606; /* *avx512vl_ucmpv4si3_zero_extendsi */

                case 9:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3607; /* *avx512f_ucmpv8di3_zero_extendsi */

                case 10:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3608; /* *avx512vl_ucmpv4di3_zero_extendsi */

                case 11:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3609; /* *avx512vl_ucmpv2di3_zero_extendsi */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1087 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3528; /* *avx512bw_ucmpv64qi3_zero_extenddi */

                case 1:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3531; /* *avx512vl_ucmpv16qi3_zero_extenddi */

                case 2:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3540; /* *avx512vl_ucmpv16hi3_zero_extenddi */

                case 3:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3610; /* *avx512f_ucmpv16si3_zero_extenddi */

                case 4:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3534; /* *avx512vl_ucmpv32qi3_zero_extenddi */

                case 5:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3537; /* *avx512bw_ucmpv32hi3_zero_extenddi */

                case 6:
                  if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3543; /* *avx512vl_ucmpv8hi3_zero_extenddi */

                case 7:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3611; /* *avx512vl_ucmpv8si3_zero_extenddi */

                case 8:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3612; /* *avx512vl_ucmpv4si3_zero_extenddi */

                case 9:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3613; /* *avx512f_ucmpv8di3_zero_extenddi */

                case 10:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3614; /* *avx512vl_ucmpv4di3_zero_extenddi */

                case 11:
                  if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3615; /* *avx512vl_ucmpv2di3_zero_extenddi */

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
recog_129 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[4] = x3;
      x4 = XEXP (x2, 0);
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x2, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern467 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 7140; /* avx512bw_rndscalev32hf_mask */

        case E_V16HFmode:
          if (pattern467 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 7144; /* avx512vl_rndscalev16hf_mask */

        case E_V8HFmode:
          if (pattern467 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 7147; /* avx512fp16_rndscalev8hf_mask */

        case E_V16SFmode:
          if (pattern467 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7150; /* avx512f_rndscalev16sf_mask */

        case E_V8SFmode:
          if (pattern467 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7154; /* avx512vl_rndscalev8sf_mask */

        case E_V4SFmode:
          if (pattern467 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7157; /* avx512vl_rndscalev4sf_mask */

        case E_V8DFmode:
          if (pattern467 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7160; /* avx512f_rndscalev8df_mask */

        case E_V4DFmode:
          if (pattern467 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7164; /* avx512vl_rndscalev4df_mask */

        case E_V2DFmode:
          if (pattern467 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7167; /* avx512vl_rndscalev2df_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 1L)
        return -1;
      x4 = XEXP (x2, 0);
      x5 = XVECEXP (x4, 0, 0);
      operands[2] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1211 (x2, 
E_V8HFmode) != 0)
            return -1;
          if (const_0_to_255_operand (operands[3], E_SImode)
              && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return 7168; /* avx512f_rndscalev8hf */
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !(
#line 25572 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 8968; /* sse4_1_roundsh */

        case E_V4SFmode:
          if (pattern1211 (x2, 
E_V4SFmode) != 0)
            return -1;
          if (const_0_to_255_operand (operands[3], E_SImode)
              && 
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 7172; /* avx512f_rndscalev4sf */
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !
#line 25572 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8969; /* sse4_1_roundss */

        case E_V2DFmode:
          if (pattern1211 (x2, 
E_V2DFmode) != 0)
            return -1;
          if (const_0_to_255_operand (operands[3], E_SImode)
              && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 7176; /* avx512f_rndscalev2df */
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !(
#line 25572 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 8970; /* sse4_1_roundsd */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_138 (rtx x1 ATTRIBUTE_UNUSED,
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
  x7 = XEXP (x2, 2);
  if (!register_operand (x7, E_QImode))
    return -1;
  x8 = XEXP (x2, 1);
  switch (GET_CODE (x8))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x8;
      operands[5] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1368 (x2, 
E_V16SFmode, 
E_V32BFmode) != 0
              || !(
#line 31190 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10348; /* avx512f_dpbf16ps_v16sf_maskz_1 */

        case E_V8SFmode:
          if (pattern1368 (x2, 
E_V8SFmode, 
E_V16BFmode) != 0
              || !(
#line 31190 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10350; /* avx512f_dpbf16ps_v8sf_maskz_1 */

        case E_V4SFmode:
          if (pattern1368 (x2, 
E_V4SFmode, 
E_V8BFmode) != 0
              || !(
#line 31190 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10352; /* avx512f_dpbf16ps_v4sf_maskz_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1369 (x2, 
E_V32BFmode, 
E_V16SFmode) != 0
              || !(
#line 31203 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10353; /* avx512f_dpbf16ps_v16sf_mask */

        case E_V8SFmode:
          if (pattern1369 (x2, 
E_V16BFmode, 
E_V8SFmode) != 0
              || !(
#line 31203 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10354; /* avx512f_dpbf16ps_v8sf_mask */

        case E_V4SFmode:
          if (pattern1369 (x2, 
E_V8BFmode, 
E_V4SFmode) != 0
              || !(
#line 31203 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10355; /* avx512f_dpbf16ps_v4sf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_145 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x2, 0);
  switch (XINT (x4, 1))
    {
    case 177:
      return recog_121 (x1, insn, pnum_clobbers);

    case 54:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      switch (GET_CODE (x6))
        {
        case CONST_INT:
          switch (pattern882 (x2))
            {
            case 0:
              if (!
#line 2929 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2877; /* sse_vmrcpv4sf2 */

            case 1:
              if (!
#line 2979 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 2885; /* avx512fp16_vmrcpv8hf2 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern627 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2966 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 2880; /* avx512fp16_rcpv32hf2_mask */

            case E_V16HFmode:
              if (pattern627 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2966 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2882; /* avx512fp16_rcpv16hf2_mask */

            case E_V8HFmode:
              if (pattern627 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2966 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2884; /* avx512fp16_rcpv8hf2_mask */

            case E_V32BFmode:
              if (pattern627 (x2, 
E_V32BFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32396 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10687; /* avx10_2_rcppbf16_v32bf_mask */

            case E_V16BFmode:
              if (pattern627 (x2, 
E_V16BFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32396 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10689; /* avx10_2_rcppbf16_v16bf_mask */

            case E_V8BFmode:
              if (pattern627 (x2, 
E_V8BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32396 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10691; /* avx10_2_rcppbf16_v8bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 161:
      switch (pattern629 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2889; /* rcp14v16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2891; /* rcp14v8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2893; /* rcp14v4sf_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2895; /* rcp14v8df_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2897; /* rcp14v4df_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2899; /* rcp14v2df_mask */

        case 6:
          if (!
#line 3018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2900; /* srcp14v4sf */

        case 7:
          if (!(
#line 3018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2901; /* srcp14v2df */

        default:
          return -1;
        }

    case 55:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern999 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 2961; /* avx512fp16_rsqrtv32hf2_mask */

            case E_V16HFmode:
              if (pattern999 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2963; /* avx512fp16_rsqrtv16hf2_mask */

            case E_V8HFmode:
              if (pattern999 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2965; /* avx512fp16_rsqrtv8hf2_mask */

            case E_V32BFmode:
              if (pattern627 (x2, 
E_V32BFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32379 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10675; /* avx10_2_rsqrtpbf16_v32bf_mask */

            case E_V16BFmode:
              if (pattern627 (x2, 
E_V16BFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32379 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10677; /* avx10_2_rsqrtpbf16_v16bf_mask */

            case E_V8BFmode:
              if (pattern627 (x2, 
E_V8BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32379 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10679; /* avx10_2_rsqrtpbf16_v8bf_mask */

            default:
              return -1;
            }

        case CONST_INT:
          switch (pattern882 (x2))
            {
            case 0:
              if (!
#line 3202 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2982; /* sse_vmrsqrtv4sf2 */

            case 1:
              if (!
#line 3237 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 2984; /* avx512fp16_vmrsqrtv8hf2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 162:
      switch (pattern629 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2967; /* rsqrt14v16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2969; /* rsqrt14v8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2971; /* rsqrt14v4sf_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2973; /* rsqrt14v8df_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2975; /* rsqrt14v4df_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2977; /* rsqrt14v2df_mask */

        case 6:
          if (!
#line 3172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2978; /* rsqrt14v4sf */

        case 7:
          if (!(
#line 3172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2979; /* rsqrt14v2df */

        default:
          return -1;
        }

    case 156:
      return recog_124 (x1, insn, pnum_clobbers);

    case 46:
      return recog_122 (x1, insn, pnum_clobbers);

    case 172:
      return recog_123 (x1, insn, pnum_clobbers);

    case 173:
      return recog_125 (x1, insn, pnum_clobbers);

    case 165:
      return recog_127 (x1, insn, pnum_clobbers);

    case 136:
      x6 = XEXP (x2, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1000 (x2, 
E_V4SFmode) != 0
              || !
#line 27017 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9056; /* *xop_vmfrczv4sf2 */

        case E_V2DFmode:
          if (pattern1000 (x2, 
E_V2DFmode) != 0
              || !(
#line 27017 "../../gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9057; /* *xop_vmfrczv2df2 */

        default:
          return -1;
        }

    case 149:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || GET_MODE (x4) != E_V4SFmode
              || !memory_operand (operands[1], E_V4HImode)
              || !nonimm_or_0_operand (operands[2], E_V4SFmode)
              || !register_operand (operands[3], E_QImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29086 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
            return -1;
          return 9646; /* *vcvtph2ps_load_mask */

        case E_V8SFmode:
          if (pattern631 (x2, 
E_V8SFmode, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29096 "../../gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 9649; /* vcvtph2ps256_mask */

        case E_V16SFmode:
          if (pattern633 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9653; /* avx512f_vcvtph2ps512_mask */

        default:
          return -1;
        }

    case 168:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern627 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10069; /* conflictv16si_mask */

        case E_V8SImode:
          if (pattern627 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10071; /* conflictv8si_mask */

        case E_V4SImode:
          if (pattern627 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10073; /* conflictv4si_mask */

        case E_V8DImode:
          if (pattern627 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10075; /* conflictv8di_mask */

        case E_V4DImode:
          if (pattern627 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10077; /* conflictv4di_mask */

        case E_V2DImode:
          if (pattern627 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10079; /* conflictv2di_mask */

        default:
          return -1;
        }

    case 253:
      switch (pattern632 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10500; /* vcvtneph2bf8v16hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10508; /* vcvtneph2bf8v32hf_mask */

        default:
          return -1;
        }

    case 254:
      switch (pattern632 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10502; /* vcvtneph2bf8sv16hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10510; /* vcvtneph2bf8sv32hf_mask */

        default:
          return -1;
        }

    case 255:
      switch (pattern632 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10504; /* vcvtneph2hf8v16hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10512; /* vcvtneph2hf8v32hf_mask */

        default:
          return -1;
        }

    case 256:
      switch (pattern632 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10506; /* vcvtneph2hf8sv16hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10514; /* vcvtneph2hf8sv32hf_mask */

        default:
          return -1;
        }

    case 257:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern631 (x2, 
E_V32HFmode, 
E_SImode, 
E_V32QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31910 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10516; /* vcvthf82phv32hf_mask */

        case E_V16HFmode:
          if (pattern631 (x2, 
E_V16HFmode, 
E_HImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31910 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10518; /* vcvthf82phv16hf_mask */

        case E_V8HFmode:
          if (pattern631 (x2, 
E_V8HFmode, 
E_QImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31910 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10520; /* vcvthf82phv8hf_mask */

        default:
          return -1;
        }

    case 264:
      switch (pattern634 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10730; /* avx10_2_cvtnebf162ibsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10738; /* avx10_2_cvtnebf162ibsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10746; /* avx10_2_cvtnebf162ibsv8bf_mask */

        default:
          return -1;
        }

    case 265:
      switch (pattern634 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10732; /* avx10_2_cvtnebf162iubsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10740; /* avx10_2_cvtnebf162iubsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10748; /* avx10_2_cvtnebf162iubsv8bf_mask */

        default:
          return -1;
        }

    case 270:
      switch (pattern634 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10734; /* avx10_2_cvttnebf162ibsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10742; /* avx10_2_cvttnebf162ibsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10750; /* avx10_2_cvttnebf162ibsv8bf_mask */

        default:
          return -1;
        }

    case 271:
      switch (pattern634 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10736; /* avx10_2_cvttnebf162iubsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10744; /* avx10_2_cvttnebf162iubsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10752; /* avx10_2_cvttnebf162iubsv8bf_mask */

        default:
          return -1;
        }

    case 266:
      switch (pattern634 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10755; /* avx10_2_cvtph2ibsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10763; /* avx10_2_cvtph2ibsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10770; /* avx10_2_cvtph2ibsv8hf_mask */

        default:
          return -1;
        }

    case 267:
      switch (pattern634 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10759; /* avx10_2_cvtph2iubsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10767; /* avx10_2_cvtph2iubsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10772; /* avx10_2_cvtph2iubsv8hf_mask */

        default:
          return -1;
        }

    case 272:
      switch (pattern634 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10775; /* avx10_2_cvttph2ibsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10783; /* avx10_2_cvttph2ibsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10790; /* avx10_2_cvttph2ibsv8hf_mask */

        default:
          return -1;
        }

    case 273:
      switch (pattern634 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10779; /* avx10_2_cvttph2iubsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10787; /* avx10_2_cvttph2iubsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10792; /* avx10_2_cvttph2iubsv8hf_mask */

        default:
          return -1;
        }

    case 268:
      switch (pattern635 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10795; /* avx10_2_cvtps2ibsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10803; /* avx10_2_cvtps2ibsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10810; /* avx10_2_cvtps2ibsv4sf_mask */

        default:
          return -1;
        }

    case 269:
      switch (pattern635 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10799; /* avx10_2_cvtps2iubsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10807; /* avx10_2_cvtps2iubsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10812; /* avx10_2_cvtps2iubsv4sf_mask */

        default:
          return -1;
        }

    case 274:
      switch (pattern635 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10815; /* avx10_2_cvttps2ibsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10823; /* avx10_2_cvttps2ibsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10830; /* avx10_2_cvttps2ibsv4sf_mask */

        default:
          return -1;
        }

    case 275:
      switch (pattern635 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10819; /* avx10_2_cvttps2iubsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10827; /* avx10_2_cvttps2iubsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10832; /* avx10_2_cvttps2iubsv4sf_mask */

        default:
          return -1;
        }

    case 276:
      switch (pattern636 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10835; /* avx10_2_vcvttps2dqsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10843; /* avx10_2_vcvttps2dqsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10855; /* avx10_2_vcvttpd2dqsv8df_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10850; /* avx10_2_vcvttps2dqsv4sf_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10863; /* avx10_2_vcvttpd2dqsv4df_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10870; /* avx10_2_vcvttpd2dqsv2df_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 451 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10875; /* avx10_2_vcvttpd2qqsv8df_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 618 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10895; /* avx10_2_vcvttps2qqsv8di_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10883; /* avx10_2_vcvttpd2qqsv4df_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10903; /* avx10_2_vcvttps2qqsv4di_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10890; /* avx10_2_vcvttpd2qqsv2df_mask */

        case 11:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10910; /* avx10_2_vcvttps2qqsv2di_mask */

        default:
          return -1;
        }

    case 277:
      switch (pattern636 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10839; /* avx10_2_vcvttps2udqsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10847; /* avx10_2_vcvttps2udqsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10859; /* avx10_2_vcvttpd2udqsv8df_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10852; /* avx10_2_vcvttps2udqsv4sf_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10867; /* avx10_2_vcvttpd2udqsv4df_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10872; /* avx10_2_vcvttpd2udqsv2df_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 451 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10879; /* avx10_2_vcvttpd2uqqsv8df_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 618 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10899; /* avx10_2_vcvttps2uqqsv8di_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10887; /* avx10_2_vcvttpd2uqqsv4df_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10907; /* avx10_2_vcvttps2uqqsv4di_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10892; /* avx10_2_vcvttpd2uqqsv2df_mask */

        case 11:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10912; /* avx10_2_vcvttps2uqqsv2di_mask */

        default:
          return -1;
        }

    case 280:
      return recog_126 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_168 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  x8 = XEXP (x2, 1);
  operands[6] = x8;
  x9 = XEXP (x2, 2);
  operands[7] = x9;
  if (!register_operand (operands[7], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || GET_MODE (x3) != E_V4SFmode
          || pattern1665 (
E_V16SFmode) != 0
          || !nonimm_or_0_operand (operands[6], E_V4SFmode)
          || !(
#line 12498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[6]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5338; /* avx512f_vextractf32x4_1_mask */

    case E_V4SImode:
      if (GET_MODE (x2) != E_V4SImode
          || GET_MODE (x3) != E_V4SImode
          || !nonimm_or_0_operand (operands[6], E_V4SImode))
        return -1;
      if (nonimmediate_operand (operands[0], E_V4SImode)
          && pattern1665 (
E_V16SImode) == 0
          && (
#line 12498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[6]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 5339; /* avx512f_vextracti32x4_1_mask */
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || pattern1694 () != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20690 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
        return -1;
      return 8439; /* sse2_pshufd_1_mask */

    case E_V4DImode:
      if (pattern755 (x2, 
E_V4DImode) != 0
          || pattern1694 () != 0
          || !nonimm_or_0_operand (operands[6], E_V4DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27551 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9167; /* avx2_permv4di_1_mask */

    default:
      return -1;
    }
}

 int
recog_173 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x6) == CONST_INT)
    {
      res = recog_170 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[2] = x5;
  res = recog_172 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x5, 0) != 0L
      || x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || pattern1302 (x2, 
E_V8HImode) != 0
      || pattern1548 (x4) != 0)
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
#line 21003 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512BW && TARGET_AVX512VL)))
    return -1;
  return 8451; /* sse2_pshufhw_1_mask */
}

 int
recog_177 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != CONST_VECTOR
      || XVECLEN (x6, 0) != 32
      || GET_MODE (x6) != E_V32HImode)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x6, 0, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x9 = XVECEXP (x6, 0, 2);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x10 = XVECEXP (x6, 0, 3);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x11 = XVECEXP (x6, 0, 4);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x12 = XVECEXP (x6, 0, 5);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x6, 0, 6);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x14 = XVECEXP (x6, 0, 7);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x15 = XVECEXP (x6, 0, 8);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x16 = XVECEXP (x6, 0, 9);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x17 = XVECEXP (x6, 0, 10);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x18 = XVECEXP (x6, 0, 11);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x19 = XVECEXP (x6, 0, 12);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x20 = XVECEXP (x6, 0, 13);
  if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x21 = XVECEXP (x6, 0, 14);
  if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x22 = XVECEXP (x6, 0, 15);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x23 = XVECEXP (x6, 0, 16);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x24 = XVECEXP (x6, 0, 17);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x25 = XVECEXP (x6, 0, 18);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x26 = XVECEXP (x6, 0, 19);
  if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x27 = XVECEXP (x6, 0, 20);
  if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x28 = XVECEXP (x6, 0, 21);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x29 = XVECEXP (x6, 0, 22);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x30 = XVECEXP (x6, 0, 23);
  if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x31 = XVECEXP (x6, 0, 24);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x32 = XVECEXP (x6, 0, 25);
  if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x33 = XVECEXP (x6, 0, 26);
  if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x34 = XVECEXP (x6, 0, 27);
  if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x35 = XVECEXP (x6, 0, 28);
  if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x36 = XVECEXP (x6, 0, 29);
  if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x37 = XVECEXP (x6, 0, 30);
  if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x38 = XVECEXP (x6, 0, 31);
  if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V32HImode)
      || GET_MODE (x2) != E_V32HImode
      || GET_MODE (x3) != E_V32HImode
      || GET_MODE (x4) != E_V32SImode
      || GET_MODE (x5) != E_V32SImode)
    return -1;
  x39 = XEXP (x5, 0);
  if (GET_MODE (x39) != E_V32SImode)
    return -1;
  x40 = XEXP (x39, 0);
  if (GET_MODE (x40) != E_V32SImode)
    return -1;
  x41 = XEXP (x40, 0);
  if (GET_MODE (x41) != E_V32SImode)
    return -1;
  x42 = XEXP (x40, 1);
  if (GET_MODE (x42) != E_V32SImode)
    return -1;
  x43 = XEXP (x42, 0);
  operands[2] = x43;
  if (!nonimmediate_operand (operands[2], E_V32HImode))
    return -1;
  x44 = XEXP (x2, 1);
  operands[3] = x44;
  if (!nonimm_or_0_operand (operands[3], E_V32HImode))
    return -1;
  x45 = XEXP (x2, 2);
  operands[4] = x45;
  if (!register_operand (operands[4], E_SImode)
      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 22827 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
    return -1;
  return 8610; /* avx512bw_umulhrswv32hi3_mask */
}

 int
recog_185 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16HImode:
      if (pattern128 (x2, 
E_HImode, 
E_V16HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 794 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7606; /* ashrv16hi3_mask */
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28912 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9564; /* avx512vl_ashrvv16hi_mask */

    case E_V8HImode:
      if (pattern128 (x2, 
E_QImode, 
E_V8HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 794 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7608; /* ashrv8hi3_mask */
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28912 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9562; /* avx512vl_ashrvv8hi_mask */

    case E_V8SImode:
      if (pattern128 (x2, 
E_QImode, 
E_V8SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7610; /* ashrv8si3_mask */
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9552; /* avx2_ashrvv8si_mask */

    case E_V4SImode:
      if (pattern128 (x2, 
E_QImode, 
E_V4SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7612; /* ashrv4si3_mask */
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9550; /* avx2_ashrvv4si_mask */

    case E_V2DImode:
      if (pattern128 (x2, 
E_QImode, 
E_V2DImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7614; /* ashrv2di3_mask */
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL)) && 
#line 682 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9556; /* avx2_ashrvv2di_mask */

    case E_V32HImode:
      if (pattern128 (x2, 
E_SImode, 
E_V32HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
        return 7624; /* ashrv32hi3_mask */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28912 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9566; /* avx512bw_ashrvv32hi_mask */

    case E_V4DImode:
      if (pattern128 (x2, 
E_QImode, 
E_V4DImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 790 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return 7626; /* ashrv4di3_mask */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && 
#line 682 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9558; /* avx2_ashrvv4di_mask */

    case E_V16SImode:
      if (pattern128 (x2, 
E_HImode, 
E_V16SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 790 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7628; /* ashrv16si3_mask */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 681 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9554; /* avx512f_ashrvv16si_mask */

    case E_V8DImode:
      if (pattern128 (x2, 
E_QImode, 
E_V8DImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 790 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7630; /* ashrv8di3_mask */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 683 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9560; /* avx512f_ashrvv8di_mask */

    default:
      return -1;
    }
}

 int
recog_187 (rtx x1 ATTRIBUTE_UNUSED,
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
        return 7643; /* lshrv16hi3_mask */
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
      return 9598; /* avx512vl_lshrvv16hi_mask */

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
        return 7647; /* lshrv8hi3_mask */
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
      return 9594; /* avx512vl_lshrvv8hi_mask */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7651; /* lshrv8si3_mask */
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9574; /* avx2_lshrvv8si_mask */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7655; /* lshrv4si3_mask */
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9578; /* avx2_lshrvv4si_mask */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7659; /* lshrv4di3_mask */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9586; /* avx2_lshrvv4di_mask */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7663; /* lshrv2di3_mask */
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9590; /* avx2_lshrvv2di_mask */

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
        return 7683; /* lshrv32hi3_mask */
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
      return 9602; /* avx512bw_lshrvv32hi_mask */

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
        return 7687; /* lshrv16si3_mask */
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
      return 9570; /* avx512f_lshrvv16si_mask */

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
        return 7691; /* lshrv8di3_mask */
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
      return 9582; /* avx512f_lshrvv8di_mask */

    default:
      return -1;
    }
}

 int
recog_192 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern487 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2683; /* *subv32hf3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2691; /* *subv16hf3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2699; /* *subv8hf3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2707; /* *subv16sf3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2715; /* *subv8sf3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 2723; /* *subv4sf3_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2731; /* *subv8df3_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2739; /* *subv4df3_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2747; /* *subv2df3_mask */

        case 9:
          if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7484; /* *subv16si3_mask */

        case 10:
          if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7486; /* *subv8si3_mask */

        case 11:
          if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4SImode, operands)) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7488; /* *subv4si3_mask */

        case 12:
          if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7490; /* *subv8di3_mask */

        case 13:
          if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7492; /* *subv4di3_mask */

        case 14:
          if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V2DImode, operands)) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7494; /* *subv2di3_mask */

        case 15:
          if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7496; /* *subv64qi3_mask */

        case 16:
          if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16QImode, operands)) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7498; /* *subv16qi3_mask */

        case 17:
          if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7500; /* *subv32qi3_mask */

        case 18:
          if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7502; /* *subv32hi3_mask */

        case 19:
          if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7504; /* *subv16hi3_mask */

        case 20:
          if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V8HImode, operands)) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7506; /* *subv8hi3_mask */

        case 21:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10605; /* avx10_2_subnepbf16_v32bf_mask */

        case 22:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10613; /* avx10_2_subnepbf16_v16bf_mask */

        case 23:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10621; /* avx10_2_subnepbf16_v8bf_mask */

        case 24:
          if (!(
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2759; /* avx512fp16_vmsubv8hf3 */

        case 25:
          if (!
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2767; /* sse_vmsubv4sf3 */

        case 26:
          if (!(
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2775; /* sse2_vmsubv2df3 */

        default:
          return -1;
        }

    case PLUS:
      x7 = XEXP (x2, 2);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XEXP (x6, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      x9 = XEXP (x6, 1);
      if (!rtx_equal_p (x9, operands[2]))
        return -1;
      switch (XWINT (x7, 0))
        {
        case 85L:
          if (pattern1111 (x2, 
E_V8SFmode) != 0
              || !(
#line 3507 "../../gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3175; /* vec_addsubv8sf3 */

        case 5L:
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1111 (x2, 
E_V4SFmode) != 0
                  || !
#line 3507 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 3176; /* vec_addsubv4sf3 */

            case E_V4DFmode:
              if (pattern1111 (x2, 
E_V4DFmode) != 0
                  || !(
#line 3507 "../../gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3177; /* vec_addsubv4df3 */

            default:
              return -1;
            }

        case 1L:
          if (pattern1111 (x2, 
E_V2DFmode) != 0
              || !(
#line 3507 "../../gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3178; /* vec_addsubv2df3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_201 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 4478; /* avx512fp16_vcvtuw2ph_v8hi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4501; /* avx512fp16_vcvtudq2ph_v8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4517; /* avx512fp16_vcvtuqq2ph_v8di_mask */

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
          return 4485; /* avx512fp16_vcvtuw2ph_v16hi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4509; /* avx512fp16_vcvtudq2ph_v16si_mask */

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
      return 4493; /* avx512fp16_vcvtuw2ph_v32hi_mask */

    case 3:
      if (pattern146 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4820; /* floatunsv16siv16sf2_mask */

    case 4:
      switch (pattern893 (x2, 
E_V8SFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4824; /* floatunsv8siv8sf2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4972; /* floatunsv8div8sf2_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern894 (x2, 
E_V4SFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4827; /* floatunsv4siv4sf2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4980; /* floatunsv4div4sf2_mask */

        default:
          return -1;
        }

    case 6:
      if (pattern773 (x2, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4952; /* floatunsv8div8df2_mask */

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4989; /* floatunsv8siv8df2_mask */

        default:
          return -1;
        }

    case 7:
      if (pattern773 (x2, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4960; /* floatunsv4div4df2_mask */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4991; /* floatunsv4siv4df2_mask */

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
      return 4965; /* floatunsv2div2df2_mask */

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9347 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4993; /* floatunsv2siv2df2_mask */

    default:
      return -1;
    }
}

 int
recog_211 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SFmode:
      if (!memory_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !register_operand (operands[1], E_V16SFmode)
          || !(
#line 2020 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2557; /* avx512f_movntv16sf */

    case E_V8SFmode:
      if (!memory_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !register_operand (operands[1], E_V8SFmode)
          || !(
#line 2020 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2558; /* avx_movntv8sf */

    case E_V4SFmode:
      if (!memory_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !register_operand (operands[1], E_V4SFmode)
          || !
#line 2020 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2559; /* sse_movntv4sf */

    case E_V8DFmode:
      if (!memory_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !register_operand (operands[1], E_V8DFmode)
          || !(
#line 2020 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2560; /* avx512f_movntv8df */

    case E_V4DFmode:
      if (!memory_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !register_operand (operands[1], E_V4DFmode)
          || !(
#line 2020 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2561; /* avx_movntv4df */

    case E_V2DFmode:
      if (!memory_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !register_operand (operands[1], E_V2DFmode)
          || !(
#line 2020 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2562; /* sse2_movntv2df */

    case E_V8DImode:
      if (!memory_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || !register_operand (operands[1], E_V8DImode)
          || !(
#line 2030 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 615 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2563; /* avx512f_movntv8di */

    case E_V4DImode:
      if (!memory_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !register_operand (operands[1], E_V4DImode)
          || !(
#line 2030 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 615 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2564; /* avx_movntv4di */

    case E_V2DImode:
      if (!memory_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !register_operand (operands[1], E_V2DImode)
          || !
#line 2030 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 2565; /* sse2_movntv2di */

    default:
      return -1;
    }
}

 int
recog_218 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  x5 = XEXP (x4, 0);
  x6 = XVECEXP (x5, 0, 2);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x6;
      x7 = XEXP (x4, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x4, 2);
          operands[5] = x8;
          operands[6] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1642 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
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
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4090; /* fma_fmaddsub_v32hf_maskz_1_round */

            case E_V16HFmode:
              if (pattern1642 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
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
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4094; /* fma_fmaddsub_v16hf_maskz_1_round */

            case E_V16SFmode:
              if (pattern1642 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
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
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4100; /* fma_fmaddsub_v16sf_maskz_1_round */

            case E_V8SFmode:
              if (pattern1642 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
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
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4104; /* fma_fmaddsub_v8sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1642 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
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
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4110; /* fma_fmaddsub_v8df_maskz_1_round */

            case E_V4DFmode:
              if (pattern1642 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
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
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4114; /* fma_fmaddsub_v4df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x4, 2);
          operands[4] = x8;
          operands[5] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1585 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V32HFmode)
                  && register_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6427 "../../gcc/config/i386/sse.md"
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
                return 4118; /* avx512bw_fmaddsub_v32hf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V32HFmode)
                  || !nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6445 "../../gcc/config/i386/sse.md"
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
              return 4133; /* avx512bw_fmaddsub_v32hf_mask3_round */

            case E_V16HFmode:
              if (pattern1585 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16HFmode)
                  && register_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6427 "../../gcc/config/i386/sse.md"
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
                return 4120; /* avx512vl_fmaddsub_v16hf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6445 "../../gcc/config/i386/sse.md"
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
              return 4135; /* avx512vl_fmaddsub_v16hf_mask3_round */

            case E_V16SFmode:
              if (pattern1585 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16SFmode)
                  && register_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6427 "../../gcc/config/i386/sse.md"
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
                return 4123; /* avx512f_fmaddsub_v16sf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6445 "../../gcc/config/i386/sse.md"
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
              return 4138; /* avx512f_fmaddsub_v16sf_mask3_round */

            case E_V8SFmode:
              if (pattern1585 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8SFmode)
                  && register_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6427 "../../gcc/config/i386/sse.md"
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
                return 4125; /* avx512vl_fmaddsub_v8sf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6445 "../../gcc/config/i386/sse.md"
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
              return 4140; /* avx512vl_fmaddsub_v8sf_mask3_round */

            case E_V8DFmode:
              if (pattern1585 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8DFmode)
                  && register_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6427 "../../gcc/config/i386/sse.md"
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
                return 4128; /* avx512f_fmaddsub_v8df_mask_round */
              if (!nonimmediate_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6445 "../../gcc/config/i386/sse.md"
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
              return 4143; /* avx512f_fmaddsub_v8df_mask3_round */

            case E_V4DFmode:
              if (pattern1585 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V4DFmode)
                  && register_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6427 "../../gcc/config/i386/sse.md"
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
                return 4130; /* avx512vl_fmaddsub_v4df_mask_round */
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6445 "../../gcc/config/i386/sse.md"
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
              return 4145; /* avx512vl_fmaddsub_v4df_mask3_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 0);
      operands[3] = x9;
      x7 = XEXP (x4, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x4, 2);
          operands[5] = x8;
          operands[6] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1643 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
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
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4154; /* fma_fmsubadd_v32hf_maskz_1_round */

            case E_V16HFmode:
              if (pattern1643 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
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
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4158; /* fma_fmsubadd_v16hf_maskz_1_round */

            case E_V16SFmode:
              if (pattern1643 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
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
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4164; /* fma_fmsubadd_v16sf_maskz_1_round */

            case E_V8SFmode:
              if (pattern1643 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
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
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4168; /* fma_fmsubadd_v8sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1643 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
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
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4174; /* fma_fmsubadd_v8df_maskz_1_round */

            case E_V4DFmode:
              if (pattern1643 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
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
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4178; /* fma_fmsubadd_v4df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x4, 2);
          operands[4] = x8;
          operands[5] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1586 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return 4182; /* avx512bw_fmsubadd_v32hf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4200; /* avx512bw_fmsubadd_v32hf_mask3_round */

            case E_V16HFmode:
              if (pattern1586 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return 4184; /* avx512vl_fmsubadd_v16hf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4202; /* avx512vl_fmsubadd_v16hf_mask3_round */

            case E_V8HFmode:
              if (pattern1586 (x2, 
E_V8HFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V8HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return 4186; /* avx512fp16_fmsubadd_v8hf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V8HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4204; /* avx512fp16_fmsubadd_v8hf_mask3_round */

            case E_V16SFmode:
              if (pattern1586 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return 4188; /* avx512f_fmsubadd_v16sf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4206; /* avx512f_fmsubadd_v16sf_mask3_round */

            case E_V8SFmode:
              if (pattern1586 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4190; /* avx512vl_fmsubadd_v8sf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4208; /* avx512vl_fmsubadd_v8sf_mask3_round */

            case E_V4SFmode:
              if (pattern1586 (x2, 
E_V4SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V4SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4192; /* avx512vl_fmsubadd_v4sf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V4SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4210; /* avx512vl_fmsubadd_v4sf_mask3_round */

            case E_V8DFmode:
              if (pattern1586 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return 4194; /* avx512f_fmsubadd_v8df_mask_round */
              if (!nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4212; /* avx512f_fmsubadd_v8df_mask3_round */

            case E_V4DFmode:
              if (pattern1586 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4196; /* avx512vl_fmsubadd_v4df_mask_round */
              if (!nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4214; /* avx512vl_fmsubadd_v4df_mask3_round */

            case E_V2DFmode:
              if (pattern1586 (x2, 
E_V2DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V2DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4198; /* avx512vl_fmsubadd_v2df_mask_round */
              if (!nonimmediate_operand (operands[3], E_V2DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4216; /* avx512vl_fmsubadd_v2df_mask3_round */

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
recog_230 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[4] = x5;
  if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
    return -1;
  x6 = XEXP (x3, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      x7 = XEXP (x3, 2);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1408 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3801; /* *fma_fmadd_v32hf_round */

            case E_V16HFmode:
              if (pattern1408 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3805; /* *fma_fmadd_v16hf_round */

            case E_V16SFmode:
              if (pattern1408 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3813; /* *fma_fmadd_v16sf_round */

            case E_V8SFmode:
              if (pattern1408 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3817; /* *fma_fmadd_v8sf_round */

            case E_V8DFmode:
              if (pattern1408 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3824; /* *fma_fmadd_v8df_round */

            case E_V4DFmode:
              if (pattern1408 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3828; /* *fma_fmadd_v4df_round */

            default:
              return -1;
            }

        case NEG:
          x8 = XEXP (x7, 0);
          operands[3] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1409 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3870; /* *fma_fmsub_v32hf_round */

            case E_V16HFmode:
              if (pattern1409 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3874; /* *fma_fmsub_v16hf_round */

            case E_V16SFmode:
              if (pattern1409 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3882; /* *fma_fmsub_v16sf_round */

            case E_V8SFmode:
              if (pattern1409 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3886; /* *fma_fmsub_v8sf_round */

            case E_V8DFmode:
              if (pattern1409 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3893; /* *fma_fmsub_v8df_round */

            case E_V4DFmode:
              if (pattern1409 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3897; /* *fma_fmsub_v4df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x7 = XEXP (x3, 2);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1410 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
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
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3939; /* *fma_fnmadd_v32hf_round */

            case E_V16HFmode:
              if (pattern1410 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
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
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3943; /* *fma_fnmadd_v16hf_round */

            case E_V16SFmode:
              if (pattern1410 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
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
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3951; /* *fma_fnmadd_v16sf_round */

            case E_V8SFmode:
              if (pattern1410 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
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
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3955; /* *fma_fnmadd_v8sf_round */

            case E_V8DFmode:
              if (pattern1410 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
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
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3962; /* *fma_fnmadd_v8df_round */

            case E_V4DFmode:
              if (pattern1410 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
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
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3966; /* *fma_fnmadd_v4df_round */

            default:
              return -1;
            }

        case NEG:
          x8 = XEXP (x7, 0);
          operands[3] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1352 (x2, 
E_V4SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return -1;
              return 4006; /* *fma_fnmsub_v4sf */

            case E_V2DFmode:
              if (pattern1352 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return -1;
              return 4010; /* *fma_fnmsub_v2df */

            case E_V8SFmode:
              if (pattern1411 (x2, 
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
                return 4014; /* *fma_fnmsub_v8sf */
              if (!register_operand (operands[1], E_V8SFmode)
                  || !register_operand (operands[2], E_V8SFmode)
                  || !register_operand (operands[3], E_V8SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
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
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4038; /* *fma_fnmsub_v8sf_round */

            case E_V4DFmode:
              if (pattern1411 (x2, 
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
                return 4018; /* *fma_fnmsub_v4df */
              if (!register_operand (operands[1], E_V4DFmode)
                  || !register_operand (operands[2], E_V4DFmode)
                  || !register_operand (operands[3], E_V4DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
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
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4049; /* *fma_fnmsub_v4df_round */

            case E_V32HFmode:
              if (pattern1412 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
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
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4022; /* *fma_fnmsub_v32hf_round */

            case E_V16HFmode:
              if (pattern1412 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
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
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4026; /* *fma_fnmsub_v16hf_round */

            case E_V16SFmode:
              if (pattern1412 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
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
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4034; /* *fma_fnmsub_v16sf_round */

            case E_V8DFmode:
              if (pattern1412 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
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
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4045; /* *fma_fnmsub_v8df_round */

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
recog_248 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 2);
  switch (GET_CODE (x4))
    {
    case LT:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (pattern658 (x3))
        {
        case 0:
          if ((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3057; /* *minmaxv8sf3_2 */
          break;

        case 1:
          if (
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
            return 3058; /* *minmaxv4sf3_2 */
          break;

        case 2:
          if ((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3059; /* *minmaxv4df3_2 */
          break;

        case 3:
          if ((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 3060; /* *minmaxv2df3_2 */
          break;

        case 4:
          if ((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8686; /* *avx_blendvps256_lt */
          break;

        case 5:
          if (
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8687; /* *sse4_1_blendvps_lt */
          break;

        case 6:
          if ((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8688; /* *avx_blendvpd256_lt */
          break;

        case 7:
          if ((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8689; /* *sse4_1_blendvpd_lt */
          break;

        case 8:
          if ((
#line 23911 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 8733; /* *avx2_pblendvb_lt */
          break;

        case 9:
          if (
#line 23911 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8734; /* *sse4_1_pblendvb_lt */
          break;

        default:
          break;
        }
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != SUBREG)
        return -1;
      switch (pattern660 (x3))
        {
        case 0:
          if (!(
#line 23961 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8737; /* *avx2_pblendvb_lt_subreg_not */

        case 1:
          if (!
#line 23961 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()))
            return -1;
          return 8738; /* *sse4_1_pblendvb_lt_subreg_not */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[3] = x4;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1026 (x3, 
E_V8SFmode) == 0
              && (
#line 23517 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8680; /* avx_blendvps256 */
          break;

        case E_V4SFmode:
          if (pattern1026 (x3, 
E_V4SFmode) == 0
              && 
#line 23517 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8681; /* sse4_1_blendvps */
          break;

        case E_V4DFmode:
          if (pattern1026 (x3, 
E_V4DFmode) == 0
              && (
#line 23517 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8682; /* avx_blendvpd256 */
          break;

        case E_V2DFmode:
          if (pattern1026 (x3, 
E_V2DFmode) == 0
              && (
#line 23517 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8683; /* sse4_1_blendvpd */
          break;

        default:
          break;
        }
      operands[1] = x5;
      operands[2] = x7;
      if (GET_CODE (x4) == SUBREG
          && known_eq (SUBREG_BYTE (x4), 0))
        {
          x6 = XEXP (x4, 0);
          switch (GET_CODE (x6))
            {
            case LT:
              x8 = XEXP (x6, 0);
              operands[3] = x8;
              switch (pattern1227 (x3))
                {
                case 0:
                  if (
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8694; /* *sse4_1_blendvps_ltint */
                  break;

                case 1:
                  if (
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8695; /* *sse4_1_blendvpd_ltint */
                  break;

                case 2:
                  if ((
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8696; /* *avx_blendvps256_ltint */
                  break;

                case 3:
                  if ((
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8697; /* *avx_blendvpd256_ltint */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x8) == SUBREG)
                {
                  switch (pattern1228 (x3))
                    {
                    case 0:
                      if (
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8702; /* *sse4_1_blendvps_not_ltint */
                      break;

                    case 1:
                      if (
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8703; /* *sse4_1_blendvpd_not_ltint */
                      break;

                    case 2:
                      if ((
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8704; /* *avx_blendvps256_not_ltint */
                      break;

                    case 3:
                      if ((
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8705; /* *avx_blendvpd256_not_ltint */
                      break;

                    default:
                      break;
                    }
                }
              break;

            case GT:
              x8 = XEXP (x6, 0);
              operands[3] = x8;
              switch (pattern1229 (x3))
                {
                case 0:
                  if (
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8698; /* *sse4_1_blendvps_gtint */
                  break;

                case 1:
                  if (
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8699; /* *sse4_1_blendvpd_gtint */
                  break;

                case 2:
                  if ((
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8700; /* *avx_blendvps256_gtint */
                  break;

                case 3:
                  if ((
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8701; /* *avx_blendvpd256_gtint */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x8) == SUBREG)
                {
                  switch (pattern1230 (x3))
                    {
                    case 0:
                      if (
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8706; /* *sse4_1_blendvps_not_gtint */
                      break;

                    case 1:
                      if (
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8707; /* *sse4_1_blendvpd_not_gtint */
                      break;

                    case 2:
                      if ((
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8708; /* *avx_blendvps256_not_gtint */
                      break;

                    case 3:
                      if ((
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8709; /* *avx_blendvpd256_not_gtint */
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
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern1026 (x3, 
E_V32QImode) != 0
              || !(
#line 23860 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8731; /* avx2_pblendvb */

        case E_V16QImode:
          if (pattern1026 (x3, 
E_V16QImode) != 0
              || !
#line 23860 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8732; /* sse4_1_pblendvb */

        default:
          return -1;
        }

    case GT:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (pattern663 (x3))
        {
        case 0:
          if ((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8690; /* *avx_blendvps256_gt */
          break;

        case 1:
          if (
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8691; /* *sse4_1_blendvps_gt */
          break;

        case 2:
          if ((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8692; /* *avx_blendvpd256_gt */
          break;

        case 3:
          if ((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8693; /* *sse4_1_blendvpd_gt */
          break;

        case 4:
          if ((
#line 23935 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 8735; /* *avx2_pblendvb_gt */
          break;

        case 5:
          if (
#line 23935 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8736; /* *sse4_1_pblendvb_gt */
          break;

        default:
          break;
        }
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != SUBREG)
        return -1;
      switch (pattern665 (x3))
        {
        case 0:
          if (!(
#line 23983 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8739; /* *avx2_pblendvb_gt_subreg_not */

        case 1:
          if (!
#line 23983 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()))
            return -1;
          return 8740; /* *sse4_1_pblendvb_gt_subreg_not */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_251 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x3, 0, 2);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (pattern916 (x3, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9902; /* avx512f_compressstorev16si_mask */

    case E_V16SFmode:
      if (pattern916 (x3, 
E_HImode, 
E_V16SFmode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9903; /* avx512f_compressstorev16sf_mask */

    case E_V8DImode:
      if (pattern916 (x3, 
E_QImode, 
E_V8DImode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9904; /* avx512f_compressstorev8di_mask */

    case E_V8DFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V8DFmode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9905; /* avx512f_compressstorev8df_mask */

    case E_V8SImode:
      if (pattern916 (x3, 
E_QImode, 
E_V8SImode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9906; /* avx512vl_compressstorev8si_mask */

    case E_V8SFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V8SFmode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9907; /* avx512vl_compressstorev8sf_mask */

    case E_V4DImode:
      if (pattern916 (x3, 
E_QImode, 
E_V4DImode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9908; /* avx512vl_compressstorev4di_mask */

    case E_V4DFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V4DFmode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9909; /* avx512vl_compressstorev4df_mask */

    case E_V4SImode:
      if (pattern916 (x3, 
E_QImode, 
E_V4SImode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9910; /* avx512vl_compressstorev4si_mask */

    case E_V4SFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V4SFmode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9911; /* avx512vl_compressstorev4sf_mask */

    case E_V2DImode:
      if (pattern916 (x3, 
E_QImode, 
E_V2DImode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9912; /* avx512vl_compressstorev2di_mask */

    case E_V2DFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V2DFmode) != 0
          || !(
#line 29680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9913; /* avx512vl_compressstorev2df_mask */

    case E_V64QImode:
      if (pattern916 (x3, 
E_DImode, 
E_V64QImode) != 0
          || !(
#line 29694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9914; /* compressstorev64qi_mask */

    case E_V16QImode:
      if (pattern916 (x3, 
E_HImode, 
E_V16QImode) != 0
          || !(
#line 29694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9915; /* compressstorev16qi_mask */

    case E_V32QImode:
      if (pattern916 (x3, 
E_SImode, 
E_V32QImode) != 0
          || !(
#line 29694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9916; /* compressstorev32qi_mask */

    case E_V32HImode:
      if (pattern916 (x3, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 29694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9917; /* compressstorev32hi_mask */

    case E_V16HImode:
      if (pattern916 (x3, 
E_HImode, 
E_V16HImode) != 0
          || !(
#line 29694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9918; /* compressstorev16hi_mask */

    case E_V8HImode:
      if (pattern916 (x3, 
E_QImode, 
E_V8HImode) != 0
          || !(
#line 29694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9919; /* compressstorev8hi_mask */

    default:
      return -1;
    }
}

 int
recog_254 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (pattern149 (x3, 
E_V16SFmode) != 0
          || !(
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9956; /* avx512dq_rangepv16sf */

    case E_V8SFmode:
      if (pattern149 (x3, 
E_V8SFmode) != 0
          || !(
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9960; /* avx512dq_rangepv8sf */

    case E_V4SFmode:
      if (pattern149 (x3, 
E_V4SFmode) != 0
          || !(
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9964; /* avx512dq_rangepv4sf */

    case E_V8DFmode:
      if (pattern149 (x3, 
E_V8DFmode) != 0
          || !(
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9966; /* avx512dq_rangepv8df */

    case E_V4DFmode:
      if (pattern149 (x3, 
E_V4DFmode) != 0
          || !(
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9970; /* avx512dq_rangepv4df */

    case E_V2DFmode:
      if (pattern149 (x3, 
E_V2DFmode) != 0
          || !(
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9974; /* avx512dq_rangepv2df */

    default:
      return -1;
    }
}

 int
recog_257 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern172 (x1))
    {
    case 0:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10197; /* vpshld_v32hi */

    case 1:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10199; /* vpshld_v16si */

    case 2:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10201; /* vpshld_v8di */

    case 3:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10203; /* vpshld_v16hi */

    case 4:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10205; /* vpshld_v8si */

    case 5:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10207; /* vpshld_v4di */

    case 6:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10209; /* vpshld_v8hi */

    case 7:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10211; /* vpshld_v4si */

    case 8:
      if (!(
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10213; /* vpshld_v2di */

    default:
      return -1;
    }
}

 int
recog_262 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32QImode:
      if (pattern149 (x3, 
E_V32QImode) != 0)
        return -1;
      if ((
#line 23795 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 8717; /* avx2_mpsadbw */
      if (!(
#line 23829 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 601 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8721; /* *avx2_mpsadbw */

    case E_V16QImode:
      if (pattern149 (x3, 
E_V16QImode) != 0)
        return -1;
      if (
#line 23795 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return 8718; /* sse4_1_mpsadbw */
      if (!
#line 23829 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 8723; /* *sse4_1_mpsadbw */

    case E_V64QImode:
      if (pattern149 (x3, 
E_V64QImode) != 0
          || !
#line 23817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
        return -1;
      return 8719; /* avx10_2_mpsadbw */

    default:
      return -1;
    }
}

 int
recog_266 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 175:
      return recog_239 (x1, insn, pnum_clobbers);

    case 178:
      return recog_232 (x1, insn, pnum_clobbers);

    case 63:
      switch (pattern150 (x1))
        {
        case 0:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3061; /* ieee_maxv32hf3 */

        case 1:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3069; /* ieee_maxv16hf3 */

        case 2:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3077; /* ieee_maxv8hf3 */

        case 3:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3081; /* ieee_maxv16sf3 */

        case 4:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3089; /* ieee_maxv8sf3 */

        case 5:
          if (!
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1))
            return -1;
          return 3097; /* ieee_maxv4sf3 */

        case 6:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3101; /* ieee_maxv8df3 */

        case 7:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3109; /* ieee_maxv4df3 */

        case 8:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3117; /* ieee_maxv2df3 */

        default:
          return -1;
        }

    case 62:
      switch (pattern150 (x1))
        {
        case 0:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3065; /* ieee_minv32hf3 */

        case 1:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3073; /* ieee_minv16hf3 */

        case 2:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3079; /* ieee_minv8hf3 */

        case 3:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3085; /* ieee_minv16sf3 */

        case 4:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3093; /* ieee_minv8sf3 */

        case 5:
          if (!
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1))
            return -1;
          return 3099; /* ieee_minv4sf3 */

        case 6:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3105; /* ieee_minv8df3 */

        case 7:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3113; /* ieee_minv4df3 */

        case 8:
          if (!(
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3119; /* ieee_minv2df3 */

        default:
          return -1;
        }

    case 192:
      return recog_238 (x1, insn, pnum_clobbers);

    case 221:
      switch (pattern152 (x1))
        {
        case 0:
          if (!(
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4375; /* avx512bw_fmulc_v32hf */

        case 1:
          if (!(
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4383; /* avx512vl_fmulc_v16hf */

        case 2:
          if (!(
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4391; /* avx512fp16_fmulc_v8hf */

        default:
          return -1;
        }

    case 222:
      switch (pattern152 (x1))
        {
        case 0:
          if (!(
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4379; /* avx512bw_fcmulc_v32hf */

        case 1:
          if (!(
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4387; /* avx512vl_fcmulc_v16hf */

        case 2:
          if (!(
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4393; /* avx512fp16_fcmulc_v8hf */

        default:
          return -1;
        }

    case 58:
      return recog_240 (x1, insn, pnum_clobbers);

    case 94:
      return recog_235 (x1, insn, pnum_clobbers);

    case 188:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern160 (x2, 
E_V16SImode, 
E_V32HImode) != 0
              || !(
#line 16671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7585; /* avx512bw_pmaddwd512v32hi */

        case E_V8SImode:
          if (pattern160 (x2, 
E_V8SImode, 
E_V16HImode) != 0
              || !(
#line 16671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7587; /* avx512bw_pmaddwd512v16hi */

        case E_V4SImode:
          if (pattern160 (x2, 
E_V4SImode, 
E_V8HImode) != 0
              || !
#line 16671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1))
            return -1;
          return 7589; /* avx512bw_pmaddwd512v8hi */

        default:
          return -1;
        }

    case 57:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern733 (x2, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 19376 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8310; /* avx512bw_packuswb */

        case E_V32QImode:
          if (pattern733 (x2, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 19376 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8312; /* avx2_packuswb */

        case E_V16QImode:
          if (pattern733 (x2, 
E_V8HImode, 
E_V16QImode) != 0
              || !
#line 19376 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8314; /* sse2_packuswb */

        case E_V32HImode:
          if (pattern733 (x2, 
E_V16SImode, 
E_V32HImode) != 0
              || !(
#line 23841 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8725; /* avx512bw_packusdw */

        case E_V16HImode:
          if (pattern733 (x2, 
E_V8SImode, 
E_V16HImode) != 0
              || !(
#line 23841 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8727; /* avx2_packusdw */

        case E_V8HImode:
          if (pattern733 (x2, 
E_V4SImode, 
E_V8HImode) != 0
              || !
#line 23841 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
            return -1;
          return 8729; /* sse4_1_packusdw */

        default:
          return -1;
        }

    case 190:
      if (pattern153 (x1) != 0
          || !
#line 20713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8440; /* *avx512bw_pshuflwv32hi */

    case 189:
      if (pattern153 (x1) != 0
          || !
#line 20889 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8446; /* *avx512bw_pshufhwv32hi */

    case 56:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          if (pattern782 (x2, 
E_V64QImode, 
E_V8DImode) != 0
              || !(
#line 21916 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && 
#line 702 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8502; /* *avx512f_psadbw */

        case E_V4DImode:
          if (pattern782 (x2, 
E_V32QImode, 
E_V4DImode) != 0
              || !(
#line 21916 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 702 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8503; /* *avx2_psadbw */

        case E_V2DImode:
          if (pattern782 (x2, 
E_V16QImode, 
E_V2DImode) != 0
              || !
#line 21916 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
            return -1;
          return 8504; /* *sse2_psadbw */

        default:
          return -1;
        }

    case 187:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern160 (x2, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 22792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8603; /* avx512bw_pmaddubsw512v8hi */

        case E_V16HImode:
          if (pattern160 (x2, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 22792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8605; /* avx512bw_pmaddubsw512v16hi */

        case E_V32HImode:
          if (pattern160 (x2, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 22792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8607; /* avx512bw_pmaddubsw512v32hi */

        default:
          return -1;
        }

    case 52:
      switch (pattern154 (x1))
        {
        case 0:
          if (!(
#line 23117 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8621; /* avx512bw_pshufbv64qi3 */

        case 1:
          if (!(
#line 23117 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8623; /* avx2_pshufbv32qi3 */

        case 2:
          if (!
#line 23117 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1))
            return -1;
          return 8625; /* ssse3_pshufbv16qi3 */

        default:
          return -1;
        }

    case 120:
      return recog_243 (x1, insn, pnum_clobbers);

    case 123:
      if (pattern155 (x1, 
E_V16QImode, 
E_V2DImode) != 0
          || !
#line 23447 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8673; /* sse4a_extrq */

    case 125:
      if (pattern156 (x1, 
E_V2DImode) != 0
          || !
#line 23473 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8675; /* sse4a_insertq */

    case 130:
      return recog_234 (x1, insn, pnum_clobbers);

    case 137:
      if (pattern157 (x1, 
E_V2DImode) != 0
          || !
#line 27097 "../../gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9078; /* aesenc */

    case 138:
      if (pattern157 (x1, 
E_V2DImode) != 0
          || !
#line 27115 "../../gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9079; /* aesenclast */

    case 139:
      if (pattern157 (x1, 
E_V2DImode) != 0
          || !
#line 27133 "../../gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9080; /* aesdec */

    case 140:
      if (pattern157 (x1, 
E_V2DImode) != 0
          || !
#line 27151 "../../gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9081; /* aesdeclast */

    case 142:
      if (GET_MODE (x2) != E_V2DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!vector_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode)
          || !
#line 27181 "../../gcc/config/i386/sse.md"
(TARGET_AES))
        return -1;
      return 9083; /* aeskeygenassist */

    case 151:
      return recog_236 (x1, insn, pnum_clobbers);

    case 144:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern785 (x2, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9348; /* avx512f_vpermilvarv16sf3 */

        case E_V8SFmode:
          if (pattern785 (x2, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9350; /* avx_vpermilvarv8sf3 */

        case E_V4SFmode:
          if (pattern785 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
              || !
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9352; /* avx_vpermilvarv4sf3 */

        case E_V8DFmode:
          if (pattern785 (x2, 
E_V8DImode, 
E_V8DFmode) != 0
              || !(
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9354; /* avx512f_vpermilvarv8df3 */

        case E_V4DFmode:
          if (pattern785 (x2, 
E_V4DImode, 
E_V4DFmode) != 0
              || !(
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9356; /* avx_vpermilvarv4df3 */

        case E_V2DFmode:
          if (pattern785 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
              || !(
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9358; /* avx_vpermilvarv2df3 */

        default:
          return -1;
        }

    case 47:
      return recog_241 (x1, insn, pnum_clobbers);

    case 150:
      return recog_242 (x1, insn, pnum_clobbers);

    case 160:
      return recog_233 (x1, insn, pnum_clobbers);

    case 166:
      return recog_237 (x1, insn, pnum_clobbers);

    case 179:
      if (pattern157 (x1, 
E_V4SImode) != 0
          || !
#line 29958 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10080; /* sha1msg1 */

    case 180:
      if (pattern157 (x1, 
E_V4SImode) != 0
          || !
#line 29969 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10081; /* sha1msg2 */

    case 181:
      if (pattern157 (x1, 
E_V4SImode) != 0
          || !
#line 29980 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10082; /* sha1nexte */

    case 183:
      if (pattern157 (x1, 
E_V4SImode) != 0
          || !
#line 30004 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10084; /* sha256msg1 */

    case 184:
      if (pattern157 (x1, 
E_V4SImode) != 0
          || !
#line 30015 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10085; /* sha256msg2 */

    case 239:
      if (pattern155 (x1, 
E_V2DImode, 
E_V4DImode) != 0
          || !
#line 30077 "../../gcc/config/i386/sse.md"
(TARGET_SHA512))
        return -1;
      return 10090; /* vsha512msg1 */

    case 240:
      if (pattern156 (x1, 
E_V4DImode) != 0
          || !
#line 30088 "../../gcc/config/i386/sse.md"
(TARGET_SHA512))
        return -1;
      return 10091; /* vsha512msg2 */

    case 242:
      switch (pattern158 (x1))
        {
        case 0:
          if (!(
#line 30111 "../../gcc/config/i386/sse.md"
(TARGET_SM4) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10093; /* vsm4key4_v16si */

        case 1:
          if (!
#line 30111 "../../gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10094; /* vsm4key4_v8si */

        case 2:
          if (!
#line 30111 "../../gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10095; /* vsm4key4_v4si */

        default:
          return -1;
        }

    case 243:
      switch (pattern158 (x1))
        {
        case 0:
          if (!(
#line 30124 "../../gcc/config/i386/sse.md"
(TARGET_SM4) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10096; /* vsm4rnds4_v16si */

        case 1:
          if (!
#line 30124 "../../gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10097; /* vsm4rnds4_v8si */

        case 2:
          if (!
#line 30124 "../../gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10098; /* vsm4rnds4_v4si */

        default:
          return -1;
        }

    case 197:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern60 (x2, 
E_V64QImode) != 0
              || !(
#line 30270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10123; /* vpmultishiftqbv64qi */

        case E_V16QImode:
          if (pattern60 (x2, 
E_V16QImode) != 0
              || !(
#line 30270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10125; /* vpmultishiftqbv16qi */

        case E_V32QImode:
          if (pattern60 (x2, 
E_V32QImode) != 0
              || !(
#line 30270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10127; /* vpmultishiftqbv32qi */

        default:
          return -1;
        }

    case 200:
      switch (pattern154 (x1))
        {
        case 0:
          if (!(
#line 30379 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10173; /* vgf2p8mulb_v64qi */

        case 1:
          if (!(
#line 30379 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10175; /* vgf2p8mulb_v32qi */

        case 2:
          if (!
#line 30379 "../../gcc/config/i386/sse.md"
(TARGET_GFNI))
            return -1;
          return 10177; /* vgf2p8mulb_v16qi */

        default:
          return -1;
        }

    case 209:
      switch (pattern159 (x1))
        {
        case 0:
          if (!
#line 30855 "../../gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10305; /* vaesdec_v32qi */

        case 1:
          if (!(
#line 30855 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10306; /* vaesdec_v16qi */

        case 2:
          if (!(
#line 30855 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10307; /* vaesdec_v64qi */

        default:
          return -1;
        }

    case 210:
      switch (pattern159 (x1))
        {
        case 0:
          if (!
#line 30869 "../../gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10308; /* vaesdeclast_v32qi */

        case 1:
          if (!(
#line 30869 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10309; /* vaesdeclast_v16qi */

        case 2:
          if (!(
#line 30869 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10310; /* vaesdeclast_v64qi */

        default:
          return -1;
        }

    case 211:
      switch (pattern159 (x1))
        {
        case 0:
          if (!
#line 30883 "../../gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10311; /* vaesenc_v32qi */

        case 1:
          if (!(
#line 30883 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10312; /* vaesenc_v16qi */

        case 2:
          if (!(
#line 30883 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10313; /* vaesenc_v64qi */

        default:
          return -1;
        }

    case 212:
      switch (pattern159 (x1))
        {
        case 0:
          if (!
#line 30897 "../../gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10314; /* vaesenclast_v32qi */

        case 1:
          if (!(
#line 30897 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10315; /* vaesenclast_v16qi */

        case 2:
          if (!(
#line 30897 "../../gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10316; /* vaesenclast_v64qi */

        default:
          return -1;
        }

    case 249:
      switch (pattern161 (x1))
        {
        case 0:
          if (!(
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10443; /* vcvtne2ph2bf8v32hf */

        case 1:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10451; /* vcvtne2ph2bf8v16hf */

        case 2:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10459; /* vcvtne2ph2bf8v8hf */

        default:
          return -1;
        }

    case 250:
      switch (pattern161 (x1))
        {
        case 0:
          if (!(
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10445; /* vcvtne2ph2bf8sv32hf */

        case 1:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10453; /* vcvtne2ph2bf8sv16hf */

        case 2:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10461; /* vcvtne2ph2bf8sv8hf */

        default:
          return -1;
        }

    case 251:
      switch (pattern161 (x1))
        {
        case 0:
          if (!(
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10447; /* vcvtne2ph2hf8v32hf */

        case 1:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10455; /* vcvtne2ph2hf8v16hf */

        case 2:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10463; /* vcvtne2ph2hf8v8hf */

        default:
          return -1;
        }

    case 252:
      switch (pattern161 (x1))
        {
        case 0:
          if (!(
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10449; /* vcvtne2ph2hf8sv32hf */

        case 1:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10457; /* vcvtne2ph2hf8sv16hf */

        case 2:
          if (!
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10465; /* vcvtne2ph2hf8sv8hf */

        default:
          return -1;
        }

    case 245:
      switch (pattern163 (x1))
        {
        case 0:
          if (!(
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10475; /* vcvtbiasph2bf8v32hf */

        case 1:
          if (!
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10483; /* vcvtbiasph2bf8v16hf */

        default:
          return -1;
        }

    case 246:
      switch (pattern163 (x1))
        {
        case 0:
          if (!(
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10477; /* vcvtbiasph2bf8sv32hf */

        case 1:
          if (!
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10485; /* vcvtbiasph2bf8sv16hf */

        default:
          return -1;
        }

    case 247:
      switch (pattern163 (x1))
        {
        case 0:
          if (!(
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10479; /* vcvtbiasph2hf8v32hf */

        case 1:
          if (!
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10487; /* vcvtbiasph2hf8v16hf */

        default:
          return -1;
        }

    case 248:
      switch (pattern163 (x1))
        {
        case 0:
          if (!(
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10481; /* vcvtbiasph2hf8sv32hf */

        case 1:
          if (!
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10489; /* vcvtbiasph2hf8sv16hf */

        default:
          return -1;
        }

    case 258:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern60 (x2, 
E_V32BFmode) != 0
              || !(
#line 32084 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10584; /* avx10_2_scalefpbf16_v32bf */

        case E_V16BFmode:
          if (pattern60 (x2, 
E_V16BFmode) != 0
              || !
#line 32084 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10586; /* avx10_2_scalefpbf16_v16bf */

        case E_V8BFmode:
          if (pattern60 (x2, 
E_V8BFmode) != 0
              || !
#line 32084 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10588; /* avx10_2_scalefpbf16_v8bf */

        default:
          return -1;
        }

    case 259:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10698; /* avx10_2_rndscalenepbf16_v32bf */

        case 1:
          if (!
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10704; /* avx10_2_rndscalenepbf16_v16bf */

        case 2:
          if (!
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10710; /* avx10_2_rndscalenepbf16_v8bf */

        default:
          return -1;
        }

    case 260:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10700; /* avx10_2_reducenepbf16_v32bf */

        case 1:
          if (!
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10706; /* avx10_2_reducenepbf16_v16bf */

        case 2:
          if (!
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10712; /* avx10_2_reducenepbf16_v8bf */

        default:
          return -1;
        }

    case 261:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10702; /* avx10_2_getmantpbf16_v32bf */

        case 1:
          if (!
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10708; /* avx10_2_getmantpbf16_v16bf */

        case 2:
          if (!
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10714; /* avx10_2_getmantpbf16_v8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_288 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern930 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 8L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 9L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 10L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 11L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 12L)
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (XWINT (x9, 0) != 13L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 14L)
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (XWINT (x11, 0) != 15L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!nonimmediate_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || !register_operand (operands[1], E_V16SFmode)
              || !(
#line 12707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5352; /* vec_extract_hi_v16sf */

        case E_V8SImode:
          if (!nonimmediate_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_V16SImode)
              || !(
#line 12707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5353; /* vec_extract_hi_v16si */

        case E_V8HImode:
          if (!nonimmediate_operand (operands[0], E_V8HImode)
              || GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[1], E_V16HImode)
              || !
#line 13095 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5383; /* vec_extract_hi_v16hi */

        case E_V8HFmode:
          if (!nonimmediate_operand (operands[0], E_V8HFmode)
              || GET_MODE (x2) != E_V8HFmode
              || !register_operand (operands[1], E_V16HFmode)
              || !
#line 13095 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5384; /* vec_extract_hi_v16hf */

        case E_V8BFmode:
          if (!nonimmediate_operand (operands[0], E_V8BFmode)
              || GET_MODE (x2) != E_V8BFmode
              || !register_operand (operands[1], E_V16BFmode)
              || !
#line 13095 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5385; /* vec_extract_hi_v16bf */

        default:
          return -1;
        }

    case 0L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 1L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 2L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 3L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 4L)
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (XWINT (x9, 0) != 5L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 6L)
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (XWINT (x11, 0) != 7L)
        return -1;
      switch (pattern1533 (x2))
        {
        case 0:
          if (!(
#line 12812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5356; /* vec_extract_lo_v16sf */

        case 1:
          if (!(
#line 12812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5357; /* vec_extract_lo_v16si */

        case 2:
          if (!
#line 13081 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5380; /* vec_extract_lo_v16hi */

        case 3:
          if (!
#line 13081 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5381; /* vec_extract_lo_v16hf */

        case 4:
          if (!
#line 13081 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5382; /* vec_extract_lo_v16bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_296 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern673 (x3) != 0
      || !nonimmediate_operand (operands[0], E_V32QImode)
      || GET_MODE (x2) != E_V32QImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (pattern1764 (x3) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 16);
      if (XWINT (x5, 0) != 16L)
        return -1;
      x6 = XVECEXP (x3, 0, 17);
      if (XWINT (x6, 0) != 17L)
        return -1;
      x7 = XVECEXP (x3, 0, 18);
      if (XWINT (x7, 0) != 18L)
        return -1;
      x8 = XVECEXP (x3, 0, 19);
      if (XWINT (x8, 0) != 19L)
        return -1;
      x9 = XVECEXP (x3, 0, 20);
      if (XWINT (x9, 0) != 20L)
        return -1;
      x10 = XVECEXP (x3, 0, 21);
      if (XWINT (x10, 0) != 21L)
        return -1;
      x11 = XVECEXP (x3, 0, 22);
      if (XWINT (x11, 0) != 22L)
        return -1;
      x12 = XVECEXP (x3, 0, 23);
      if (XWINT (x12, 0) != 23L
          || pattern1882 (x3) != 0)
        return -1;
      x13 = XVECEXP (x3, 0, 28);
      if (XWINT (x13, 0) != 28L)
        return -1;
      x14 = XVECEXP (x3, 0, 29);
      if (XWINT (x14, 0) != 29L)
        return -1;
      x15 = XVECEXP (x3, 0, 30);
      if (XWINT (x15, 0) != 30L)
        return -1;
      x16 = XVECEXP (x3, 0, 31);
      if (XWINT (x16, 0) != 31L
          || !nonimmediate_operand (operands[1], E_V64QImode)
          || !
#line 13127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return -1;
      return 5386; /* vec_extract_lo_v64qi */

    case 32L:
      x17 = XVECEXP (x3, 0, 1);
      if (XWINT (x17, 0) != 33L)
        return -1;
      x18 = XVECEXP (x3, 0, 2);
      if (XWINT (x18, 0) != 34L)
        return -1;
      x19 = XVECEXP (x3, 0, 3);
      if (XWINT (x19, 0) != 35L)
        return -1;
      x20 = XVECEXP (x3, 0, 4);
      if (XWINT (x20, 0) != 36L)
        return -1;
      x21 = XVECEXP (x3, 0, 5);
      if (XWINT (x21, 0) != 37L)
        return -1;
      x22 = XVECEXP (x3, 0, 6);
      if (XWINT (x22, 0) != 38L)
        return -1;
      x23 = XVECEXP (x3, 0, 7);
      if (XWINT (x23, 0) != 39L)
        return -1;
      x24 = XVECEXP (x3, 0, 8);
      if (XWINT (x24, 0) != 40L)
        return -1;
      x25 = XVECEXP (x3, 0, 9);
      if (XWINT (x25, 0) != 41L)
        return -1;
      x26 = XVECEXP (x3, 0, 10);
      if (XWINT (x26, 0) != 42L)
        return -1;
      x27 = XVECEXP (x3, 0, 11);
      if (XWINT (x27, 0) != 43L)
        return -1;
      x28 = XVECEXP (x3, 0, 12);
      if (XWINT (x28, 0) != 44L)
        return -1;
      x29 = XVECEXP (x3, 0, 13);
      if (XWINT (x29, 0) != 45L)
        return -1;
      x30 = XVECEXP (x3, 0, 14);
      if (XWINT (x30, 0) != 46L)
        return -1;
      x31 = XVECEXP (x3, 0, 15);
      if (XWINT (x31, 0) != 47L)
        return -1;
      x5 = XVECEXP (x3, 0, 16);
      if (XWINT (x5, 0) != 48L)
        return -1;
      x6 = XVECEXP (x3, 0, 17);
      if (XWINT (x6, 0) != 49L)
        return -1;
      x7 = XVECEXP (x3, 0, 18);
      if (XWINT (x7, 0) != 50L)
        return -1;
      x8 = XVECEXP (x3, 0, 19);
      if (XWINT (x8, 0) != 51L)
        return -1;
      x9 = XVECEXP (x3, 0, 20);
      if (XWINT (x9, 0) != 52L)
        return -1;
      x10 = XVECEXP (x3, 0, 21);
      if (XWINT (x10, 0) != 53L)
        return -1;
      x11 = XVECEXP (x3, 0, 22);
      if (XWINT (x11, 0) != 54L)
        return -1;
      x12 = XVECEXP (x3, 0, 23);
      if (XWINT (x12, 0) != 55L)
        return -1;
      x32 = XVECEXP (x3, 0, 24);
      if (XWINT (x32, 0) != 56L)
        return -1;
      x33 = XVECEXP (x3, 0, 25);
      if (XWINT (x33, 0) != 57L)
        return -1;
      x34 = XVECEXP (x3, 0, 26);
      if (XWINT (x34, 0) != 58L)
        return -1;
      x35 = XVECEXP (x3, 0, 27);
      if (XWINT (x35, 0) != 59L)
        return -1;
      x13 = XVECEXP (x3, 0, 28);
      if (XWINT (x13, 0) != 60L)
        return -1;
      x14 = XVECEXP (x3, 0, 29);
      if (XWINT (x14, 0) != 61L)
        return -1;
      x15 = XVECEXP (x3, 0, 30);
      if (XWINT (x15, 0) != 62L)
        return -1;
      x16 = XVECEXP (x3, 0, 31);
      if (XWINT (x16, 0) != 63L
          || !register_operand (operands[1], E_V64QImode)
          || !
#line 13176 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 5387; /* vec_extract_hi_v64qi */

    default:
      return -1;
    }
}

 int
recog_305 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5526; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5553; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5580; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5607; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5634; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5661; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5688; /* *avx512f_vpternlogv16si_1 */

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
          return 5715; /* *avx512vl_vpternlogv8si_1 */

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
          return 5742; /* *avx512vl_vpternlogv4si_1 */

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
          return 5769; /* *avx512f_vpternlogv8di_1 */

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
          return 5796; /* *avx512vl_vpternlogv4di_1 */

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
          return 5823; /* *avx512vl_vpternlogv2di_1 */

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
          return 5529; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5556; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5583; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5610; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5637; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5664; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5691; /* *avx512f_vpternlogv16si_1 */

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
          return 5718; /* *avx512vl_vpternlogv8si_1 */

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
          return 5745; /* *avx512vl_vpternlogv4si_1 */

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
          return 5772; /* *avx512f_vpternlogv8di_1 */

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
          return 5799; /* *avx512vl_vpternlogv4di_1 */

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
          return 5826; /* *avx512vl_vpternlogv2di_1 */

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
          return 5532; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5559; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5586; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5613; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5640; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5667; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5694; /* *avx512f_vpternlogv16si_1 */

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
          return 5721; /* *avx512vl_vpternlogv8si_1 */

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
          return 5748; /* *avx512vl_vpternlogv4si_1 */

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
          return 5775; /* *avx512f_vpternlogv8di_1 */

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
          return 5802; /* *avx512vl_vpternlogv4di_1 */

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
          return 5829; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6816; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6825; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6834; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6843; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6852; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6861; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6870; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6879; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6888; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6897; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6906; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6915; /* *avx512vl_vpternlogv2di_3 */

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
          return 6174; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6201; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6228; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6255; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6282; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6309; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6336; /* *avx512f_vpternlogv16si_2 */

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
          return 6363; /* *avx512vl_vpternlogv8si_2 */

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
          return 6390; /* *avx512vl_vpternlogv4si_2 */

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
          return 6417; /* *avx512f_vpternlogv8di_2 */

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
          return 6444; /* *avx512vl_vpternlogv4di_2 */

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
          return 6471; /* *avx512vl_vpternlogv2di_2 */

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
          return 6177; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6204; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6231; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6258; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6285; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6312; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6339; /* *avx512f_vpternlogv16si_2 */

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
          return 6366; /* *avx512vl_vpternlogv8si_2 */

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
          return 6393; /* *avx512vl_vpternlogv4si_2 */

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
          return 6420; /* *avx512f_vpternlogv8di_2 */

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
          return 6447; /* *avx512vl_vpternlogv4di_2 */

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
          return 6474; /* *avx512vl_vpternlogv2di_2 */

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
          return 6180; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6207; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6234; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6261; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6288; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6315; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6342; /* *avx512f_vpternlogv16si_2 */

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
          return 6369; /* *avx512vl_vpternlogv8si_2 */

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
          return 6396; /* *avx512vl_vpternlogv4si_2 */

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
          return 6423; /* *avx512f_vpternlogv8di_2 */

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
          return 6450; /* *avx512vl_vpternlogv4di_2 */

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
          return 6477; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_314 (rtx x1 ATTRIBUTE_UNUSED,
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
              return 5840; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5867; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5894; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5921; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5948; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5975; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6002; /* *avx512f_vpternlogv16sf_1 */

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
              return 6029; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6056; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6083; /* *avx512f_vpternlogv8df_1 */

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
              return 6110; /* *avx512vl_vpternlogv4df_1 */

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
              return 6137; /* *avx512vl_vpternlogv2df_1 */

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
              return 5843; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5870; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5897; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5924; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5951; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5978; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6005; /* *avx512f_vpternlogv16sf_1 */

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
              return 6032; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6059; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6086; /* *avx512f_vpternlogv8df_1 */

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
              return 6113; /* *avx512vl_vpternlogv4df_1 */

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
              return 6140; /* *avx512vl_vpternlogv2df_1 */

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
              return 5846; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5873; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5900; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5927; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5954; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5981; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6008; /* *avx512f_vpternlogv16sf_1 */

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
              return 6035; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6062; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6089; /* *avx512f_vpternlogv8df_1 */

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
              return 6116; /* *avx512vl_vpternlogv4df_1 */

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
              return 6143; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6920; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6929; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6938; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6947; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6956; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6965; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6974; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6983; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6992; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7001; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7010; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7019; /* *avx512vl_vpternlogv2df_3 */

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
              return 6488; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6515; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6542; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6569; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6596; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6623; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6650; /* *avx512f_vpternlogv16sf_2 */

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
              return 6677; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6704; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6731; /* *avx512f_vpternlogv8df_2 */

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
              return 6758; /* *avx512vl_vpternlogv4df_2 */

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
              return 6785; /* *avx512vl_vpternlogv2df_2 */

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
              return 6491; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6518; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6545; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6572; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6599; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6626; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6653; /* *avx512f_vpternlogv16sf_2 */

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
              return 6680; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6707; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6734; /* *avx512f_vpternlogv8df_2 */

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
              return 6761; /* *avx512vl_vpternlogv4df_2 */

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
              return 6788; /* *avx512vl_vpternlogv2df_2 */

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
              return 6494; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6521; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6548; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6575; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6602; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6629; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6656; /* *avx512f_vpternlogv16sf_2 */

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
              return 6683; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6710; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6737; /* *avx512f_vpternlogv8df_2 */

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
              return 6764; /* *avx512vl_vpternlogv4df_2 */

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
              return 6791; /* *avx512vl_vpternlogv2df_2 */

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
              return 5849; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5876; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5903; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5930; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5957; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5984; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6011; /* *avx512f_vpternlogv16sf_1 */

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
              return 6038; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6065; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6092; /* *avx512f_vpternlogv8df_1 */

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
              return 6119; /* *avx512vl_vpternlogv4df_1 */

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
              return 6146; /* *avx512vl_vpternlogv2df_1 */

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
              return 5852; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5879; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5906; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5933; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5960; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5987; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6014; /* *avx512f_vpternlogv16sf_1 */

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
              return 6041; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6068; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6095; /* *avx512f_vpternlogv8df_1 */

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
              return 6122; /* *avx512vl_vpternlogv4df_1 */

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
              return 6149; /* *avx512vl_vpternlogv2df_1 */

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
              return 5855; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5882; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5909; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5936; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5963; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5990; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6017; /* *avx512f_vpternlogv16sf_1 */

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
              return 6044; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6071; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6098; /* *avx512f_vpternlogv8df_1 */

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
              return 6125; /* *avx512vl_vpternlogv4df_1 */

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
              return 6152; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6923; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6932; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6941; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6950; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6959; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6968; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6977; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6986; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6995; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7004; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7013; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7022; /* *avx512vl_vpternlogv2df_3 */

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
              return 6497; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6524; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6551; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6578; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6605; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6632; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6659; /* *avx512f_vpternlogv16sf_2 */

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
              return 6686; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6713; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6740; /* *avx512f_vpternlogv8df_2 */

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
              return 6767; /* *avx512vl_vpternlogv4df_2 */

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
              return 6794; /* *avx512vl_vpternlogv2df_2 */

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
              return 6500; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6527; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6554; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6581; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6608; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6635; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6662; /* *avx512f_vpternlogv16sf_2 */

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
              return 6689; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6716; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6743; /* *avx512f_vpternlogv8df_2 */

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
              return 6770; /* *avx512vl_vpternlogv4df_2 */

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
              return 6797; /* *avx512vl_vpternlogv2df_2 */

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
              return 6503; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6530; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6557; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6584; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6611; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6638; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6665; /* *avx512f_vpternlogv16sf_2 */

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
              return 6692; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6719; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6746; /* *avx512f_vpternlogv8df_2 */

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
              return 6773; /* *avx512vl_vpternlogv4df_2 */

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
              return 6800; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case XOR:
      return recog_309 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_375 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  switch (pattern558 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 1);
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 6465 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 266; /* *adddi3_doubleword */
          if (!x86_64_general_operand (operands[2], E_DImode)
              || !(
#line 6615 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 285; /* *adddi_1 */

        case E_TImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern564 (x5, 
E_TImode) != 0
              || !(
#line 6465 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 267; /* *addti3_doubleword */

        case E_SImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern566 (x5) != 0
              || !
#line 6615 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          return 283; /* *addsi_1 */

        case E_HImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern565 (x5, 
E_HImode) != 0
              || !
#line 6813 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          return 298; /* *addhi_1 */

        case E_QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern565 (x5, 
E_QImode) != 0
              || !
#line 6870 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          return 300; /* *addqi_1 */

        case E_V2QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern568 (x5, 
E_V2QImode) != 0
              || !
#line 3241 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
            return -1;
          return 2130; /* addv2qi3 */

        default:
          return -1;
        }

    case 1:
      x2 = XVECEXP (x1, 0, 1);
      if (XVECLEN (x2, 0) != 1)
        return -1;
      x6 = XVECEXP (x2, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (XINT (x2, 1))
        {
        case 110:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern209 (x5, 
E_V2SFmode) != 0
              || !
#line 746 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)))
            return -1;
          return 2046; /* *mmx_addv2sf3 */

        case 174:
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern568 (x5, 
E_QImode) != 0
                  || !(
#line 2253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2591; /* kaddqi */

            case E_HImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern568 (x5, 
E_HImode) != 0
                  || !(
#line 2253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2592; /* kaddhi */

            case E_SImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern568 (x5, 
E_SImode) != 0
                  || !(
#line 2253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return -1;
              return 2593; /* kaddsi */

            case E_DImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern568 (x5, 
E_DImode) != 0
                  || !(
#line 2253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return -1;
              return 2594; /* kadddi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (!
#line 6946 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      return 301; /* *addqi_1_slp */

    case 3:
      if (!
#line 6946 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      return 302; /* *addhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_382 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  if (pattern574 (x1, 
PLUS, 
E_CCZmode) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_CCZmode)
    return -1;
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[0] = x5;
  x6 = XVECEXP (x4, 0, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_SImode))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 1);
  x9 = XEXP (x8, 1);
  operands[1] = x9;
  x10 = XEXP (x8, 0);
  if (!rtx_equal_p (x10, operands[0]))
    return -1;
  x11 = XEXP (x7, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_QImode:
      if (pattern1749 (x8, 
E_QImode) != 0
          || !
#line 778 "../../gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])))
        return -1;
      return 11031; /* *atomic_fetch_add_cmpqi */

    case E_HImode:
      if (pattern1749 (x8, 
E_HImode) != 0
          || !
#line 778 "../../gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])))
        return -1;
      return 11032; /* *atomic_fetch_add_cmphi */

    case E_SImode:
      if (pattern1749 (x8, 
E_SImode) != 0
          || !
#line 778 "../../gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])))
        return -1;
      return 11033; /* *atomic_fetch_add_cmpsi */

    case E_DImode:
      if (pattern1749 (x8, 
E_DImode) != 0
          || !(
#line 778 "../../gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 11034; /* *atomic_fetch_add_cmpdi */

    default:
      return -1;
    }
}

 int
recog_385 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
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
      operands[1] = x6;
      res = recog_381 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x6) != SUBREG
          || pattern816 (x1) != 0
          || !flags_reg_operand (operands[4], E_VOIDmode))
        return -1;
      operands[5] = x3;
      if (!compare_operator (operands[5], E_VOIDmode)
          || GET_MODE (x5) != E_QImode)
        return -1;
      switch (pattern584 (x1))
        {
        case 0:
          if (!
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 782; /* *andqi_exthi_1_cc */

        case 1:
          if (!
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 785; /* *andqi_extsi_1_cc */

        case 2:
          if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 788; /* *andqi_extdi_1_cc */

        default:
          return -1;
        }

    case NOT:
      x7 = XEXP (x2, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x10 = XEXP (x5, 1);
      operands[2] = x10;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      switch (GET_MODE (x5))
        {
        case E_SImode:
          if (pattern1427 (x6, 
E_SImode) != 0
              || !
#line 13386 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 817; /* *andn_si_ccno */

        case E_DImode:
          if (pattern1427 (x6, 
E_DImode) != 0
              || !(
#line 13386 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 818; /* *andn_di_ccno */

        default:
          return -1;
        }

    case NEG:
      x7 = XEXP (x2, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17)
        return -1;
      switch (pattern949 (x1))
        {
        case 0:
          x8 = XVECEXP (x1, 0, 1);
          x12 = XEXP (x8, 1);
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != NEG)
            return -1;
          switch (pattern1429 (x1))
            {
            case 0:
              if (!
#line 21779 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
                return -1;
              return 1572; /* *bmi_blsi_si_cmp */

            case 1:
              if (!(
#line 21779 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1573; /* *bmi_blsi_di_cmp */

            default:
              return -1;
            }

        case 1:
          if (!
#line 21793 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 1574; /* *bmi_blsi_si_ccno */

        case 2:
          if (!(
#line 21793 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1575; /* *bmi_blsi_di_ccno */

        default:
          return -1;
        }

    case PLUS:
      x14 = XEXP (x6, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
          || pattern815 (x2, 
E_CCZmode) != 0)
        return -1;
      switch (pattern949 (x1))
        {
        case 0:
          x8 = XVECEXP (x1, 0, 1);
          x12 = XEXP (x8, 1);
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != PLUS)
            return -1;
          x15 = XEXP (x13, 1);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          switch (pattern1429 (x1))
            {
            case 0:
              if (!
#line 21842 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1580; /* *bmi_blsr_si_cmp */

            case 1:
              if (!(
#line 21842 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1581; /* *bmi_blsr_di_cmp */

            default:
              return -1;
            }

        case 1:
          if (!
#line 21858 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1582; /* *bmi_blsr_si_ccz */

        case 2:
          if (!(
#line 21858 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1583; /* *bmi_blsr_di_ccz */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      switch (pattern363 (x1, 
AND))
        {
        case 0:
          return 11084; /* atomic_and_fetch_cmp_0qi_1 */

        case 1:
          return 11087; /* atomic_and_fetch_cmp_0hi_1 */

        case 2:
          return 11090; /* atomic_and_fetch_cmp_0si_1 */

        case 3:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11093; /* atomic_and_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_389 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x3;
      x4 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x4))
        {
        case CLOBBER:
          x5 = XEXP (x4, 0);
          if (GET_CODE (x5) != REG
              || REGNO (x5) != 17
              || GET_MODE (x5) != E_CCmode)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode))
                return -1;
              x6 = XEXP (x2, 1);
              if (GET_MODE (x6) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode))
                return -1;
              if (x86_64_hilo_general_operand (operands[2], E_DImode)
                  && (
#line 8069 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 380; /* *subdi3_doubleword */
              if (!x86_64_general_operand (operands[2], E_DImode)
                  || !(
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 391; /* *subdi_1 */

            case E_TImode:
              x6 = XEXP (x2, 1);
              if (pattern564 (x6, 
E_TImode) != 0
                  || !(
#line 8069 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 381; /* *subti3_doubleword */

            case E_QImode:
              x6 = XEXP (x2, 1);
              if (pattern565 (x6, 
E_QImode) != 0
                  || !
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && true))
                return -1;
              return 385; /* *subqi_1 */

            case E_HImode:
              x6 = XEXP (x2, 1);
              if (pattern565 (x6, 
E_HImode) != 0
                  || !
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && true))
                return -1;
              return 387; /* *subhi_1 */

            case E_SImode:
              x6 = XEXP (x2, 1);
              if (pattern566 (x6) != 0
                  || !
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && true))
                return -1;
              return 389; /* *subsi_1 */

            case E_V2QImode:
              x6 = XEXP (x2, 1);
              if (pattern568 (x6, 
E_V2QImode) != 0
                  || !
#line 3241 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
                return -1;
              return 2131; /* subv2qi3 */

            default:
              return -1;
            }

        case UNSPEC:
          if (pattern210 (x1) != 0
              || !
#line 773 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 2047; /* *mmx_subv2sf3 */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      x4 = XVECEXP (x1, 0, 1);
      if (pattern227 (x4, 
E_CCmode, 
17) != 0)
        return -1;
      switch (pattern1325 (x2))
        {
        case 0:
          if (!
#line 8189 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 403; /* *subqi_1_slp */

        case 1:
          if (!
#line 8189 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 404; /* *subhi_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_393 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case NE:
    case EQ:
      if (bt_comparison_operator (x4, E_VOIDmode))
        {
          res = recog_392 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (GET_CODE (x4) != NE)
        return -1;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[2] = x6;
          if (!register_operand (operands[2], E_QImode))
            return -1;
          x7 = XEXP (x3, 1);
          if (GET_CODE (x7) != ZERO_EXTRACT)
            return -1;
          x8 = XEXP (x7, 1);
          if (GET_CODE (x8) != UMIN
              || GET_MODE (x8) != E_QImode)
            return -1;
          x9 = XEXP (x7, 2);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XEXP (x3, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern338 (x1) != 0
              || GET_MODE (x4) != E_QImode)
            return -1;
          x11 = XEXP (x7, 0);
          operands[1] = x11;
          x12 = XEXP (x8, 1);
          operands[3] = x12;
          if (!const_int_operand (operands[3], E_QImode))
            return -1;
          x13 = XEXP (x8, 0);
          if (!rtx_equal_p (x13, operands[2]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1431 (x3, 
E_SImode) != 0
                  || !
#line 21895 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
                return -1;
              return 1584; /* *bmi2_bzhi_si3 */

            case E_DImode:
              if (pattern1431 (x3, 
E_DImode) != 0
                  || !(
#line 21895 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1585; /* *bmi2_bzhi_di3 */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 35)
            return -1;
          x14 = XVECEXP (x6, 0, 0);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x3, 1);
          if (GET_CODE (x7) != LABEL_REF)
            return -1;
          x10 = XEXP (x3, 2);
          if (GET_CODE (x10) != PC)
            return -1;
          x15 = XEXP (x2, 0);
          if (GET_CODE (x15) != PC)
            return -1;
          x16 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x16) != SET)
            return -1;
          x17 = XEXP (x16, 1);
          if (pattern813 (x17, 
E_SImode, 
46, 
1, 
UNSPEC_VOLATILE) != 0)
            return -1;
          x11 = XEXP (x7, 0);
          operands[1] = x11;
          x18 = XEXP (x16, 0);
          operands[0] = x18;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x19 = XVECEXP (x17, 0, 0);
          if (!rtx_equal_p (x19, operands[0])
              || !
#line 29483 "../../gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1963; /* xbegin_1 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      operands[1] = x4;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return -1;
      x10 = XEXP (x3, 2);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern338 (x1) != 0)
        return -1;
      switch (pattern1568 (x3))
        {
        case 0:
          return 1789; /* *x86_movsicc_0_m1 */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1790; /* *x86_movdicc_0_m1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_397 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (pattern558 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 1);
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 12501 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 703; /* *anddi3_doubleword */
          if (x86_64_szext_general_operand (operands[2], E_DImode)
              && 
#line 12543 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && true))
            return 706; /* *anddi_1 */
          if (!const_int_operand (operands[2], E_DImode)
              || !
#line 12576 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)))
            return -1;
          return 707; /* *anddi_1_btr */

        case E_TImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern564 (x5, 
E_TImode) != 0
              || !(
#line 12501 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 704; /* *andti3_doubleword */

        case E_HImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern565 (x5, 
E_HImode) != 0
              || !
#line 12671 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 720; /* *andhi_1 */

        case E_SImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern566 (x5) != 0
              || !
#line 12671 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 722; /* *andsi_1 */

        case E_QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern565 (x5, 
E_QImode) != 0
              || !
#line 12709 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 724; /* *andqi_1 */

        case E_V4QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern567 (x5, 
E_V4QImode) != 0
              || !
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V4QImode, operands)))
            return -1;
          return 2277; /* *andv4qi3 */

        case E_V2QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern567 (x5, 
E_V2QImode) != 0
              || !
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V2QImode, operands)))
            return -1;
          return 2280; /* *andv2qi3 */

        case E_V2HImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern567 (x5, 
E_V2HImode) != 0
              || !
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V2HImode, operands)))
            return -1;
          return 2283; /* *andv2hi3 */

        default:
          return -1;
        }

    case 1:
      switch (pattern569 (x1))
        {
        case 0:
          if (!
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2566; /* kandqi */

        case 1:
          if (!
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2569; /* kandhi */

        case 2:
          if (!(
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2572; /* kandsi */

        case 3:
          if (!(
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2575; /* kanddi */

        default:
          return -1;
        }

    case 2:
      if (!
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      return 725; /* *andqi_1_slp */

    case 3:
      if (!
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      return 728; /* *andhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_402 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern374 (x1))
        {
        case 0:
          x5 = XVECEXP (x1, 0, 1);
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode))
                return -1;
              if ((
#line 14237 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 952; /* *negdi2_doubleword */
              if (!(
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 961; /* *negdi_1 */

            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x3) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !(
#line 14237 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 953; /* *negti2_doubleword */

            case E_QImode:
              if (!nonimmediate_operand (operands[0], E_QImode)
                  || GET_MODE (x3) != E_QImode
                  || !nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              return 955; /* *negqi_1 */

            case E_HImode:
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || GET_MODE (x3) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              return 957; /* *neghi_1 */

            case E_SImode:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              return 959; /* *negsi_1 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode
                  || !register_operand (operands[1], E_SFmode)
                  || !
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1011; /* *negsf2_i387_1 */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode
                  || !register_operand (operands[1], E_DFmode)
                  || !
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1013; /* *negdf2_i387_1 */

            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || GET_MODE (x3) != E_XFmode
                  || !register_operand (operands[1], E_XFmode)
                  || !
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1015; /* *negxf2_i387_1 */

            case E_V2QImode:
              if (!register_operand (operands[0], E_V2QImode)
                  || GET_MODE (x3) != E_V2QImode
                  || !register_operand (operands[1], E_V2QImode)
                  || !
#line 3134 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
                return -1;
              return 2117; /* negv2qi2 */

            default:
              return -1;
            }

        case 1:
          switch (pattern698 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 14748 "../../gcc/config/i386/i386.md"
(TARGET_SSE))
                return -1;
              return 1008; /* *negtf2_1 */

            case 1:
              if (!
#line 14834 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return -1;
              *pnum_clobbers = 1;
              return 1017; /* *neghf2_1 */

            case 2:
              if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
                return -1;
              *pnum_clobbers = 1;
              return 1019; /* *negsf2_1 */

            case 3:
              if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              *pnum_clobbers = 1;
              return 1021; /* *negdf2_1 */

            case 4:
              if (!
#line 683 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                return -1;
              return 2044; /* *mmx_negv2sf2 */

            case 5:
              if (!
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
                return -1;
              return 2090; /* *mmx_negv2bf */

            case 6:
              if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
                return -1;
              return 2092; /* *mmx_negv4bf */

            case 7:
              if (!
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
                return -1;
              return 2094; /* *mmx_negv2hf */

            case 8:
              if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
                return -1;
              return 2096; /* *mmx_negv4hf */

            case 9:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 2648; /* *negv32bf2 */

            case 10:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2650; /* *negv16bf2 */

            case 11:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2652; /* *negv8bf2 */

            case 12:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 2654; /* *negv32hf2 */

            case 13:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2656; /* *negv16hf2 */

            case 14:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2658; /* *negv8hf2 */

            case 15:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 2660; /* *negv16sf2 */

            case 16:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2662; /* *negv8sf2 */

            case 17:
              if (!
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2664; /* *negv4sf2 */

            case 18:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 2666; /* *negv8df2 */

            case 19:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2668; /* *negv4df2 */

            case 20:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2670; /* *negv2df2 */

            default:
              return -1;
            }

        case 2:
          if (!
#line 14395 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 973; /* *negqi_1_slp */

        case 3:
          if (!
#line 14395 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 974; /* *neghi_1_slp */

        default:
          return -1;
        }

    case ABS:
      switch (pattern376 (x1))
        {
        case 0:
          if ((
#line 14644 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 997; /* *nabsdi2_doubleword */
          if (!(
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1006; /* *nabsdi2_1 */

        case 1:
          if (!(
#line 14644 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 998; /* *nabsti2_doubleword */

        case 2:
          if (!
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1003; /* *nabsqi2_1 */

        case 3:
          if (!
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1004; /* *nabshi2_1 */

        case 4:
          if (!
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1005; /* *nabssi2_1 */

        case 5:
          switch (GET_MODE (operands[0]))
            {
            case E_TFmode:
              if (pattern1051 (x3, 
E_TFmode) != 0
                  || !
#line 14773 "../../gcc/config/i386/i386.md"
(TARGET_SSE))
                return -1;
              return 1009; /* *nabstf2_1 */

            case E_SFmode:
              if (pattern1052 (x3, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 14909 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
                return -1;
              return 1022; /* *nabssf2_1 */

            case E_DFmode:
              if (pattern1052 (x3, 
E_V2DFmode, 
E_DFmode) != 0
                  || !
#line 14909 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
                return -1;
              return 1023; /* *nabsdf2_1 */

            case E_V2SFmode:
              if (pattern1053 (x3) != 0
                  || !
#line 700 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                return -1;
              return 2045; /* *mmx_nabsv2sf2 */

            case E_V2BFmode:
              if (pattern1054 (x3, 
E_V2BFmode) != 0
                  || !
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
                return -1;
              return 2097; /* *mmx_nabsv2bf2 */

            case E_V4BFmode:
              if (pattern1054 (x3, 
E_V4BFmode) != 0
                  || !(
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
                return -1;
              return 2098; /* *mmx_nabsv4bf2 */

            case E_V2HFmode:
              if (pattern1054 (x3, 
E_V2HFmode) != 0
                  || !
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
                return -1;
              return 2099; /* *mmx_nabsv2hf2 */

            case E_V4HFmode:
              if (pattern1054 (x3, 
E_V4HFmode) != 0
                  || !(
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
                return -1;
              return 2100; /* *mmx_nabsv4hf2 */

            case E_V16SFmode:
              if (pattern1051 (x3, 
E_V16SFmode) != 0
                  || !(
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 2671; /* *nabsv16sf2 */

            case E_V8SFmode:
              if (pattern1051 (x3, 
E_V8SFmode) != 0
                  || !(
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2672; /* *nabsv8sf2 */

            case E_V4SFmode:
              if (pattern1051 (x3, 
E_V4SFmode) != 0
                  || !
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2673; /* *nabsv4sf2 */

            case E_V8DFmode:
              if (pattern1051 (x3, 
E_V8DFmode) != 0
                  || !(
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 2674; /* *nabsv8df2 */

            case E_V4DFmode:
              if (pattern1051 (x3, 
E_V4DFmode) != 0
                  || !(
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2675; /* *nabsv4df2 */

            case E_V2DFmode:
              if (pattern1051 (x3, 
E_V2DFmode) != 0
                  || !(
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2676; /* *nabsv2df2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      operands[1] = x4;
      if (pattern572 (operands[1]) != 0
          || pattern338 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x3) != E_QImode)
            return -1;
          return 1793; /* *x86_movqicc_0_m1_neg */

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode)
            return -1;
          return 1794; /* *x86_movhicc_0_m1_neg */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          return 1795; /* *x86_movsicc_0_m1_neg */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1796; /* *x86_movdicc_0_m1_neg */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_421 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
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
          res = recog_358 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          res = recog_360 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case UNSPEC:
          res = recog_366 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case ZERO_EXTEND:
          res = recog_370 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case UNSIGNED_FIX:
          res = recog_371 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case FIX:
          res = recog_372 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case FLOAT:
          res = recog_373 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case UNSIGNED_FLOAT:
          res = recog_374 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case PLUS:
          res = recog_376 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case COMPARE:
          res = recog_387 (x1, insn, pnum_clobbers);
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
          switch (GET_CODE (x3))
            {
            case NE:
            case EQ:
              if (GET_CODE (x3) == EQ)
                {
                  res = recog_388 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              operands[1] = x3;
              switch (pattern560 (x1))
                {
                case 0:
                  if ((
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                    return 2620; /* *kortest_cmpqi_setcc */
                  break;

                case 1:
                  if (
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                    return 2621; /* *kortest_cmphi_setcc */
                  break;

                case 2:
                  if (
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                    return 2622; /* *kortest_cmpsi_setcc */
                  break;

                case 3:
                  if ((
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                    return 2623; /* *kortest_cmpdi_setcc */
                  break;

                default:
                  break;
                }
              break;

            case GT:
              if (pattern366 (x1) == 0
                  && 
#line 1214 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
                return 2064; /* mmx_gtv2sf3 */
              break;

            case GE:
              if (pattern366 (x1) == 0
                  && 
#line 1225 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
                return 2065; /* mmx_gev2sf3 */
              break;

            default:
              break;
            }
          operands[1] = x3;
          switch (pattern367 (x1))
            {
            case 0:
              if (
#line 19497 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
                return 1448; /* *setcc_hi_1_and */
              break;

            case 1:
              if (
#line 19497 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
                return 1449; /* *setcc_si_1_and */
              break;

            default:
              break;
            }
          break;

        case MINUS:
          res = recog_391 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case IF_THEN_ELSE:
          res = recog_393 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case MULT:
          res = recog_394 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case DIV:
          if (pnum_clobbers != NULL)
            {
              switch (pattern216 (x1))
                {
                case 0:
                  switch (GET_MODE (operands[0]))
                    {
                    case E_HImode:
                      if (pattern387 (x1, 
E_HImode) == 0
                          && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                        {
                          *pnum_clobbers = 1;
                          return 647; /* *divmodhi4 */
                        }
                      break;

                    case E_SImode:
                      if (pattern387 (x1, 
E_SImode) == 0)
                        {
                          *pnum_clobbers = 1;
                          return 648; /* *divmodsi4 */
                        }
                      break;

                    case E_DImode:
                      if (pattern387 (x1, 
E_DImode) == 0
                          && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                        {
                          *pnum_clobbers = 1;
                          return 649; /* *divmoddi4 */
                        }
                      break;

                    default:
                      break;
                    }
                  break;

                case 1:
                  if (const_int_operand (operands[2], E_SImode)
                      && pattern1496 (x1) == 0
                      && 
#line 11907 "../../gcc/config/i386/i386.md"
(!optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 677; /* *divmodsi4_const */
                    }
                  break;

                default:
                  break;
                }
            }
          break;

        case UDIV:
          if (pnum_clobbers != NULL)
            {
              switch (pattern217 (x1))
                {
                case 0:
                  switch (GET_MODE (operands[0]))
                    {
                    case E_HImode:
                      if (pattern387 (x1, 
E_HImode) == 0
                          && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                        {
                          *pnum_clobbers = 1;
                          return 650; /* *udivmodhi4 */
                        }
                      break;

                    case E_SImode:
                      if (pattern387 (x1, 
E_SImode) == 0)
                        {
                          *pnum_clobbers = 1;
                          return 651; /* *udivmodsi4 */
                        }
                      break;

                    case E_DImode:
                      if (pattern387 (x1, 
E_DImode) == 0
                          && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                        {
                          *pnum_clobbers = 1;
                          return 652; /* *udivmoddi4 */
                        }
                      break;

                    default:
                      break;
                    }
                  break;

                case 1:
                  switch (GET_MODE (operands[0]))
                    {
                    case E_SImode:
                      if (pattern1497 (x1, 
E_SImode) == 0
                          && 
#line 11660 "../../gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
                        {
                          *pnum_clobbers = 1;
                          return 653; /* *udivmodsi4_pow2 */
                        }
                      break;

                    case E_DImode:
                      if (pattern1497 (x1, 
E_DImode) == 0
                          && (
#line 11660 "../../gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pnum_clobbers = 1;
                          return 654; /* *udivmoddi4_pow2 */
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
          break;

        case IOR:
          res = recog_396 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case AND:
          res = recog_399 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case XOR:
          res = recog_400 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case NOT:
          res = recog_401 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case NEG:
          res = recog_402 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case ABS:
          res = recog_403 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case ASHIFT:
          res = recog_404 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case LSHIFTRT:
          res = recog_405 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case ASHIFTRT:
          res = recog_407 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case ROTATE:
          switch (pattern207 (x1))
            {
            case 0:
              x4 = XEXP (x3, 1);
              if (GET_CODE (x4) == SUBREG)
                {
                  switch (pattern1170 (x2))
                    {
                    case 0:
                      if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
                        return 1284; /* *rotlqi3_mask */
                      break;

                    case 1:
                      if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
                        return 1286; /* *rotlhi3_mask */
                      break;

                    case 2:
                      if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                        return 1288; /* *rotlsi3_mask */
                      break;

                    case 3:
                      if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1290; /* *rotldi3_mask */
                      break;

                    case 4:
                      if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1300; /* *rotlqi3_add */
                      break;

                    case 5:
                      if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1302; /* *rotlhi3_add */
                      break;

                    case 6:
                      if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1304; /* *rotlsi3_add */
                      break;

                    case 7:
                      if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1306; /* *rotldi3_add */
                      break;

                    case 8:
                      if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1316; /* *rotlqi3_sub */
                      break;

                    case 9:
                      if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1318; /* *rotlhi3_sub */
                      break;

                    case 10:
                      if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1320; /* *rotlsi3_sub */
                      break;

                    case 11:
                      if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1322; /* *rotldi3_sub */
                      break;

                    default:
                      break;
                    }
                }
              operands[2] = x4;
              switch (pattern1171 (x2))
                {
                case 0:
                  if (
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && true))
                    return 1343; /* *rotlsi3_1 */
                  break;

                case 1:
                  if ((
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1347; /* *rotldi3_1 */
                  break;

                case 2:
                  if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && true))
                    return 1374; /* *rotlqi3_1 */
                  break;

                case 3:
                  if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && true))
                    return 1378; /* *rotlhi3_1 */
                  break;

                case 4:
                  if (
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1381; /* *rotlqi3_1_slp */
                  break;

                case 5:
                  if (
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1383; /* *rotlhi3_1_slp */
                  break;

                default:
                  break;
                }
              break;

            case 1:
              if (
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
                return 1292; /* *rotlqi3_mask_1 */
              break;

            case 2:
              if (
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
                return 1294; /* *rotlhi3_mask_1 */
              break;

            case 3:
              if (
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return 1296; /* *rotlsi3_mask_1 */
              break;

            case 4:
              if ((
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1298; /* *rotldi3_mask_1 */
              break;

            case 5:
              if (
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1308; /* *rotlqi3_add_1 */
              break;

            case 6:
              if (
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1310; /* *rotlhi3_add_1 */
              break;

            case 7:
              if (
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1312; /* *rotlsi3_add_1 */
              break;

            case 8:
              if ((
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1314; /* *rotldi3_add_1 */
              break;

            case 9:
              if (
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1324; /* *rotlqi3_sub_1 */
              break;

            case 10:
              if (
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1326; /* *rotlhi3_sub_1 */
              break;

            case 11:
              if (
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1328; /* *rotlsi3_sub_1 */
              break;

            case 12:
              if ((
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1330; /* *rotldi3_sub_1 */
              break;

            default:
              break;
            }
          break;

        case ROTATERT:
          switch (pattern207 (x1))
            {
            case 0:
              x4 = XEXP (x3, 1);
              if (GET_CODE (x4) == SUBREG)
                {
                  switch (pattern1170 (x2))
                    {
                    case 0:
                      if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
                        return 1285; /* *rotrqi3_mask */
                      break;

                    case 1:
                      if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
                        return 1287; /* *rotrhi3_mask */
                      break;

                    case 2:
                      if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                        return 1289; /* *rotrsi3_mask */
                      break;

                    case 3:
                      if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1291; /* *rotrdi3_mask */
                      break;

                    case 4:
                      if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1301; /* *rotrqi3_add */
                      break;

                    case 5:
                      if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1303; /* *rotrhi3_add */
                      break;

                    case 6:
                      if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1305; /* *rotrsi3_add */
                      break;

                    case 7:
                      if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1307; /* *rotrdi3_add */
                      break;

                    case 8:
                      if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1317; /* *rotrqi3_sub */
                      break;

                    case 9:
                      if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1319; /* *rotrhi3_sub */
                      break;

                    case 10:
                      if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                        return 1321; /* *rotrsi3_sub */
                      break;

                    case 11:
                      if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1323; /* *rotrdi3_sub */
                      break;

                    default:
                      break;
                    }
                }
              operands[2] = x4;
              switch (pattern1171 (x2))
                {
                case 0:
                  if (
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && true))
                    return 1345; /* *rotrsi3_1 */
                  break;

                case 1:
                  if ((
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1349; /* *rotrdi3_1 */
                  break;

                case 2:
                  if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && true))
                    return 1376; /* *rotrqi3_1 */
                  break;

                case 3:
                  if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && true))
                    return 1380; /* *rotrhi3_1 */
                  break;

                case 4:
                  if (
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1382; /* *rotrqi3_1_slp */
                  break;

                case 5:
                  if (
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1384; /* *rotrhi3_1_slp */
                  break;

                default:
                  break;
                }
              break;

            case 1:
              if (
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
                return 1293; /* *rotrqi3_mask_1 */
              break;

            case 2:
              if (
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
                return 1295; /* *rotrhi3_mask_1 */
              break;

            case 3:
              if (
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return 1297; /* *rotrsi3_mask_1 */
              break;

            case 4:
              if ((
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1299; /* *rotrdi3_mask_1 */
              break;

            case 5:
              if (
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1309; /* *rotrqi3_add_1 */
              break;

            case 6:
              if (
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1311; /* *rotrhi3_add_1 */
              break;

            case 7:
              if (
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1313; /* *rotrsi3_add_1 */
              break;

            case 8:
              if ((
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1315; /* *rotrdi3_add_1 */
              break;

            case 9:
              if (
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1325; /* *rotrqi3_sub_1 */
              break;

            case 10:
              if (
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1327; /* *rotrhi3_sub_1 */
              break;

            case 11:
              if (
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1329; /* *rotrsi3_sub_1 */
              break;

            case 12:
              if ((
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1331; /* *rotrdi3_sub_1 */
              break;

            default:
              break;
            }
          break;

        case CALL:
          res = recog_410 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case CTZ:
          res = recog_411 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case SIGN_EXTEND:
          res = recog_412 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case CLZ:
          res = recog_413 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case POPCOUNT:
          res = recog_414 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case SMAX:
          switch (pattern211 (x1))
            {
            case 0:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1825; /* *smaxdi3_doubleword */
              if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1845; /* *smaxdi3_1 */
              break;

            case 1:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1829; /* *smaxti3_doubleword */
              break;

            case 2:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1833; /* *smaxqi3_1 */
              break;

            case 3:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1837; /* *smaxhi3_1 */
              break;

            case 4:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1841; /* *smaxsi3_1 */
              break;

            case 5:
              if (
#line 871 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)))
                return 2049; /* *mmx_smaxv2sf3 */
              break;

            default:
              break;
            }
          break;

        case SMIN:
          switch (pattern211 (x1))
            {
            case 0:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1826; /* *smindi3_doubleword */
              if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1846; /* *smindi3_1 */
              break;

            case 1:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1830; /* *sminti3_doubleword */
              break;

            case 2:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1834; /* *sminqi3_1 */
              break;

            case 3:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1838; /* *sminhi3_1 */
              break;

            case 4:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1842; /* *sminsi3_1 */
              break;

            case 5:
              if (
#line 871 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)))
                return 2050; /* *mmx_sminv2sf3 */
              break;

            default:
              break;
            }
          break;

        case UMAX:
          switch (pattern212 (x1))
            {
            case 0:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1827; /* *umaxdi3_doubleword */
              if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1847; /* *umaxdi3_1 */
              break;

            case 1:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1831; /* *umaxti3_doubleword */
              break;

            case 2:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1835; /* *umaxqi3_1 */
              break;

            case 3:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1839; /* *umaxhi3_1 */
              break;

            case 4:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1843; /* *umaxsi3_1 */
              break;

            default:
              break;
            }
          break;

        case UMIN:
          switch (pattern212 (x1))
            {
            case 0:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1828; /* *umindi3_doubleword */
              if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1848; /* *umindi3_1 */
              break;

            case 1:
              if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1832; /* *uminti3_doubleword */
              break;

            case 2:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1836; /* *uminqi3_1 */
              break;

            case 3:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1840; /* *uminhi3_1 */
              break;

            case 4:
              if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
                return 1844; /* *uminsi3_1 */
              break;

            default:
              break;
            }
          break;

        case UNSPEC_VOLATILE:
          res = recog_415 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case VEC_MERGE:
          if (pattern213 (x1) == 0
              && 
#line 8362 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
            return 4779; /* sse_cvtpi2ps */
          break;

        case VEC_CONCAT:
          res = recog_416 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case VEC_DUPLICATE:
          res = recog_417 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case VEC_SELECT:
          res = recog_418 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != UNSPEC
          || XVECLEN (x5, 0) != 1
          || XINT (x5, 1) != 38)
        return -1;
      return recog_419 (x1, insn, pnum_clobbers);

    case CALL:
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != MEM
          || GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      res = recog_420 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x3 = XEXP (x2, 1);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern380 (x5, 
104, 
1) != 0
          || !
#line 27259 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9086; /* avx_vzeroupper_callee_abi */

    case SIMPLE_RETURN:
      x5 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x5))
        {
        case UNSPEC:
          if (XVECLEN (x5, 0) != 1)
            return -1;
          x8 = XVECEXP (x5, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (XINT (x5, 1))
            {
            case 101:
              if (!
#line 20642 "../../gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 1490; /* interrupt_return */

            case 29:
              if (!
#line 20653 "../../gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 1491; /* simple_return_internal_long */

            default:
              return -1;
            }

        case USE:
          x9 = XEXP (x5, 0);
          operands[0] = x9;
          switch (GET_CODE (operands[0]))
            {
            case CONST_INT:
              if (!const_int_operand (operands[0], E_SImode)
                  || !
#line 20664 "../../gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 1492; /* simple_return_pop_internal */

            case REG:
            case SUBREG:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (!register_operand (operands[0], E_SImode)
                      || !(
#line 20682 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
                    return -1;
                  return 1493; /* *simple_return_indirect_internalsi */

                case E_DImode:
                  if (!register_operand (operands[0], E_DImode)
                      || !(
#line 20682 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
                    return -1;
                  return 1494; /* *simple_return_indirect_internaldi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      if (XVECLEN (x2, 0) != 4
          || XINT (x2, 1) != 98
          || GET_MODE (x2) != E_V2DImode)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern227 (x5, 
E_CCmode, 
17) != 0)
        return -1;
      x10 = XVECEXP (x2, 0, 0);
      operands[0] = x10;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x11 = XVECEXP (x2, 0, 1);
      operands[1] = x11;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x12 = XVECEXP (x2, 0, 2);
      operands[2] = x12;
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      x13 = XVECEXP (x2, 0, 3);
      operands[3] = x13;
      if (!register_operand (operands[3], E_SImode)
          || !
#line 31214 "../../gcc/config/i386/sse.md"
(TARGET_KL))
        return -1;
      return 10356; /* loadiwkey */

    default:
      return -1;
    }
}

 rtx_insn *
split_27 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern374 (x1))
        {
        case 0:
          x5 = XVECEXP (x1, 0, 1);
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode)
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !((
#line 14237 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14239 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_490 (insn, operands);

            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x3) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !((
#line 14237 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14239 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_491 (insn, operands);

            case E_SFmode:
              if (GET_MODE (x3) != E_SFmode)
                return NULL;
              if (fp_register_operand (operands[0], E_SFmode)
                  && fp_register_operand (operands[1], E_SFmode)
                  && 
#line 14817 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_513 (insn, operands);
              if (!general_reg_operand (operands[0], E_SFmode)
                  || !general_reg_operand (operands[1], E_SFmode)
                  || !
#line 14824 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_519 (insn, operands);

            case E_DFmode:
              if (GET_MODE (x3) != E_DFmode)
                return NULL;
              if (fp_register_operand (operands[0], E_DFmode)
                  && fp_register_operand (operands[1], E_DFmode)
                  && 
#line 14817 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_515 (insn, operands);
              if (!general_reg_operand (operands[0], E_DFmode)
                  || !general_reg_operand (operands[1], E_DFmode)
                  || !
#line 14824 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_521 (insn, operands);

            case E_XFmode:
              if (GET_MODE (x3) != E_XFmode)
                return NULL;
              if (fp_register_operand (operands[0], E_XFmode)
                  && fp_register_operand (operands[1], E_XFmode)
                  && 
#line 14817 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_517 (insn, operands);
              if (!general_reg_operand (operands[0], E_XFmode)
                  || !general_reg_operand (operands[1], E_XFmode)
                  || !
#line 14824 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_523 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (pattern833 (x1) != 0
              || !(
#line 14748 "../../gcc/config/i386/i386.md"
(TARGET_SSE) && 
#line 14750 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_510 (insn, operands);

        case 2:
          if (!(
#line 14395 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 14399 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_492 (insn, operands);

        case 3:
          if (!(
#line 14395 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 14399 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_493 (insn, operands);

        default:
          return NULL;
        }

    case ABS:
      switch (pattern376 (x1))
        {
        case 0:
          if (((
#line 14644 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14647 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_499 (insn, operands);
          if (!((
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14719 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_508 (insn, operands);

        case 1:
          if (!((
#line 14644 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14647 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_500 (insn, operands);

        case 2:
          if (!(
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14719 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_505 (insn, operands);

        case 3:
          if (!(
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14719 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_506 (insn, operands);

        case 4:
          if (!(
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14719 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_507 (insn, operands);

        case 5:
          switch (GET_MODE (operands[0]))
            {
            case E_TFmode:
              if (pattern1051 (x3, 
E_TFmode) != 0
                  || !(
#line 14773 "../../gcc/config/i386/i386.md"
(TARGET_SSE) && 
#line 14775 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_511 (insn, operands);

            case E_SFmode:
              if (pattern1052 (x3, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 14909 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && 
#line 14911 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_538 (insn, operands);

            case E_DFmode:
              if (pattern1052 (x3, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 14909 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && 
#line 14911 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_539 (insn, operands);

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
split_30 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (pattern338 (x1) != 0)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (pattern1151 (x3))
        {
        case 0:
          if (!(
#line 4839 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 4841 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_57 (insn, operands);

        case 1:
          if (!(
#line 4839 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 4841 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_58 (insn, operands);

        case 2:
          if (!(
#line 4893 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 4895 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_59 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          if (!register_operand (operands[1], E_SImode))
            return NULL;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!x86_64_nonmemory_operand (operands[2], E_SImode))
            return NULL;
          if (
#line 7065 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed && ix86_avoid_lea_for_add (insn, operands)))
            return gen_split_124 (insn, operands);
          if (!
#line 7115 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_133 (insn, operands);

        case UNSPEC:
          if (pattern1154 (x5) != 0)
            return NULL;
          x6 = XEXP (x4, 1);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode)
              || !(
#line 23090 "../../gcc/config/i386/i386.md"
(TARGET_X32) && 
#line 23092 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_912 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      if (GET_MODE (x4) != E_SImode
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      switch (GET_CODE (operands[2]))
        {
        case REG:
        case SUBREG:
          if (!register_operand (operands[2], E_QImode)
              || !register_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 16086 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed))
            return NULL;
          return gen_split_574 (insn, operands);

        case CONST_INT:
          if (!const_0_to_3_operand (operands[2], E_VOIDmode)
              || !general_reg_operand (operands[0], E_DImode)
              || !index_reg_operand (operands[1], E_SImode)
              || !
#line 16321 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
            return NULL;
          return gen_split_585 (insn, operands);

        default:
          return NULL;
        }

    case LSHIFTRT:
      if (pattern1174 (x3) != 0
          || !
#line 17522 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed))
        return NULL;
      return gen_split_626 (insn, operands);

    case ASHIFTRT:
      if (pattern1174 (x3) != 0
          || !
#line 17522 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed))
        return NULL;
      return gen_split_627 (insn, operands);

    case ROTATE:
      if (pattern1175 (x3) != 0
          || !
#line 18634 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed
   && !optimize_function_for_size_p (cfun)))
        return NULL;
      return gen_split_788 (insn, operands);

    case ROTATERT:
      if (pattern1175 (x3) != 0
          || !
#line 18650 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed
   && !optimize_function_for_size_p (cfun)))
        return NULL;
      return gen_split_789 (insn, operands);

    case CTZ:
      if (pattern1176 (x3, 
E_SImode, 
E_DImode) != 0
          || !
#line 21175 "../../gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
        return NULL;
      return gen_split_877 (insn, operands);

    case CLZ:
      if (pattern1176 (x3, 
E_SImode, 
E_DImode) != 0
          || !(
#line 21599 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT) && 
#line 21601 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_889 (insn, operands);

    case POPCOUNT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern346 (x3, 
E_SImode, 
E_DImode) != 0
              || !(
#line 22292 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT) && 
#line 22300 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_903 (insn, operands);

        case E_SImode:
          if (pattern346 (x3, 
E_HImode, 
E_SImode) != 0
              || !(
#line 22358 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()) && 
#line 22361 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_905 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_36 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (promotable_binary_operator (operands[3], E_VOIDmode)
      && pattern338 (x1) == 0
      && general_reg_operand (operands[0], E_VOIDmode))
    {
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_VOIDmode))
        {
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          if (aligned_operand (operands[2], E_VOIDmode)
              && 
#line 27509 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))))
            return gen_split_973 (insn, operands);
        }
    }
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return NULL;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_CODE (x3))
    {
    case PLUS:
      if (GET_MODE (x3) != E_V2QImode)
        return NULL;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_V2QImode)
          && general_reg_operand (operands[0], E_V2QImode)
          && general_reg_operand (operands[2], E_V2QImode)
          && 
#line 3260 "../../gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
        return gen_split_1038 (insn, operands);
      if (!sse_reg_operand (operands[1], E_V2QImode)
          || !sse_reg_operand (operands[0], E_V2QImode)
          || !sse_reg_operand (operands[2], E_V2QImode)
          || !
#line 3294 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_1040 (insn, operands);

    case MINUS:
      if (GET_MODE (x3) != E_V2QImode)
        return NULL;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_V2QImode)
          && general_reg_operand (operands[0], E_V2QImode)
          && general_reg_operand (operands[2], E_V2QImode)
          && 
#line 3260 "../../gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
        return gen_split_1039 (insn, operands);
      if (!sse_reg_operand (operands[1], E_V2QImode)
          || !sse_reg_operand (operands[0], E_V2QImode)
          || !sse_reg_operand (operands[2], E_V2QImode)
          || !
#line 3294 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_1041 (insn, operands);

    case ASHIFT:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
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
          return gen_split_1049 (insn, operands);

        case E_QImode:
          if (pattern1340 (x3, 
E_QImode) != 0
              || !
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1214 (insn, operands);

        case E_HImode:
          if (pattern1340 (x3, 
E_HImode) != 0
              || !
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1216 (insn, operands);

        case E_SImode:
          if (pattern1340 (x3, 
E_SImode) != 0
              || !(
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1218 (insn, operands);

        case E_DImode:
          if (pattern1340 (x3, 
E_DImode) != 0
              || !(
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1220 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case NOT:
          x9 = XEXP (x4, 0);
          operands[1] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V4QImode:
              if (GET_MODE (x3) != E_V4QImode
                  || GET_MODE (x4) != E_V4QImode)
                return NULL;
              if (general_reg_operand (operands[0], E_V4QImode)
                  && general_reg_operand (operands[1], E_V4QImode)
                  && general_reg_operand (operands[2], E_V4QImode))
                {
                  if (
#line 4622 "../../gcc/config/i386/mmx.md"
(TARGET_BMI && reload_completed))
                    return gen_split_1065 (insn, operands);
                  if (
#line 4639 "../../gcc/config/i386/mmx.md"
(!TARGET_BMI && reload_completed))
                    return gen_split_1068 (insn, operands);
                }
              if (!sse_reg_operand (operands[0], E_V4QImode)
                  || !sse_reg_operand (operands[1], E_V4QImode)
                  || !sse_reg_operand (operands[2], E_V4QImode)
                  || !
#line 4658 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1071 (insn, operands);

            case E_V2QImode:
              if (GET_MODE (x3) != E_V2QImode
                  || GET_MODE (x4) != E_V2QImode)
                return NULL;
              if (general_reg_operand (operands[0], E_V2QImode)
                  && general_reg_operand (operands[1], E_V2QImode)
                  && general_reg_operand (operands[2], E_V2QImode))
                {
                  if (
#line 4622 "../../gcc/config/i386/mmx.md"
(TARGET_BMI && reload_completed))
                    return gen_split_1066 (insn, operands);
                  if (
#line 4639 "../../gcc/config/i386/mmx.md"
(!TARGET_BMI && reload_completed))
                    return gen_split_1069 (insn, operands);
                }
              if (!sse_reg_operand (operands[0], E_V2QImode)
                  || !sse_reg_operand (operands[1], E_V2QImode)
                  || !sse_reg_operand (operands[2], E_V2QImode)
                  || !
#line 4658 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1072 (insn, operands);

            case E_V2HImode:
              if (GET_MODE (x3) != E_V2HImode
                  || GET_MODE (x4) != E_V2HImode)
                return NULL;
              if (general_reg_operand (operands[0], E_V2HImode)
                  && general_reg_operand (operands[1], E_V2HImode)
                  && general_reg_operand (operands[2], E_V2HImode))
                {
                  if (
#line 4622 "../../gcc/config/i386/mmx.md"
(TARGET_BMI && reload_completed))
                    return gen_split_1067 (insn, operands);
                  if (
#line 4639 "../../gcc/config/i386/mmx.md"
(!TARGET_BMI && reload_completed))
                    return gen_split_1070 (insn, operands);
                }
              if (!sse_reg_operand (operands[0], E_V2HImode)
                  || !sse_reg_operand (operands[1], E_V2HImode)
                  || !sse_reg_operand (operands[2], E_V2HImode)
                  || !
#line 4658 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1073 (insn, operands);

            case E_QImode:
              if (pattern1507 (x3, 
E_QImode) != 0
                  || !
#line 2163 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1197 (insn, operands);

            case E_HImode:
              if (pattern1507 (x3, 
E_HImode) != 0
                  || !
#line 2163 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1198 (insn, operands);

            case E_SImode:
              if (pattern1507 (x3, 
E_SImode) != 0
                  || !(
#line 2163 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1199 (insn, operands);

            case E_DImode:
              if (pattern1507 (x3, 
E_DImode) != 0
                  || !(
#line 2163 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1200 (insn, operands);

            default:
              return NULL;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (pattern1254 (x3))
            {
            case 0:
              if (nonimmediate_gr_operand (operands[0], E_V4QImode)
                  && nonimmediate_gr_operand (operands[1], E_V4QImode)
                  && reg_or_const_vector_operand (operands[2], E_V4QImode)
                  && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
                return gen_split_1074 (insn, operands);
              if (!sse_reg_operand (operands[0], E_V4QImode)
                  || !sse_reg_operand (operands[1], E_V4QImode)
                  || !sse_reg_operand (operands[2], E_V4QImode)
                  || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1083 (insn, operands);

            case 1:
              if (nonimmediate_gr_operand (operands[0], E_V2QImode)
                  && nonimmediate_gr_operand (operands[1], E_V2QImode)
                  && reg_or_const_vector_operand (operands[2], E_V2QImode)
                  && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
                return gen_split_1077 (insn, operands);
              if (!sse_reg_operand (operands[0], E_V2QImode)
                  || !sse_reg_operand (operands[1], E_V2QImode)
                  || !sse_reg_operand (operands[2], E_V2QImode)
                  || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1086 (insn, operands);

            case 2:
              if (nonimmediate_gr_operand (operands[0], E_V2HImode)
                  && nonimmediate_gr_operand (operands[1], E_V2HImode)
                  && reg_or_const_vector_operand (operands[2], E_V2HImode)
                  && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
                return gen_split_1080 (insn, operands);
              if (!sse_reg_operand (operands[0], E_V2HImode)
                  || !sse_reg_operand (operands[1], E_V2HImode)
                  || !sse_reg_operand (operands[2], E_V2HImode)
                  || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1089 (insn, operands);

            case 3:
              if (!
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1185 (insn, operands);

            case 4:
              if (!
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1188 (insn, operands);

            case 5:
              if (!(
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1191 (insn, operands);

            case 6:
              if (!(
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1194 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      switch (pattern1254 (x3))
        {
        case 0:
          if (nonimmediate_gr_operand (operands[0], E_V4QImode)
              && nonimmediate_gr_operand (operands[1], E_V4QImode)
              && reg_or_const_vector_operand (operands[2], E_V4QImode)
              && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1075 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V4QImode)
              || !sse_reg_operand (operands[1], E_V4QImode)
              || !sse_reg_operand (operands[2], E_V4QImode)
              || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1084 (insn, operands);

        case 1:
          if (nonimmediate_gr_operand (operands[0], E_V2QImode)
              && nonimmediate_gr_operand (operands[1], E_V2QImode)
              && reg_or_const_vector_operand (operands[2], E_V2QImode)
              && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1078 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2QImode)
              || !sse_reg_operand (operands[1], E_V2QImode)
              || !sse_reg_operand (operands[2], E_V2QImode)
              || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1087 (insn, operands);

        case 2:
          if (nonimmediate_gr_operand (operands[0], E_V2HImode)
              && nonimmediate_gr_operand (operands[1], E_V2HImode)
              && reg_or_const_vector_operand (operands[2], E_V2HImode)
              && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1081 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2HImode)
              || !sse_reg_operand (operands[1], E_V2HImode)
              || !sse_reg_operand (operands[2], E_V2HImode)
              || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1090 (insn, operands);

        case 3:
          if (!
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1186 (insn, operands);

        case 4:
          if (!
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1189 (insn, operands);

        case 5:
          if (!(
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1192 (insn, operands);

        case 6:
          if (!(
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1195 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern1254 (x3))
        {
        case 0:
          if (nonimmediate_gr_operand (operands[0], E_V4QImode)
              && nonimmediate_gr_operand (operands[1], E_V4QImode)
              && reg_or_const_vector_operand (operands[2], E_V4QImode)
              && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1076 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V4QImode)
              || !sse_reg_operand (operands[1], E_V4QImode)
              || !sse_reg_operand (operands[2], E_V4QImode)
              || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1085 (insn, operands);

        case 1:
          if (nonimmediate_gr_operand (operands[0], E_V2QImode)
              && nonimmediate_gr_operand (operands[1], E_V2QImode)
              && reg_or_const_vector_operand (operands[2], E_V2QImode)
              && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1079 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2QImode)
              || !sse_reg_operand (operands[1], E_V2QImode)
              || !sse_reg_operand (operands[2], E_V2QImode)
              || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1088 (insn, operands);

        case 2:
          if (nonimmediate_gr_operand (operands[0], E_V2HImode)
              && nonimmediate_gr_operand (operands[1], E_V2HImode)
              && reg_or_const_vector_operand (operands[2], E_V2HImode)
              && 
#line 4725 "../../gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1082 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2HImode)
              || !sse_reg_operand (operands[1], E_V2HImode)
              || !sse_reg_operand (operands[2], E_V2HImode)
              || !
#line 4749 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1091 (insn, operands);

        case 3:
          if (!
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1187 (insn, operands);

        case 4:
          if (!
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1190 (insn, operands);

        case 5:
          if (!(
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1193 (insn, operands);

        case 6:
          if (!(
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1196 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_53 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case VEC_SELECT:
      if (GET_MODE (x4) != E_SImode)
        return NULL;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL
          || XVECLEN (x5, 0) != 1)
        return NULL;
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      if (XWINT (x6, 0) == 0L)
        {
          switch (GET_MODE (operands[1]))
            {
            case E_V2SImode:
              if (register_operand (operands[1], E_V2SImode)
                  && 
#line 5774 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2 && reload_completed))
                return gen_split_1109 (insn, operands);
              break;

            case E_V4SImode:
              if (register_operand (operands[1], E_V4SImode)
                  && 
#line 21238 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
                return gen_split_3382 (insn, operands);
              break;

            default:
              break;
            }
        }
      operands[2] = x6;
      switch (GET_MODE (operands[1]))
        {
        case E_V2SImode:
          if (!memory_operand (operands[1], E_V2SImode)
              || !const_0_to_1_operand (operands[2], E_SImode)
              || !(
#line 5842 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT) && 
#line 5844 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1111 (insn, operands);

        case E_V4SImode:
          if (!memory_operand (operands[1], E_V4SImode)
              || !const_0_to_3_operand (operands[2], E_SImode)
              || !(
#line 21313 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 21315 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3383 (insn, operands);

        default:
          return NULL;
        }

    case NOT:
      x7 = XEXP (x4, 0);
      switch (GET_CODE (x7))
        {
        case REG:
          operands[1] = x7;
          if (!mask_reg_operand (operands[1], E_SImode)
              || !mask_reg_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_SImode
              || !
#line 2240 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && reload_completed))
            return NULL;
          return gen_split_1205 (insn, operands);

        case SUBREG:
          if (maybe_ne (SUBREG_BYTE (x7), 0)
              || GET_MODE (x7) != E_HImode)
            return NULL;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != UNSPEC
              || XVECLEN (x8, 0) != 1
              || XINT (x8, 1) != 49
              || GET_MODE (x8) != E_SImode
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_HImode)
            return NULL;
          x9 = XVECEXP (x8, 0, 0);
          operands[1] = x9;
          if (!register_operand (operands[1], E_V16QImode)
              || !
#line 22152 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return NULL;
          return gen_split_3431 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 49
          || GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x10 = XVECEXP (x4, 0, 0);
      switch (GET_CODE (x10))
        {
        case LT:
          switch (pattern982 (x10))
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
              return gen_split_3403 (insn, operands);

            case 1:
              if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3405 (insn, operands);

            case 2:
              if (!((
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3407 (insn, operands);

            case 3:
              if (!((
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3409 (insn, operands);

            case 4:
              if (!((
#line 22263 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22265 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3440 (insn, operands);

            case 5:
              if (!(
#line 22263 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22265 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3441 (insn, operands);

            default:
              return NULL;
            }

        case SUBREG:
          switch (pattern1083 (x10))
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
              return gen_split_3411 (insn, operands);

            case 1:
              if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3413 (insn, operands);

            case 2:
              if (!((
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3415 (insn, operands);

            case 3:
              if (!((
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3417 (insn, operands);

            case 4:
              if (!((
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3423 (insn, operands);

            case 5:
              if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3425 (insn, operands);

            case 6:
              if (!((
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3427 (insn, operands);

            case 7:
              if (!((
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3429 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          switch (pattern984 (x10))
            {
            case 0:
              if (!((
#line 22292 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22294 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3442 (insn, operands);

            case 1:
              if (!(
#line 22292 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22294 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3443 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SUBREG:
      if (pattern110 (x3) != 0
          || !(
#line 22138 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 22140 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3430 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_61 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern835 (x3) != 0)
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SFmode:
          if (!register_operand (operands[1], E_V16SFmode)
              || !(
#line 12541 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1551 (insn, operands);

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 12942 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1560 (insn, operands);

        default:
          return NULL;
        }

    case E_V4SImode:
      if (!nonimmediate_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode)
              || !(
#line 12541 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1552 (insn, operands);

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !
#line 12942 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1559 (insn, operands);

        default:
          return NULL;
        }

    case E_V4DFmode:
      if (!nonimmediate_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode)
          || !(
#line 12606 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || (REG_P (operands[0]) && !EXT_REX_SSE_REG_P (operands[1])))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1553 (insn, operands);

    case E_V4DImode:
      if (!nonimmediate_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 12606 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || (REG_P (operands[0]) && !EXT_REX_SSE_REG_P (operands[1])))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1554 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_64 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1667 (insn, operands);

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
          return gen_split_1694 (insn, operands);

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
          return gen_split_1721 (insn, operands);

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
          return gen_split_1748 (insn, operands);

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
          return gen_split_1775 (insn, operands);

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
          return gen_split_1802 (insn, operands);

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
          return gen_split_1829 (insn, operands);

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
          return gen_split_1856 (insn, operands);

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
          return gen_split_1883 (insn, operands);

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
          return gen_split_1910 (insn, operands);

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
          return gen_split_1937 (insn, operands);

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
          return gen_split_1964 (insn, operands);

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
          return gen_split_1670 (insn, operands);

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
          return gen_split_1697 (insn, operands);

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
          return gen_split_1724 (insn, operands);

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
          return gen_split_1751 (insn, operands);

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
          return gen_split_1778 (insn, operands);

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
          return gen_split_1805 (insn, operands);

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
          return gen_split_1832 (insn, operands);

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
          return gen_split_1859 (insn, operands);

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
          return gen_split_1886 (insn, operands);

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
          return gen_split_1913 (insn, operands);

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
          return gen_split_1940 (insn, operands);

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
          return gen_split_1967 (insn, operands);

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
          return gen_split_1673 (insn, operands);

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
          return gen_split_1700 (insn, operands);

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
          return gen_split_1727 (insn, operands);

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
          return gen_split_1754 (insn, operands);

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
          return gen_split_1781 (insn, operands);

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
          return gen_split_1808 (insn, operands);

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
          return gen_split_1835 (insn, operands);

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
          return gen_split_1862 (insn, operands);

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
          return gen_split_1889 (insn, operands);

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
          return gen_split_1916 (insn, operands);

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
          return gen_split_1943 (insn, operands);

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
          return gen_split_1970 (insn, operands);

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
          return gen_split_2951 (insn, operands);

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
          return gen_split_2960 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2969 (insn, operands);

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
          return gen_split_2978 (insn, operands);

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
          return gen_split_2987 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2996 (insn, operands);

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
          return gen_split_3005 (insn, operands);

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
          return gen_split_3014 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3023 (insn, operands);

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
          return gen_split_3032 (insn, operands);

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
          return gen_split_3041 (insn, operands);

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3050 (insn, operands);

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
          return gen_split_2315 (insn, operands);

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
          return gen_split_2342 (insn, operands);

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
          return gen_split_2369 (insn, operands);

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
          return gen_split_2396 (insn, operands);

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
          return gen_split_2423 (insn, operands);

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
          return gen_split_2450 (insn, operands);

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
          return gen_split_2477 (insn, operands);

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
          return gen_split_2504 (insn, operands);

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
          return gen_split_2531 (insn, operands);

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
          return gen_split_2558 (insn, operands);

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
          return gen_split_2585 (insn, operands);

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
          return gen_split_2612 (insn, operands);

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
          return gen_split_2318 (insn, operands);

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
          return gen_split_2345 (insn, operands);

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
          return gen_split_2372 (insn, operands);

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
          return gen_split_2399 (insn, operands);

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
          return gen_split_2426 (insn, operands);

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
          return gen_split_2453 (insn, operands);

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
          return gen_split_2480 (insn, operands);

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
          return gen_split_2507 (insn, operands);

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
          return gen_split_2534 (insn, operands);

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
          return gen_split_2561 (insn, operands);

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
          return gen_split_2588 (insn, operands);

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
          return gen_split_2615 (insn, operands);

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
          return gen_split_2321 (insn, operands);

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
          return gen_split_2348 (insn, operands);

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
          return gen_split_2375 (insn, operands);

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
          return gen_split_2402 (insn, operands);

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
          return gen_split_2429 (insn, operands);

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
          return gen_split_2456 (insn, operands);

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
          return gen_split_2483 (insn, operands);

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
          return gen_split_2510 (insn, operands);

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
          return gen_split_2537 (insn, operands);

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
          return gen_split_2564 (insn, operands);

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
          return gen_split_2591 (insn, operands);

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
          return gen_split_2618 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_74 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      return split_72 (x1, insn);

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
              return gen_split_1984 (insn, operands);

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
              return gen_split_2011 (insn, operands);

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
              return gen_split_2038 (insn, operands);

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
              return gen_split_2065 (insn, operands);

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
              return gen_split_2092 (insn, operands);

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
              return gen_split_2119 (insn, operands);

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
              return gen_split_2146 (insn, operands);

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
              return gen_split_2173 (insn, operands);

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
              return gen_split_2200 (insn, operands);

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
              return gen_split_2227 (insn, operands);

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
              return gen_split_2254 (insn, operands);

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
              return gen_split_2281 (insn, operands);

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
              return gen_split_1987 (insn, operands);

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
              return gen_split_2014 (insn, operands);

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
              return gen_split_2041 (insn, operands);

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
              return gen_split_2068 (insn, operands);

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
              return gen_split_2095 (insn, operands);

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
              return gen_split_2122 (insn, operands);

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
              return gen_split_2149 (insn, operands);

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
              return gen_split_2176 (insn, operands);

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
              return gen_split_2203 (insn, operands);

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
              return gen_split_2230 (insn, operands);

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
              return gen_split_2257 (insn, operands);

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
              return gen_split_2284 (insn, operands);

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
              return gen_split_1990 (insn, operands);

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
              return gen_split_2017 (insn, operands);

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
              return gen_split_2044 (insn, operands);

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
              return gen_split_2071 (insn, operands);

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
              return gen_split_2098 (insn, operands);

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
              return gen_split_2125 (insn, operands);

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
              return gen_split_2152 (insn, operands);

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
              return gen_split_2179 (insn, operands);

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
              return gen_split_2206 (insn, operands);

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
              return gen_split_2233 (insn, operands);

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
              return gen_split_2260 (insn, operands);

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
              return gen_split_2287 (insn, operands);

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
              return gen_split_3058 (insn, operands);

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
              return gen_split_3067 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3076 (insn, operands);

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
              return gen_split_3085 (insn, operands);

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
              return gen_split_3094 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3103 (insn, operands);

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
              return gen_split_3112 (insn, operands);

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
              return gen_split_3121 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3130 (insn, operands);

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
              return gen_split_3139 (insn, operands);

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
              return gen_split_3148 (insn, operands);

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
              return gen_split_3157 (insn, operands);

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
              return gen_split_2632 (insn, operands);

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
              return gen_split_2659 (insn, operands);

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
              return gen_split_2686 (insn, operands);

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
              return gen_split_2713 (insn, operands);

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
              return gen_split_2740 (insn, operands);

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
              return gen_split_2767 (insn, operands);

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
              return gen_split_2794 (insn, operands);

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
              return gen_split_2821 (insn, operands);

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
              return gen_split_2848 (insn, operands);

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
              return gen_split_2875 (insn, operands);

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
              return gen_split_2902 (insn, operands);

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
              return gen_split_2929 (insn, operands);

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
              return gen_split_2635 (insn, operands);

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
              return gen_split_2662 (insn, operands);

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
              return gen_split_2689 (insn, operands);

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
              return gen_split_2716 (insn, operands);

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
              return gen_split_2743 (insn, operands);

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
              return gen_split_2770 (insn, operands);

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
              return gen_split_2797 (insn, operands);

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
              return gen_split_2824 (insn, operands);

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
              return gen_split_2851 (insn, operands);

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
              return gen_split_2878 (insn, operands);

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
              return gen_split_2905 (insn, operands);

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
              return gen_split_2932 (insn, operands);

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
              return gen_split_2638 (insn, operands);

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
              return gen_split_2665 (insn, operands);

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
              return gen_split_2692 (insn, operands);

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
              return gen_split_2719 (insn, operands);

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
              return gen_split_2746 (insn, operands);

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
              return gen_split_2773 (insn, operands);

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
              return gen_split_2800 (insn, operands);

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
              return gen_split_2827 (insn, operands);

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
              return gen_split_2854 (insn, operands);

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
              return gen_split_2881 (insn, operands);

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
              return gen_split_2908 (insn, operands);

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
              return gen_split_2935 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
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
              return gen_split_1993 (insn, operands);

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
              return gen_split_2020 (insn, operands);

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
              return gen_split_2047 (insn, operands);

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
              return gen_split_2074 (insn, operands);

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
              return gen_split_2101 (insn, operands);

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
              return gen_split_2128 (insn, operands);

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
              return gen_split_2155 (insn, operands);

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
              return gen_split_2182 (insn, operands);

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
              return gen_split_2209 (insn, operands);

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
              return gen_split_2236 (insn, operands);

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
              return gen_split_2263 (insn, operands);

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
              return gen_split_2290 (insn, operands);

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
              return gen_split_1996 (insn, operands);

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
              return gen_split_2023 (insn, operands);

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
              return gen_split_2050 (insn, operands);

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
              return gen_split_2077 (insn, operands);

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
              return gen_split_2104 (insn, operands);

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
              return gen_split_2131 (insn, operands);

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
              return gen_split_2158 (insn, operands);

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
              return gen_split_2185 (insn, operands);

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
              return gen_split_2212 (insn, operands);

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
              return gen_split_2239 (insn, operands);

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
              return gen_split_2266 (insn, operands);

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
              return gen_split_2293 (insn, operands);

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
              return gen_split_1999 (insn, operands);

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
              return gen_split_2026 (insn, operands);

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
              return gen_split_2053 (insn, operands);

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
              return gen_split_2080 (insn, operands);

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
              return gen_split_2107 (insn, operands);

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
              return gen_split_2134 (insn, operands);

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
              return gen_split_2161 (insn, operands);

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
              return gen_split_2188 (insn, operands);

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
              return gen_split_2215 (insn, operands);

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
              return gen_split_2242 (insn, operands);

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
              return gen_split_2269 (insn, operands);

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
              return gen_split_2296 (insn, operands);

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
              return gen_split_3061 (insn, operands);

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
              return gen_split_3070 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3079 (insn, operands);

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
              return gen_split_3088 (insn, operands);

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
              return gen_split_3097 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3106 (insn, operands);

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
              return gen_split_3115 (insn, operands);

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
              return gen_split_3124 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3133 (insn, operands);

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
              return gen_split_3142 (insn, operands);

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
              return gen_split_3151 (insn, operands);

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
              return gen_split_3160 (insn, operands);

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
              return gen_split_2641 (insn, operands);

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
              return gen_split_2668 (insn, operands);

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
              return gen_split_2695 (insn, operands);

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
              return gen_split_2722 (insn, operands);

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
              return gen_split_2749 (insn, operands);

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
              return gen_split_2776 (insn, operands);

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
              return gen_split_2803 (insn, operands);

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
              return gen_split_2830 (insn, operands);

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
              return gen_split_2857 (insn, operands);

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
              return gen_split_2884 (insn, operands);

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
              return gen_split_2911 (insn, operands);

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
              return gen_split_2938 (insn, operands);

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
              return gen_split_2644 (insn, operands);

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
              return gen_split_2671 (insn, operands);

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
              return gen_split_2698 (insn, operands);

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
              return gen_split_2725 (insn, operands);

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
              return gen_split_2752 (insn, operands);

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
              return gen_split_2779 (insn, operands);

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
              return gen_split_2806 (insn, operands);

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
              return gen_split_2833 (insn, operands);

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
              return gen_split_2860 (insn, operands);

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
              return gen_split_2887 (insn, operands);

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
              return gen_split_2914 (insn, operands);

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
              return gen_split_2941 (insn, operands);

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
              return gen_split_2647 (insn, operands);

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
              return gen_split_2674 (insn, operands);

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
              return gen_split_2701 (insn, operands);

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
              return gen_split_2728 (insn, operands);

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
              return gen_split_2755 (insn, operands);

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
              return gen_split_2782 (insn, operands);

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
              return gen_split_2809 (insn, operands);

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
              return gen_split_2836 (insn, operands);

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
              return gen_split_2863 (insn, operands);

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
              return gen_split_2890 (insn, operands);

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
              return gen_split_2917 (insn, operands);

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
              return gen_split_2944 (insn, operands);

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
