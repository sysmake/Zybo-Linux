(define_conditions [
  (-1 "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))")
  (-1 "TARGET_32BIT || optimize_size || flag_pic")
  (-1 "TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)")
  (-1 "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))")
  (-1 "TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN")
  (-1 "TARGET_32BIT && XVECLEN (operands[0], 0) == 2")
  (-1 "TARGET_THUMB1 || arm_arch_thumb2")
  (-1 "TARGET_32BIT && XVECLEN (operands[0], 0) == 3")
  (-1 "TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT )")
  (-1 "(TARGET_32BIT) && (TARGET_IDIV)")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch5)")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode))")
  (-1 "TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)")
  (0 "TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)")
  (-1 "TARGET_THUMB2 && !arm_restrict_it")
  (-1 "TARGET_REALLY_IWMMXT")
  (-1 "TARGET_NEON && (!true || flag_unsafe_math_optimizations)")
  (-1 "TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)")
  (-1 "TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))")
  (-1 "TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3]))")
  (-1 "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5")
  (-1 "TARGET_NEON && TARGET_FPU_ARMV8")
  (-1 "arm_arch_thumb2")
  (-1 "TARGET_NEON && (false || !BYTES_BIG_ENDIAN)")
  (-1 "TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6")
  (-1 "TARGET_ARM && USE_RETURN_INSN (FALSE)")
  (-1 "TARGET_THUMB1 && satisfies_constraint_J (operands[1])")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))")
  (-1 "TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1]))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6)")
  (-1 "TARGET_NEON && reload_completed")
  (-1 "(TARGET_ARM) && ( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3]))")
  (-1 "TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2])")
  (-1 "(TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE)")
  (-1 "TARGET_THUMB1 && reload_completed")
  (-1 "TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)")
  (-1 "TARGET_THUMB2
   && satisfies_constraint_Px (operands[2])")
  (-1 "TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))")
  (-1 "TARGET_ARM && peep2_reg_dead_p (2, operands[0])")
  (-1 "TARGET_ARM  && USE_RETURN_INSN (TRUE)")
  (-1 "TARGET_32BIT && !TARGET_IWMMXT")
  (-1 "arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)")
  (-1 "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT)")
  (0 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))")
  (-1 "TARGET_ARM && XVECLEN (operands[0], 0) == 5")
  (-1 "(TARGET_THUMB2 && arm_restrict_it) && ( reload_completed)")
  (-1 "(TARGET_32BIT && !TARGET_NEON) && ( reload_completed)")
  (-1 "TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2]))")
  (-1 "TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))")
  (-1 "TARGET_32BIT
   && TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !flag_pic && !target_word_relocations
   && !arm_tls_referenced_p (operands[1])")
  (-1 "TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))")
  (-1 "TARGET_THUMB1 && satisfies_constraint_K (operands[1])")
  (-1 "TARGET_THUMB2 && reload_completed")
  (-1 "TARGET_32BIT || TARGET_THUMB1")
  (-1 "TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))")
  (-1 "TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT)")
  (-1 "TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])")
  (-1 "TARGET_NEON && TARGET_FP16")
  (-1 "TARGET_32BIT && reload_completed
   && arm_general_register_operand (operands[0], DImode)")
  (-1 "TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))")
  (-1 "TARGET_THUMB2 && flag_pic")
  (-1 "TARGET_32BIT && arm_arch5")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))")
  (-1 "TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDACQ)")
  (-1 "TARGET_ARM && arm_arch6 && optimize_size")
  (-1 "(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && (TARGET_VFP)")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode))")
  (-1 "TARGET_32BIT && peep2_reg_dead_p (3, operands[2])")
  (-1 "TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && !arm_arch6)")
  (-1 "TARGET_DSP_MULTIPLY")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE")
  (-1 "TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))")
  (-1 "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4")
  (-1 "arm_arch6")
  (-1 "(flag_pic) && ( reload_completed)")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch3m && !arm_arch6)")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)")
  (-1 "TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1])")
  (-1 "TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))")
  (-1 "TARGET_SOFT_TP")
  (-1 "TARGET_EITHER && (arm_arch6 || !optimize_size)")
  (-1 "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))")
  (-1 "TARGET_EITHER && reload_completed")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode))")
  (-1 "(TARGET_32BIT) && ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP_DOUBLE))")
  (-1 "(TARGET_THUMB2 && !arm_restrict_it) && ( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3]))")
  (-1 "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))")
  (-1 "TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)")
  (-1 "TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1]))))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode))")
  (-1 "TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode)")
  (-1 "arm_arch5 && TARGET_32BIT")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREX)")
  (-1 "TARGET_THUMB1 && !arm_arch5")
  (-1 "(TARGET_32BIT) && (TARGET_HARD_TP)")
  (-1 "TARGET_NEON && (!true || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && arm_arch4 && !arm_arch6)")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)")
  (-1 "(TARGET_32BIT) && (unaligned_access && TARGET_32BIT)")
  (-1 "TARGET_THUMB2")
  (-1 "TARGET_32BIT && !TARGET_NEON")
  (-1 "TARGET_HAVE_LDREX")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))")
  (-1 "TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3])")
  (-1 "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && USE_RETURN_INSN (FALSE))")
  (-1 "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT)")
  (-1 "TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))")
  (-1 "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)")
  (-1 "TARGET_32BIT && reload_completed")
  (-1 "TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)")
  (-1 "(TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))")
  (-1 "TARGET_THUMB1 && arm_arch6")
  (-1 "TARGET_THUMB2 && TARGET_SOFT_FLOAT")
  (-1 "TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)")
  (-1 "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT)")
  (-1 "TARGET_32BIT && arm_arch5e")
  (-1 "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3")
  (-1 "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))")
  (0 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))")
  (-1 "TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0]))")
  (-1 "TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode))")
  (-1 "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))")
  (-1 "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))")
  (-1 "TARGET_32BIT && arm_arch4")
  (-1 "TARGET_HAVE_LDACQ")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))")
  (1 "TARGET_EITHER")
  (-1 "TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations")
  (-1 "TARGET_HAVE_MEMORY_BARRIER")
  (-1 "unaligned_access && TARGET_32BIT")
  (-1 "TARGET_32BIT && SIBLING_CALL_P (insn)")
  (-1 "TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn)")
  (-1 "((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4]))))")
  (-1 "TARGET_NEON && reload_completed
   && (!CONST_INT_P (operands[2])
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64))")
  (-1 "TARGET_ARM && XVECLEN (operands[0], 0) == 2")
  (-1 "TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN")
  (-1 "TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24)")
  (-1 "TARGET_32BIT ")
  (-1 "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && arm_arch6)")
  (-1 "(TARGET_32BIT) && ( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1]))))")
  (-1 "(TARGET_32BIT) && ( reload_completed)")
  (-1 "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT)")
  (-1 "TARGET_ARM && arm_arch4 && !arm_arch6")
  (-1 "!arm_arch6")
  (-1 "TARGET_CRC32")
  (-1 "TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))")
  (-1 "TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3]))")
  (-1 "TARGET_ARM && reload_completed")
  (-1 "TARGET_ARM && !arm_arch6")
  (-1 "TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn)")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE")
  (-1 "TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode)")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 2)")
  (-1 "TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT)")
  (-1 "TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && (reload_in_progress || reload_completed))")
  (-1 "TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER")
  (-1 "flag_pic")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && !arm_arch6)")
  (-1 "(TARGET_32BIT) && (TARGET_INT_SIMD)")
  (-1 "TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))")
  (-1 "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))")
  (-1 "(TARGET_NEON) && ( reload_completed)")
  (-1 "TARGET_32BIT && arm_arch_thumb2")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 5)")
  (-1 "TARGET_ARM && arm_arch4")
  (-1 "TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE")
  (-1 "TARGET_32BIT && XVECLEN (operands[0], 0) == 4")
  (-1 "(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP)")
  (-1 "TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access")
  (-1 "TARGET_GNU2_TLS")
  (-1 "TARGET_THUMB2 && optimize_size && reload_completed")
  (0 "TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))")
  (-1 "TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))")
  (-1 "(TARGET_THUMB1) && ( reload_completed)")
  (-1 "TARGET_THUMB2 && !flag_pic")
  (-1 "(TARGET_THUMB1) && ( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020)))")
  (-1 "TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))")
  (-1 "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))")
  (-1 "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP && !arm_restrict_it")
  (-1 "TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])")
  (-1 "(TARGET_32BIT) && ((TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))")
  (-1 "TARGET_THUMB2 && optimize_size")
  (-1 "TARGET_32BIT && !arm_arch6")
  (-1 "TARGET_LDRD
     && current_tune->prefer_ldrd_strd
     && !optimize_function_for_size_p (cfun)")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && arm_arch6)")
  (-1 "TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))")
  (-1 "TARGET_32BIT")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))")
  (-1 "TARGET_32BIT && arm_arch6")
  (-1 "TARGET_THUMB2
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF")
  (-1 "TARGET_ARM && XVECLEN (operands[0], 0) == 4")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))")
  (-1 "(TARGET_32BIT) && ((TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && (TARGET_VFP))")
  (-1 "TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn)")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))")
  (-1 "TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune != cortexa8
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode))")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))")
  (-1 "TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2])))))")
  (-1 "TARGET_LDRD
  && current_tune->prefer_ldrd_strd
  && !optimize_function_for_size_p (cfun)")
  (-1 "TARGET_INT_SIMD")
  (-1 "TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2])")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))")
  (-1 "TARGET_DSP_MULTIPLY && arm_arch_thumb2")
  (-1 "TARGET_NEON && (true || !BYTES_BIG_ENDIAN)")
  (-1 "TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1]")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREXD)")
  (-1 "TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))")
  (-1 "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))")
  (-1 "(TARGET_THUMB2) && ( reload_completed)")
  (-1 "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT)")
  (-1 "(unaligned_access && TARGET_32BIT) && ( reload_completed)")
  (-1 "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT)")
  (-1 "TARGET_THUMB1 && flag_pic")
  (-1 "TARGET_CRYPTO")
  (-1 "(TARGET_ARM) && ( reload_completed)")
  (-1 "TARGET_32BIT && arm_arch3m")
  (-1 "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2")
  (-1 "TARGET_NEON && flag_unsafe_math_optimizations")
  (-1 "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)")
  (-1 "TARGET_NEON && TARGET_FMA")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN)")
  (-1 "TARGET_32BIT && optimize_function_for_size_p (cfun)")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 4)")
  (-1 "TARGET_NEON && (!false || flag_unsafe_math_optimizations)")
  (-1 "TARGET_ARM   && use_simple_return_p ()")
  (-1 "TARGET_32BIT && operands[0] != operands[1] && reload_completed")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))")
  (-1 "TARGET_LDRD && TARGET_ARM
   && current_tune->prefer_ldrd_strd
   && !optimize_function_for_size_p (cfun)
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_ARM && TARGET_SOFT_FLOAT")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE)")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREXBH)")
  (-1 "TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2]))))")
  (-1 "TARGET_32BIT && !TARGET_IWMMXT && reload_completed
   && !(IS_VFP_REGNUM (REGNO (operands[0])))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))")
  (-1 "TARGET_ARM")
  (-1 "TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])")
  (-1 "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))")
  (-1 "TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode)")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)")
  (-1 "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && optimize_size && reload_completed)")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)")
  (-1 "TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3])")
  (-1 "TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))")
  (-1 "reload_completed && 
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0]))))")
  (-1 "TARGET_HARD_TP")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8
    && (   register_operand (operands[0], DImode)
        || register_operand (operands[1], DImode))
    && !(TARGET_NEON && CONST_INT_P (operands[1])
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))")
  (-1 "TARGET_ARM   && USE_RETURN_INSN (TRUE)")
  (-1 "TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode))")
  (0 "TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)")
  (-1 "TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4])")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)")
  (-1 "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT")
  (-1 "TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))")
  (-1 "TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))")
  (-1 "(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP_DOUBLE)")
  (-1 "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))")
  (-1 "TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1])")
  (-1 "TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))")
  (-1 "TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1]))")
  (-1 "TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode)")
  (-1 "(TARGET_32BIT) && ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP))")
  (-1 "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))")
  (-1 "TARGET_NEON && !BYTES_BIG_ENDIAN")
  (-1 "TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn)")
  (-1 "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT)")
  (-1 "TARGET_THUMB2 && arm_arch6")
  (-1 "TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN")
  (-1 "(TARGET_32BIT) && (arm_arch_thumb2)")
  (-1 "TARGET_32BIT && (reload_in_progress || reload_completed)")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)")
  (-1 "TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= arm_max_const_double_inline_cost ())")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8
    && (   register_operand (operands[0], DImode)
        || register_operand (operands[1], DImode))
    && !(TARGET_NEON && CONST_INT_P (operands[1])
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))")
  (-1 "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it")
  (-1 "TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))")
  (-1 "(TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ()")
  (-1 "TARGET_32BIT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))")
  (-1 "!TARGET_THUMB2 && !arm_arch6")
  (-1 "(TARGET_32BIT) && (TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))")
  (-1 "TARGET_32BIT && flag_pic")
  (-1 "TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2]))")
  (-1 "arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ())")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))")
  (-1 "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))")
  (-1 "TARGET_NEON && !flag_rounding_math")
  (-1 "TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))")
  (-1 "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))")
  (-1 "TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN)")
  (-1 "TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed)")
  (-1 "TARGET_32BIT && arm_arch3m && !arm_arch6")
  (-1 "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))")
  (-1 "TARGET_HAVE_LDREXBH")
  (-1 "TARGET_THUMB2 && arm_restrict_it")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch_thumb2)")
  (-1 "TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))")
  (-1 "TARGET_IDIV")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)")
  (-1 "TARGET_HAVE_LDREXD")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 3)")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))")
  (-1 "TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))")
  (-1 "TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN")
  (-1 "TARGET_ARM  && use_simple_return_p ()")
  (-1 "(TARGET_32BIT) && (TARGET_DSP_MULTIPLY)")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))")
  (-1 "TARGET_THUMB1 && !arm_arch6")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2)")
  (-1 "TARGET_32BIT && XVECLEN (operands[0], 0) == 5")
  (-1 "TARGET_NEON")
  (-1 "TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0")
  (-1 "TARGET_THUMB1")
  (-1 "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP")
  (-1 "TARGET_LDRD && TARGET_ARM
   && current_tune->prefer_ldrd_strd
   && !optimize_function_for_size_p (cfun)
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))")
  (-1 "TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))")
  (-1 "TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode))")
  (-1 "(TARGET_32BIT) && (TARGET_ARM && arm_arch4)")
  (-1 "TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0]))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))")
  (-1 "TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2]))")
  (-1 "TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it")
  (-1 "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))")
  (-1 "(TARGET_32BIT) && (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)")
  (-1 "TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2])))")
  (-1 "TARGET_NEON && reload_completed
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64")
  (-1 "TARGET_ARM && arm_arch6")
  (-1 "TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS")
  (-1 "TARGET_ARM && XVECLEN (operands[0], 0) == 3")
  (-1 "TARGET_THUMB1 && arm_arch5")
  (-1 "(TARGET_32BIT) && (TARGET_ARM)")
  (-1 "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))")
  (-1 "(TARGET_32BIT) && (TARGET_REALLY_IWMMXT)")
  (-1 "TARGET_THUMB")
  (-1 "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))")
  (-1 "TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
   && !SIBLING_CALL_P (insn)")
  (-1 "TARGET_ARM || arm_arch_thumb2")
  (-1 "TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))")
  (-1 "TARGET_NEON && (!false || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN")
  (-1 "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)")
  (-1 "TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER")
  (-1 "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT)")
])