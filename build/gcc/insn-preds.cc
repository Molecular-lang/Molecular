/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/i386/i386.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"


struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
struct target_constraints *this_target_constraints = &default_target_constraints;
#endif
static inline bool
aligned_register_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 25 "../../gcc/common.md"
{
  /* Require the offset in a non-paradoxical subreg to be naturally aligned.
     For example, if we have a subreg of something that is double the size of
     this operand, the offset must select the first or second half of it.  */
  if (SUBREG_P (op)
      && multiple_p (SUBREG_BYTE (op), GET_MODE_SIZE (GET_MODE (op))))
    op = SUBREG_REG (op);
  if (!REG_P (op))
    return false;

  if (HARD_REGISTER_P (op))
    {
      if (!in_hard_reg_set_p (operand_reg_set, GET_MODE (op), REGNO (op)))
	return false;

      /* Reject hard registers that would need reloading, so that the reload
	 is visible to IRA and to pre-RA optimizers.  */
      if (REGNO (op) % REG_NREGS (op) != 0)
	return false;
    }
  return true;
}

bool
aligned_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(aligned_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
any_fp_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 23 "../../gcc/config/i386/predicates.md"
(ANY_FP_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
fp_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 28 "../../gcc/config/i386/predicates.md"
(STACK_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
general_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 33 "../../gcc/config/i386/predicates.md"
(GENERAL_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
index_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 38 "../../gcc/config/i386/predicates.md"
(INDEX_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
nonimmediate_gr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) ? ((
#line 43 "../../gcc/config/i386/predicates.md"
(GENERAL_REGNO_P (REGNO (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) : (nonimmediate_operand (op, mode));
}

bool
general_gr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) ? ((
#line 49 "../../gcc/config/i386/predicates.md"
(GENERAL_REGNO_P (REGNO (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) : (general_operand (op, mode));
}

bool
mmx_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 55 "../../gcc/config/i386/predicates.md"
(MMX_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
register_mmxmem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((!(
#line 61 "../../gcc/config/i386/predicates.md"
(TARGET_MMX_WITH_SSE))) && (memory_operand (op, mode)));
}

bool
sse_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 67 "../../gcc/config/i386/predicates.md"
(SSE_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
any_QIreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 72 "../../gcc/config/i386/predicates.md"
(ANY_QI_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
QIreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 77 "../../gcc/config/i386/predicates.md"
(QI_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
ext_QIreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 81 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) && ((GET_CODE (op) == REG) && (!(
#line 83 "../../gcc/config/i386/predicates.md"
(QI_REGNO_P (REGNO (op))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
ax_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 88 "../../gcc/config/i386/predicates.md"
(REGNO (op) == AX_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
flags_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) && (
#line 93 "../../gcc/config/i386/predicates.md"
(REGNO (op) == FLAGS_REG));
}

bool
mask_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 98 "../../gcc/config/i386/predicates.md"
(MASK_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
int248_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (((
#line 103 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) && (
#line 104 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == DImode))) || ((
#line 105 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == SImode)) || (
#line 106 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == HImode))));
}

bool
int_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) && (((
#line 111 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) && (
#line 112 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == DImode))) || ((
#line 113 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == SImode)) || ((
#line 114 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == HImode)) || (
#line 115 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) == QImode)))));
}

bool
register_ssemem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 120 "../../gcc/config/i386/predicates.md"
(SSE_FLOAT_MODE_P (mode) && TARGET_SSE_MATH)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

bool
nonimm_ssenomem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 128 "../../gcc/config/i386/predicates.md"
(SSE_FLOAT_MODE_P (mode) && TARGET_SSE_MATH)) && (!(
#line 129 "../../gcc/config/i386/predicates.md"
(TARGET_MIX_SSE_I387)))) ? (register_operand (op, mode)) : (nonimmediate_operand (op, mode));
}

bool
x87nonimm_ssenomem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 136 "../../gcc/config/i386/predicates.md"
(SSE_FLOAT_MODE_P (mode) && TARGET_SSE_MATH)) && (!(
#line 137 "../../gcc/config/i386/predicates.md"
(TARGET_MIX_SSE_I387 && X87_ENABLE_ARITH (mode))))) ? (register_operand (op, mode)) : (nonimmediate_operand (op, mode));
}

bool
register_sse4nonimm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 143 "../../gcc/config/i386/predicates.md"
(TARGET_SSE4_1)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

bool
symbol_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
ix86_endbr_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 154 "../../gcc/config/i386/predicates.md"
{
  if (flag_cf_protection & CF_BRANCH)
     {
       unsigned HOST_WIDE_INT imm = UINTVAL (op);
       unsigned HOST_WIDE_INT val = TARGET_64BIT ? 0xfa1e0ff3 : 0xfb1e0ff3;

       if (imm == val)
	 return true;

       /* NB: Encoding is byte based.  */
       if (TARGET_64BIT)
	 for (; imm >= val; imm >>= 8)
	   if (imm == val)
	     return true;
      }

  return false;
}

bool
ix86_endbr_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(ix86_endbr_immediate_operand_1 (op, mode)));
}

static inline bool
x86_64_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 176 "../../gcc/config/i386/predicates.md"
{
  if (ix86_endbr_immediate_operand (op, VOIDmode))
    return false;

  if (!TARGET_64BIT)
    return immediate_operand (op, mode);

  switch (GET_CODE (op))
    {
    case CONST_INT:
      {
        HOST_WIDE_INT val = INTVAL (op);
        return trunc_int_for_mode (val, SImode) == val;
      }
    case SYMBOL_REF:
      /* TLS symbols are not constant.  */
      if (SYMBOL_REF_TLS_MODEL (op))
	return false;

      /* Load the external function address via the GOT slot.  */
      if (ix86_force_load_from_GOT_p (op))
	return false;

      /* For certain code models, the symbolic references are known to fit.
	 in CM_SMALL_PIC model we know it fits if it is local to the shared
	 library.  Don't count TLS SYMBOL_REFs here, since they should fit
	 only if inside of UNSPEC handled below.  */
      return (ix86_cmodel == CM_SMALL || ix86_cmodel == CM_KERNEL
	      || (ix86_cmodel == CM_MEDIUM && !SYMBOL_REF_FAR_ADDR_P (op)));

    case LABEL_REF:
      /* For certain code models, the code is near as well.  */
      return (ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM
	      || ix86_cmodel == CM_KERNEL);

    case CONST:
      /* We also may accept the offsetted memory references in certain
	 special cases.  */
      if (GET_CODE (XEXP (op, 0)) == UNSPEC)
	switch (XINT (XEXP (op, 0), 1))
	  {
	  case UNSPEC_GOTPCREL:
	  case UNSPEC_DTPOFF:
	  case UNSPEC_GOTNTPOFF:
	  case UNSPEC_NTPOFF:
	    return true;
	  default:
	    break;
	  }

      if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);

	  if (ix86_cmodel == CM_LARGE && GET_CODE (op1) != UNSPEC)
	    return false;
	  if (!CONST_INT_P (op2))
	    return false;

	  HOST_WIDE_INT offset = INTVAL (op2);
	  if (trunc_int_for_mode (offset, SImode) != offset)
	    return false;

	  switch (GET_CODE (op1))
	    {
	    case SYMBOL_REF:
	      /* TLS symbols are not constant.  */
	      if (SYMBOL_REF_TLS_MODEL (op1))
		return false;

	      /* Load the external function address via the GOT slot.  */
	      if (ix86_force_load_from_GOT_p (op1))
	        return false;

	      /* For CM_SMALL assume that latest object is 16MB before
		 end of 31bits boundary.  We may also accept pretty
		 large negative constants knowing that all objects are
		 in the positive half of address space.  */
	      if ((ix86_cmodel == CM_SMALL
		   || (ix86_cmodel == CM_MEDIUM
		       && !SYMBOL_REF_FAR_ADDR_P (op1)))
		  && offset < 16*1024*1024)
		return true;
	      /* For CM_KERNEL we know that all object resist in the
		 negative half of 32bits address space.  We may not
		 accept negative offsets, since they may be just off
		 and we may accept pretty large positive ones.  */
	      if (ix86_cmodel == CM_KERNEL
		  && offset > 0)
		return true;
	      break;

	    case LABEL_REF:
	      /* These conditions are similar to SYMBOL_REF ones, just the
		 constraints for code models differ.  */
	      if ((ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM)
		  && offset < 16*1024*1024)
		return true;
	      if (ix86_cmodel == CM_KERNEL
		  && offset > 0)
		return true;
	      break;

	    case UNSPEC:
	      switch (XINT (op1, 1))
		{
		case UNSPEC_DTPOFF:
		case UNSPEC_NTPOFF:
		  return true;
		}
	      break;

	    default:
	      break;
	    }
	}
      break;

      default:
	gcc_unreachable ();
    }

  return false;
}

bool
x86_64_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(x86_64_immediate_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
x86_64_zext_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 305 "../../gcc/config/i386/predicates.md"
{
  if (ix86_endbr_immediate_operand (op, VOIDmode))
    return false;

  switch (GET_CODE (op))
    {
    case CONST_INT:
      return !(INTVAL (op) & ~HOST_WIDE_INT_C (0xffffffff));

    case SYMBOL_REF:
      /* TLS symbols are not constant.  */
      if (SYMBOL_REF_TLS_MODEL (op))
	return false;

      /* Load the external function address via the GOT slot.  */
      if (ix86_force_load_from_GOT_p (op))
	return false;

     /* For certain code models, the symbolic references are known to fit.  */
      return (ix86_cmodel == CM_SMALL
	      || (ix86_cmodel == CM_MEDIUM
		  && !SYMBOL_REF_FAR_ADDR_P (op)));

    case LABEL_REF:
      /* For certain code models, the code is near as well.  */
      return ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM;

    case CONST:
      /* We also may accept the offsetted memory references in certain
	 special cases.  */
      if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);

	  if (ix86_cmodel == CM_LARGE)
	    return false;
	  if (!CONST_INT_P (op2))
	    return false;

	  HOST_WIDE_INT offset = INTVAL (op2);
	  if (trunc_int_for_mode (offset, SImode) != offset)
	    return false;

	  switch (GET_CODE (op1))
	    {
	    case SYMBOL_REF:
	      /* TLS symbols are not constant.  */
	      if (SYMBOL_REF_TLS_MODEL (op1))
		return false;

	      /* Load the external function address via the GOT slot.  */
	      if (ix86_force_load_from_GOT_p (op1))
	        return false;

	      /* For small code model we may accept pretty large positive
		 offsets, since one bit is available for free.  Negative
		 offsets are limited by the size of NULL pointer area
		 specified by the ABI.  */
	      if ((ix86_cmodel == CM_SMALL
		   || (ix86_cmodel == CM_MEDIUM
		       && !SYMBOL_REF_FAR_ADDR_P (op1)))
		  && offset > -0x10000)
		return true;
	      /* ??? For the kernel, we may accept adjustment of
		 -0x10000000, since we know that it will just convert
		 negative address space to positive, but perhaps this
		 is not worthwhile.  */
	      break;

	    case LABEL_REF:
	      /* These conditions are similar to SYMBOL_REF ones, just the
		 constraints for code models differ.  */
	      if ((ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM)
		  && offset > -0x10000)
		return true;
	      break;

	    default:
	      return false;
	    }
	}
      break;

    default:
      gcc_unreachable ();
    }
  return false;
}

bool
x86_64_zext_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(x86_64_zext_immediate_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
x86_64_hilo_int_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 399 "../../gcc/config/i386/predicates.md"
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
      return x86_64_immediate_operand (op, mode);

    case CONST_WIDE_INT:
      gcc_assert (CONST_WIDE_INT_NUNITS (op) == 2);
      return (x86_64_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (op, 0)),
					DImode)
	      && x86_64_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (op,
									1)),
					   DImode));

    default:
      gcc_unreachable ();
    }
}

bool
x86_64_hilo_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      break;
    default:
      return false;
    }
  return 
(x86_64_hilo_int_operand_1 (op, mode));
}

static inline bool
x86_64_dwzext_immediate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 422 "../../gcc/config/i386/predicates.md"
{
  if (ix86_endbr_immediate_operand (op, VOIDmode))
    return false;

  switch (GET_CODE (op))
    {
    case CONST_INT:
      if (!TARGET_64BIT)
	return UINTVAL (op) <= HOST_WIDE_INT_UC (0xffffffff);
      return UINTVAL (op) <= HOST_WIDE_INT_UC (0x7fffffff);

    case CONST_WIDE_INT:
      if (!TARGET_64BIT)
	return false;
      return (CONST_WIDE_INT_NUNITS (op) == 2
	      && CONST_WIDE_INT_ELT (op, 1) == 0
	      && (trunc_int_for_mode (CONST_WIDE_INT_ELT (op, 0), SImode)
		  == (HOST_WIDE_INT) CONST_WIDE_INT_ELT (op, 0)));

    default:
      gcc_unreachable ();
    }
}

bool
x86_64_dwzext_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      break;
    default:
      return false;
    }
  return 
(x86_64_dwzext_immediate_operand_1 (op, mode));
}

bool
x86_64_immediate_size_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && ((!(
#line 450 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT))) || ((
#line 451 "../../gcc/config/i386/predicates.md"
(ix86_cmodel == CM_SMALL)) || (
#line 452 "../../gcc/config/i386/predicates.md"
(ix86_cmodel == CM_KERNEL))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
x86_64_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 456 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || (x86_64_immediate_operand (op, mode))) : (general_operand (op, mode));
}

bool
x86_64_hilo_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 464 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || (x86_64_hilo_int_operand (op, mode))) : (general_operand (op, mode));
}

bool
x86_64_sext_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 473 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) != VOIDmode)) && (x86_64_general_operand (op, mode));
}

bool
sext_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 480 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) != VOIDmode)) && (general_operand (op, mode));
}

bool
x86_64_zext_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 487 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || ((x86_64_zext_immediate_operand (op, mode)) && (
#line 490 "../../gcc/config/i386/predicates.md"
(GET_MODE (op) != VOIDmode)))) : (nonimmediate_operand (op, mode));
}

bool
x86_64_szext_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 496 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || ((x86_64_immediate_operand (op, mode)) || (x86_64_zext_immediate_operand (op, mode)))) : (general_operand (op, mode));
}

bool
x86_64_nonmemory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 504 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((register_operand (op, mode)) || (x86_64_immediate_operand (op, mode))) : (nonmemory_operand (op, mode));
}

bool
x86_64_szext_nonmemory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 511 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((register_operand (op, mode)) || ((x86_64_immediate_operand (op, mode)) || (x86_64_zext_immediate_operand (op, mode)))) : (nonmemory_operand (op, mode));
}

static inline bool
pic_32bit_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 521 "../../gcc/config/i386/predicates.md"
{
  if (!flag_pic)
    return false;

  /* Rule out relocations that translate into 64bit constants.  */
  if (TARGET_64BIT && GET_CODE (op) == CONST)
    {
      op = XEXP (op, 0);
      if (GET_CODE (op) == PLUS && CONST_INT_P (XEXP (op, 1)))
	op = XEXP (op, 0);
      if (GET_CODE (op) == UNSPEC
	  && (XINT (op, 1) == UNSPEC_GOTOFF
	      || XINT (op, 1) == UNSPEC_GOT))
	return false;
    }

  return symbolic_operand (op, mode);
}

bool
pic_32bit_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(pic_32bit_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
x86_64_movabs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonmemory_operand (op, mode)) && (!(pic_32bit_operand (op, mode)));
}

static inline bool
symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 549 "../../gcc/config/i386/predicates.md"
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      return true;

    case CONST:
      op = XEXP (op, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF
	  || (GET_CODE (op) == UNSPEC
	      && (XINT (op, 1) == UNSPEC_GOT
		  || XINT (op, 1) == UNSPEC_GOTOFF
		  || XINT (op, 1) == UNSPEC_PCREL
		  || XINT (op, 1) == UNSPEC_GOTPCREL)))
	return true;
      if (GET_CODE (op) != PLUS
	  || !CONST_INT_P (XEXP (op, 1)))
	return false;

      op = XEXP (op, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF)
	return true;
      /* Only @GOTOFF gets offsets.  */
      if (GET_CODE (op) != UNSPEC
	  || XINT (op, 1) != UNSPEC_GOTOFF)
	return false;

      op = XVECEXP (op, 0, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF)
	return true;
      return false;

    default:
      gcc_unreachable ();
    }
}

bool
symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
local_symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 593 "../../gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == CONST
      && GET_CODE (XEXP (op, 0)) == PLUS
      && CONST_INT_P (XEXP (XEXP (op, 0), 1)))
    op = XEXP (XEXP (op, 0), 0);

  if (GET_CODE (op) == LABEL_REF)
    return true;

  if (GET_CODE (op) != SYMBOL_REF)
    return false;

  if (SYMBOL_REF_TLS_MODEL (op))
    return false;

  /* Dll-imported symbols are always external.  */
  if (TARGET_DLLIMPORT_DECL_ATTRIBUTES && SYMBOL_REF_DLLIMPORT_P (op))
    return false;
  if (SYMBOL_REF_LOCAL_P (op))
    return true;

  /* There is, however, a not insubstantial body of code in the rest of
     the compiler that assumes it can just stick the results of
     ASM_GENERATE_INTERNAL_LABEL in a symbol_ref and have done.  */
  /* ??? This is a hack.  Should update the body of the compiler to
     always create a DECL an invoke targetm.encode_section_info.  */
  if (strncmp (XSTR (op, 0), internal_label_prefix,
	       internal_label_prefix_len) == 0)
    return true;

  return false;
}

bool
local_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      break;
    default:
      return false;
    }
  return (
(local_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
local_func_symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 628 "../../gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == CONST
      && GET_CODE (XEXP (op, 0)) == PLUS
      && CONST_INT_P (XEXP (XEXP (op, 0), 1)))
    op = XEXP (XEXP (op, 0), 0);

  if (GET_CODE (op) == SYMBOL_REF
      && !SYMBOL_REF_FUNCTION_P (op))
    return false;

  return true;
}

bool
local_func_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (local_symbolic_operand (op, mode)) && (
(local_func_symbolic_operand_1 (op, mode)));
}

bool
gotoff_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((!(
#line 650 "../../gcc/config/i386/predicates.md"
(TARGET_VXWORKS_RTP))) || ((
#line 651 "../../gcc/config/i386/predicates.md"
(ix86_cmodel == CM_LARGE)) || (
#line 652 "../../gcc/config/i386/predicates.md"
(ix86_cmodel == CM_LARGE_PIC)))) && (local_symbolic_operand (op, mode));
}

bool
tls_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
#line 658 "../../gcc/config/i386/predicates.md"
(SYMBOL_REF_TLS_MODEL (op)));
}

bool
tls_modbase_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
#line 662 "../../gcc/config/i386/predicates.md"
(op == ix86_tls_module_base ()));
}

bool
tls_address_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SET:
    case PARALLEL:
    case UNSPEC:
    case UNSPEC_VOLATILE:
      break;
    default:
      return false;
    }
  return (
#line 666 "../../gcc/config/i386/predicates.md"
(ix86_tls_address_pattern_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
constant_call_address_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 671 "../../gcc/config/i386/predicates.md"
{
  if (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC
      || flag_force_indirect_call)
    return false;
  if (TARGET_DLLIMPORT_DECL_ATTRIBUTES && SYMBOL_REF_DLLIMPORT_P (op))
    return false;
  return true;
}

bool
constant_call_address_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
(constant_call_address_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
register_no_elim_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 684 "../../gcc/config/i386/predicates.md"
{
  if (SUBREG_P (op))
    op = SUBREG_REG (op);

  /* Before reload, we can allow (SUBREG (MEM...)) as a register operand
     because it is guaranteed to be reloaded into one.  */
  if (MEM_P (op))
    return true;

  return !(op == arg_pointer_rtx
	   || op == frame_pointer_rtx
	   || VIRTUAL_REGISTER_P (op));
}

bool
register_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(register_no_elim_operand_1 (op, mode)));
}

static inline bool
register_no_SP_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 702 "../../gcc/config/i386/predicates.md"
{
  if (SUBREG_P (op))
    op = SUBREG_REG (op);

  /* Before reload, we can allow (SUBREG (MEM...)) as a register operand
     because it is guaranteed to be reloaded into one.  */
  if (MEM_P (op))
    return true;

  return !(op == arg_pointer_rtx
	   || op == frame_pointer_rtx
	   || op == stack_pointer_rtx
	   || VIRTUAL_REGISTER_P (op));
}

bool
register_no_SP_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(register_no_SP_operand_1 (op, mode)));
}

bool
call_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 722 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (register_operand (op, mode)) : (register_no_SP_operand (op, mode));
}

bool
general_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG || GET_CODE (op) == SUBREG) ? (register_no_elim_operand (op, mode)) : (general_operand (op, mode));
}

bool
nonmemory_no_elim_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_no_elim_operand (op, mode)) || (immediate_operand (op, mode));
}

bool
indirect_branch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((!(
#line 741 "../../gcc/config/i386/predicates.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && ((!(
#line 742 "../../gcc/config/i386/predicates.md"
(TARGET_X32))) && (memory_operand (op, mode))));
}

static inline bool
sibcall_memory_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 752 "../../gcc/config/i386/predicates.md"
{
  op = XEXP (op, 0);
  if (CONSTANT_P (op))
    return true;
  if (GET_CODE (op) == PLUS && REG_P (XEXP (op, 0)))
    {
      int regno = REGNO (XEXP (op, 0));
      if (!HARD_REGISTER_NUM_P (regno) || call_used_or_fixed_reg_p (regno))
	{
	  op = XEXP (op, 1);
	  if (GOT32_symbol_operand (op, VOIDmode))
	    return true;
	}
    }
  return false;
}

bool
sibcall_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(sibcall_memory_operand_1 (op, mode)));
}

bool
GOT_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && ((GET_CODE (XEXP (op, 0)) == CONST) && ((GET_CODE (XEXP (XEXP (op, 0), 0)) == UNSPEC) && (
#line 774 "../../gcc/config/i386/predicates.md"
(XINT (XEXP (XEXP (op, 0), 0), 1) == UNSPEC_GOTPCREL))));
}

bool
call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 779 "../../gcc/config/i386/predicates.md"
(constant_call_address_operand
		     (op, mode == VOIDmode ? mode : Pmode))) || ((call_register_operand (op, mode)) || ((!(
#line 782 "../../gcc/config/i386/predicates.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && (((!(
#line 783 "../../gcc/config/i386/predicates.md"
(TARGET_X32))) && (memory_operand (op, mode))) || ((
#line 785 "../../gcc/config/i386/predicates.md"
(TARGET_X32 && Pmode == DImode)) && (GOT_memory_operand (op, mode))))));
}

bool
sibcall_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 790 "../../gcc/config/i386/predicates.md"
(constant_call_address_operand
		     (op, mode == VOIDmode ? mode : Pmode))) || ((register_no_elim_operand (op, mode)) || ((!(
#line 793 "../../gcc/config/i386/predicates.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && (((!(
#line 794 "../../gcc/config/i386/predicates.md"
(TARGET_X32))) && (sibcall_memory_operand (op, mode))) || ((
#line 796 "../../gcc/config/i386/predicates.md"
(TARGET_X32 && Pmode == DImode)) && (GOT_memory_operand (op, mode))))));
}

bool
GOT32_symbol_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST) && ((GET_CODE (XEXP (op, 0)) == UNSPEC) && (
#line 803 "../../gcc/config/i386/predicates.md"
(XINT (XEXP (op, 0), 1) == UNSPEC_GOT)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const0_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 808 "../../gcc/config/i386/predicates.md"
{
  if (mode == VOIDmode)
    mode = GET_MODE (op);
  return op == CONST0_RTX (mode);
}

bool
const0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
(const0_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
const1_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 817 "../../gcc/config/i386/predicates.md"
{
  if (mode == VOIDmode)
    mode = GET_MODE (op);
  return op == CONST1_RTX (mode);
}

bool
const1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
(const1_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
constm1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 826 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx));
}

bool
const0_or_m1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const0_operand (op, mode)) || (constm1_operand (op, mode));
}

bool
const8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 836 "../../gcc/config/i386/predicates.md"
(INTVAL (op) == 8));
}

bool
const128_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 841 "../../gcc/config/i386/predicates.md"
(INTVAL (op) == 128));
}

bool
const_32bit_mask (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 846 "../../gcc/config/i386/predicates.md"
(trunc_int_for_mode (INTVAL (op), DImode)
		    == HOST_WIDE_INT_C (0xffffffff)));
}

static inline bool
const248_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 852 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 2 || i == 4 || i == 8;
}

bool
const248_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const248_operand_1 (op, mode)));
}

static inline bool
const123_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 860 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 1 || i == 2 || i == 3;
}

bool
const123_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const123_operand_1 (op, mode)));
}

static inline bool
const2367_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 868 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 2 || i == 3 || i == 6 || i == 7;
}

bool
const2367_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const2367_operand_1 (op, mode)));
}

static inline bool
const1248_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 876 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 1 || i == 2 || i == 4 || i == 8;
}

bool
const1248_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const1248_operand_1 (op, mode)));
}

static inline bool
const359_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 884 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 3 || i == 5 || i == 9;
}

bool
const359_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const359_operand_1 (op, mode)));
}

static inline bool
const_4_or_8_to_11_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 892 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 4 || (i >= 8 && i <= 11);
}

bool
const_4_or_8_to_11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_4_or_8_to_11_operand_1 (op, mode)));
}

static inline bool
const48_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 900 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 4 || i == 8;
}

bool
const48_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const48_operand_1 (op, mode)));
}

bool
const_0_to_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 908 "../../gcc/config/i386/predicates.md"
(op == const0_rtx)) || (
#line 909 "../../gcc/config/i386/predicates.md"
(op == const1_rtx)));
}

bool
const_0_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 914 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

bool
const_0_to_4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 919 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 4)));
}

bool
const_0_to_5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 924 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 5)));
}

bool
const_0_to_7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 929 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 7)));
}

bool
const_0_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 934 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

bool
const_0_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 939 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
const_0_to_63_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 944 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 63)));
}

bool
const_0_to_127_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 949 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 127)));
}

bool
const_0_to_255_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 954 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 255)));
}

static inline bool
const_0_to_255_mul_8_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 959 "../../gcc/config/i386/predicates.md"
{
  unsigned HOST_WIDE_INT val = INTVAL (op);
  return val <= 255*8 && val % 8 == 0;
}

bool
const_0_to_255_mul_8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_0_to_255_mul_8_operand_1 (op, mode)));
}

static inline bool
const_0_to_255_not_mul_8_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 967 "../../gcc/config/i386/predicates.md"
{
  unsigned HOST_WIDE_INT val = INTVAL (op);
  return val <= 255 && val % 8 != 0;
}

bool
const_0_to_255_not_mul_8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_0_to_255_not_mul_8_operand_1 (op, mode)));
}

bool
const_1_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 976 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 1, 31)));
}

bool
const_1_to_63_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 982 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 1, 63)));
}

bool
const_2_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 987 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 2, 3)));
}

bool
const_4_to_5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 992 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 4, 5)));
}

bool
const_4_to_7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 997 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 4, 7)));
}

bool
const_6_to_7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1002 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 6, 7)));
}

bool
const_8_to_9_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1007 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 9)));
}

bool
const_8_to_11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1012 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 11)));
}

bool
const_8_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1017 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 15)));
}

bool
const_10_to_11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1022 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 10, 11)));
}

bool
const_12_to_13_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1027 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 12, 13)));
}

bool
const_12_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1032 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 12, 15)));
}

bool
const_14_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1037 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 14, 15)));
}

bool
const_16_to_19_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1042 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 16, 19)));
}

bool
const_16_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1047 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 16, 31)));
}

bool
const_20_to_23_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1052 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 20, 23)));
}

bool
const_24_to_27_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1057 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 24, 27)));
}

bool
const_28_to_31_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 1062 "../../gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 28, 31)));
}

bool
cmpps_imm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_0_to_7_operand (op, mode)) || ((
#line 1066 "../../gcc/config/i386/predicates.md"
(TARGET_AVX)) && (const_0_to_31_operand (op, mode)));
}

static inline bool
incdec_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1072 "../../gcc/config/i386/predicates.md"
{
  /* On Pentium4, the inc and dec operations causes extra dependency on flag
     registers, since carry flag is not set.  */
  if (!TARGET_USE_INCDEC && !optimize_insn_for_size_p ())
    return false;
  return op == const1_rtx || op == constm1_rtx;
}

bool
incdec_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(incdec_operand_1 (op, mode)));
}

bool
vec_setm_sse41_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) && (
#line 1083 "../../gcc/config/i386/predicates.md"
(TARGET_SSE4_1))) || ((GET_CODE (op) == CONST_INT) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
vec_setm_avx2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) && (
#line 1088 "../../gcc/config/i386/predicates.md"
(TARGET_AVX2))) || ((GET_CODE (op) == CONST_INT) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
vec_setm_mmx_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) && ((
#line 1093 "../../gcc/config/i386/predicates.md"
(TARGET_SSE4_1)) && (
#line 1094 "../../gcc/config/i386/predicates.md"
(TARGET_MMX_WITH_SSE)))) || ((GET_CODE (op) == CONST_INT) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
reg_or_pm1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && ((
#line 1101 "../../gcc/config/i386/predicates.md"
(op == const1_rtx)) || (
#line 1102 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
regmem_or_bitnot_regmem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (((GET_CODE (op) == NOT) && (
#line 1109 "../../gcc/config/i386/predicates.md"
(nonimmediate_operand (XEXP (op, 0), mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
ternlog_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NOT:
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return (
#line 1114 "../../gcc/config/i386/predicates.md"
(ix86_ternlog_operand_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
shiftdi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1118 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

bool
ashldi_input_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1123 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (nonimmediate_operand (op, mode)) : (reg_or_pm1_operand (op, mode));
}

static inline bool
zero_extended_scalar_load_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1131 "../../gcc/config/i386/predicates.md"
{
  unsigned n_elts;
  op = avoid_constant_pool_reference (op);

  if (GET_CODE (op) != CONST_VECTOR)
    return false;

  n_elts = CONST_VECTOR_NUNITS (op);

  for (n_elts--; n_elts > 0; n_elts--)
    {
      rtx elt = CONST_VECTOR_ELT (op, n_elts);
      if (elt != CONST0_RTX (GET_MODE_INNER (GET_MODE (op))))
	return false;
    }
  return true;
}

bool
zero_extended_scalar_load_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(zero_extended_scalar_load_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
float_vector_all_ones_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1152 "../../gcc/config/i386/predicates.md"
{
  mode = GET_MODE (op);
  if (!FLOAT_MODE_P (mode)
      || (MEM_P (op)
	  && (!SYMBOL_REF_P (XEXP (op, 0))
	      || !CONSTANT_POOL_ADDRESS_P (XEXP (op, 0)))))
    return false;

  if (MEM_P (op))
    {
      op = get_pool_constant (XEXP (op, 0));
      if (GET_CODE (op) != CONST_VECTOR)
	return false;

      if (GET_MODE (op) != mode
	 && INTEGRAL_MODE_P (GET_MODE (op))
	 && op == CONSTM1_RTX (GET_MODE (op)))
	return true;
    }

  rtx first = XVECEXP (op, 0, 0);
  for (int i = 1; i != GET_MODE_NUNITS (GET_MODE (op)); i++)
    {
      rtx tmp = XVECEXP (op, 0, i);
      if (!rtx_equal_p (tmp, first))
	return false;
    }
  if (GET_MODE (first) == E_SFmode)
    {
      long l;
      REAL_VALUE_TO_TARGET_SINGLE (*CONST_DOUBLE_REAL_VALUE (first), l);
      return (l & 0xffffffff) == 0xffffffff;
    }
  else if (GET_MODE (first) == E_DFmode)
    {
      long l[2];
      REAL_VALUE_TO_TARGET_DOUBLE (*CONST_DOUBLE_REAL_VALUE (first), l);
      return ((l[0] & 0xffffffff) == 0xffffffff
	     && (l[1] & 0xffffffff) == 0xffffffff);
    }
  else
    return false;
}

bool
float_vector_all_ones_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(float_vector_all_ones_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vector_all_ones_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 1199 "../../gcc/config/i386/predicates.md"
(INTEGRAL_MODE_P (GET_MODE (op)))) && (
#line 1200 "../../gcc/config/i386/predicates.md"
(op == CONSTM1_RTX (GET_MODE (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
int_float_vector_all_ones_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_all_ones_operand (op, mode)) || ((float_vector_all_ones_operand (op, mode)) || ((
#line 1206 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx)) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))));
}

static inline bool
vector_all_ones_zero_extend_half_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1212 "../../gcc/config/i386/predicates.md"
{
  mode = GET_MODE (op);
  if (GET_MODE_CLASS (mode) != MODE_VECTOR_INT
      || (GET_MODE_SIZE (mode) != 32
	  && GET_MODE_SIZE (mode) != 64))
    return false;

  int nelts = CONST_VECTOR_NUNITS (op);
  for (int i = 0; i != nelts; i++)
    {
      rtx elt = CONST_VECTOR_ELT (op, i);
      if (i < nelts / 2
	  && elt != CONSTM1_RTX (GET_MODE_INNER (mode)))
	return false;
      if (i >= nelts / 2
	  && elt != CONST0_RTX (GET_MODE_INNER (mode)))
	return false;
    }
  return true;
}

bool
vector_all_ones_zero_extend_half_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(vector_all_ones_zero_extend_half_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
vector_all_ones_zero_extend_quarter_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1237 "../../gcc/config/i386/predicates.md"
{
  mode = GET_MODE (op);
  if (GET_MODE_CLASS (mode) != MODE_VECTOR_INT
      || GET_MODE_SIZE (mode) != 64)
    return false;

  int nelts = CONST_VECTOR_NUNITS (op);
  for (int i = 0; i != nelts; i++)
    {
      rtx elt = CONST_VECTOR_ELT (op, i);
      if (i < nelts / 4
	  && elt != CONSTM1_RTX (GET_MODE_INNER (mode)))
	return false;
      if (i >= nelts / 4
	  && elt != CONST0_RTX (GET_MODE_INNER (mode)))
	return false;
    }
  return true;
}

bool
vector_all_ones_zero_extend_quarter_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(vector_all_ones_zero_extend_quarter_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vector_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && ((
#line 1261 "../../gcc/config/i386/predicates.md"
(TARGET_AVX)) || (
#line 1262 "../../gcc/config/i386/predicates.md"
(MEM_ALIGN (op) >= GET_MODE_ALIGNMENT (mode))));
}

bool
vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (vector_memory_operand (op, mode));
}

bool
vector_or_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((vector_memory_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode))));
}

bool
bcst_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == VEC_DUPLICATE) && (((
#line 1278 "../../gcc/config/i386/predicates.md"
(TARGET_AVX512F)) && ((
#line 1279 "../../gcc/config/i386/predicates.md"
(TARGET_AVX512VL)) || ((
#line 1280 "../../gcc/config/i386/predicates.md"
(GET_MODE_SIZE (GET_MODE (op)) == 64)) && (
#line 1281 "../../gcc/config/i386/predicates.md"
(TARGET_EVEX512))))) && ((
#line 1282 "../../gcc/config/i386/predicates.md"
(VALID_BCST_MODE_P (GET_MODE_INNER (GET_MODE (op))))) && ((
#line 1283 "../../gcc/config/i386/predicates.md"
(GET_MODE (XEXP (op, 0))
		    == GET_MODE_INNER (GET_MODE (op)))) && (
#line 1285 "../../gcc/config/i386/predicates.md"
(memory_operand (XEXP (op, 0), GET_MODE (XEXP (op, 0))))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
bcst_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_operand (op, mode)) || (bcst_mem_operand (op, mode));
}

bool
nonimmediate_or_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
nonimmediate_or_const_vec_dup_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || ((
#line 1300 "../../gcc/config/i386/predicates.md"
(const_vec_duplicate_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
reg_or_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

static inline bool
x86_64_const_vector_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1312 "../../gcc/config/i386/predicates.md"
{
  if (mode == VOIDmode)
    mode = GET_MODE (op);
  else if (GET_MODE (op) != mode)
    return false;
  if (GET_MODE_SIZE (mode) > UNITS_PER_WORD)
    return false;
  HOST_WIDE_INT val = ix86_convert_const_vector_to_integer (op, mode);
  return trunc_int_for_mode (val, SImode) == val;
}

bool
x86_64_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(x86_64_const_vector_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
nonimmediate_or_x86_64_const_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (x86_64_const_vector_operand (op, mode));
}

bool
nonimmediate_or_sse_const_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || ((
#line 1330 "../../gcc/config/i386/predicates.md"
(standard_sse_constant_p (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
reg_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const0_operand (op, mode));
}

bool
nonimm_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (const0_operand (op, mode));
}

bool
SImode_address_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SUBREG:
    case ZERO_EXTEND:
    case AND:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline bool
address_no_seg_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1351 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  if (!CONST_INT_P (op)
      && mode != VOIDmode
      && GET_MODE (op) != mode)
    return false;

  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);
  return parts.seg == ADDR_SPACE_GENERIC;
}

bool
address_no_seg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1350 "../../gcc/config/i386/predicates.md"
(address_operand (op, VOIDmode))) && (
(address_no_seg_operand_1 (op, mode)));
}

static inline bool
vsib_address_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1369 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;
  rtx disp;

  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);
  if (parts.index || parts.seg != ADDR_SPACE_GENERIC)
    return false;

  /* VSIB addressing doesn't support (%rip).  */
  if (parts.disp)
    {
      disp = parts.disp;
      if (GET_CODE (disp) == CONST)
	{
	  disp = XEXP (disp, 0);
	  if (GET_CODE (disp) == PLUS)
	    disp = XEXP (disp, 0);
	  if (GET_CODE (disp) == UNSPEC)
	    switch (XINT (disp, 1))
	      {
	      case UNSPEC_GOTPCREL:
	      case UNSPEC_PCREL:
	      case UNSPEC_GOTNTPOFF:
		return false;
	      }
	}
      if (TARGET_64BIT
	  && flag_pic
	  && (GET_CODE (disp) == SYMBOL_REF
	      || GET_CODE (disp) == LABEL_REF))
	return false;
    }

  return true;
}

bool
vsib_address_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 1368 "../../gcc/config/i386/predicates.md"
(address_operand (op, VOIDmode))) && (
(vsib_address_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
vsib_mem_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MEM) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
aligned_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1413 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  /* Registers and immediate operands are always "aligned".  */
  if (!MEM_P (op))
    return true;

  /* All patterns using aligned_operand on memory operands ends up
     in promoting memory operand to 64bit and thus causing memory mismatch.  */
  if (TARGET_MEMORY_MISMATCH_STALL && !optimize_insn_for_size_p ())
    return false;

  /* Don't even try to do any aligned optimizations with volatiles.  */
  if (MEM_VOLATILE_P (op))
    return false;

  if (MEM_ALIGN (op) >= 32)
    return true;

  op = XEXP (op, 0);

  /* Pushes and pops are only valid on the stack pointer.  */
  if (GET_CODE (op) == PRE_DEC
      || GET_CODE (op) == POST_INC)
    return true;

  /* Decode the address.  */
  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);

  if (parts.base && SUBREG_P (parts.base))
    parts.base = SUBREG_REG (parts.base);
  if (parts.index && SUBREG_P (parts.index))
    parts.index = SUBREG_REG (parts.index);

  /* Look for some component that isn't known to be aligned.  */
  if (parts.index)
    {
      if (REGNO_POINTER_ALIGN (REGNO (parts.index)) * parts.scale < 32)
	return false;
    }
  if (parts.base)
    {
      if (REGNO_POINTER_ALIGN (REGNO (parts.base)) < 32)
	return false;
    }
  if (parts.disp)
    {
      if (!CONST_INT_P (parts.disp)
	  || (INTVAL (parts.disp) & 3))
	return false;
    }

  /* Didn't find one -- this must be an aligned address.  */
  return true;
}

bool
aligned_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(aligned_operand_1 (op, mode)));
}

static inline bool
memory_displacement_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1474 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);
  return parts.disp != NULL_RTX;
}

bool
memory_displacement_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(memory_displacement_operand_1 (op, mode)));
}

static inline bool
memory_displacement_only_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1486 "../../gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  if (TARGET_64BIT)
    return false;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);

  if (parts.base || parts.index)
    return false;

  return parts.disp != NULL_RTX;
}

bool
memory_displacement_only_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(memory_displacement_only_operand_1 (op, mode)));
}

bool
long_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 1506 "../../gcc/config/i386/predicates.md"
(memory_address_length (op, false)));
}

static inline bool
fcmov_comparison_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1511 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    code = ix86_fp_compare_code_to_integer (code);

  /* i387 supports just limited amount of conditional codes.  */
  switch (code)
    {
    case GEU: case LTU:
      if (inmode == CCCmode || inmode == CCGZmode)
	return true;
      /* FALLTHRU */
    case GTU: case LEU:
      if (inmode == CCmode || inmode == CCFPmode)
	return true;
      return false;
    case ORDERED: case UNORDERED:
    case EQ: case NE:
      return true;
    default:
      return false;
    }
}

bool
fcmov_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(fcmov_comparison_operator_1 (op, mode)));
}

bool
sse_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == LT || GET_CODE (op) == LE || GET_CODE (op) == UNORDERED || GET_CODE (op) == UNGE || GET_CODE (op) == UNGT || GET_CODE (op) == ORDERED) || ((
#line 1543 "../../gcc/config/i386/predicates.md"
(TARGET_AVX)) && (GET_CODE (op) == GE || GET_CODE (op) == GT || GET_CODE (op) == UNEQ || GET_CODE (op) == UNLE || GET_CODE (op) == UNLT || GET_CODE (op) == LTGT))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
ix86_comparison_int_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
ix86_comparison_uns_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
bt_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
shr_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GTU:
    case LEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
add_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GEU:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline bool
ix86_comparison_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1564 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    return ix86_trivial_fp_comparison_operator (op, mode);

  switch (code)
    {
    case EQ: case NE:
      if (inmode == CCGZmode)
	return false;
      return true;
    case GE: case LT:
      if (inmode == CCmode || inmode == CCGCmode
	  || inmode == CCGOCmode || inmode == CCNOmode || inmode == CCGZmode)
	return true;
      return false;
    case GEU: case LTU:
      if (inmode == CCCmode || inmode == CCGZmode)
	return true;
      /* FALLTHRU */
    case GTU: case LEU:
      if (inmode == CCmode)
	return true;
      return false;
    case ORDERED: case UNORDERED:
      if (inmode == CCmode)
	return true;
      return false;
    case GT: case LE:
      if (inmode == CCmode || inmode == CCGCmode || inmode == CCNOmode)
	return true;
      return false;
    default:
      return false;
    }
}

bool
ix86_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(ix86_comparison_operator_1 (op, mode)));
}

static inline bool
ix86_carry_flag_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1607 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    code = ix86_fp_compare_code_to_integer (code);
  else if (inmode != CCmode && inmode != CCCmode && inmode != CCGZmode)
    return false;

  return code == LTU;
}

bool
ix86_carry_flag_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LTU:
    case UNLT:
      break;
    default:
      return false;
    }
  return (
(ix86_carry_flag_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
ix86_carry_flag_unset_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1623 "../../gcc/config/i386/predicates.md"
{
  machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode)
    code = ix86_fp_compare_code_to_integer (code);
  else if (inmode != CCmode && inmode != CCCmode && inmode != CCGZmode)
    return false;

  return code == GEU;
}

bool
ix86_carry_flag_unset_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GEU:
    case GE:
      break;
    default:
      return false;
    }
  return (
(ix86_carry_flag_unset_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
ix86_trivial_fp_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 1638 "../../gcc/config/i386/predicates.md"
(TARGET_AVX10_2_256)) ? (GET_CODE (op) == GT || GET_CODE (op) == GE || GET_CODE (op) == UNLT || GET_CODE (op) == UNLE || GET_CODE (op) == EQ || GET_CODE (op) == UNEQ || GET_CODE (op) == NE || GET_CODE (op) == LTGT || GET_CODE (op) == ORDERED || GET_CODE (op) == UNORDERED) : (GET_CODE (op) == GT || GET_CODE (op) == GE || GET_CODE (op) == UNLT || GET_CODE (op) == UNLE || GET_CODE (op) == UNEQ || GET_CODE (op) == LTGT || GET_CODE (op) == ORDERED || GET_CODE (op) == UNORDERED)) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
ix86_trivial_fp_comparison_operator_xf (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GT:
    case GE:
    case UNLT:
    case UNLE:
    case UNEQ:
    case LTGT:
    case ORDERED:
    case UNORDERED:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
ix86_fp_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1649 "../../gcc/config/i386/predicates.md"
(ix86_fp_comparison_strategy (GET_CODE (op))
                             == IX86_FPCMP_ARITH)) ? (comparison_operator (op, mode)) : (ix86_trivial_fp_comparison_operator (op, mode));
}

bool
ix86_fp_comparison_operator_xf (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1655 "../../gcc/config/i386/predicates.md"
(ix86_fp_comparison_strategy (GET_CODE (op))
                             == IX86_FPCMP_ARITH)) ? (comparison_operator (op, mode)) : (ix86_trivial_fp_comparison_operator_xf (op, mode));
}

bool
ix86_timode_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1662 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (ordered_comparison_operator (op, mode)) : (bt_comparison_operator (op, mode));
}

bool
ix86_timode_comparison_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1668 "../../gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (x86_64_general_operand (op, mode)) : (nonimmediate_operand (op, mode));
}

bool
cmp_fp_expander_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_DOUBLE) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) || (general_operand (op, mode));
}

bool
binary_fp_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
mult_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MULT) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
div_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == DIV) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
logic_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
plusminuslogic_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
arith_or_logical_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MULT:
    case AND:
    case IOR:
    case XOR:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
    case COMPARE:
    case MINUS:
    case DIV:
    case MOD:
    case UDIV:
    case UMOD:
    case ASHIFT:
    case ROTATE:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
commutative_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MULT:
    case AND:
    case IOR:
    case XOR:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
promotable_binary_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PLUS || GET_CODE (op) == MINUS || GET_CODE (op) == AND || GET_CODE (op) == IOR || GET_CODE (op) == XOR || GET_CODE (op) == ASHIFT) || ((GET_CODE (op) == MULT) && (
#line 1712 "../../gcc/config/i386/predicates.md"
(TARGET_TUNE_PROMOTE_HIMODE_IMUL)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
compare_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == COMPARE) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
extract_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ZERO_EXTRACT:
    case SIGN_EXTRACT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
misaligned_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 1724 "../../gcc/config/i386/predicates.md"
(MEM_ALIGN (op) < GET_MODE_BITSIZE (mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
movq_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1730 "../../gcc/config/i386/predicates.md"
{
  unsigned nelt = XVECLEN (op, 0);
  unsigned nelt2 = nelt >> 1;
  unsigned i;

  if (nelt < 2)
    return false;

  /* Validate that all of the elements are constants,
     lower halves of permute are lower halves of the first operand,
     upper halves of permute come from any of the second operand.  */
  for (i = 0; i < nelt; ++i)
    {
      rtx er = XVECEXP (op, 0, i);
      unsigned HOST_WIDE_INT ei;

      if (!CONST_INT_P (er))
	return false;
      ei = INTVAL (er);
      if (i < nelt2 && ei != i)
	return false;
      if (i >= nelt2 && (ei < nelt || ei >= nelt << 1))
	return false;
    }

  return true;
}

bool
movq_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(movq_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
vzeroall_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1761 "../../gcc/config/i386/predicates.md"
{
  unsigned i, nregs = TARGET_64BIT ? 16 : 8;

  if ((unsigned) XVECLEN (op, 0) != 1 + nregs)
    return false;

  for (i = 0; i < nregs; i++)
    {
      rtx elt = XVECEXP (op, 0, i+1);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V8SImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || SET_SRC (elt) != CONST0_RTX (V8SImode))
	return false;
    }
  return true;
}

bool
vzeroall_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(vzeroall_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vzeroall_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && ((GET_CODE (XVECEXP (op, 0, 0)) == UNSPEC_VOLATILE) && (
#line 1785 "../../gcc/config/i386/predicates.md"
(XINT (XVECEXP (op, 0, 0), 1) == UNSPECV_VZEROALL)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vzeroupper_pattern (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && ((GET_CODE (XVECEXP (op, 0, 1)) == UNSPEC) && ((
#line 1791 "../../gcc/config/i386/predicates.md"
(XINT (XVECEXP (op, 0, 1), 1) == UNSPEC_CALLEE_ABI)) && (
#line 1792 "../../gcc/config/i386/predicates.md"
(INTVAL (XVECEXP (XVECEXP (op, 0, 1), 0, 0)) == ABI_VZEROUPPER))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
addsub_vm_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1797 "../../gcc/config/i386/predicates.md"
{
  rtx op0, op1;
  int swapped;
  HOST_WIDE_INT mask;
  int nunits, elt;

  op0 = XEXP (op, 0);
  op1 = XEXP (op, 1);

  /* Sanity check.  */
  if (GET_CODE (op0) == MINUS && GET_CODE (op1) == PLUS)
    swapped = 0;
  else if (GET_CODE (op0) == PLUS && GET_CODE (op1) == MINUS)
    swapped = 1;
  else
    gcc_unreachable ();

  mask = INTVAL (XEXP (op, 2));
  nunits = GET_MODE_NUNITS (mode);

  for (elt = 0; elt < nunits; elt++)
    {
      /* bit clear: take from op0, set: take from op1  */
      int bit = !(mask & (HOST_WIDE_INT_1U << elt));

      if (bit != ((elt & 1) ^ swapped))
	return false;
    }

  return true;
}

bool
addsub_vm_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == VEC_MERGE) && (
(addsub_vm_operator_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
addsub_vs_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1833 "../../gcc/config/i386/predicates.md"
{
  rtx op0, op1;
  bool swapped;
  int nunits, elt;

  op0 = XEXP (XEXP (op, 0), 0);
  op1 = XEXP (XEXP (op, 0), 1);

  /* Sanity check.  */
  if (GET_CODE (op0) == MINUS && GET_CODE (op1) == PLUS)
    swapped = false;
  else if (GET_CODE (op0) == PLUS && GET_CODE (op1) == MINUS)
    swapped = true;
  else
    gcc_unreachable ();

  nunits = GET_MODE_NUNITS (mode);
  if (XVECLEN (XEXP (op, 1), 0) != nunits)
    return false;

  /* We already checked that permutation is suitable for addsub,
     so only look at the first element of the parallel.  */
  elt = INTVAL (XVECEXP (XEXP (op, 1), 0, 0));

  return elt == (swapped ? nunits : 0);
}

bool
addsub_vs_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == VEC_SELECT) && (GET_CODE (XEXP (op, 0)) == VEC_CONCAT)) && (
(addsub_vs_operator_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
addsub_vs_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1864 "../../gcc/config/i386/predicates.md"
{
  int nelt = XVECLEN (op, 0);
  int elt, i;
  
  if (nelt < 2)
    return false;

  /* Check that the permutation is suitable for addsub.
     For example, { 0 9 2 11 4 13 6 15 } or { 8 1 10 3 12 5 14 7 }.  */
  elt = INTVAL (XVECEXP (op, 0, 0));
  if (elt == 0)
    {
      for (i = 1; i < nelt; ++i)
	if (INTVAL (XVECEXP (op, 0, i)) != (i + (i & 1) * nelt))
	  return false;
    }
  else if (elt == nelt)
    {
      for (i = 1; i < nelt; ++i)
	if (INTVAL (XVECEXP (op, 0, i)) != (elt + i - (i & 1) * nelt))
	  return false;
    }
  else
    return false;

  return true;
}

bool
addsub_vs_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(addsub_vs_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
permvar_truncate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1896 "../../gcc/config/i386/predicates.md"
{
  int nelt = GET_MODE_NUNITS (mode);
  int perm[128];
  int id;

  if (!INTEGRAL_MODE_P (mode) || !VECTOR_MODE_P (mode))
    return false;

  if (nelt < 2)
    return false;

  if (!ix86_extract_perm_from_pool_constant (&perm[0], op))
    return false;

  id = exact_log2 (nelt);

  /* Check that the permutation is suitable for pmovz{bw,wd,dq}.
     For example V16HImode to V8HImode
     { 0 2 4 6 8 10 12 14 * * * * * * * * }.  */
  for (int i = 0; i != nelt / 2; i++)
    if ((perm[i] & ((1 << id) - 1)) != i * 2)
      return false;

  return true;
}

bool
permvar_truncate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(permvar_truncate_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
pshufb_truncv4siv4hi_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1926 "../../gcc/config/i386/predicates.md"
{
  int perm[128];

  if (mode != E_V16QImode)
    return false;

  if (!ix86_extract_perm_from_pool_constant (&perm[0], op))
    return false;

  /* Check that the permutation is suitable for pmovdw.
     For example V4SImode to V4HImode
     { 0 1 4 5 8 9 12 13 * * * * * * * * }.
     index = i % 2 + (i / 2) * 4.  */
  for (int i = 0; i != 8; i++)
    {
      /* if (SRC2[(i * 8)+7] = 1) then DEST[(i*8)+7..(i*8)+0] := 0;  */
      if (perm[i] & 128)
	return false;

      if ((perm[i] & 15) != ((i & 1) + (i & 0xFE) * 2))
	return false;
     }

  return true;
}

bool
pshufb_truncv4siv4hi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(pshufb_truncv4siv4hi_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
pshufb_truncv8hiv8qi_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1956 "../../gcc/config/i386/predicates.md"
{
  int perm[128];

  if (mode != E_V16QImode)
    return false;

  if (!ix86_extract_perm_from_pool_constant (&perm[0], op))
    return false;

  /* Check that the permutation is suitable for pmovwb.
     For example V16QImode to V8QImode
     { 0 2 4 6 8 10 12 14 * * * * * * * * }.
     index = i % 2 + (i / 2) * 4.  */
  for (int i = 0; i != 8; i++)
    {
      /* if (SRC2[(i * 8)+7] = 1) then DEST[(i*8)+7..(i*8)+0] := 0;  */
      if (perm[i] & 128)
	return false;

      if ((perm[i] & 15) != i * 2)
	 return false;
    }

  return true;
}

bool
pshufb_truncv8hiv8qi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(pshufb_truncv8hiv8qi_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
pmovzx_parallel_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 1987 "../../gcc/config/i386/predicates.md"
{
  int nelt = XVECLEN (op, 0);
  int elt, i;

  if (nelt < 2)
    return false;

  /* Check that the permutation is suitable for pmovz{bw,wd,dq}.
     For example { 0 16 1 17 2 18 3 19 4 20 5 21 6 22 7 23 }.  */
  elt = INTVAL (XVECEXP (op, 0, 0));
  if (elt == 0)
    {
      for (i = 1; i < nelt; ++i)
	if ((i & 1) != 0)
	  {
	    if (INTVAL (XVECEXP (op, 0, i)) < nelt)
	      return false;
	  }
	else if (INTVAL (XVECEXP (op, 0, i)) != i / 2)
	  return false;
    }
  else
    return false;

  return true;
}

bool
pmovzx_parallel (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(pmovzx_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
const_vector_duplicate_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2017 "../../gcc/config/i386/predicates.md"
{
  rtx elt = XVECEXP (op, 0, 0);
  int i, nelt = XVECLEN (op, 0);

  for (i = 1; i < nelt; ++i)
    if (!rtx_equal_p (elt, XVECEXP (op, 0, i)))
      return false;
  return true;
}

bool
const_vector_duplicate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(const_vector_duplicate_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
avx_vbroadcast_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2031 "../../gcc/config/i386/predicates.md"
{
  rtx elt = XVECEXP (op, 0, 0);
  int i, nelt = XVECLEN (op, 0);

  /* Don't bother checking there are the right number of operands,
     merely that they're all identical.  */
  for (i = 1; i < nelt; ++i)
    if (XVECEXP (op, 0, i) != elt)
      return false;
  return true;
}

bool
avx_vbroadcast_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(avx_vbroadcast_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
palignr_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2047 "../../gcc/config/i386/predicates.md"
{
  int elt = INTVAL (XVECEXP (op, 0, 0));
  int i, nelt = XVECLEN (op, 0);

  /* Check that an order in the permutation is suitable for palignr.
     For example, {5 6 7 0 1 2 3 4} is "palignr 5, xmm, xmm".  */
  for (i = 1; i < nelt; ++i)
    if (INTVAL (XVECEXP (op, 0, i)) != ((elt + i) % nelt))
      return false;
  return true;
}

bool
palignr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(palignr_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
avx2_pblendw_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2062 "../../gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT val = INTVAL (op);
  HOST_WIDE_INT low = val & 0xff;
  return val == ((low << 8) | low);
}

bool
avx2_pblendw_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(avx2_pblendw_operand_1 (op, mode)));
}

bool
general_vector_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
register_or_constm1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && (
#line 2077 "../../gcc/config/i386/predicates.md"
(op == constm1_rtx))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

static inline bool
save_multiple_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2083 "../../gcc/config/i386/predicates.md"
{
  const unsigned len = XVECLEN (op, 0);
  unsigned i;

  /* Starting from end of vector, count register saves.  */
  for (i = 0; i < len; ++i)
    {
      rtx src, dest, addr;
      rtx e = XVECEXP (op, 0, len - 1 - i);

      if (GET_CODE (e) != SET)
	break;

      src  = SET_SRC (e);
      dest = SET_DEST (e);

      if (!REG_P (src) || !MEM_P (dest))
	break;

      addr = XEXP (dest, 0);

      /* Good if dest address is in RAX.  */
      if (REG_P (addr) && REGNO (addr) == AX_REG)
	continue;

      /* Good if dest address is offset of RAX.  */
      if (GET_CODE (addr) == PLUS
	  && REG_P (XEXP (addr, 0))
	  && REGNO (XEXP (addr, 0)) == AX_REG)
	continue;

      break;
    }
  return (i >= 12 && i <= 18);
}

bool
save_multiple (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(save_multiple_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
restore_multiple_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2124 "../../gcc/config/i386/predicates.md"
{
  const unsigned len = XVECLEN (op, 0);
  unsigned i;

  /* Starting from end of vector, count register restores.  */
  for (i = 0; i < len; ++i)
    {
      rtx src, dest, addr;
      rtx e = XVECEXP (op, 0, len - 1 - i);

      if (GET_CODE (e) != SET)
	break;

      src  = SET_SRC (e);
      dest = SET_DEST (e);

      if (!MEM_P (src) || !REG_P (dest))
	break;

      addr = XEXP (src, 0);

      /* Good if src address is in RSI.  */
      if (REG_P (addr) && REGNO (addr) == SI_REG)
	continue;

      /* Good if src address is offset of RSI.  */
      if (GET_CODE (addr) == PLUS
	  && REG_P (XEXP (addr, 0))
	  && REGNO (XEXP (addr, 0)) == SI_REG)
	continue;

      break;
    }
  return (i >= 12 && i <= 18);
}

bool
restore_multiple (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(restore_multiple_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
encodekey128_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2163 "../../gcc/config/i386/predicates.md"
{
  unsigned i;
  rtx elt;

  if (XVECLEN (op, 0) != 8)
    return false;

  for(i = 0; i < 3; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || GET_CODE (SET_SRC (elt)) != UNSPEC_VOLATILE
	  || GET_MODE (SET_SRC (elt)) != V2DImode
	  || XVECLEN(SET_SRC (elt), 0) != 1
	  || XVECEXP(SET_SRC (elt), 0, 0) != const0_rtx)
	return false;
    }

  for(i = 4; i < 7; i++)
    {
      elt = XVECEXP (op, 0, i);
      if (GET_CODE (elt) != CLOBBER
	  || GET_MODE (elt) != VOIDmode
	  || GET_CODE (XEXP (elt, 0)) != REG
	  || GET_MODE (XEXP (elt, 0)) != V2DImode
	  || REGNO (XEXP (elt, 0)) != GET_SSE_REGNO (i))
	return false;
    }

  elt = XVECEXP (op, 0, 7);
  if (GET_CODE (elt) != CLOBBER
      || GET_MODE (elt) != VOIDmode
      || GET_CODE (XEXP (elt, 0)) != REG
      || GET_MODE (XEXP (elt, 0)) != CCmode
      || REGNO (XEXP (elt, 0)) != FLAGS_REG)
    return false;
  return true;
}

bool
encodekey128_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(encodekey128_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
encodekey256_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2207 "../../gcc/config/i386/predicates.md"
{
  unsigned i;
  rtx elt;

  if (XVECLEN (op, 0) != 9)
    return false;

  elt = SET_SRC (XVECEXP (op, 0, 0));
  elt = XVECEXP (elt, 0, 2);
  if (!REG_P (elt)
      || REGNO(elt) != GET_SSE_REGNO (1))
    return false;

  for(i = 0; i < 4; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || GET_CODE (SET_SRC (elt)) != UNSPEC_VOLATILE
	  || GET_MODE (SET_SRC (elt)) != V2DImode
	  || XVECLEN(SET_SRC (elt), 0) != 1
	  || XVECEXP(SET_SRC (elt), 0, 0) != const0_rtx)
	return false;
    }

  for(i = 4; i < 7; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != CLOBBER
	  || GET_MODE (elt) != VOIDmode
	  || GET_CODE (XEXP (elt, 0)) != REG
	  || GET_MODE (XEXP (elt, 0)) != V2DImode
	  || REGNO (XEXP (elt, 0)) != GET_SSE_REGNO (i))
	return false;
    }

  elt = XVECEXP (op, 0, 8);
  if (GET_CODE (elt) != CLOBBER
      || GET_MODE (elt) != VOIDmode
      || GET_CODE (XEXP (elt, 0)) != REG
      || GET_MODE (XEXP (elt, 0)) != CCmode
      || REGNO (XEXP (elt, 0)) != FLAGS_REG)
    return false;
  return true;
}

bool
encodekey256_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(encodekey256_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
aeswidekl_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2258 "../../gcc/config/i386/predicates.md"
{
  unsigned i;
  rtx elt;

  for (i = 0; i < 8; i++)
    {
      elt = XVECEXP (op, 0, i + 1);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V2DImode
	  || REGNO (SET_DEST (elt)) != GET_SSE_REGNO (i)
	  || GET_CODE (SET_SRC (elt)) != UNSPEC_VOLATILE
	  || GET_MODE (SET_SRC (elt)) != V2DImode
	  || XVECLEN (SET_SRC (elt), 0) != 1
	  || !REG_P (XVECEXP (SET_SRC (elt), 0, 0))
	  || REGNO (XVECEXP (SET_SRC (elt), 0, 0)) != GET_SSE_REGNO (i))
	return false;
    }
  return true;
}

bool
aeswidekl_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(aeswidekl_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline bool
apx_evex_memory_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2285 "../../gcc/config/i386/predicates.md"
{
  /* OK if immediate operand size < 4 bytes.  */
  if (GET_MODE_SIZE (mode) < 4)
    return true;

  bool default_addr = ADDR_SPACE_GENERIC_P (MEM_ADDR_SPACE (op));
  bool address_size_prefix = TARGET_X32 && Pmode == SImode;

  struct ix86_address parts;
  int ok;

  op = XEXP (op, 0);
  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);

  if (default_addr)
    {
      /* Default address space.  */

      /* Not OK with address size prefix, index register and disp.  */
      if (address_size_prefix
          && parts.index
          && parts.disp
          && parts.disp != const0_rtx)
        return false;
    }
  else
    {
      /* Non-default address space.  */

      /* Not OK without base register.  */
      if (!parts.base)
        return false;

      /* Not OK with disp and address size prefix.  */
      if (address_size_prefix && parts.disp)
        return false;
    }

  return true;
}

bool
apx_evex_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(apx_evex_memory_operand_1 (op, mode)));
}

static inline bool
apx_evex_add_memory_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 2333 "../../gcc/config/i386/predicates.md"
{
  /* OK if "add %reg1, name@gottpoff(%rip), %reg2" or
   "{nf} add name@gottpoff(%rip), %reg1" are supported.  */
  if (HAVE_AS_R_X86_64_CODE_6_GOTTPOFF)
    return true;

  op = XEXP (op, 0);

  /* Disallow APX EVEX-encoded ADD with UNSPEC_GOTNTPOFF.  */
  if (GET_CODE (op) == CONST
      && GET_CODE (XEXP (op, 0)) == UNSPEC
      && XINT (XEXP (op, 0), 1) == UNSPEC_GOTNTPOFF)
    return false;

  return true;
}

bool
apx_evex_add_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(apx_evex_add_memory_operand_1 (op, mode)));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case ':':
      return CONSTRAINT__c;
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      if (str[1] == 'g')
        return CONSTRAINT_Bg;
      if (str[1] == 'm')
        return CONSTRAINT_Bm;
      if (str[1] == 'k')
        return CONSTRAINT_Bk;
      if (str[1] == 'n')
        return CONSTRAINT_Bn;
      if (str[1] == 'r')
        return CONSTRAINT_Br;
      if (str[1] == 's')
        return CONSTRAINT_Bs;
      if (str[1] == 'w')
        return CONSTRAINT_Bw;
      if (str[1] == 'z')
        return CONSTRAINT_Bz;
      if (str[1] == 'C')
        return CONSTRAINT_BC;
      if (str[1] == 'F')
        return CONSTRAINT_BF;
      if (str[1] == 'H')
        return CONSTRAINT_BH;
      if (str[1] == 'M')
        return CONSTRAINT_BM;
      if (str[1] == 'f')
        return CONSTRAINT_Bf;
      break;
    case 'C':
      return CONSTRAINT_C;
    case 'D':
      return CONSTRAINT_D;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      if (str[1] == 's')
        return CONSTRAINT_Ts;
      if (str[1] == 'v')
        return CONSTRAINT_Tv;
      break;
    case 'U':
      return CONSTRAINT_U;
    case 'V':
      return CONSTRAINT_V;
    case 'W':
      if (str[1] == 'c')
        return CONSTRAINT_Wc;
      if (str[1] == 'w')
        return CONSTRAINT_Ww;
      if (str[1] == 'e')
        return CONSTRAINT_We;
      if (str[1] == 'z')
        return CONSTRAINT_Wz;
      if (str[1] == 'd')
        return CONSTRAINT_Wd;
      if (str[1] == 'f')
        return CONSTRAINT_Wf;
      if (str[1] == 's')
        return CONSTRAINT_Ws;
      if (str[1] == 'b')
        return CONSTRAINT_Wb;
      break;
    case 'X':
      return CONSTRAINT_X;
    case 'Y':
      if (str[1] == 'z')
        return CONSTRAINT_Yz;
      if (str[1] == 'd')
        return CONSTRAINT_Yd;
      if (str[1] == 'p')
        return CONSTRAINT_Yp;
      if (str[1] == 'a')
        return CONSTRAINT_Ya;
      if (str[1] == 'b')
        return CONSTRAINT_Yb;
      if (str[1] == 'f')
        return CONSTRAINT_Yf;
      if (str[1] == 'r')
        return CONSTRAINT_Yr;
      if (str[1] == 'v')
        return CONSTRAINT_Yv;
      if (str[1] == 'w')
        return CONSTRAINT_Yw;
      if (str[1] == 'W')
        return CONSTRAINT_YW;
      if (str[1] == 'k')
        return CONSTRAINT_Yk;
      break;
    case 'Z':
      return CONSTRAINT_Z;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'f':
      return CONSTRAINT_f;
    case 'i':
      return CONSTRAINT_i;
    case 'j':
      if (str[1] == 'r')
        return CONSTRAINT_jr;
      if (str[1] == 'm')
        return CONSTRAINT_jm;
      if (str[1] == '<')
        return CONSTRAINT_j_l;
      if (str[1] == '>')
        return CONSTRAINT_j_g;
      if (str[1] == 'o')
        return CONSTRAINT_jo;
      if (str[1] == 'V')
        return CONSTRAINT_jV;
      if (str[1] == 'p')
        return CONSTRAINT_jp;
      if (str[1] == 'a')
        return CONSTRAINT_ja;
      if (str[1] == 'b')
        return CONSTRAINT_jb;
      if (str[1] == 'c')
        return CONSTRAINT_jc;
      if (str[1] == 'e')
        return CONSTRAINT_je;
      if (str[1] == 'M')
        return CONSTRAINT_jM;
      if (str[1] == 'O')
        return CONSTRAINT_jO;
      if (str[1] == 'R')
        return CONSTRAINT_jR;
      break;
    case 'k':
      return CONSTRAINT_k;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'q':
      return CONSTRAINT_q;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 't':
      return CONSTRAINT_t;
    case 'u':
      return CONSTRAINT_u;
    case 'v':
      return CONSTRAINT_v;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__c, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_A, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_C, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_D, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_G, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_O, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_R, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_S, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_U, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_Z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_a, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_b, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_d, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_e, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_f, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_k, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_t, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_u, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_v, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_y, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_R: return LEGACY_GENERAL_REGS;
    case CONSTRAINT_q: return TARGET_64BIT ? GENERAL_REGS : Q_REGS;
    case CONSTRAINT_Q: return Q_REGS;
    case CONSTRAINT_l: return INDEX_REGS;
    case CONSTRAINT_a: return AREG;
    case CONSTRAINT_b: return BREG;
    case CONSTRAINT_c: return CREG;
    case CONSTRAINT_d: return DREG;
    case CONSTRAINT_S: return SIREG;
    case CONSTRAINT_D: return DIREG;
    case CONSTRAINT_A: return AD_REGS;
    case CONSTRAINT_U: return CLOBBERED_REGS;
    case CONSTRAINT_f: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FLOAT_REGS : NO_REGS;
    case CONSTRAINT_t: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FP_TOP_REG : NO_REGS;
    case CONSTRAINT_u: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FP_SECOND_REG : NO_REGS;
    case CONSTRAINT_Yk: return TARGET_AVX512F ? MASK_REGS : NO_REGS;
    case CONSTRAINT_k: return TARGET_AVX512F ? ALL_MASK_REGS : NO_REGS;
    case CONSTRAINT_y: return TARGET_MMX ? MMX_REGS : NO_REGS;
    case CONSTRAINT_x: return TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_v: return TARGET_SSE ? ALL_SSE_REGS : NO_REGS;
    case CONSTRAINT_Yz: return TARGET_SSE ? SSE_FIRST_REG : NO_REGS;
    case CONSTRAINT_Yd: return TARGET_AVX512DQ ? ALL_SSE_REGS : TARGET_SSE4_1 ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Yp: return TARGET_PARTIAL_REG_STALL ? NO_REGS : GENERAL_REGS;
    case CONSTRAINT_Ya: return TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)
  ? NO_REGS : GENERAL_REGS;
    case CONSTRAINT_Yb: return (!flag_plt && HAVE_AS_IX86_TLS_GET_ADDR_GOT) ? TLS_GOTBASE_REGS : BREG;
    case CONSTRAINT_Yf: return (ix86_fpmath & FPMATH_387) ? FLOAT_REGS : NO_REGS;
    case CONSTRAINT_Yr: return TARGET_SSE ? (TARGET_AVOID_4BYTE_PREFIXES ? NO_REX_SSE_REGS : ALL_SSE_REGS) : NO_REGS;
    case CONSTRAINT_Yv: return TARGET_AVX512VL ? ALL_SSE_REGS : TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Yw: return TARGET_AVX512BW && TARGET_AVX512VL ? ALL_SSE_REGS : TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_YW: return TARGET_AVX512BW ? ALL_SSE_REGS : TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_jR: return GENERAL_REGS;
    case CONSTRAINT_jr: return TARGET_APX_EGPR ? GENERAL_GPR16 : GENERAL_REGS;
    case CONSTRAINT_jc: return TARGET_APX_EGPR && !TARGET_AVX ? GENERAL_GPR16 : GENERAL_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_O,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_jm,
  satisfies_constraint_jo,
  satisfies_constraint_je,
  satisfies_constraint_jM,
  satisfies_constraint_jO,
  satisfies_constraint_Bm,
  satisfies_constraint_Bk,
  satisfies_constraint_Bn,
  satisfies_constraint_Br,
  satisfies_constraint_ja,
  satisfies_constraint_p,
  satisfies_constraint_Tv,
  satisfies_constraint_Ts,
  satisfies_constraint_jp,
  satisfies_constraint_jb,
  satisfies_constraint_Bz,
  satisfies_constraint_BH,
  satisfies_constraint_Wb,
  satisfies_constraint_Wc,
  satisfies_constraint_Ww,
  satisfies_constraint_G,
  satisfies_constraint_e,
  satisfies_constraint_We,
  satisfies_constraint_Wz,
  satisfies_constraint_Wd,
  satisfies_constraint_Wf,
  satisfies_constraint_Ws,
  satisfies_constraint_Z,
  satisfies_constraint_Bf,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_BF,
  satisfies_constraint_BM,
  satisfies_constraint_j_l,
  satisfies_constraint_j_g,
  satisfies_constraint_jV,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint__c,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_Bg,
  satisfies_constraint_Bs,
  satisfies_constraint_Bw,
  satisfies_constraint_BC,
  satisfies_constraint_C
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 271 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31));

    case CONSTRAINT_J:
      return 
#line 276 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63));

    case CONSTRAINT_K:
      return 
#line 281 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127));

    case CONSTRAINT_L:
      return (
#line 287 "../../gcc/config/i386/constraints.md"
(ival == 0xff)) || ((
#line 288 "../../gcc/config/i386/constraints.md"
(ival == 0xffff)) || (
#line 289 "../../gcc/config/i386/constraints.md"
(ival == HOST_WIDE_INT_C (0xffffffff))));

    case CONSTRAINT_M:
      return 
#line 294 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3));

    case CONSTRAINT_N:
      return 
#line 300 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255));

    case CONSTRAINT_O:
      return 
#line 305 "../../gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127));

    default: break;
    }
  return false;
}


void
init_reg_class_start_regs ()
{
}
