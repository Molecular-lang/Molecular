(define_conditions [
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "((TARGET_SSE) && (TARGET_AVX512F && TARGET_EVEX512)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && (TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4SImode == V16SFmode
									       || V4SImode == V8DFmode
									       || V4SImode == V8DImode
									       || V4SImode == V16SImode
									       || V4SImode == V32HImode
									       || V4SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4SImode == V8SFmode
										       || V4SImode == V4DFmode
										       || V4SImode == V4DImode
										       || V4SImode == V8SImode
										       || V4SImode == V16HImode
										       || V4SImode == V16HFmode))))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && (TARGET_AVX)")
  (-1 "(TARGET_SSE2 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))) && (TARGET_64BIT)")
  (-1 "((TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_AVX2)) && ( 1)")
  (-1 "((ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_SSE) && (TARGET_SSE2)")
  (-1 "TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4QImode))")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && (TARGET_AVX))")
  (-1 "TARGET_64BIT
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == -1
   && CONST_WIDE_INT_ELT (operands[3], 1) == 0) && ( reload_completed)")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512VL || 32 == 64) && (TARGET_AVX)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && (TARGET_64BIT)")
  (-1 "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_USE_BT")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_AVX512F && TARGET_64BIT")
  (-1 "TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_FLOOR != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (0 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "TARGET_TSXLDTRK")
  (-1 "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed")
  (-1 "((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_SSE2)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_EVEX512)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX10_2_512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX))")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)")
  (-1 "TARGET_BMI && reload_completed")
  (-1 "(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE4_1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
	  && rtx_equal_p (operands[6], operands[2])))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V8QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)) && (TARGET_BMI)")
  (-1 "CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)")
  (-1 "((TARGET_CMOVE) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 32 != 16)) && (TARGET_EVEX512)")
  (-1 "((INTVAL (operands[2]) == 8 * BITS_PER_UNIT
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
					VOIDmode))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSSE3")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BF16) && (TARGET_EVEX512))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && (TARGET_AVX512FP16))")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && (TARGET_AVX)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2
   && TARGET_AVX512VL
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))")
  (-1 "(TARGET_XADD) && (TARGET_64BIT)")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))")
  (-1 "(ptr_mode == SImode) && (word_mode == SImode)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)")
  (-1 "TARGET_FXSR")
  (-1 "(INTVAL (operands[2]) == 16 * BITS_PER_UNIT / 2
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
					VOIDmode))) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))")
  (-1 "INTVAL (operands[2]) == GET_MODE_PRECISION (HImode) - 1")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512VNNI) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && REGNO (operands[4]) == REGNO (operands[2])
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (ptr_mode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_LZCNT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_GFNI) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)")
  (-1 "ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode))))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && 1")
  (-1 "(TARGET_VAES) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "TARGET_SSSE3")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (TARGET_64BIT)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[5])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[6])
   && !reg_overlap_mentioned_p (operands[6], operands[1])) && (TARGET_64BIT)")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   && (QImode != QImode
       || any_QIreg_operand (operands[1], QImode))")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_PTWRITE")
  (-1 "TARGET_SSE2 && 1 && 1")
  (-1 "TARGET_AVX && !TARGET_AVX2 && reload_completed")
  (-1 "(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (IOR, V4QImode, operands)")
  (-1 "(TARGET_AVX512BF16) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))")
  (-1 "(TARGET_AVX && 1) && (TARGET_SSE2)")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))) && (TARGET_64BIT)")
  (-1 "(TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SM4) && (TARGET_AVX10_2_512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V2DImode == V16SFmode
							       || V2DImode == V8DFmode
							       || V2DImode == V8DImode
							       || V2DImode == V16SImode
							       || V2DImode == V32HImode
							       || V2DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DImode == V8SFmode
								       || V2DImode == V4DFmode
								       || V2DImode == V4DImode
								       || V2DImode == V8SImode
								       || V2DImode == V16HImode
								       || V2DImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512VL) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "((ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (0 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "((ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_AVX2 && ix86_pre_reload_split ()")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && ((((ptr_mode == DImode) && (TARGET_64BIT)) && (TARGET_64BIT)) && (ptr_mode == DImode))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX2 && 1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL
   && TARGET_MMX_WITH_SSE
   && ix86_partial_vec_fp_math")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HFmode)
       || !MEM_P (operands[1]))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))))")
  (-1 "(INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16SFmode)) && (TARGET_EVEX512))")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_64BIT
   && GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (ptr_mode == SImode)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "((TARGET_64BIT && TARGET_GNU2_TLS) && (ptr_mode == SImode)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VL) && (TARGET_AVX))")
  (-1 "(TARGET_CMPXCHG && TARGET_RELAX_CMPXCHG_LOOP) && (TARGET_64BIT && TARGET_CMPXCHG16B)")
  (-1 "(TARGET_LWP) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && (TARGET_AVX512FP16))")
  (-1 "(TARGET_SSE3) && (TARGET_AVX)")
  (-1 "((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_BSWAP) && (TARGET_64BIT)")
  (-1 "((TARGET_SSE) && (TARGET_SSE2)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "(TARGET_AVX10_2_256) && (TARGET_AVX10_2_512)")
  (-1 "TARGET_64BIT && TARGET_XSAVE")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V4HImode, operands)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && (TARGET_HIMODE_MATH)")
  (-1 "ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX2) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))))")
  (-1 "((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && (TARGET_SSE2)")
  (-1 "((TARGET_SSE4_1 && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && ( 1)")
  (-1 "!TARGET_MACHO
   && !TARGET_64BIT
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (insn)")
  (-1 "TARGET_SPLIT_MEM_OPND_FOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512F
  && (!false || TARGET_AVX10_2_256))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX10_2_256)")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && (TARGET_SSE2)")
  (-1 "TARGET_SSE4_1 && 1")
  (-1 "TARGET_MOVRS")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && TARGET_MOVRS)")
  (-1 "((INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512BF16) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "Pmode == DImode")
  (-1 "TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)")
  (-1 "TARGET_SSSE3 && TARGET_MMX_WITH_SSE
  && !HONOR_NANS (BFmode) && !flag_rounding_math
  && (flag_unsafe_math_optimizations
      || TARGET_AVXNECONVERT
      || (TARGET_AVX512BF16 && TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4SImode == V16SFmode
									       || V4SImode == V8DFmode
									       || V4SImode == V8DImode
									       || V4SImode == V16SImode
									       || V4SImode == V32HImode
									       || V4SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4SImode == V8SFmode
										       || V4SImode == V4DFmode
										       || V4SImode == V4DImode
										       || V4SImode == V8SImode
										       || V4SImode == V16HImode
										       || V4SImode == V16HFmode)))))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && (TARGET_AVX)")
  (-1 "((!TARGET_BMI
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_SSE2)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX10_2_512)))")
  (-1 "((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && (TARGET_AVX)")
  (-1 "TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)")
  (-1 "(TARGET_FMA) && (TARGET_SSE2)")
  (-1 "((ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SImode == V16SFmode
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
										       || V16SImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()")
  (-1 "ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "REGNO (operands[0]) == REGNO (operands[1])")
  (-1 "ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "TARGET_64BIT && TARGET_APX_NF")
  (0 "(TARGET_AVX512F) && (TARGET_SSE && 1 && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && (TARGET_EVEX512)")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_SSE4_1 && (INTVAL (operands[2]) == (int) (0xffffffff))) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BITALG) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_64BIT)")
  (-1 "(32 == 64 || TARGET_AVX512VL) && (TARGET_AVX)")
  (-1 "(SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode))
   || (TARGET_AVX512FP16 && (TFmode ==HFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V32HImode == V16SFmode
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
										       || V32HImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DFmode) == 4 ? 0xF : 0x3))) && (TARGET_AVX512DQ && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "((TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && (TARGET_AVX)")
  (0 "(TARGET_AVX512F) && (TARGET_SSE
   && 1
   && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16)")
  (-1 "(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && (TARGET_SSE4_1)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && (TARGET_AVX512VL)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_64BIT) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "TARGET_64BIT && TARGET_BMI2 && reload_completed
   && !optimize_function_for_size_p (cfun)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))) && (TARGET_64BIT)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
       || any_QIreg_operand (operands[2], QImode))")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)")
  (-1 "((ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "(REGNO (operands[3]) != DX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[0]))
   && (REGNO (operands[2]) == REGNO (operands[4])
       || REGNO (operands[2]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[2]))) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffff) && ( 1)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX10_2_256) && (TARGET_SSE2)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 16 != 16)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16BFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))))")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_SSE2)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffffffff) && (TARGET_AVX2)")
  (-1 "TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode)")
  (-1 "(TARGET_64BIT && TARGET_SSE) && ( reload_completed)")
  (-1 "(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)
   && !TARGET_APX_NDD) && (TARGET_64BIT)")
  (-1 "TARGET_AMX_TILE")
  (-1 "(TARGET_SSE4_1 && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSSE3 && TARGET_MMX_WITH_SSE")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_64BIT)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HImode)
       || !MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX10_2_256 && TARGET_MOVRS")
  (-1 "(TARGET_SSE2) && (Pmode == SImode)")
  (-1 "ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX10_2_512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1) && (TARGET_EVEX512)")
  (-1 "TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_AVX512F && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2
   && 1 && 1) && (TARGET_AVX2)")
  (-1 "((TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_EVEX512)) && ( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
	  && rtx_equal_p (operands[6], operands[2])))) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512DQ && TARGET_AVX512VL")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512FP16 && !flag_trapping_math) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (16 == 64 || TARGET_AVX512VL)) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && INTVAL (operands[2]) != INTVAL (operands[3])
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && (TARGET_EVEX512)")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)")
  (-1 "(TARGET_64BIT && TARGET_SSE2) && (TARGET_AVX2)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode))))")
  (-1 "(TARGET_MWAIT) && (Pmode == SImode)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)")
  (-1 "((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F) && (TARGET_EVEX512)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW)")
  (-1 "optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= UNITS_PER_WORD
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (ptr_mode == DImode)")
  (-1 "TARGET_AVX512VL")
  (-1 "(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)) && (TARGET_QIMODE_MATH)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX)")
  (-1 "TARGET_AVXVNNIINT16 && TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1
   && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(!TARGET_64BIT) && ( reload_completed)")
  (-1 "TARGET_SM4")
  (-1 "TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512DQ) && (TARGET_SSE2)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE")
  (-1 "((TARGET_SSE) && (TARGET_AVX)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (((((TARGET_AVX512VL) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_64BIT && TARGET_STV) && (Pmode == DImode)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SImode == V16SFmode
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
								       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEOPT)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && (TARGET_EVEX512)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_SSE2)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_USE_BT && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "TARGET_64BIT || TARGET_SSE4_1")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && ( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))")
  (-1 "(((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_64BIT))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
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
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V16SImode, operands)
  && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_APX_NF && reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V32HFmode == V16SFmode
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DFmode) >= 16) && (TARGET_EVEX512)")
  (-1 "reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "!TARGET_AVOID_LEA_FOR_ADDR || optimize_function_for_size_p (cfun)")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
  && (lra_in_progress
      || reload_completed
      || !CONST_DOUBLE_P (operands[1])
      || (TARGET_SSE2
	  && standard_sse_constant_p (operands[1], BFmode) == 1)
      || memory_operand (operands[0], BFmode))")
  (-1 "(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "TARGET_AVX
   && 1
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && 1)")
  (-1 "ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(TARGET_BMI) && (!TARGET_64BIT)")
  (-1 "(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   && (TARGET_CMOVE || (TARGET_SAHF && TARGET_USE_SAHF))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_POPCNT
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(ptr_mode == DImode) && (word_mode == SImode)")
  (-1 "((DImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_FMA || TARGET_AVX512F) && (TARGET_AVX512FP16))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE2")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && 1) && (TARGET_AVX10_2_512))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "ix86_unary_operator_ok (NEG, HImode, operands)
   && mode_signbit_p (HImode, operands[2])")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX))")
  (-1 "ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1
   && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)")
  (-1 "(TARGET_AVX512FP16) && ( reload_completed)")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "((ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "((CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DImode == V16SFmode
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
								       || V8DImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_AVX512VL && TARGET_AVX512F")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_SSE && reload_completed) && ((((TARGET_64BIT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && (word_mode == SImode)")
  (-1 "(TARGET_XOP) && (TARGET_SSE2)")
  (-1 "!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode))))")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)")
  (-1 "TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))")
  (-1 "INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && true")
  (-1 "(TARGET_AVX512F) && ((TARGET_F16C || TARGET_AVX512VL)
   && (!false || TARGET_AVX10_2_256))")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && (((((TARGET_64BIT) && (ptr_mode == SImode)) && (ptr_mode == SImode)) && (ptr_mode == SImode)) && (ptr_mode == SImode))")
  (-1 "(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(reload_completed) && (ptr_mode == DImode)")
  (-1 "((UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])")
  (-1 "(TARGET_SSE2) && (TARGET_AVX2)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_FMA || TARGET_FMA4 || (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_AVX2 && reload_completed
   && INTVAL (operands[3]) > 1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8BFmode))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_EVEX512)) && ( 1)")
  (-1 "TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE2
   && GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[1])) == 16")
  (-1 "ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && 1
  && (!true || TARGET_AVX10_2_256))")
  (-1 "TARGET_SSE3 && TARGET_V2DF_REDUCTION_PREFER_HADDPD
   && INTVAL (operands[2]) != INTVAL (operands[3])")
  (-1 "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
   == GET_MODE_BITSIZE (SImode) - 1")
  (-1 "TARGET_HRESET")
  (-1 "(TARGET_AVX512F) && (TARGET_FMA || TARGET_FMA4)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE4_1 && TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "TARGET_MWAIT")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && ((DImode != DImode) || TARGET_64BIT))")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)")
  (-1 "(TARGET_AVX512VP2INTERSECT) && (TARGET_EVEX512)")
  (-1 "TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)) && (TARGET_SSE2))")
  (-1 "ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))")
  (-1 "(TARGET_AVX512VP2INTERSECT) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))) && (TARGET_64BIT)")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX10_2_512))")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F && 1 && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && reload_completed) && (Pmode == SImode)")
  (-1 "(!TARGET_BMI
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)")
  (-1 "(TARGET_MOVDIR64B) && (Pmode == DImode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V4HImode, operands)")
  (-1 "CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE2
   && (V8HImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)")
  (-1 "(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DFmode) >= 16) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands)")
  (-1 "TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == -1
   && CONST_WIDE_INT_ELT (operands[3], 1) == 0")
  (-1 "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512FP16 && 1) && (TARGET_EVEX512)")
  (-1 "optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG")
  (-1 "(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && 1 && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_SSE2)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V2DFmode == V4SFmode)) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "((TARGET_64BIT && TARGET_STV) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "TARGET_CMOVE")
  (-1 "TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF")
  (-1 "((TARGET_SSE4_1) && (TARGET_AVX2)) && ( 1)")
  (-1 "TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && (TARGET_AVX2)")
  (-1 "TARGET_RAOINT")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16HFmode)) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1)")
  (-1 "(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DImode) == 4 ? 0xF : 0x3))) && (TARGET_AVX512DQ && TARGET_EVEX512)")
  (-1 "(TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_SSE2)")
  (-1 "!reg_mentioned_p (operands[0], operands[1])")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_EVEX512)")
  (-1 "(TARGET_BMI || TARGET_CPU_P (GENERIC))
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL
  && (!false || TARGET_AVX10_2_256))")
  (-1 "INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL
  && (!true || TARGET_AVX10_2_256)))")
  (-1 "TARGET_3DNOW_A")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_FMA) && (TARGET_AVX512FP16))")
  (-1 "TARGET_LWP")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)")
  (-1 "TARGET_64BIT
   && TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (word_mode == DImode)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(reload_completed) && ( cfun->machine->function_return_type != indirect_branch_keep)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_SSE2 && !HONOR_NANS (BFmode)")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
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
       || !TARGET_HARD_DF_REGS)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && ( 1)")
  (-1 "(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[5])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[6])
   && !reg_overlap_mentioned_p (operands[6], operands[1])")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_finite_math_only
   && flag_unsafe_math_optimizations")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_AVX512DQ)) && ( reload_completed)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32BFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512BW) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)")
  (-1 "!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))")
  (-1 "x86_64_immediate_operand (operands[2], VOIDmode)
   && INTVAL (operands[2]) != -1
   && INTVAL (operands[2]) != 2147483647")
  (-1 "TARGET_BMI")
  (-1 "TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256")
  (-1 "(! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V8HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SFmode) >= 16) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
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
								       || V4SFmode == V16HFmode))))")
  (-1 "TARGET_APX_NDD && true")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "((TARGET_APX_NF && TARGET_POPCNT) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(GET_MODE (operands[1]) == GET_MODE (operands[2])) && (TARGET_64BIT)")
  (-1 "(/* Ensure that resulting mask is zero or sign extended operand.  */
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
			 ? CCZmode : CCNOmode)) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "GET_MODE (operands[1]) == GET_MODE (operands[2])")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_MOVDIR64B) && (Pmode == SImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_SSE2))")
  (-1 "ix86_unary_operator_ok (NOT, QImode, operands, TARGET_APX_NDD)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512BW) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode))")
  (-1 "(!TARGET_CMOVE) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "!TARGET_64BIT && reload_completed")
  (-1 "(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "(TARGET_APX_NF) && ((((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)) && (TARGET_LZCNT))")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (-1 "ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_TRUNC != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && 1) && (TARGET_EVEX512))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX2)")
  (-1 "(GET_MODE (operands[1]) == GET_MODE (operands[2])) && ( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2)")
  (-1 "(TARGET_BMI) && (TARGET_64BIT)")
  (-1 "REGNO (operands[2]) == REGNO (operands[3])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && peep2_regno_dead_p (4, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 16 != 16)) && (TARGET_EVEX512))")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8DFmode)) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)")
  (-1 "TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))")
  (-1 "TARGET_AVX10_2_256")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "TARGET_AVX && 1 && 1")
  (-1 "(TARGET_RDRND) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (XOR, V4QImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))")
  (-1 "((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && ( reload_completed)")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_SSE2 && (V16SFmode == V4SFmode || TARGET_AVX2)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_64BIT && TARGET_SSE && reload_completed) && (Pmode == SImode)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4)) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V4SImode, operands))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "!TARGET_64BIT && TARGET_WAITPKG")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VPOPCNTDQ) && (TARGET_AVX512VL))")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "TARGET_64BIT && !TARGET_USE_BT")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512CD) && (TARGET_EVEX512))")
  (-1 "TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL")
  (-1 "!TARGET_BMI && reload_completed")
  (-1 "(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)")
  (-1 "TARGET_RTM")
  (-1 "(TARGET_AVX512F) && (((((TARGET_EVEX512) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_EVEX512)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode))))")
  (-1 "((CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))")
  (-1 "(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && 1 && 1) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)")
  (0 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_VAES) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_F16C || TARGET_AVX512VL)
   && (!false || TARGET_AVX10_2_256)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(optimize_function_for_size_p (cfun) || TARGET_USE_CLTD)
   && REGNO (operands[2]) == AX_REG
   && REGNO (operands[3]) == DX_REG
   && peep2_reg_dead_p (4, operands[0])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[0])")
  (-1 "(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE4_1)")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && ( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands)
   && mode_signbit_p (DImode, operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && 1) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "! TARGET_POPCNT")
  (-1 "(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_FMA4")
  (-1 "(TARGET_AVX512VBMI2) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((((TARGET_AVX512VL) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_SSE2 && TARGET_SSE_UNALIGNED_STORE_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, false, DFmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && 1) && (TARGET_EVEX512))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_64BIT)")
  (-1 "TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "ix86_binary_operator_ok (XOR, V2QImode, operands)")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V2DImode == V16SFmode
									       || V2DImode == V8DFmode
									       || V2DImode == V8DImode
									       || V2DImode == V16SImode
									       || V2DImode == V32HImode
									       || V2DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V2DImode == V8SFmode
										       || V2DImode == V4DFmode
										       || V2DImode == V4DImode
										       || V2DImode == V8SImode
										       || V2DImode == V16HImode
										       || V2DImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX
   && reload_completed
   && (TARGET_AVX512VL || !EXT_REX_SSE_REG_P (operands[1]))")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX512VL && 1")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && (TARGET_AVX)")
  (-1 "(TARGET_SSE && 1
   && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_AVX512FP16))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_SSE4_2) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(reload_completed) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_SSE2)")
  (-1 "TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V4SImode, operands)")
  (-1 "TARGET_AVX512F && TARGET_EVEX512
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
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V2DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "TARGET_CRC32")
  (-1 "(peep2_reg_dead_p (2, operands[0])) && (TARGET_64BIT)")
  (-1 "(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (word_mode == SImode)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F && (!false || 16 != 16)) && (TARGET_EVEX512)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512VBMI && TARGET_EVEX512 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE4_1
   && reload_completed) && (TARGET_64BIT)")
  (-1 "(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && ( reload_completed)")
  (-1 "!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && (TARGET_AVX512BW)")
  (-1 "(TARGET_CMPXCHG16B) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "TARGET_BMI && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16))")
  (-1 "(TARGET_64BIT && TARGET_GNU2_TLS) && (ptr_mode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "((ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "reload_completed && ix86_lea_for_add_ok (insn, operands)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_FMA || TARGET_FMA4 || (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX2)")
  (-1 "(TARGET_CMOVE
   && (TImode != QImode || !TARGET_PARTIAL_REG_STALL)) && (TARGET_64BIT)")
  (-1 "TARGET_APX_PUSH2POP2")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "(epilogue_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_SSE2))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, SImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_SSE4_1) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && INTVAL (operands[4]) == (8 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && (TARGET_64BIT)")
  (-1 "(TARGET_LWP) && (Pmode == SImode)")
  (-1 "TARGET_USE_FANCY_MATH_387")
  (-1 "(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX10_2_512)))")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX))")
  (-1 "optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "TARGET_QIMODE_MATH")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_APX_NDD && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16HImode == V16SFmode
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
										       || V16HImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && (TARGET_AVX2)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && 1 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && ( 1)")
  (-1 "(TARGET_AVX2 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX
   && TARGET_AVX512VL
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])")
  (-1 "TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && (TARGET_AVX2)) && ( 1)")
  (-1 "TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))")
  (-1 "(true) && (TARGET_LZCNT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_AVX10_2_512)))")
  (-1 "TARGET_BMI2 && !optimize_function_for_size_p (cfun)")
  (-1 "TARGET_HIMODE_MATH")
  (-1 "(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V8DImode, operands)) && (TARGET_EVEX512)")
  (-1 "(TARGET_MMX_WITH_SSE) && ( reload_completed)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	  || TARGET_MIX_SSE_I387)
    && !flag_trapping_math)
   || (TARGET_SSE4_1 && TARGET_SSE_MATH)")
  (-1 "TARGET_AVX512VP2INTERSECT")
  (-1 "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(ix86_pre_reload_split ()) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (((((TARGET_EVEX512) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_EVEX512)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BITALG) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512FP16) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "((ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_APX_NDD
  && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(reload_completed) && (ptr_mode == SImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))")
  (-1 "(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)")
  (-1 "TARGET_AVX2")
  (-1 "TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL
   && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_AVX10_2_512))")
  (-1 "(TARGET_CMOVE) && ( reload_completed)")
  (-1 "(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
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
					VOIDmode))) && (!TARGET_64BIT)")
  (-1 "(TARGET_VPCLMULQDQ) && (TARGET_AVX512VL)")
  (-1 "(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && ((SImode != DImode) || TARGET_64BIT))")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2) && (TARGET_64BIT))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (1, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])) && (TARGET_64BIT)")
  (-1 "TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && TARGET_APX_NF")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_AVX) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V4HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX2) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
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
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_AVX2 && 1 && 1")
  (-1 "(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_AVX512F && TARGET_EVEX512
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))")
  (0 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || HImode == SImode
       || HImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_ENQCMD) && (Pmode == DImode)")
  (-1 "(unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))))")
  (-1 "ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_BMI) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2) && ((TARGET_AVX512BW || TARGET_AVX512VNNI) && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX512BW && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16) && (TARGET_AVX512VL))")
  (-1 "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= UNITS_PER_WORD
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (ptr_mode == SImode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)")
  (-1 "ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512BW) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "16 == 64 || TARGET_AVX512VL")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE4_1")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_AVX512FP16 || TARGET_F16C || TARGET_AVX512VL")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
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
								       || V4SFmode == V16HFmode))))")
  (-1 "TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[3]) == CONST
   && GET_CODE (XEXP (operands[3], 0)) == UNSPEC
   && XINT (XEXP (operands[3], 0), 1) == UNSPEC_PLTOFF")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX2 && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_64BIT))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V32HFmode == V16SFmode
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "TARGET_AVX512F")
  (-1 "TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512
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
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_GFNI)")
  (-1 "TARGET_SSE && 1")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_FMA || TARGET_FMA4 || (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "TARGET_MMX || TARGET_MMX_WITH_SSE")
  (-1 "TARGET_AVX && 1
  && (!false || TARGET_AVX10_2_256)")
  (1 "true")
  (-1 "(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && (TARGET_AVX512BW && TARGET_64BIT)")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (32 == 64 || TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_64BIT && (TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
  || SFmode == HFmode")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "TARGET_SSE2 && TARGET_MMX_WITH_SSE && !HONOR_NANS (BFmode)")
  (-1 "REGNO (operands[0]) == REGNO (operands[2])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16)))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode))))")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && ((((ptr_mode == SImode) && (TARGET_64BIT)) && (TARGET_64BIT)) && (ptr_mode == SImode))")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V2SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && true) && (TARGET_64BIT)")
  (-1 "TARGET_QIMODE_MATH
   && TARGET_APX_NF")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_64BIT) && (Pmode == DImode)")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_SSE4_2
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX10_2_512)))")
  (-1 "(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512VBMI) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8SFmode)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && (TARGET_AVX)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && (TARGET_EVEX512)")
  (-1 "TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])")
  (-1 "TARGET_64BIT
   && ix86_pre_reload_split ()")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_SSE2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode)))))")
  (-1 "(((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2])")
  (-1 "ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()")
  (-1 "TARGET_POPCNT && TARGET_64BIT")
  (-1 "TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V2DImode, operands)")
  (-1 "TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1) && (TARGET_EVEX512))")
  (-1 "(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)) && (TARGET_HIMODE_MATH)")
  (-1 "((ptr_mode == DImode) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_AVX512VL) && (TARGET_SSE)")
  (-1 "(TARGET_AVX512VL || 64 == 64) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))")
  (-1 "TARGET_AVX512FP16 && ix86_pre_reload_split ()")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8HFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))))")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ())")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "TARGET_64BIT
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
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_AVX512F && TARGET_EVEX512
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
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17])")
  (-1 "(TARGET_AVX512F && !TARGET_AVX512DQ) && (TARGET_EVEX512)")
  (-1 "!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()")
  (-1 "((ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "((((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)) && (TARGET_BMI)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(ptr_mode == DImode) && (word_mode == DImode)")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
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
								       || V4SFmode == V16HFmode)))))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && (word_mode == DImode)")
  (-1 "TARGET_MOVRS && TARGET_64BIT")
  (-1 "(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))) && (TARGET_64BIT)")
  (-1 "((TARGET_BMI && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_APX_ZU && true")
  (-1 "(TARGET_SSE) && (TARGET_SSE4A)")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(!TARGET_64BIT
    && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
    && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC)
   || ((!TARGET_64BIT || TARGET_AVX512F)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_SSE || TARGET_3DNOW_A)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX))")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()) && (TARGET_SSE2)) && ( 1)")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_SSE2)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
       || any_QIreg_operand (operands[2], QImode))) && (TARGET_64BIT)")
  (-1 "(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode))")
  (-1 "!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V32HImode == V16SFmode
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
								       || V32HImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F && TARGET_64BIT) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_FMA")
  (-1 "(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE2) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_CLZERO) && (Pmode == DImode)")
  (-1 "TARGET_SSE && ix86_pre_reload_split ()")
  (-1 "(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && (TARGET_AVX)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 16 != 16)) && (TARGET_SSE2))")
  (-1 "TARGET_SSE4_1 && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE4_2 && ix86_pre_reload_split ()")
  (0 "(TARGET_AVX512F) && (TARGET_SSE2 && 1 && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode))))")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (((((TARGET_64BIT) && (TARGET_AVX512BW)) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_POPCNT
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_64BIT
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX512VL && TARGET_AVX512BW")
  (-1 "TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && TARGET_APX_NF")
  (-1 "(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX512VPOPCNTDQ && TARGET_AVX512VL && TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX10_2_512))")
  (-1 "!TARGET_64BIT && reload_completed
   && REGNO (operands[0]) == REGNO (operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && 1) && (TARGET_AVX512VL))")
  (-1 "(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])")
  (-1 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_RDRND")
  (-1 "(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && (TARGET_AVX512FP16)")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW && TARGET_AVX512VL) && (TARGET_AVX2)")
  (-1 "(REGNO (operands[0]) != REGNO (operands[1])
   && (DImode != QImode
       || any_QIreg_operand (operands[1], QImode))) && (TARGET_64BIT)")
  (1 "!TARGET_PARTIAL_REG_STALL
   || SImode == SImode
   || optimize_function_for_size_p (cfun)")
  (-1 "((UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "TARGET_64BIT || TARGET_SSE2")
  (-1 "TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()")
  (-1 "(TARGET_SSE) && (TARGET_AVX)")
  (-1 "TARGET_SSE
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()")
  (-1 "TARGET_APX_PUSH2POP2 && TARGET_APX_PPX")
  (-1 "TARGET_POPCNT && true")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX512BW)")
  (-1 "TARGET_WBNOINVD")
  (-1 "(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)")
  (-1 "((IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SImode == V16SFmode
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
										       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_AVX512BW)) && ( reload_completed)")
  (-1 "(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_GFNI) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && ((V8SImode == V16SFmode
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
								       || V8SImode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SImode == V16SFmode
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
								       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V8QImode, operands)")
  (-1 "(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && TARGET_AVX512FP16")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX)")
  (-1 "(TARGET_AVX10_2_256) && (TARGET_MMX_WITH_SSE)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_SSE2)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && 1 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && INTVAL (operands[4]) == (4 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && (!TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_64BIT && reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_VPCLMULQDQ) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (32 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V4DImode, operands)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_APX_NF) && (TARGET_LZCNT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE
   && 1
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == DX_REG
       || peep2_reg_dead_p (3, operands[0]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (!true || 32 != 16)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16HFmode)
       || register_operand (operands[1], V16HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "(TARGET_APX_NF) && (TARGET_BMI)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BITALG) && (TARGET_AVX512VL))")
  (-1 "ix86_unary_operator_ok (NEG, SImode, operands)
   && mode_signbit_p (SImode, operands[2])")
  (-1 "(TARGET_SSE && 1
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))")
  (0 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V2DImode == V16SFmode
									       || V2DImode == V8DFmode
									       || V2DImode == V8DImode
									       || V2DImode == V16SImode
									       || V2DImode == V32HImode
									       || V2DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V2DImode == V8SFmode
										       || V2DImode == V4DFmode
										       || V2DImode == V4DImode
										       || V2DImode == V8SImode
										       || V2DImode == V16HImode
										       || V2DImode == V16HFmode))))")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16HFmode)) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_AVX10_2_512)))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))")
  (-1 "TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && TARGET_APX_NF")
  (-1 "(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && IS_STACK_MODE (SFmode)
	   && standard_80387_constant_p (operands[1]) > 0)
       || (TARGET_SSE && TARGET_SSE_MATH
	   && standard_sse_constant_p (operands[1], SFmode) == 1)
       || memory_operand (operands[0], SFmode)
       || !TARGET_HARD_SF_REGS)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))))")
  (-1 "((INTVAL (operands[2]) == 4 * BITS_PER_UNIT
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
					VOIDmode))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
  || DFmode == HFmode")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && (TARGET_AVX)")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || SImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && (!TARGET_64BIT)")
  (-1 "((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SImode == V16SFmode
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
								       || V16SImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && 1 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "TARGET_64BIT && TARGET_CRC32")
  (-1 "((ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   && (SImode != QImode
       || any_QIreg_operand (operands[1], QImode))")
  (-1 "ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL
   && ix86_partial_vec_fp_math
   && TARGET_MMX_WITH_SSE")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))
       || !TARGET_HARD_XF_REGS)")
  (-1 "(TARGET_AVX512F && TARGET_EVEX512) && ( reload_completed)")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))")
  (-1 "(TARGET_SSE2) && (TARGET_AVX10_2_512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DImode == V16SFmode
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
								       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX2)")
  (-1 "ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512
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
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17]))")
  (-1 "reload_completed && ix86_avoid_lea_for_add (insn, operands)")
  (-1 "TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)")
  (-1 "TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V2SImode, operands)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])")
  (-1 "((((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)) && (TARGET_LZCNT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "TARGET_FMA || TARGET_AVX512F")
  (-1 "TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && INTVAL (operands[2]) != INTVAL (operands[3])
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16HImode == V16SFmode
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
										       || V16HImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)")
  (-1 "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
   == GET_MODE_BITSIZE (QImode) - 1")
  (-1 "TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SImode == V16SFmode
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
								       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (0 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE2
   && 1 && 1) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_SSE2) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])) && (TARGET_64BIT)")
  (-1 "TARGET_USER_MSR && TARGET_64BIT")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SImode == V16SFmode
									       || V4SImode == V8DFmode
									       || V4SImode == V8DImode
									       || V4SImode == V16SImode
									       || V4SImode == V32HImode
									       || V4SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4SImode == V8SFmode
										       || V4SImode == V4DFmode
										       || V4SImode == V4DImode
										       || V4SImode == V8SImode
										       || V4SImode == V16HImode
										       || V4SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && ( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && (TARGET_AVX512DQ)")
  (-1 "(TARGET_AVX512VL) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && (TARGET_AVX512DQ)")
  (-1 "TARGET_LP64 && ix86_check_movabs (insn, 1)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode))
   || (TARGET_AVX512FP16 && (SFmode ==HFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && (TARGET_AVX)")
  (-1 "((TARGET_SSE4_1
   && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(DFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_TRUNC != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_FMA || TARGET_FMA4) && (TARGET_AVX)")
  (-1 "(TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_AVX2)")
  (-1 "(TARGET_USE_BT) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && (!TARGET_64BIT)")
  (-1 "TARGET_SSE && reload_completed")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512FP16 && !flag_trapping_math && !flag_rounding_math")
  (-1 "(TARGET_AVX512VL && 1) && (TARGET_AVX)")
  (-1 "!TARGET_MOVBE")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
	  && rtx_equal_p (operands[6], operands[2])))")
  (-1 "(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && (TARGET_AVX)")
  (-1 "(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && (TARGET_AVX2)")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && (TARGET_SSE2))")
  (-1 "INTVAL (operands[2]) == GET_MODE_PRECISION (DImode) - 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V4SFmode == V4SFmode))")
  (-1 "((TARGET_SSE4_1) && (TARGET_AVX)) && ( reload_completed)")
  (-1 "(TARGET_AVXNECONVERT) && (TARGET_AVX)")
  (-1 "TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && true")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_AVX512BW && TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (1, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(epilogue_completed) && (!TARGET_64BIT)")
  (-1 "TARGET_AVX512VL && TARGET_AVX512BITALG")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])")
  (-1 "(TARGET_GFNI) && (TARGET_AVX)")
  (-1 "!TARGET_APX_ZU && TARGET_64BIT && !TARGET_PARTIAL_REG_STALL")
  (-1 "(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && ( reload_completed)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)")
  (-1 "(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (((((TARGET_AVX512VL) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && (TARGET_SSE2)) && ( 1)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()) && (TARGET_SSE2)")
  (-1 "TARGET_AVX512BW && TARGET_AVX512VL")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (((((TARGET_64BIT) && (TARGET_AVX512BW && TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_AVX512FP16))")
  (-1 "(TARGET_RAOINT) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "(REGNO (operands[0]) == REGNO (operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512VL)
   && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_AVX512FP16)))")
  (-1 "TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)")
  (-1 "(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[2])")
  (-1 "((TARGET_APX_NF && TARGET_LZCNT) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "SSE_FLOAT_MODE_P (DFmode)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
       || any_QIreg_operand (operands[2], SImode))")
  (-1 "(ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && ( 1)")
  (-1 "ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(peep2_reg_dead_p (4, operands[2])
    || operands_match_p (operands[2], operands[4]))
   && ! reg_overlap_mentioned_p (operands[4], operands[0])
   && ! reg_overlap_mentioned_p (operands[4], operands[1])
   && ! reg_overlap_mentioned_p (operands[4], operands[5])
   && ! reg_set_p (operands[4], operands[5])
   && refers_to_regno_p (FLAGS_REG, operands[1], (rtx *)NULL)
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "!TARGET_LZCNT
   && TARGET_64BIT
   && ix86_pre_reload_split ()
   && ((unsigned HOST_WIDE_INT)
       trunc_int_for_mode (UINTVAL (operands[2]) - 63, SImode)
       == UINTVAL (operands[2]) - 63)")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))")
  (-1 "TARGET_AVX512F && 1 && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && TARGET_64BIT) && (TARGET_SSE2))")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && (TARGET_64BIT)")
  (-1 "TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && (TARGET_AVX)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && (TARGET_EVEX512)")
  (-1 "(TARGET_64BIT && TARGET_FSGSBASE) && (TARGET_64BIT)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_USE_BT && ix86_pre_reload_split ()) && ( MEM_P (operands[0]))")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && (TARGET_HIMODE_MATH)")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX512FP16)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], QImode)
       || (constm1_operand (operands[1], QImode)
	   && (1 > 1 || TARGET_AVX512DQ)))")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VBMI && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && 1 && 1) && (TARGET_AVX512FP16)")
  (-1 "INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HFmode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(reload_completed) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && true")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8HImode == V16SFmode
									       || V8HImode == V8DFmode
									       || V8HImode == V8DImode
									       || V8HImode == V16SImode
									       || V8HImode == V32HImode
									       || V8HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8HImode == V8SFmode
										       || V8HImode == V4DFmode
										       || V8HImode == V4DImode
										       || V8HImode == V8SImode
										       || V8HImode == V16HImode
										       || V8HImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || HImode == SImode
       || HImode == DImode))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_64BIT))")
  (-1 "(TARGET_SSE2 && !TARGET_AVX512VL && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode))))")
  (-1 "(SIBLING_CALL_P (insn)) && (word_mode == DImode)")
  (-1 "(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && 1 && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8BFmode, operands)")
  (-1 "(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && ( reload_completed)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	  || TARGET_MIX_SSE_I387)
    && !flag_trapping_math)
   || (TARGET_SSE4_1 && TARGET_SSE_MATH)")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_64BIT && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_LZCNT")
  (-1 "TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)")
  (-1 "(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && (!TARGET_64BIT)")
  (-1 "(TARGET_APX_NF && TARGET_POPCNT) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_SSE2)))")
  (-1 "Pmode == SImode")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DImode == V16SFmode
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
								       || V8DImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD")
  (-1 "(TARGET_SSE4_1) && ( 1)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SImode == V16SFmode
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
								       || V16SImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)) && ( reload_completed)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_SSE2)) && ( 1)")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "ptr_mode == SImode")
  (-1 "(TARGET_AVX512F && reload_completed) && (TARGET_AVX512BW)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE4_1 && 1 && 1")
  (-1 "(TARGET_APX_NF && TARGET_LZCNT) && (TARGET_64BIT)")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4BFmode))")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && 1
   && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_BMI || TARGET_AVX512BW")
  (-1 "(TARGET_64BIT) && ((!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && (TARGET_64BIT))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8HImode == V16SFmode
									       || V8HImode == V8DFmode
									       || V8HImode == V8DImode
									       || V8HImode == V16SImode
									       || V8HImode == V32HImode
									       || V8HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8HImode == V8SFmode
										       || V8HImode == V4DFmode
										       || V8HImode == V4DImode
										       || V8HImode == V8SImode
										       || V8HImode == V16HImode
										       || V8HImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "TARGET_SSE2 && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()")
  (-1 "(TARGET_64BIT && TARGET_SSE) && (TARGET_AVX)")
  (-1 "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode))))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_EVEX512)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX10_2_512))")
  (-1 "(reload_completed && ix86_lea_for_add_ok (insn, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8SFmode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_EVEX512))")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16HFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (-1 "TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V4SImode, operands)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))")
  (-1 "ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "!TARGET_64BIT && SIBLING_CALL_P (insn)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8HFmode, operands)")
  (-1 "(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[0])) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
  && (lra_in_progress
      || reload_completed
      || !CONST_DOUBLE_P (operands[1])
      || (TARGET_SSE2
	  && standard_sse_constant_p (operands[1], HFmode) == 1)
      || memory_operand (operands[0], HFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (64 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V8DImode, operands)) && (TARGET_EVEX512))")
  (-1 "optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX
   && reload_completed
   && (TARGET_AVX512VL || !EXT_REX_SSE_REG_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX10_2_512)))")
  (-1 "TARGET_64BIT && TARGET_SSE4_1
   && reload_completed")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)")
  (-1 "TARGET_AVX512VL || 16 == 64")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_AVX)")
  (-1 "(TARGET_BMI2 && !optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "TARGET_FMA || TARGET_FMA4")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
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
								       || V4DImode == V16HFmode))))")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2)")
  (-1 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "((ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE4_1) && (((((((TARGET_64BIT) && (TARGET_AVX)) && (TARGET_AVX)) && (TARGET_AVX)) && (TARGET_AVX)) && (TARGET_AVX)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_APX_NF) && ((((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)) && (TARGET_BMI))")
  (-1 "(TARGET_APX_NF) && (((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && (((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(!TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)")
  (-1 "(TARGET_AVX2 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V2DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512FP16 && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(REGNO (operands[1]) != REGNO (operands[2])
   && INTVAL (operands[4]) == (4 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && (!TARGET_64BIT)")
  (-1 "(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX)")
  (-1 "optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "((TARGET_64BIT && TARGET_STV) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "(TARGET_SSE && reload_completed) && ((((TARGET_64BIT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_SSE4_1 && 1 && 1) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(TARGET_FMA || TARGET_AVX512F) && (TARGET_AVX512FP16)")
  (-1 "peep2_regno_dead_p (3, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512FP16 && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512VL)")
  (0 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "ix86_match_ccmode (insn,
		      CONST_INT_P (operands[1])
		      && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && TARGET_AVX512VL)")
  (-1 "TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2
   && TARGET_AVX512BW && TARGET_AVX512VL
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))")
  (-1 "TARGET_PCLMUL")
  (-1 "TARGET_APX_NDD
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_AVX512BW && TARGET_AVX512VL")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512FP16)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V2DImode == V16SFmode
									       || V2DImode == V8DFmode
									       || V2DImode == V8DImode
									       || V2DImode == V16SImode
									       || V2DImode == V32HImode
									       || V2DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V2DImode == V8SFmode
										       || V2DImode == V4DFmode
										       || V2DImode == V4DImode
										       || V2DImode == V8SImode
										       || V2DImode == V16HImode
										       || V2DImode == V16HFmode)))))")
  (-1 "(TARGET_64BIT && TARGET_STV) && (Pmode == SImode)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)")
  (-1 "(true) && (TARGET_BMI)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512BW && TARGET_EVEX512)) && ( 1)")
  (-1 "/* Ensure that resulting mask is zero or sign extended operand.  */
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
			 ? CCZmode : CCNOmode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8HImode == V16SFmode
							       || V8HImode == V8DFmode
							       || V8HImode == V8DImode
							       || V8HImode == V16SImode
							       || V8HImode == V32HImode
							       || V8HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HImode == V8SFmode
								       || V8HImode == V4DFmode
								       || V8HImode == V4DImode
								       || V8HImode == V8SImode
								       || V8HImode == V16HImode
								       || V8HImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode)")
  (-1 "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && 1
   && (!false || 16 != 16)) && (TARGET_SSE2)")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)) && (TARGET_SSE2)")
  (-1 "(!TARGET_BMI
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8HImode))")
  (-1 "(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_64BIT
   && pow2p_hwi (INTVAL (operands[2]))
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ))")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VBMI && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && ( reload_completed)")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "TARGET_64BIT && true")
  (-1 "(TARGET_64BIT && TARGET_SSE && reload_completed) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "ix86_can_use_return_insn_p ()")
  (-1 "((ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SFmode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && true")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1)")
  (-1 "TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V4SImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC")
  (-1 "(TARGET_SSE2
   && (V32QImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_LZCNT && TARGET_64BIT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "!TARGET_64BIT && TARGET_GNU2_TLS")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && (TARGET_SSE2)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX)")
  (-1 "(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && (TARGET_AVX)")
  (-1 "SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode")
  (-1 "(TARGET_LZCNT) && (TARGET_64BIT)")
  (-1 "TARGET_SSE4_1 && (16 != 64 || !TARGET_PREFER_AVX256)")
  (-1 "(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_binary_operator_ok (IOR, V2HImode, operands)")
  (-1 "((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))) && ( reload_completed)")
  (-1 "((TARGET_SSE) && (TARGET_MMX_WITH_SSE)) && ( reload_completed)")
  (-1 "(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && (word_mode == SImode)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_EVEX512))")
  (0 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE")
  (-1 "(TARGET_64BIT && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_FLOOR != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed")
  (-1 "(TARGET_AVX512F) && (TARGET_FMA)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && (TARGET_AVX512BW && TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL && ix86_partial_vec_fp_math")
  (-1 "(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))")
  (-1 "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE && TARGET_64BIT) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "ix86_binary_operator_ok (AND, V2HImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V2DImode, operands))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && ((((TARGET_EVEX512) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_EVEX512))")
  (-1 "TARGET_SSE2 && TARGET_64BIT")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_SSE2 && !HONOR_NANS (BFmode)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))")
  (-1 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "TARGET_QIMODE_MATH
   && true")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "TARGET_SLOW_STC && !optimize_insn_for_size_p ()")
  (-1 "TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HFmode))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && ( 1)")
  (-1 "TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "((TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && (TARGET_AVX512FP16)")
  (-1 "TARGET_SSSE3 || TARGET_AVX || TARGET_XOP")
  (-1 "(TARGET_AVX512F) && (((TARGET_EVEX512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(!TARGET_APX_ZU && TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)")
  (-1 "TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE))")
  (-1 "TARGET_AVX && 1")
  (-1 "((ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && (TARGET_64BIT)) && ( 1)")
  (-1 "(INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0")
  (-1 "(reload_completed) && (TARGET_HIMODE_MATH)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_SAHF")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX)")
  (-1 "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVES)")
  (-1 "ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE4_1) && ( reload_completed && SSE_REG_P (operands[0]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (!true || 16 != 16)) && (TARGET_EVEX512))")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && true")
  (-1 "(TARGET_SSSE3 && 1 && 1) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))")
  (-1 "ix86_unary_operator_ok (NEG, QImode, operands)
   && mode_signbit_p (QImode, operands[2])")
  (-1 "((TARGET_BMI) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "reload_completed
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8))))")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && (TARGET_AVX)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512VL && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode))))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && (TARGET_SSE2)")
  (-1 "(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid) && (TARGET_64BIT)")
  (-1 "(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && ( reload_completed)")
  (-1 "TARGET_AVX512VBMI && TARGET_EVEX512 && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_FMA || TARGET_AVX512F) && (TARGET_SSE2))")
  (-1 "TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1) && (TARGET_AVX512VL))")
  (-1 "(16 == 64 || TARGET_AVX512VL) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_MMX")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "!TARGET_LZCNT && TARGET_64BIT")
  (-1 "(TARGET_X32) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "(ix86_target_stack_probe ()) && (Pmode == SImode)")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && (TARGET_EVEX512)")
  (-1 "(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL")
  (-1 "(TARGET_PTWRITE) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "TARGET_AVX")
  (-1 "TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_BMI && TARGET_64BIT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "TARGET_SSE2")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "((SSE_FLOAT_MODE_P (HFmode) && TARGET_SSE_MATH)
  || HFmode == HFmode) && (TARGET_AVX512FP16)")
  (-1 "TARGET_AVX512F && TARGET_EVEX512")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "TARGET_POPCNT")
  (-1 "TARGET_APX_NF && TARGET_POPCNT")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)")
  (-1 "((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_EVEX512)) && ( reload_completed)")
  (-1 "(TARGET_SSE4_1) && (TARGET_64BIT)")
  (-1 "(TARGET_64BIT && reload_completed) && (ptr_mode == SImode)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE)")
  (-1 "TARGET_3DNOW
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3])")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   /* Punt if operands[1] is %[xy]mm16+ and AVX512BW is not enabled,
      as EVEX encoded vpadd[bw], vpmullw, vpmin[su][bw] and vpmax[su][bw]
      instructions require AVX512BW and AVX512VL, but with the original
      instructions it might require just AVX512VL.
      AVX512VL is implied from TARGET_HARD_REGNO_MODE_OK.  */
   && (!EXT_REX_SSE_REGNO_P (REGNO (operands[1]))
       || TARGET_AVX512BW
       || GET_MODE_SIZE (GET_MODE_INNER (GET_MODE (operands[0]))) > 2
       || logic_operator (operands[3], VOIDmode))")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && (word_mode == DImode)")
  (-1 "INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX10_2_256 && 1")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_AVX512FP16 && TARGET_AVX512VL
   && ix86_partial_vec_fp_math")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && (TARGET_AVX)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && (TARGET_AVX)")
  (-1 "(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])) && (TARGET_64BIT)")
  (-1 "(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_WAITPKG) && (Pmode == DImode)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX10_2_256 && TARGET_MOVRS) && (TARGET_AVX10_2_512)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512F
  && (!true || TARGET_AVX10_2_256))")
  (-1 "(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_EVEX512)")
  (-1 "((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
   == GET_MODE_BITSIZE (DImode) - 1) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()) && (TARGET_AVX512BW)")
  (-1 "(REGNO (operands[0]) != REGNO (operands[1])) && (TARGET_64BIT)")
  (-1 "TARGET_TBM")
  (-1 "((ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))))")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V32HFmode)) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG) && (TARGET_64BIT)")
  (-1 "(SIBLING_CALL_P (insn)) && (word_mode == SImode)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()")
  (-1 "TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "TARGET_AVX512FP16")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512F)")
  (-1 "(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_F16C || TARGET_AVX512VL)
   && (!true || TARGET_AVX10_2_256))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)) && (TARGET_AVX))")
  (-1 "((TARGET_POPCNT) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(TARGET_SSE4_2) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[2]) == CONST
   && GET_CODE (XEXP (operands[2], 0)) == UNSPEC
   && XINT (XEXP (operands[2], 0), 1) == UNSPEC_PLTOFF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8DFmode)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512VL && TARGET_AVX512BW)) && ( 1)")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (((((TARGET_64BIT) && (TARGET_AVX512DQ)) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))) && ( reload_completed)")
  (-1 "TARGET_MMX && !TARGET_SSE")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX10_2_256))")
  (-1 "ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)")
  (-1 "reload_completed
   && !rtx_equal_p (operands[0], operands[1])")
  (-1 "reload_completed
   && optimize_insn_for_size_p () && optimize_size > 1
   && REGNO (operands[0]) == REGNO (operands[1])
   && LEGACY_INT_REG_P (operands[0])
   && !REX_INT_REG_P (operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])")
  (-1 "TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEC)")
  (-1 "((ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)) && ( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && TARGET_SSE_MATH) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && (((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))")
  (-1 "(TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX)")
  (-1 "(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], DImode)
       || (constm1_operand (operands[1], DImode)
	   && (8 > 1 || TARGET_AVX512DQ)))) && (TARGET_64BIT)")
  (-1 "TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512FP16 && TARGET_AVX512VL
   && ix86_partial_vec_fp_math) && (TARGET_MMX_WITH_SSE)")
  (-1 "TARGET_APX_CCMP")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX)")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
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
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16) && (TARGET_EVEX512))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations")
  (-1 "(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && 1) && (TARGET_AVX512VL))")
  (-1 "(TARGET_CMOVE
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)")
  (-1 "ix86_unary_operator_ok (NOT, HImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL
   && ix86_partial_vec_fp_math")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "TARGET_SSE || TARGET_3DNOW_A")
  (-1 "(TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2")
  (-1 "!TARGET_MACHO
  && !TARGET_64BIT
  && !TARGET_INDIRECT_BRANCH_REGISTER
  && SIBLING_CALL_P (insn)")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SFmode) >= 16) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL)")
  (-1 "(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == DX_REG
       || peep2_reg_dead_p (3, operands[0]))) && (!TARGET_64BIT)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512VPOPCNTDQ) && (TARGET_AVX512VL)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)) && ( reload_completed)")
  (-1 "REGNO (operands[1]) == REGNO (operands[3])
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (2, operands[3])
   && peep2_regno_dead_p (3, FLAGS_REG)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && (TARGET_AVX2)) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))))")
  (-1 "((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && ((SImode != DImode) || TARGET_64BIT))")
  (-1 "(!optimize_function_for_size_p (cfun)) && ( reload_completed)")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "(TARGET_AVX512F) && (TARGET_SSE2 && 1 && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && (TARGET_64BIT)")
  (-1 "TARGET_SSE4_1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSSE3 && reload_completed
    && SSE_REGNO_P (REGNO (operands[0])))
   || operands[3] == const0_rtx
   || INTVAL (operands[3]) == 64")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)")
  (-1 "(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))")
  (-1 "TARGET_APX_ZU && TARGET_APX_NF")
  (-1 "(TARGET_SSE2 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE3 && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))))")
  (-1 "(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16BFmode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_AVX512BW && TARGET_64BIT)")
  (-1 "(TARGET_AVX512FP16) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))")
  (-1 "TARGET_AVX2
   && 1
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])")
  (-1 "TARGET_SERIALIZE")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || QImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "TARGET_AVX2 && !HONOR_NANS (BFmode) && !flag_rounding_math
   && (flag_unsafe_math_optimizations
       || TARGET_AVXNECONVERT
       || (TARGET_AVX512BF16 && TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V2DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))")
  (-1 "((TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && TARGET_MOVRS) && (TARGET_AVX10_2_512))")
  (-1 "(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX2) && (TARGET_MMX_WITH_SSE)")
  (-1 "(TARGET_64BIT && TARGET_SSE2) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)) && (TARGET_SSE2)")
  (-1 "TARGET_APX_NF && TARGET_LZCNT")
  (-1 "(TARGET_AVX512DQ && 1) && (TARGET_AVX512VL)")
  (-1 "TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()")
  (-1 "TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)
  && 1")
  (-1 "(TARGET_AVX512F) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && (TARGET_EVEX512)")
  (-1 "((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[0])")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode))
   || (TARGET_AVX512FP16 && (DFmode ==HFmode))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
  == GET_MODE_BITSIZE (QImode) - 1")
  (-1 "(peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[4])
   && ! reg_set_p (operands[3], operands[4])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && (TARGET_AVX10_2_512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && (((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_EVEX512)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_64BIT && TARGET_SSE && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4DFmode)) && (TARGET_AVX512VL)")
  (-1 "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)")
  (-1 "(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)")
  (-1 "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "TARGET_SSE4_1 && !flag_trapping_math")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(!SIBLING_CALL_P (insn)) && (word_mode == SImode)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512FP16 && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (0 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && ((V32HFmode == V16SFmode
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && (TARGET_64BIT)")
  (-1 "TARGET_SSE4_1 && !flag_trapping_math
   && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "(rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_SSE2)")
  (-1 "(((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)) && (TARGET_LZCNT)")
  (-1 "ix86_binary_operator_ok (AND, V4QImode, operands)")
  (-1 "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)")
  (-1 "(TARGET_AVX512VBMI) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 64 != 16)) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE2) && (Pmode == DImode)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1
   && (!false || 64 != 16)) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_AVX512FP16)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && (TARGET_SSE2)")
  (-1 "TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_SSSE3 && !HONOR_NANS (BFmode) && !flag_rounding_math
   && (flag_unsafe_math_optimizations
       || TARGET_AVXNECONVERT
       || (TARGET_AVX512BF16 && TARGET_AVX512VL))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && true")
  (-1 "TARGET_64BIT
   && REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[2]) != REGNO (operands[3])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512VL) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16SImode)
       || register_operand (operands[1], V16SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX)")
  (-1 "TARGET_80387 && reload_completed")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F))")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && (ptr_mode == DImode)")
  (-1 "(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1
   && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && (TARGET_AVX512FP16))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
	  && rtx_equal_p (operands[6], operands[2])))) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && TARGET_FXSR")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8BFmode))")
  (-1 "(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "word_mode == SImode")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))))")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || BFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_AVX512VL))")
  (-1 "(/* Ensure that resulting mask is zero or sign extended operand.  */
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
			 ? CCZmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "((INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && ((V32HFmode == V16SFmode
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()) && (TARGET_SSE2)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "((TARGET_LZCNT) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SImode) == 4 ? 0xF : 0x3))) && (TARGET_EVEX512)")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 1) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512DQ
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && (TARGET_EVEX512)")
  (-1 "(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && (TARGET_64BIT)")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && (TARGET_AVX512BW)) && ( reload_completed)")
  (-1 "TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "!TARGET_64BIT && TARGET_XSAVE")
  (-1 "((ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_WAITPKG) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VL && 1) && (TARGET_AVX))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V2DImode, operands))")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
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
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))")
  (-1 "(TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && (TARGET_AVX512F && TARGET_EVEX512 && TARGET_64BIT)")
  (-1 "(INTVAL (operands[2]) == GET_MODE_PRECISION (SImode) - 1) && (TARGET_AVX2)")
  (-1 "(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V4TImode)
       || register_operand (operands[1], V4TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0")
  (-1 "TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))))")
  (-1 "(TARGET_SSSE3 && 1 && 1) && (TARGET_AVX2)")
  (-1 "TARGET_BMI2 && reload_completed")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "TARGET_AVX512BW && TARGET_AVX512VL && TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "TARGET_APX_NDD
  && ix86_pre_reload_split ()")
  (-1 "(TARGET_64BIT || TARGET_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || (standard_sse_constant_p (operands[1], TFmode) == 1
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE_MATH && (TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX))")
  (-1 "TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)")
  (-1 "(TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && (TARGET_AVX && TARGET_64BIT)")
  (-1 "SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL
   && ix86_partial_vec_fp_math
   && !flag_trapping_math")
  (-1 "(GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_CC) && (word_mode == DImode)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (0 "(TARGET_AVX512F) && (TARGET_SSE && 1
   && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode))))")
  (-1 "TARGET_XOP || TARGET_AVX2")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_SSE2)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_APX_NF && TARGET_POPCNT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_SSE4_1 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && true) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V16QImode, operands)")
  (-1 "(SFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_AVX512F) && (TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
       || any_QIreg_operand (operands[2], QImode))")
  (-1 "(TARGET_SSE) && ( reload_completed)")
  (-1 "!TARGET_64BIT
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH")
  (-1 "((TARGET_USE_BT && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)")
  (-1 "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512FP16) && (TARGET_64BIT)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)")
  (-1 "optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && (TARGET_EVEX512))")
  (-1 "TARGET_CLWB")
  (-1 "(TARGET_64BIT
    && !(MEM_P (operands[0]) && MEM_P (operands[1])))
   || (TARGET_SSE
       && nonimmediate_or_sse_const_operand (operands[1], TImode)
       && (register_operand (operands[0], TImode)
	   || register_operand (operands[1], TImode)))")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VPOPCNTDQ) && (TARGET_EVEX512))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512VBMI2) && (TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX512F && reload_completed")
  (0 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))")
  (-1 "ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_XOP")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512CD) && (TARGET_AVX512VL))")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512FP16 && TARGET_AVX512VL && ix86_partial_vec_fp_math) && (TARGET_MMX_WITH_SSE)")
  (-1 "((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX10_2_256) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V16SImode, operands)
  && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && true")
  (-1 "TARGET_X32")
  (-1 "TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "((TARGET_APX_NF) && (TARGET_BMI)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode)))))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()")
  (-1 "optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && TARGET_EVEX512) && ( reload_completed)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "TARGET_SSE && 1
   && (!false || 32 != 16)")
  (-1 "(TARGET_ENQCMD) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512VL && TARGET_AVX512BITALG) && (TARGET_MMX_WITH_SSE)")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && (word_mode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_SSE2))")
  (-1 "optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)")
  (-1 "((TARGET_APX_NF) && ((((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)) && (TARGET_BMI))) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "TARGET_SSE4_1 && TARGET_MMX_WITH_SSE
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8QImode))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && (TARGET_SSE2)")
  (-1 "TARGET_AVX512F && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512VL && TARGET_AVX512BW
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_64BIT
   && TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE3")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)")
  (-1 "ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_finite_math_only
   && flag_unsafe_math_optimizations")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(TARGET_SSE2 && !HONOR_NANS (BFmode)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "!TARGET_SEH && !ix86_static_chain_on_stack && !ix86_function_ms_hook_prologue (cfun->decl)")
  (-1 "(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "TARGET_SSE4_1 && TARGET_MMX_WITH_SSE
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2SImode))")
  (-1 "(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F && 1 && 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V8DImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512VL && TARGET_AVX512BW
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE4_1 && !flag_trapping_math
  && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BITALG) && (TARGET_EVEX512))")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DImode == V16SFmode
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
								       || V8DImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode))))")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512FP16 && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX2 && 1")
  (-1 "TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && ( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DImode == V16SFmode
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
								       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V32QImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (-1 "(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffffffff))) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 1) && (TARGET_AVX512VL)")
  (-1 "((TARGET_CMOVE
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "reload_completed
   && find_constant_src (insn)")
  (-1 "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && (((((TARGET_64BIT) && (ptr_mode == DImode)) && (ptr_mode == DImode)) && (ptr_mode == DImode)) && (ptr_mode == DImode))")
  (-1 "(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[6]))) && (TARGET_EVEX512)")
  (-1 "optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512BW) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffff))")
  (-1 "INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_SSE2)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_FMA) && (TARGET_SSE2))")
  (-1 "(TARGET_BMI2) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V2DImode == V16SFmode
									       || V2DImode == V8DFmode
									       || V2DImode == V8DImode
									       || V2DImode == V16SImode
									       || V2DImode == V32HImode
									       || V2DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V2DImode == V8SFmode
										       || V2DImode == V4DFmode
										       || V2DImode == V4DImode
										       || V2DImode == V8SImode
										       || V2DImode == V16HImode
										       || V2DImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V4DImode == V16SFmode
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
								       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)
  && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, HImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))))")
  (-1 "TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()")
  (-1 "ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()")
  (-1 "(INTVAL (operands[2]) == GET_MODE_PRECISION (HImode) - 1) && (TARGET_AVX2)")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW && TARGET_EVEX512) && (TARGET_EVEX512)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && 1)")
  (-1 "TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH")
  (-1 "((GET_MODE (operands[1]) == GET_MODE (operands[2])) && (TARGET_64BIT)) && ( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DImode) >= 16) && (TARGET_AVX512VL)")
  (-1 "(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SImode == V16SFmode
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
										       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode)))))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2) && (TARGET_SSE4_1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512DQ && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX512VL)")
  (-1 "find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0")
  (-1 "(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)")
  (-1 "(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "!TARGET_64BIT && !SIBLING_CALL_P (insn)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V2DImode == V16SFmode
							       || V2DImode == V8DFmode
							       || V2DImode == V8DImode
							       || V2DImode == V16SImode
							       || V2DImode == V32HImode
							       || V2DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DImode == V8SFmode
								       || V2DImode == V4DFmode
								       || V2DImode == V4DImode
								       || V2DImode == V8SImode
								       || V2DImode == V16HImode
								       || V2DImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && (TARGET_AVX512BW && TARGET_64BIT)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)) && ( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_AVX2 && TARGET_MMX_WITH_SSE")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(TARGET_APX_NF) && (TARGET_HIMODE_MATH)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_CMPXCHG) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX) && (TARGET_AVX2)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V16QImode)
       || !MEM_P (operands[1]))")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512VBMI && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8HImode == V16SFmode
							       || V8HImode == V8DFmode
							       || V8HImode == V8DImode
							       || V8HImode == V16SImode
							       || V8HImode == V32HImode
							       || V8HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HImode == V8SFmode
								       || V8HImode == V4DFmode
								       || V8HImode == V4DImode
								       || V8HImode == V8SImode
								       || V8HImode == V16HImode
								       || V8HImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_64BIT) && (Pmode == SImode)")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffff")
  (-1 "(TARGET_SSE2) && (TARGET_AVX10_2_256)")
  (-1 "(TARGET_FMA) && (TARGET_AVX512FP16)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_POPCNT && TARGET_APX_NF")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX512DQ && TARGET_AVX512VL)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
       || any_QIreg_operand (operands[2], SImode))")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "(operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "!TARGET_PARTIAL_MEMORY_READ_STALL && !MEM_VOLATILE_P (operands[0])")
  (-1 "(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_AVX)")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && (TARGET_AVX512DQ)) && ( reload_completed)")
  (-1 "(TARGET_MWAIT) && (Pmode == DImode)")
  (-1 "(TARGET_BMI && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(SSE_FLOAT_MODE_P (HFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (HFmode == TFmode))
   || (TARGET_AVX512FP16 && (HFmode ==HFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8DFmode)
       || register_operand (operands[1], V8DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SImode == V16SFmode
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
										       || V16SImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW) && (TARGET_AVX512DQ)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_EVEX512)) && (TARGET_EVEX512))")
  (-1 "(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   && (TARGET_CMOVE || (TARGET_SAHF && TARGET_USE_SAHF))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "ix86_pre_reload_split ()")
  (-1 "REGNO (operands[1]) == REGNO (operands[3])
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V8QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_AVX512DQ)")
  (-1 "TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_80387 && (TARGET_CMOVE || (TARGET_SAHF && TARGET_USE_SAHF))")
  (-1 "((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && (TARGET_EVEX512)")
  (-1 "!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!REG_P (operands[1])
       || (!TARGET_AVX && REGNO (operands[0]) != REGNO (operands[1])))
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && (!TARGET_64BIT)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == SImode)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)")
  (-1 "((ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F
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
   && INTVAL (operands[14]) == INTVAL (operands[17]) - 3) && (TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (IOR, V2QImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX)")
  (-1 "TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F")
  (-1 "(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_EVEX512)")
  (-1 "TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))))")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "((!TARGET_BMI
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)) && ( 1)")
  (-1 "(reload_completed) && (Pmode == SImode)")
  (-1 "(TARGET_AVX) && (TARGET_SSE2)")
  (-1 "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && (!TARGET_64BIT)")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE && 1
   && 1) && (TARGET_SSE2)")
  (-1 "((TARGET_AVX512BW) && (TARGET_AVX512DQ)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX10_2_512))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "TARGET_3DNOW || TARGET_PRFCHW")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "((TARGET_USE_FANCY_MATH_387
     && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || (TARGET_AVX512F && TARGET_SSE_MATH))
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32) && (TARGET_AVX2)")
  (-1 "(TARGET_SSE
   && 1
   && 1) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_FMA4) && (TARGET_SSE2)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (!TARGET_64BIT)")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && 1) && (TARGET_EVEX512)")
  (-1 "(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE4_1 && (INTVAL (operands[2]) == (int) (0xffff))")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && ((DImode != DImode) || TARGET_64BIT))")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (-1 "(REGNO (operands[1]) != REGNO (operands[2])
   && INTVAL (operands[4]) == (8 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && (TARGET_64BIT)")
  (-1 "TARGET_MOVDIRI")
  (-1 "((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_CMOVE
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2))")
  (-1 "TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_SSE4_2 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && ( reload_completed)")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_F16C")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1)")
  (-1 "TARGET_64BIT")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (0 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (!true || 64 != 16)) && (TARGET_EVEX512))")
  (-1 "(TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && (TARGET_AVX)")
  (-1 "TARGET_AVX2 && reload_completed
   && INTVAL (operands[3]) > 1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode))")
  (-1 "!TARGET_LZCNT && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && (TARGET_AVX)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_UINTR && TARGET_64BIT")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V8DImode == V16SFmode
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
										       || V8DImode == V16HFmode)))) && (TARGET_AVX10_2_512))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2 && reload_completed")
  (-1 "(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[1])) && (TARGET_64BIT)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)")
  (-1 "TARGET_SSE
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_CEIL != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && 1) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && (TARGET_AVX512FP16)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_POPCNT) && (TARGET_64BIT)")
  (-1 "ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_SSE && 1
   && (!false || 64 != 16)) && (TARGET_AVX)")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)")
  (-1 "SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)")
  (-1 "(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ && TARGET_EVEX512))")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DFmode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "!MEM_VOLATILE_P (operands[1])
   && !MEM_VOLATILE_P (operands[2])
   && rtx_equal_p (operands[1], operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])")
  (-1 "TARGET_SSE2 && !TARGET_AVX512VL && ix86_pre_reload_split ()")
  (-1 "TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_BMI2
   && ((REGNO (operands[5]) == REGNO (operands[0])
        && REGNO (operands[1]) != REGNO (operands[4]))
       || (REGNO (operands[5]) == REGNO (operands[1])
	   && REGNO (operands[0]) != REGNO (operands[4])))
   && peep2_reg_dead_p (2, operands[5])) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4SFmode))")
  (-1 "TARGET_AVX512VNNI && TARGET_EVEX512")
  (-1 "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)")
  (-1 "TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF")
  (-1 "(optimize_size > 1
  && ((REGNO (operands[0]) == AX_REG)
      != (REGNO (operands[1]) == AX_REG))
  && optimize_insn_for_size_p ()
  && peep2_reg_dead_p (1, operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE4A) && (TARGET_SSE2)")
  (-1 "(TARGET_SSE
   && 1
   && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_SSE2)")
  (-1 "ix86_match_ccmode (insn, CCmode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)")
  (-1 "(TARGET_SSE) && (TARGET_AVX512FP16)")
  (-1 "TARGET_SSE2
   && 1 && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "TARGET_SSE4_1
   && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE4A")
  (-1 "(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && (TARGET_SSE2)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SImode == V16SFmode
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
								       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "TARGET_AVX512FP16 && TARGET_EVEX512")
  (-1 "(TARGET_AVX512F && 1
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(reload_completed) && (Pmode == DImode)")
  (-1 "(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])) && (TARGET_64BIT)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DFmode)
       || !MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "(REGNO (operands[3]) != DX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[0]))
   && (REGNO (operands[2]) == REGNO (operands[4])
       || REGNO (operands[2]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[4]))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_SSSE3 && 1 && 1")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && (TARGET_AVX)")
  (-1 "((ix86_unary_operator_ok (NEG, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)")
  (-1 "(TARGET_TBM) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX))")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "TARGET_AVX512VP2INTERSECT && TARGET_EVEX512")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX512DQ && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "word_mode == DImode")
  (-1 "((ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_BMI2) && (!TARGET_64BIT)")
  (-1 "TARGET_AVX512DQ")
  (-1 "(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_80387 && TARGET_CMOVE")
  (-1 "(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V32HImode == V16SFmode
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
								       || V32HImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && (TARGET_64BIT)")
  (-1 "can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && TARGET_EVEX512
	   && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (SImode == SImode || TARGET_64BIT || MEM_P (operands[0]))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)")
  (-1 "TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)")
  (-1 "(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "TARGET_BSWAP")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "((TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && ( 1)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && (TARGET_AVX)")
  (-1 "(flag_cf_protection & CF_BRANCH)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16))")
  (-1 "(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && (TARGET_AVX)")
  (-1 "((TARGET_64BIT && TARGET_SSE) && (TARGET_SSE2)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode)")
  (-1 "((TARGET_AVX512FP16 && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE4_1")
  (-1 "(!reg_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "TARGET_BMI && TARGET_64BIT")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))")
  (-1 "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
  == GET_MODE_BITSIZE (HImode) - 1")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode))")
  (-1 "TARGET_SHA512")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)")
  (-1 "(TARGET_GFNI) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(ix86_match_ccmode (insn, CCmode)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)")
  (-1 "TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (16 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V2DImode, operands)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && (TARGET_64BIT)")
  (-1 "(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8HFmode == V16SFmode
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "TARGET_CMPCCXADD && TARGET_64BIT")
  (-1 "(ix86_unary_operator_ok (NOT, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)")
  (-1 "((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX)")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2
  && !((INTVAL (operands[3]) & 0xff) && (INTVAL (operands[3]) & 0xff00))")
  (-1 "(TARGET_SSE4_1 && 1 && 1) && (TARGET_AVX2)")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_XOP || (TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
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
								       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_F16C || TARGET_AVX512VL) && 1")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[2])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "REGNO (operands[3]) == REGNO (operands[4])
   && peep2_reg_dead_p (3, operands[1])
   && peep2_reg_dead_p (3, operands[3])
   && peep2_regno_dead_p (4, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "TARGET_SSE
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))")
  (-1 "(ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512IFMA) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && (TARGET_SSE2)")
  (-1 "(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "(((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 32 != 16)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512VL)")
  (-1 "ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()")
  (-1 "(TARGET_64BIT && TARGET_SSE) && (TARGET_SSE2)")
  (-1 "TARGET_FMA || TARGET_FMA4 || TARGET_AVX512VL")
  (-1 "TARGET_AES")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512DQ && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX512DQ)")
  (-1 "(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE4_2 && ix86_pre_reload_split ()) && (TARGET_AVX2)")
  (-1 "TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_F16C || TARGET_AVX512VL) && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F && 1 && ((DFmode == V16SFmode
							       || DFmode == V8DFmode
							       || DFmode == V8DImode
							       || DFmode == V16SImode
							       || DFmode == V32HImode
							       || DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (DFmode == V8SFmode
								       || DFmode == V4DFmode
								       || DFmode == V4DImode
								       || DFmode == V8SImode
								       || DFmode == V16HImode
								       || DFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_CC) && (word_mode == SImode)")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4)) && (TARGET_EVEX512)")
  (-1 "(64 == 64 || TARGET_AVX512VL) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && (TARGET_AVX)")
  (-1 "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVES)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 64 != 16)) && (TARGET_EVEX512))")
  (-1 "((TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations")
  (-1 "SSE_FLOAT_MODE_P (SFmode)")
  (-1 "(TARGET_LWP) && (Pmode == DImode)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "((ptr_mode == SImode) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && !TARGET_AVX512DQ) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)) && (TARGET_AVX2)")
  (-1 "(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(16 == 64 || TARGET_AVX512VL) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_SSE")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4)) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 " reload_completed")
  (-1 "INTVAL (operands[2]) == GET_MODE_PRECISION (SImode) - 1")
  (-1 "((TARGET_AVX512F) && (TARGET_AVX512VL)) && ( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && 1) && (TARGET_EVEX512))")
  (-1 "TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))")
  (-1 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "!TARGET_64BIT && TARGET_RDPID")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && (TARGET_AVX512VL))")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (64 == 64 || TARGET_AVX512VL)) && (TARGET_EVEX512))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V8QImode, operands)")
  (-1 "ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && true")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX10_2_512)))")
  (-1 "(TARGET_AVX512F && TARGET_SSE_MATH) && (TARGET_64BIT)")
  (-1 "/* Ensure that resulting mask is zero or sign extended operand.  */
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
			 ? CCZmode : CCNOmode)")
  (-1 "((TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && (TARGET_AVX2)) && ( 1)")
  (-1 "TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))")
  (-1 "!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SImode == V16SFmode
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
										       || V16SImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "ix86_hardreg_mov_ok (operands[0], operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ix86_avoid_lea_for_addr (peep2_next_insn (0), operands)")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX10_2_256))")
  (-1 "(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (DImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(peep2_regno_dead_p (3, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffffffff))) && (TARGET_AVX2)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512F
  && (!true || TARGET_AVX10_2_256)))")
  (-1 "(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE4_1 && (64 != 64 || !TARGET_PREFER_AVX256)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
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
					VOIDmode))) && (TARGET_64BIT)")
  (-1 "TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(INTVAL (operands[2]) == GET_MODE_PRECISION (DImode) - 1) && (TARGET_AVX2)")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2
   && (V16HImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "((TARGET_SSE2 && ix86_pre_reload_split ()) && (TARGET_SSE2)) && ( 1)")
  (-1 "TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DImode)
       || !MEM_P (operands[1]))")
  (-1 "TARGET_3DNOW")
  (-1 "ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "(!TARGET_64BIT || TARGET_AVX512F) && TARGET_SSE2 && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && reload_completed")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V4SImode, operands))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE3 && TARGET_AVX512VL)")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256))")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL && TARGET_EVEX512")
  (-1 "(TARGET_AVX10_2_256 && 1) && (TARGET_AVX10_2_512)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SImode)
       || !MEM_P (operands[1]))")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE))")
  (-1 "(TARGET_SSE && 1
   && (!false || 16 != 16)) && (TARGET_AVX)")
  (-1 "TARGET_APX_NF && reload_completed")
  (-1 "(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && (TARGET_SSE2)) && ( 1)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V2SImode, operands)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256) && (TARGET_AVX))")
  (-1 "!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))")
  (-1 "TARGET_64BIT && TARGET_FSGSBASE")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "TARGET_64BIT && TARGET_SSE")
  (-1 "(TARGET_AVX512FP16 && 1 && 1) && (TARGET_AVX512VL)")
  (-1 "(!TARGET_64BIT
    && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
    && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC)
   || ((!TARGET_64BIT || TARGET_AVX512F)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REGNO_P (REGNO (operands[1]))")
  (-1 "TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3]) + 1), 32, 63)")
  (-1 "TARGET_64BIT && TARGET_BMI2")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)) && ( 1)")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && (!false || 32 != 16)) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_EVEX512)")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && (ptr_mode == SImode)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "!TARGET_64BIT && TARGET_GNU_TLS")
  (-1 "TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && (word_mode == SImode)")
  (-1 "TARGET_BMI2")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode)))")
  (-1 "(TARGET_AVX10_2_256) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI2) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL)
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX10_2_512))")
  (-1 "((ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_AVX512BW && reload_completed")
  (-1 "(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && (TARGET_AVX512BW)")
  (-1 "ix86_match_ccmode (insn, CCGCmode)")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && (TARGET_64BIT)")
  (-1 "((TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && (TARGET_SSE4_1)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512VBMI && 1) && (TARGET_AVX512VL)")
  (-1 "TARGET_SM3")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_3DNOW || TARGET_PREFETCH_SSE || TARGET_PRFCHW || TARGET_MOVRS")
  (-1 "((TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(INTVAL (operands[2]) == 8 * BITS_PER_UNIT / 2
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
					VOIDmode))) && (!TARGET_64BIT)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)")
  (-1 "(TARGET_AVX512FP16 && 1 && 1) && (TARGET_EVEX512)")
  (-1 "!TARGET_64BIT && reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_ROUNDEVEN != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSSE3) && (TARGET_SSE2)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "!optimize_function_for_size_p (cfun)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_SSE2))")
  (-1 "ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && 1 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V2DImode, operands)")
  (-1 "TARGET_PREFETCH_SSE")
  (-1 "(32 == 64 || TARGET_AVX512VL) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256")
  (-1 "(TARGET_AVX2) && ( reload_completed)")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)")
  (-1 "TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512DQ) && (TARGET_AVX512VL)")
  (-1 "(TARGET_CLZERO) && (Pmode == SImode)")
  (-1 "!TARGET_LZCNT")
  (-1 "(/* Ensure that resulting mask is zero or sign extended operand.  */
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
			 ? CCZmode : CCNOmode)) && ( 1)")
  (-1 "(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_SSE2)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_CLFLUSHOPT")
  (-1 "TARGET_SSE4_2
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_FMA || TARGET_FMA4 || (16 == 64 || TARGET_AVX512VL)) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && ( 1)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
			 ? CCGOCmode : CCNOmode)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SFmode) == 4 ? 0xF : 0x3))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)")
  (-1 "TARGET_SSE4_1 || TARGET_MMX_WITH_SSE")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_AVX512DQ)")
  (-1 "!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)
   && peep2_reg_dead_p(3, operands[0])")
  (-1 "(TARGET_AVX512BW) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DFmode == V16SFmode
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
										       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512VPOPCNTDQ) && (TARGET_EVEX512)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode)))))")
  (-1 "ix86_target_stack_probe ()")
  (-1 "(TARGET_SSE2) && ((TARGET_64BIT) && (TARGET_SSE4_1))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid")
  (-1 "((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2
   && ix86_binary_operator_ok (MULT, V2SImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ)")
  (-1 "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == DImode)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_AVX2) && (TARGET_AVX)")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && (TARGET_64BIT)")
  (-1 "epilogue_completed")
  (-1 "(reload_completed
   && !rtx_equal_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && true")
  (-1 "(TARGET_SSE && 1
   && (!false || 32 != 16)) && (TARGET_AVX)")
  (-1 "(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "TARGET_SSE4_1 && !TARGET_64BIT
   && reload_completed")
  (-1 "TARGET_SSE2 && !HONOR_NANS (BFmode) && !flag_rounding_math
   && (flag_unsafe_math_optimizations
       || TARGET_AVXNECONVERT
       || (TARGET_AVX512BF16 && TARGET_AVX512VL))")
  (-1 "((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
  == GET_MODE_BITSIZE (DImode) - 1) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "TARGET_AVX512F && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && (TARGET_AVX))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SImode == V16SFmode
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
										       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V32HImode == V16SFmode
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
										       || V32HImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_FMA || TARGET_FMA4 || (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()")
  (-1 "TARGET_AVX512BW && TARGET_EVEX512
   && !HONOR_NANS (BFmode) && !flag_rounding_math
   && (flag_unsafe_math_optimizations || TARGET_AVX512BF16)")
  (-1 "TARGET_64BIT && TARGET_WAITPKG")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))")
  (-1 "TARGET_AVX2
   && 1 && 1
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])")
  (-1 "(TARGET_CMPXCHG8B) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX2) && (Pmode == DImode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)")
  (-1 "(TARGET_64BIT && TARGET_GNU2_TLS) && (ptr_mode == DImode)")
  (-1 "(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SFmode)
       || !MEM_P (operands[1]))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "TARGET_USE_BT && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && 1)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3")
  (-1 "TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_SSE) && (TARGET_MMX_WITH_SSE)")
  (-1 "((ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (TARGET_FMA || TARGET_AVX512F)")
  (-1 "(TARGET_RDSEED) && (TARGET_64BIT)")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)")
  (-1 "(64 == 64 || TARGET_AVX512VL) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || QImode == SImode
       || QImode == DImode))")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && ( 1)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)
  && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2))")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_MWAITX) && (Pmode == DImode)")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512)))")
  (-1 "TARGET_AVX512VL && TARGET_MMX_WITH_SSE")
  (-1 "TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)")
  (-1 "TARGET_XADD")
  (-1 "(TARGET_AVX512CD) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL)")
  (-1 "((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX))")
  (-1 "(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ())")
  (-1 "TARGET_64BIT && epilogue_completed
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)")
  (-1 "TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4SFmode)")
  (-1 "TARGET_SSE4_1 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "((TARGET_AVX512F) && (TARGET_EVEX512)) && ( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))")
  (-1 "(TARGET_AVX512FP16 && TARGET_AVX512VL
   && ix86_partial_vec_fp_math
   && !flag_trapping_math) && (TARGET_MMX_WITH_SSE)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && (TARGET_SSE2))")
  (-1 "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_APX_CCMP) && (TARGET_64BIT)")
  (-1 "TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "TARGET_PKU")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))")
  (-1 "!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)")
  (-1 "can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && TARGET_EVEX512
	   && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (DImode == SImode || TARGET_64BIT || MEM_P (operands[0]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_3DNOW)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)")
  (-1 "(TARGET_SSE2
   && GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[1])) == 32) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_64BIT && TARGET_SSE2) && (TARGET_AVX2)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "TARGET_CMPXCHG")
  (-1 "TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V2DFmode == V16SFmode
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
								       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], SImode)
       || (constm1_operand (operands[1], SImode)
	   && (4 > 1 || TARGET_AVX512DQ)))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "((INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512DQ)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)")
  (-1 "((INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_512)")
  (-1 "(DImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && (!TARGET_64BIT)")
  (-1 "TARGET_64BIT
   && reload_completed && ix86_avoid_lea_for_add (insn, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_CEIL != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_EVEX512)")
  (-1 "(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_EVEX512)")
  (-1 "TARGET_CMPXCHG && TARGET_RELAX_CMPXCHG_LOOP")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(ptr_mode == SImode) && (word_mode == DImode)")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DImode) >= 16) && (TARGET_EVEX512)")
  (-1 "(TARGET_APX_NF) && (TARGET_LZCNT)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "TARGET_CLDEMOTE")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_EVEX512)) && ( 1)")
  (-1 "(!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32) && ( reload_completed)")
  (-1 "(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[5])
   && rtx_equal_p (operands[1], operands[6])")
  (-1 "TARGET_SSE3
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_SSE2))")
  (-1 "TARGET_64BIT || TARGET_SSE")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_WIDEKL")
  (-1 "((ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "!TARGET_LZCNT
   && TARGET_64BIT
   && ix86_pre_reload_split ()
   && ((unsigned HOST_WIDE_INT)
       trunc_int_for_mode (UINTVAL (operands[2]) - 31, SImode)
       == UINTVAL (operands[2]) - 31)")
  (-1 "(TARGET_SSE
   && 1
   && 1) && (TARGET_AVX)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V8BFmode)
       || !MEM_P (operands[1]))")
  (-1 "(TARGET_AVX && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
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
								       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512VL)
   && TARGET_MMX_WITH_SSE
   && ix86_partial_vec_fp_math")
  (-1 "TARGET_64BIT && TARGET_SSE4_1")
  (-1 "(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (!TARGET_64BIT)")
  (-1 "reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127)))")
  (-1 "(TARGET_BMI) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(TARGET_AVX512DQ) && (TARGET_EVEX512)")
  (-1 "(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && (word_mode == DImode)")
  (-1 "((TARGET_SSE4_2 && ix86_pre_reload_split ()) && (TARGET_AVX2)) && ( 1)")
  (-1 "reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))")
  (-1 "(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ( reload_completed)")
  (-1 "(TARGET_SSE4_1 && reload_completed) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && 1) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_AVX512VL)")
  (-1 "(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_F16C || TARGET_AVX512VL)
   && (!true || TARGET_AVX10_2_256)))")
  (-1 "(REGNO (operands[0]) == REGNO (operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
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
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3) && (TARGET_EVEX512))")
  (-1 "TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode)")
  (-1 "((ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512CD) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE && TARGET_SSE_MATH")
  (-1 "(TARGET_XOP) && (TARGET_AVX)")
  (-1 "TARGET_APX_NDD")
  (-1 "TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)")
  (-1 "(TARGET_AVX512VL && TARGET_AVX512BW) && (TARGET_MMX_WITH_SSE)")
  (-1 "TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_SSE && 1 && 1")
  (-1 "!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "!TARGET_64BIT && TARGET_SSE4_1
   && reload_completed")
  (-1 "(x86_64_immediate_operand (operands[2], VOIDmode)
   && INTVAL (operands[2]) != -1
   && INTVAL (operands[2]) != 2147483647) && (TARGET_64BIT)")
  (-1 "((ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))")
  (-1 "(((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_AVX512F) && (TARGET_F16C || TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8DImode == V16SFmode
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
								       || V8DImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "TARGET_64BIT && TARGET_BMI2 && reload_completed")
  (-1 "!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())")
  (-1 "(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && (TARGET_64BIT)")
  (-1 "!TARGET_CMOVE")
  (-1 "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_SSE3 && TARGET_V2DF_REDUCTION_PREFER_HADDPD")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)")
  (-1 "SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode")
  (-1 "(TARGET_CMOVE) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)")
  (-1 "TARGET_LP64")
  (-1 "TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_3DNOW_A || TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F) && (TARGET_SSE2)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V4SImode == V16SFmode
							       || V4SImode == V8DFmode
							       || V4SImode == V8DImode
							       || V4SImode == V16SImode
							       || V4SImode == V32HImode
							       || V4SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SImode == V8SFmode
								       || V4SImode == V4DFmode
								       || V4SImode == V4DImode
								       || V4SImode == V8SImode
								       || V4SImode == V16HImode
								       || V4SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "TARGET_64BIT
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && (TARGET_AVX)) && ( 1)")
  (-1 "TARGET_SSE2
   && TARGET_USE_VECTOR_CONVERTS
   && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (MEM_P (operands[1]) || TARGET_INTER_UNIT_MOVES_TO_VEC)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVXNECONVERT || (TARGET_AVX512BF16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && (TARGET_EVEX512)")
  (-1 "((INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_SSE4_2")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HFmode))")
  (-1 "(TARGET_CMOVE) && (!TARGET_64BIT)")
  (-1 "TARGET_SSE2 && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_BMI2
   && ((REGNO (operands[5]) == REGNO (operands[0])
        && REGNO (operands[1]) != REGNO (operands[4]))
       || (REGNO (operands[5]) == REGNO (operands[1])
	   && REGNO (operands[0]) != REGNO (operands[4])))
   && peep2_reg_dead_p (2, operands[5])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
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
								       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "((TARGET_APX_NF) && ((((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)) && (TARGET_LZCNT))) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "ix86_binary_operator_ok (XOR, V2HImode, operands)")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8HFmode == V16SFmode
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
										       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE4_1")
  (-1 "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && (TARGET_AVX))")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "ix86_binary_operator_ok (AND, V2QImode, operands)")
  (-1 "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
   == GET_MODE_BITSIZE (HImode) - 1")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL)")
  (-1 "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEC)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F) && (TARGET_AVX)")
  (-1 "((ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_USE_BT && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_SHSTK || (flag_cf_protection & CF_RETURN)")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE && 1
   && 1")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && 1)")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V4DImode == V16SFmode
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
								       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)")
  (-1 "TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()")
  (-1 "ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)")
  (-1 "TARGET_80387")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V2SImode, operands)")
  (-1 "TARGET_64BIT
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
	 ? CCZmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V32HFmode)) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX))")
  (-1 "TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16SFmode)) && (TARGET_EVEX512)")
  (-1 "(ix86_hardreg_mov_ok (operands[0], operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ix86_avoid_lea_for_addr (peep2_next_insn (0), operands)) && (TARGET_64BIT)")
  (-1 "((TARGET_SSE4_1) && (TARGET_SSE2)) && ( reload_completed)")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (((((TARGET_64BIT) && (TARGET_AVX512BW)) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))) && ( reload_completed)")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F && 1 && ((SFmode == V16SFmode
							       || SFmode == V8DFmode
							       || SFmode == V8DImode
							       || SFmode == V16SImode
							       || SFmode == V32HImode
							       || SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (SFmode == V8SFmode
								       || SFmode == V4DFmode
								       || SFmode == V4DImode
								       || SFmode == V8SImode
								       || SFmode == V16HImode
								       || SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && 1 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1
   && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (!TARGET_64BIT)")
  (-1 "(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_64BIT
   && GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (ptr_mode == DImode)")
  (-1 "ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(ix86_target_stack_probe ()) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BF16) && (TARGET_AVX512VL))")
  (-1 "TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F
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
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3) && (TARGET_EVEX512)")
  (-1 "TARGET_64BIT
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)")
  (-1 "((ix86_unary_operator_ok (NOT, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))) && ( 1)")
  (-1 "(!TARGET_64BIT
    && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
    && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC)
   || ((!TARGET_64BIT || TARGET_AVX512F)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "TARGET_GFNI")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "((INTVAL (operands[2]) == 8 * BITS_PER_UNIT / 2
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
					VOIDmode))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_RDSEED")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE && !TARGET_SSE4_1")
  (-1 "(TARGET_AVX && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(reload_completed) && (word_mode == SImode)")
  (-1 "reload_completed
   && optimize_insn_for_size_p () && optimize_size > 1
   && LEGACY_INT_REG_P (operands[2])
   && !REX_INT_REG_P (operands[3])
   && !reg_overlap_mentioned_p (operands[2], operands[3])")
  (-1 "(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))")
  (-1 "TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V8HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && reload_completed) && (Pmode == DImode)")
  (-1 "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)")
  (-1 "!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true")
  (-1 "TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)")
  (-1 "(TARGET_BMI && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(!SIBLING_CALL_P (insn)) && (word_mode == DImode)")
  (-1 "((ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (0 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "((TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_AVX10_2_512")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI2) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VL && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "((INTVAL (operands[2]) == 16 * BITS_PER_UNIT / 2
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
					VOIDmode))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && (TARGET_EVEX512)")
  (-1 "reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode))))")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
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
								       || V4SFmode == V16HFmode)))))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
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
								       || V32HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_EVEX512)))")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_SSE2)) && ( 1)")
  (-1 "TARGET_AVX2 && reload_completed
   && INTVAL (operands[3]) > 1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HFmode))")
  (-1 "!TARGET_PARTIAL_REG_STALL || optimize_size")
  (-1 "(TARGET_SSE2 && 1) && (TARGET_AVX2)")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX512FP16 && TARGET_EVEX512)) && ( 1)")
  (-1 "(TARGET_CMPXCHG && TARGET_RELAX_CMPXCHG_LOOP) && (TARGET_64BIT || TARGET_CMPXCHG8B)")
  (-1 "TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)
   && !TARGET_APX_NDD")
  (-1 "(TARGET_POPCNT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()")
  (-1 "((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V4DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "TARGET_MWAITX")
  (-1 "(TARGET_SSE2) && (TARGET_MMX_WITH_SSE)")
  (-1 "(TARGET_SSE && 1
   && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "TARGET_XOP && TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SImode) >= 16) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V4HImode, operands)")
  (-1 "TARGET_APX_PPX")
  (-1 "((TARGET_SSE2) && (TARGET_AVX2)) && ( 1)")
  (-1 "(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16) && (TARGET_64BIT))")
  (-1 "TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8HFmode))")
  (-1 "TARGET_64BIT
   && optimize_insn_for_size_p ()
   && LEGACY_INT_REG_P (operands[0])
   && !x86_64_immediate_operand (operands[1], DImode)
   && !x86_64_zext_immediate_operand (operands[1], DImode)
   && !((UINTVAL (operands[1]) >> ctz_hwi (UINTVAL (operands[1])))
	& ~HOST_WIDE_INT_C (0xffffffff))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && (SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode)")
  (-1 "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode))))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512FP16 && TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || (REG_P (operands[0]) && !EXT_REX_SSE_REG_P (operands[1])))) && (TARGET_EVEX512)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)) && (TARGET_64BIT)")
  (-1 "(ix86_unary_operator_ok (NEG, TImode, operands, TARGET_APX_NDD)) && (TARGET_64BIT)")
  (-1 "(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (ptr_mode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
								       || V4DFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()) && (TARGET_SSE2)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "((TARGET_AVX512F && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1) && ( reload_completed)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE4_1) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_MMX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V8SImode == V16SFmode
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
										       || V8SImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (0 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "TARGET_AVX512BW")
  (-1 "(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)) && ( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))")
  (-1 "(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && (TARGET_SSE4_1 && TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SImode == V16SFmode
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
										       || V16SImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_KL")
  (-1 "(TARGET_AVX512F) && (((TARGET_EVEX512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_VAES")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && 1 && ((V8SImode == V16SFmode
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
								       || V8SImode == V16HFmode)))) && (TARGET_AVX))")
  (-1 "(TARGET_SHSTK) && (TARGET_64BIT)")
  (-1 "TARGET_LP64 && ix86_check_movabs (insn, 0)")
  (-1 "(TARGET_AVX512IFMA) && (TARGET_EVEX512)")
  (-1 "TARGET_AVX512VL && TARGET_AVX512F
  && (!false || TARGET_AVX10_2_256)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "((TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (((((TARGET_64BIT) && (TARGET_AVX512BW && TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))) && ( reload_completed)")
  (-1 "(TARGET_SSE4_1 && reload_completed) && (Pmode == DImode)")
  (-1 "TARGET_PREFETCHI && TARGET_64BIT")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && (TARGET_SSE2)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && (REGNO (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2])")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (SImode))) && (TARGET_AVX512VL)")
  (-1 "(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F && (!false || 64 != 16)) && (TARGET_EVEX512)")
  (-1 "(TARGET_APX_ZU) && (TARGET_64BIT)")
  (-1 "((TARGET_BMI) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])")
  (-1 "TARGET_AVX512FP16 && TARGET_AVX512VL && 1")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4DFmode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16HImode == V16SFmode
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
								       || V16HImode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2))")
  (-1 "TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)")
  (-1 "TARGET_SSE2 && 1")
  (-1 "(TARGET_FMA || TARGET_AVX512F) && (TARGET_SSE2)")
  (-1 "((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && 1) && (TARGET_AVX512VL)")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_AVX512VL")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (HImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2BFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_SSE2))")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((((TARGET_AVX512VL) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_AVXNECONVERT")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "((TARGET_AVX512VL && ix86_pre_reload_split ()) && (TARGET_AVX512BW)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && (TARGET_64BIT)")
  (-1 "(!TARGET_AVOID_LEA_FOR_ADDR || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_SSE
   && 1
   && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512DQ && 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)")
  (-1 "TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT")
  (-1 "!TARGET_64BIT && flag_pic")
  (-1 "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "((ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX)")
  (-1 "peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], HImode)
       || (constm1_operand (operands[1], HImode)
	   && (2 > 1 || TARGET_AVX512DQ)))")
  (-1 "(TARGET_AVX512VNNI) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX512VL && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && (!TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)")
  (-1 "((TARGET_CMOVE
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V16SFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode))))")
  (-1 "(TARGET_AVX512VBMI && 1) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (((((TARGET_64BIT) && (TARGET_AVX512DQ)) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && (TARGET_EVEX512)")
  (-1 "TARGET_SSE3 && 1")
  (-1 "TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT")
  (-1 "((TARGET_SSE && ix86_pre_reload_split ()) && (TARGET_AVX)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && ((V8DFmode == V16SFmode
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
								       || V8DFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)")
  (-1 "(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && (TARGET_64BIT)")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && (word_mode == SImode)")
  (-1 "TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()")
  (-1 "TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V4DFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_MWAITX) && (Pmode == SImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V16SImode, operands)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_AVX2 || TARGET_XOP")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX2)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_SSE4_1 && (32 != 64 || !TARGET_PREFER_AVX256)) && (TARGET_AVX)")
  (-1 "((TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffffffff) && (TARGET_AVX2)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI) && (TARGET_EVEX512))")
  (-1 "ptr_mode == DImode")
  (-1 "(TARGET_AVX10_2_256) && (TARGET_AVX512FP16)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && (TARGET_AVX512FP16)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
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
								       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && !flag_trapping_math")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && ( 1)")
  (-1 "REGNO (operands[0]) != REGNO (operands[2])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[1])")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && 1) && (TARGET_AVX512VL))")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_AVX512BW && TARGET_EVEX512")
  (0 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || QImode == SImode
       || QImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16")
  (-1 "TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SImode == V16SFmode
									       || V4SImode == V8DFmode
									       || V4SImode == V8DImode
									       || V4SImode == V16SImode
									       || V4SImode == V32HImode
									       || V4SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4SImode == V8SFmode
										       || V4SImode == V4DFmode
										       || V4SImode == V4DImode
										       || V4SImode == V8SImode
										       || V4SImode == V16HImode
										       || V4SImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "(REGNO (operands[0]) != REGNO (operands[2])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SImode == V16SFmode
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
								       || V16SImode == V16HFmode)))) && (TARGET_EVEX512))")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && ( 1)")
  (-1 "(TARGET_SSE) && (TARGET_SSE2 && TARGET_64BIT)")
  (-1 "optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode)")
  (-1 "(TARGET_BMI2 && reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
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
								       || V8HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL)))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_finite_math_only
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512FP16 && !flag_trapping_math && !flag_rounding_math) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI && (64 == 64 || TARGET_AVX512VL)) && (TARGET_EVEX512))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4)) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "TARGET_TLS_DIRECT_SEG_REFS")
  (-1 "(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))")
  (-1 "ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16SFmode)
       || register_operand (operands[1], V16SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "optimize_size > 1
  && ((REGNO (operands[0]) == AX_REG)
      != (REGNO (operands[1]) == AX_REG))
  && optimize_insn_for_size_p ()
  && peep2_reg_dead_p (1, operands[1])")
  (-1 "(TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode))))")
  (-1 "!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()")
  (-1 "(TARGET_FMA || TARGET_FMA4 || (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V32HFmode == V16SFmode
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
								       || V32HFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW && TARGET_EVEX512))")
  (-1 "TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)")
  (-1 "(TARGET_64BIT && reload_completed) && (ptr_mode == DImode)")
  (-1 "(TARGET_FMA || TARGET_FMA4) && (TARGET_SSE2)")
  (0 "(TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V4SFmode == V16SFmode
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
										       || V4SFmode == V16HFmode))))")
  (-1 "reload_completed")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)")
  (-1 "((ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_EVEX512)) && ( reload_completed)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)")
  (-1 "(TARGET_AVX2) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16SImode == V16SFmode
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
								       || V16SImode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "((INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (-1 "(((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && (TARGET_SSE2)) && ( 1)")
  (-1 "(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "TARGET_VPCLMULQDQ")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && ( reload_completed)")
  (-1 "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
  == GET_MODE_BITSIZE (SImode) - 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V16SFmode == V16SFmode
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
										       || V16SFmode == V16HFmode)))) && (TARGET_EVEX512)))")
  (-1 "(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1")
  (-1 "TARGET_AVX512IFMA && TARGET_EVEX512")
  (-1 "TARGET_3DNOW_A
   && INTVAL (operands[3]) != INTVAL (operands[4])")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_EVEX512))")
  (-1 "TARGET_AVX2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE) && ( reload_completed)")
  (-1 "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "TARGET_64BIT && TARGET_RDPID")
  (-1 "((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && (TARGET_64BIT)")
  (-1 "optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))")
  (-1 "ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V2DImode, operands)")
  (-1 "(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_AVX512VL)")
  (-1 "((TARGET_USE_FANCY_MATH_387
     && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || (TARGET_AVX512F && TARGET_SSE_MATH))
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_SSE && TARGET_64BIT) && (Pmode == DImode)")
  (-1 "TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && true")
  (-1 "(TARGET_AVX512F) && ((((TARGET_EVEX512) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_EVEX512))")
  (-1 "TARGET_AVX512BF16 && TARGET_AVX512VL")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32HFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && (TARGET_AVX)")
  (-1 "TARGET_64BIT && (TARGET_USE_BT || reload_completed)")
  (-1 "((TARGET_64BIT && TARGET_SSE) && (TARGET_AVX)) && ( reload_completed)")
  (-1 "TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SHA")
  (-1 "TARGET_SSE2
   && (V16QImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "((TARGET_AVX512BW && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "TARGET_AVX512FP16 && 1")
  (-1 "CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()")
  (-1 "16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX2)")
  (-1 "((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "TARGET_F16C || TARGET_AVX512VL")
  (0 "(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && ( reload_completed && !REG_P (operands[1]) && !true
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && (TARGET_AVX)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
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
       || any_QIreg_operand (operands[2], QImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512FP16 && ((V16HImode == V16SFmode
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
								       || V16HImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "peep2_reg_dead_p (2, operands[0])")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_ROUNDEVEN != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4)) && (TARGET_AVX512VL)")
  (-1 "! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])")
  (-1 "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && 1 && 1")
  (-1 "TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_POPCNT && TARGET_64BIT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "((TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)
  && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode)))) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512VL && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "TARGET_SSE
   && 1
   && 1")
  (-1 "(TARGET_SSE4_1
   && reload_completed) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512FP16 && TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "((((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && (((TARGET_AVX512BW) && (TARGET_EVEX512)) && (TARGET_EVEX512))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL)")
  (-1 "((ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4)) && (TARGET_EVEX512)) && ( 1)")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))) && (TARGET_AVX512VL)))")
  (-1 "ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8BFmode))")
  (-1 "(!TARGET_PARTIAL_MEMORY_READ_STALL && !MEM_VOLATILE_P (operands[0])) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()")
  (-1 "(16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8BFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ((V2DFmode == V16SFmode
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
										       || V2DFmode == V16HFmode)))) && (TARGET_SSE2)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && (TARGET_SSE2))")
  (-1 "((TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_EVEX512)) && ( 1)")
  (-1 "ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_MOVDIRI) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_AVX512FP16 && TARGET_EVEX512)")
  (-1 "!TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VL) && (TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
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
   && INTVAL (operands[14]) == INTVAL (operands[17]) - 3) && (TARGET_EVEX512))")
  (-1 "32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)")
  (-1 "TARGET_64BIT && TARGET_BMI2 && !optimize_function_for_size_p (cfun)")
  (-1 "TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX512F && TARGET_EVEX512)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "(!TARGET_64BIT && TARGET_GNU2_TLS) && ( 1)")
  (-1 "(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW) && (TARGET_EVEX512))")
  (-1 "!(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && true")
  (-1 "(TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "((TARGET_64BIT && TARGET_AVX512F)
    || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX512FP16 && TARGET_AVX512VL)")
  (-1 "((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   && (HImode != QImode
       || any_QIreg_operand (operands[1], QImode))")
  (-1 "TARGET_APX_ZU")
  (-1 "(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (DImode))) && (TARGET_EVEX512)")
  (-1 "(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SImode) >= 16) && (TARGET_EVEX512)")
  (-1 "((TARGET_64BIT && TARGET_GNU2_TLS) && (ptr_mode == DImode)) && ( 1)")
  (-1 "(TARGET_SSE2) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true")
  (-1 "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEOPT)")
  (-1 "(TARGET_AVX512FP16 && !flag_trapping_math) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && (TARGET_AVX)")
  (-1 "TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && (TARGET_EVEX512)")
  (-1 "((TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX)) && ( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())")
  (-1 "TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8DImode)
       || register_operand (operands[1], V8DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "((ix86_pre_reload_split ()) && (!TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && (TARGET_AVX2)")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && (TARGET_AVX512BW && TARGET_EVEX512)")
  (-1 "(TARGET_APX_NF) && (((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT))")
  (-1 "(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && (TARGET_64BIT)")
  (-1 "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])")
  (-1 "((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[1])")
  (-1 "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16BFmode)
       || register_operand (operands[1], V16BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX)")
  (-1 "TARGET_SHSTK")
  (-1 "ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffff))) && ( 1)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)")
  (-1 "((/* Ensure that resulting mask is zero or sign extended operand.  */
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
			 ? CCZmode : CCNOmode)) && (TARGET_64BIT)) && ( 1)")
  (-1 "(reload_completed) && (word_mode == DImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
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
								       || V8SFmode == V16HFmode)))) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
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
								       || V4SFmode == V16HFmode)))))")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && (TARGET_64BIT)")
  (-1 "(TARGET_BMI || TARGET_AVX512BW) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
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
										       || V8DFmode == V16HFmode)))) && (TARGET_AVX512F && TARGET_EVEX512))")
  (-1 "ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && true")
  (-1 "((TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "((INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && (TARGET_AVX512F && TARGET_EVEX512)")
  (-1 "(peep2_reg_dead_p (4, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[5])
   && ! reg_overlap_mentioned_p (operands[1], operands[5])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_SSE3) && (TARGET_SSE2)")
  (-1 "TARGET_FMA || TARGET_FMA4 || (16 == 64 || TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2)))")
  (-1 "!TARGET_64BIT
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH")
  (-1 "TARGET_64BIT && TARGET_SSE2")
  (-1 "(TARGET_APX_NF && TARGET_LZCNT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF")
  (-1 "TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HFmode))")
  (-1 "TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))")
  (-1 "TARGET_LZCNT && TARGET_64BIT")
])
