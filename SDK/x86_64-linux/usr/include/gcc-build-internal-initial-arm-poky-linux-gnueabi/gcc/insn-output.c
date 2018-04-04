/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "tree.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_5[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char *
output_6 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 621 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

   static const char * const asms[] = 
   {
     "add\t%0, %0, %2",
     "sub\t%0, %0, #%n2",
     "add\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2",
     "#",
     "#",
     "#"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && CONST_INT_P (operands[2])
       && INTVAL (operands[2]) < 0)
     return "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_7[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
  "add%.\t%0, %1, %2",
};

static const char * const output_8[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_10[] = {
  "add%.\t%0, %1, %3",
  "sub%.\t%0, %1, #%n3",
};

static const char * const output_11[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
  "add%.\t%0, %1, %2",
};

static const char * const output_12[] = {
  "add%.\t%0, %1, %2",
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_13[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_14[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_15[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_16[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_17[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_18[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_23[] = {
  "sbc%?\t%0, %1, %2",
  "rsc%?\t%0, %2, %1",
};

static const char * const output_37[] = {
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %2",
  "sub%?\t%0, %1, %2",
  "rsb%?\t%0, %2, %1",
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_38[] = {
  "sub%.\t%0, %1, %2",
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_39[] = {
  "sub%.\t%0, %1, %2",
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1421 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (which_alternative < 2)
    return "mov\t%0, %1\n\tmul\t%0, %2";
  else
    return "mul\t%0, %2";
  
}

static const char * const output_43[] = {
  "mul\t%0, %2",
  "mul\t%0, %1",
  "mul\t%0, %1",
};

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2117 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 6: return "vand\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 7: return neon_output_logic_immediate ("vand", &operands[2],
                    DImode, 1, VALID_NEON_QREG_MODE (DImode));
    case 2:
    case 3:
    case 4:
    case 5: /* fall through */
      return "#";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_80[] = {
  "and%?\t%0, %1, %2",
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char * const output_82[] = {
  "and%.\t%0, %1, %2",
  "bic%.\t%0, %1, #%B2",
  "and%.\t%0, %1, %2",
};

static const char * const output_83[] = {
  "tst%?\t%0, %1",
  "bic%.\t%2, %0, #%B1",
  "tst%?\t%0, %1",
};

static const char *
output_84 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2353 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_92[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2968 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 6: return "vorr\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 7: return neon_output_logic_immediate ("vorr", &operands[2],
		     DImode, 0, VALID_NEON_QREG_MODE (DImode));
    case 2:
    case 3:
    case 4:
    case 5:
      return "#";
    default: gcc_unreachable ();
    }
  }
}

static const char * const output_100[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_102[] = {
  "orr%?\t%0, %1, %2",
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char *
output_106 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3153 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 1:
    case 2:
    case 3:
    case 4:  /* fall through */
      return "#";
    case 0: /* fall through */
    case 5: return "veor\t%P0, %P1, %P2";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_107[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_109[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3633 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  operands[3] = gen_rtx_fmt_ee (minmax_code (operands[3]), SImode,
				operands[1], operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("ite\t%d3", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3662 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    enum rtx_code code = GET_CODE (operands[4]);
    bool need_else;

    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != IOR && code != XOR))
      need_else = true;
    else
      need_else = false;

    operands[5] = gen_rtx_fmt_ee (minmax_code (operands[5]), SImode,
				  operands[2], operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    if (TARGET_THUMB2)
      {
	if (need_else)
	  output_asm_insn ("ite\t%d5", operands);
	else
	  output_asm_insn ("it\t%d5", operands);
      }
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (need_else)
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4112 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4130 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4144 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char * const output_163[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5236 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  rtx mem;

  if (which_alternative == 0 && arm_arch6)
    return "uxth\t%0, %1";
  if (which_alternative == 0)
    return "#";

  mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);
    
  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);

      /* This can happen due to bugs in reload.  */
      if (REG_P (a) && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;
      
          output_asm_insn ("mov\t%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }
    }
    
  return "ldrh\t%0, %1";
}
}

static const char * const output_175[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_176[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_178[] = {
  "#",
  "ldrb\t%0, %1",
};

static const char * const output_179[] = {
  "uxtb\t%0, %1",
  "ldrb\t%0, %1",
};

static const char * const output_180[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_181[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_184 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5505 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    rtx ops[4];
    rtx mem;

    if (which_alternative == 0 && !arm_arch6)
      return "#";
    if (which_alternative == 0)
      return "sxth\t%0, %1";

    mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */
       
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && CONST_INT_P (b))
          return "ldr\t%0, %1";

        if (REG_P (b))
          return "ldrsh\t%0, %1";
	  
        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }
      
    gcc_assert (REG_P (ops[1]));

    ops[0] = operands[0];
    if (reg_mentioned_p (operands[2], ops[1]))
      ops[3] = ops[0];
    else
      ops[3] = operands[2];
    output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char * const output_185[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_186[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_189[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_190[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char *
output_192 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5830 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  rtx addr;

  if (which_alternative == 0 && arm_arch6)
    return "sxtb\t%0, %1";
  if (which_alternative == 0)
    return "#";

  addr = XEXP (operands[1], 0);
  if (GET_CODE (addr) == PLUS
      && REG_P (XEXP (addr, 0)) && REG_P (XEXP (addr, 1)))
    return "ldrsb\t%0, %1";
      
  return "#";
}
}

static const char *
output_193 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5958 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char *
output_194 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6078 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "mov\t%Q0, %1\n\tmov\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "mov\t%Q0, %1\n\tneg\t%Q0, %Q0\n\tasr\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx_MEM (SImode,
			     plus_constant (Pmode, XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_196[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char * const output_197[] = {
  "mov	%0, %1",
  "mov	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6473 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				     INTVAL (operands[2]));
  return "add\t%0, %|pc";
  
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6489 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6505 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_204[] = {
  "cmp%?\t%0, #0",
  "sub%.\t%0, %1, #0",
};

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6890 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0: return "add	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "mov	%0, %1";
    default: gcc_unreachable ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && REG_P (XEXP (XEXP (operands[1], 0), 0))
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];
    
	}
      return "ldrh	%0, %1";
    }
}

static const char * const output_206[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_207[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_208[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char * const output_209[] = {
  "add\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7198 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7242 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 1:
      {
	rtx addr;
	gcc_assert (MEM_P (operands[1]));
	addr = XEXP (operands[1], 0);
	if (GET_CODE (addr) == LABEL_REF
	    || (GET_CODE (addr) == CONST
		&& GET_CODE (XEXP (addr, 0)) == PLUS
		&& GET_CODE (XEXP (XEXP (addr, 0), 0)) == LABEL_REF
		&& CONST_INT_P (XEXP (XEXP (addr, 0), 1))))
	  {
	    /* Constant pool entry.  */
	    return "ldr\t%0, %1";
	  }
	return "ldrh\t%0, %1";
      }
    case 2: return "strh\t%1, %0";
    default: return "mov\t%0, %1";
    }
  
}

static const char * const output_212[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_213[] = {
  "add\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7420 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7449 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx_MEM (SImode,
				 plus_constant (Pmode,
						XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7590 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7609 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7735 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  rtx t = cfun->machine->thumb1_cc_insn;
  if (t != NULL_RTX)
    {
      if (!rtx_equal_p (cfun->machine->thumb1_cc_op0, operands[1])
	  || !rtx_equal_p (cfun->machine->thumb1_cc_op1, operands[2]))
	t = NULL_RTX;
      if (cfun->machine->thumb1_cc_mode == CC_NOOVmode)
	{
	  if (!noov_comparison_operator (operands[0], VOIDmode))
	    t = NULL_RTX;
	}
      else if (cfun->machine->thumb1_cc_mode != CCmode)
	t = NULL_RTX;
    }
  if (t == NULL_RTX)
    {
      output_asm_insn ("cmp\t%1, %2", operands);
      cfun->machine->thumb1_cc_insn = insn;
      cfun->machine->thumb1_cc_op0 = operands[1];
      cfun->machine->thumb1_cc_op1 = operands[2];
      cfun->machine->thumb1_cc_mode = CCmode;
    }
  else
    /* Ensure we emit the right type of condition code on the jump.  */
    XEXP (operands[0], 0) = gen_rtx_REG (cfun->machine->thumb1_cc_mode,
					 CC_REGNUM);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
}
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7797 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  output_asm_insn ("add\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7834 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7918 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7961 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8000 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8112 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

   {
     rtx cond[3];

     cond[0] = (which_alternative < 2) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (CONST_INT_P (cond[2]) && INTVAL (cond[2]) < 0)
       output_asm_insn ("sub\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("add\t%0, %1, %2", cond);

     if (which_alternative >= 2
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 2) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8191 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %1, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %1, %2", operands);
	 break;
       case 3:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %0, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char * const output_227[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8443 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8469 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char * const output_241[] = {
  "neg\t%0, %1\n\tadc\t%0, %0, %1",
  "neg\t%2, %1\n\tadc\t%0, %1, %2",
};

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8890 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
        return "vsel%d1.f32\t%0, %3, %4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
        return "vsel%D1.f32\t%0, %4, %3";
      default:
        gcc_unreachable ();
      }
    return "";
  }
}

static const char *
output_247 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8890 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
        return "vsel%d1.f64\t%P0, %P3, %P4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
        return "vsel%D1.f64\t%P0, %P4, %P3";
      default:
        gcc_unreachable ();
      }
    return "";
  }
}

static const char * const output_248[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_249[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_250 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9011 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9036 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_253 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9106 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  return output_call (operands);
  
}

static const char *
output_254 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9125 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  return output_call_mem (operands);
  
}

static const char *
output_256 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9149 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[0]);
    else if (operands[1] == const0_rtx)
      return "bl\t%__interwork_call_via_%0";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%0";
    else
      return "bl\t%__interwork_r11_call_via_%0";
  }
}

static const char *
output_258 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9219 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  return output_call (&operands[1]);
  
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9236 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  return output_call_mem (&operands[1]);
  
}

static const char *
output_261 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9262 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[1]);
    else if (operands[2] == const0_rtx)
      return "bl\t%__interwork_call_via_%1";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%1";
    else
      return "bl\t%__interwork_r11_call_via_%1";
  }
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9288 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_263 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9305 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9381 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (which_alternative == 1)
    return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  else
    {
      if (arm_arch5 || arm_arch4t)
	return "bx%?\t%0\t%@ indirect register sibling call";
      else
	return "mov%?\t%|pc, %0\t%@ indirect register sibling call";
    }
  
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9402 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (which_alternative == 1)
   return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  else
    {
      if (arm_arch5 || arm_arch4t)
	return "bx%?\t%1";
      else
	return "mov%?\t%|pc, %1\t@ indirect sibling call ";
    }
  
}

static const char *
output_268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9437 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_269 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9458 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false,
				      false);
  }
}

static const char *
output_270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9458 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false,
				      true);
  }
}

static const char *
output_271 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9480 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true,
				      false);
  }
}

static const char *
output_272 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9480 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true,
				      true);
  }
}

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9498 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9722 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9759 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return thumb1_output_casesi(operands);
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9819 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (TARGET_UNIFIED_ASM)
    return "nop";
  if (TARGET_ARM)
    return "mov%?\t%|r0, %|r0\t%@ nop";
  return  "mov\tr8, r8";
  
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9836 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (TARGET_ARM)
    return ".inst\t0xe7f000f0";
  else
    return ".inst\t0xdeff";
  
}

static const char * const output_290[] = {
  "orr%d1\t%0, %3, #1",
  "#",
};

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10253 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10282 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10336 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10418 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%d4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%d4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%d4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10500 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10582 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%D4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%D4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%D4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%D4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%D4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
  
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10968 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_308[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_310[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11151 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[5])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (CONST_INT_P (operands[3])
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_314[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11210 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[3])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (CONST_INT_P (operands[5])
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_316[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_318[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_320[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_322[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_324[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char * const output_332[] = {
  "rsb%d4\t%0, %2, #0",
  "mov%D4\t%0, %1\n\trsb%d4\t%0, %2, #0",
  "mvn%D4\t%0, #%B1\n\trsb%d4\t%0, %2, #0",
};

static const char * const output_334[] = {
  "rsb%D4\t%0, %2, #0",
  "mov%d4\t%0, %1\n\trsb%D4\t%0, %2, #0",
  "mvn%d4\t%0, #%B1\n\trsb%D4\t%0, %2, #0",
};

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11589 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11776 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return thumb1_output_interwork ();
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    return thumb1_unexpanded_epilogue ();
  
}

static const char * const output_338[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11979 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11997 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12020 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.
       In Thumb mode always use push, and the assembler will pick
       something appropriate.  */
    if (num_saves == 1 && TARGET_ARM)
      output_asm_insn ("str%?\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	if (TARGET_ARM)
	    strcpy (pattern, "stm%(fd%)\t%m0!, {%1");
	else if (TARGET_THUMB2)
	    strcpy (pattern, "push%?\t{%1");
	else
	    strcpy (pattern, "push\t{%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_343 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12082 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12111 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12131 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12163 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    int num_regs = XVECLEN (operands[0], 0);
    char pattern[100];
    rtx op_list[2];
    strcpy (pattern, "fldmfdd\t");
    strcat (pattern, reg_names[REGNO (SET_DEST (XVECEXP (operands[0], 0, 0)))]);
    strcat (pattern, "!, {");
    op_list[0] = XEXP (XVECEXP (operands[0], 0, 1), 0);
    strcat (pattern, "%P0");
    if ((num_regs - 1) > 1)
      {
        strcat (pattern, "-%P1");
        op_list [1] = XEXP (XVECEXP (operands[0], 0, num_regs - 1), 0);
      }

    strcat (pattern, "}");
    output_asm_insn (pattern, op_list);
    return "";
  }
  
}

static const char *
output_348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12194 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  assemble_align (32);
  return "";
  
}

static const char *
output_349 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12204 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  assemble_align (64);
  return "";
  
}

static const char *
output_350 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12214 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12224 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12237 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  gcc_assert (GET_MODE_CLASS (GET_MODE (operands[0])) != MODE_FLOAT);
  assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
  assemble_zeros (2);
  return "";
  
}

static const char *
output_353 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12251 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
 	if (GET_MODE (x) == HFmode)
 	  arm_emit_fp16_const (x);
 	else
 	  {
 	    REAL_VALUE_TYPE r;
 	    REAL_VALUE_FROM_CONST_DOUBLE (r, x);
 	    assemble_real (r, GET_MODE (x), BITS_PER_WORD);
 	  }
 	break;
      default:
	/* XXX: Sometimes gcc does something really dumb and ends up with
	   a HIGH in a constant pool entry, usually because it's trying to
	   load into a VFP register.  We know this will always be used in
	   combination with a LO_SUM which ignores the high bits, so just
	   strip off the HIGH.  */
	if (GET_CODE (x) == HIGH)
	  x = XEXP (x, 0);
        assemble_integer (x, 4, BITS_PER_WORD, 1);
	mark_symbol_refs_as_used (x);
        break;
      }
    return "";
  }
}

static const char *
output_354 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12288 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_355 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12313 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 16, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_365 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12508 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
    targetm.asm_out.internal_label (asm_out_file, "LPIC",
				    INTVAL (operands[1]));
    return "bl\t%c0(tlscall)";
  }
}

static const char * const output_367[] = {
  "rev\t%0, %1",
  "rev%?\t%0, %1",
  "rev%?\t%0, %1",
};

static const char * const output_368[] = {
  "revsh\t%0, %1",
  "revsh%?\t%0, %1",
  "revsh%?\t%0, %1",
};

static const char * const output_369[] = {
  "rev16\t%0, %1",
  "rev16%?\t%0, %1",
  "rev16%?\t%0, %1",
};

static const char *
output_439 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12803 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_443[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_444[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_445[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_447 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 115 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    case 3: case 4:
      return output_move_double (operands, true, NULL);
    case 5:
      return "wmov%?\t%0,%1";
    case 6:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 7:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 8:
      return "wldrd%?\t%0,%1";
    case 9:
      return "wstrd%?\t%1,%0";
    case 10:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 11:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 12:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 13: case 14:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 170 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
     {
     case 0: return "mov\t%0, %1";
     case 1: return "mov\t%0, %1";
     case 2: return "mvn\t%0, #%B1";
     case 3: return "movw\t%0, %1";
     case 4: return "ldr\t%0, %1";
     case 5: return "str\t%1, %0";
     case 6: return "tmcr\t%0, %1";
     case 7: return "tmrc\t%0, %1";
     case 8: return arm_output_load_gr (operands);
     case 9: return "wstrw\t%1, %0";
     case 10:return "fmsr\t%0, %1";
     case 11:return "fmrs\t%0, %1";
     case 12:return "fcpys\t%0, %1\t%@ int";
     case 13: case 14:
       return output_move_vfp (operands);
     default:
       gcc_unreachable ();
     }
}

static const char *
output_449 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 220 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_495 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 686 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_496 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 703 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_497 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 720 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 30 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 72 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3:
      return "mvn%?\t%0, #%B1";
    case 4:
      return "movw%?\t%0, %1";
    case 5:
    case 6:
      return "ldr%?\t%0, %1";
    case 7:
    case 8:
      return "str%?\t%1, %0";
    case 9:
      return "fmsr%?\t%0, %1\t%@ int";
    case 10:
      return "fmrs%?\t%0, %1\t%@ int";
    case 11:
      return "fcpys%?\t%0, %1\t%@ int";
    case 12: case 13:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 120 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 171 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      return "fcpyd%?\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_667 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 220 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* S register from memory */
      return "vld1.16\t{%z0}, %A1";
    case 1:     /* memory from S register */
      return "vst1.16\t{%z1}, %A0";
    case 2:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 3:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 4:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 5:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 6:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 7:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 8:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 275 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 1:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 2:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 3:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 4:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 5:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 6:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 365 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_671 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 404 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char *
output_672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 451 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6: case 8:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      default:
	abort ();
      }
    }
  
}

static const char * const output_673[] = {
  "fcpys%D3\t%0, %2",
  "fcpys%d3\t%0, %1",
  "fcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "fmsr%D3\t%0, %2",
  "fmsr%d3\t%0, %1",
  "fmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "fmrs%D3\t%0, %2",
  "fmrs%d3\t%0, %1",
  "fmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_674[] = {
  "it\t%D3\n\tfcpys%D3\t%0, %2",
  "it\t%d3\n\tfcpys%d3\t%0, %1",
  "ite\t%D3\n\tfcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "it\t%D3\n\tfmsr%D3\t%0, %2",
  "it\t%d3\n\tfmsr%d3\t%0, %1",
  "ite\t%D3\n\tfmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "it\t%D3\n\tfmrs%D3\t%0, %2",
  "it\t%d3\n\tfmrs%d3\t%0, %1",
  "ite\t%D3\n\tfmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_675[] = {
  "fcpyd%D3\t%P0, %P2",
  "fcpyd%d3\t%P0, %P1",
  "fcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "fmdrr%D3\t%P0, %Q2, %R2",
  "fmdrr%d3\t%P0, %Q1, %R1",
  "fmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "fmrrd%D3\t%Q0, %R0, %P2",
  "fmrrd%d3\t%Q0, %R0, %P1",
  "fmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_676[] = {
  "it\t%D3\n\tfcpyd%D3\t%P0, %P2",
  "it\t%d3\n\tfcpyd%d3\t%P0, %P1",
  "ite\t%D3\n\tfcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "it\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2",
  "it\t%d3\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "ite\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "it\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2",
  "it\t%d3\n\tfmrrd%d3\t%Q0, %R0, %P1",
  "ite\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_679[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_680[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_726[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_727[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_728[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_729[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char * const output_732[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_733[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char *
output_735 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1277 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"
 return vfp_output_fstmd (operands);
}

static const char * const output_760[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
			     INTVAL (operands[3]));
  return "add\t%2, %|pc\n\tldr%?\t%0, [%2]";
  
}

static const char * const output_762[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_770[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%D3\n\tmvn%D3\t%0, #%B2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%d3\n\tmvn%d3\t%0, #%B1",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_771[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
};

static const char * const output_776[] = {
  "it\t%d1\n\torr%d1\t%0, %3, #1",
  "#",
};

static const char * const output_777[] = {
  "it\t%d2\n\tmov%d2\t%0, #1\n\tit\t%d2\n\torr%d2\t%0, %1",
  "mov\t%0, #1\n\torr\t%0, %1\n\tit\t%D2\n\tmov%D2\t%0, %1",
};

static const char *
output_778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 668 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("it\t%D4\n\tmov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("it\t%d4\n\tmov%d4\t%0, %1", operands);
        return "";
      }
    switch (which_alternative)
      {
      case 0:
	output_asm_insn ("it\t%d4", operands);
	break;
      case 1:
	output_asm_insn ("it\t%D4", operands);
	break;
      case 2:
	if (arm_restrict_it)
	  output_asm_insn ("it\t%D4", operands);
	else
	  output_asm_insn ("ite\t%D4", operands);
	break;
      default:
	abort();
      }
    if (which_alternative != 0)
      {
        output_asm_insn ("mov%D4\t%0, %1", operands);
        if (arm_restrict_it && which_alternative == 2)
          output_asm_insn ("it\t%d4", operands);
      }
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 718 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, #0", operands);
      }
    else if (GET_CODE (operands[5]) == MINUS)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
      }
    else if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 825 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      {
	if (arm_restrict_it)
	  {
	    output_asm_insn ("mov\t%0, %1", operands);
	    output_asm_insn ("it\t%d4", operands);
	  }
	else
	{
	  output_asm_insn ("ite\t%D4", operands);
	  output_asm_insn ("mov%D4\t%0, %1", operands);
	}
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_783 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 928 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  switch (which_alternative)
    {
    case 0:
      output_asm_insn ("it\t%D5", operands);
      break;
    case 1:
      output_asm_insn ("it\t%d5", operands);
      break;
    case 2:
      if (arm_restrict_it)
        {
          output_asm_insn ("mov\t%0, %1", operands);
          output_asm_insn ("it\t%D5", operands);
        }
      else
        output_asm_insn ("ite\t%d5", operands);
      break;
    default:
      abort();
    }
  if (which_alternative != 0 && !(arm_restrict_it && which_alternative == 2))
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_784[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_785[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_786[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1060 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1079 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1088 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"
 return output_return_instruction (const_true_rtx, true, false, true);
}

static const char *
output_792 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1132 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1158 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1224 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL (operands[2]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "subs\t%0, %1, #%n2";
    else
      return "adds\t%0, %1, %2";
  
}

static const char *
output_799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1249 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[1]))
      val = INTVAL (operands[1]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "cmp\t%0, #%n1";
    else
      return "cmn\t%0, %1";
  
}

static const char *
output_803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1311 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbeq\t%l1";
  
}

static const char *
output_804 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1335 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbnz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbne\t%l1";
  
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v8qi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v8qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v8qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v8qi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v8qi";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_810 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v4hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v4hi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v4hi";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2si";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2si";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2si";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_812 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2sf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2sf";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2sf";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ di";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ di";
    case 5: return "vmov\t%P0, %Q1, %R1  @ di";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V16QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v16qi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v16qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v16qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v16qi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v16qi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_815 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v8hi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v8hi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_816 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4si";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4si\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4si\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4sf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4sf\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4sf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_818 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v2di";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v2di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v2di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v2di\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v2di\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], TImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ ti";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ ti", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ ti";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ ti\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ ti\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_820 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_822 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_823 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_844 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_845 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_846 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_847 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_848 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_849 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_850 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_851 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_852 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 359 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vld1.64\t%P0, %A1";
  else
    return "vmov\t%P0, %Q1, %R1";
}
}

static const char *
output_853 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_854 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_855 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_856 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_857 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_858 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_859 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_860 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_861 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 439 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + 2 * INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vst1.64\t{%P1}, %A0  @ v2di";
  else
    return "vmov\t%Q0, %R0, %P1  @ v2di";
}
}

static const char *
output_871 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 484 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 3: return "vadd.i64\t%P0, %P1, %P2";
    case 1: return "#";
    case 2: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_881 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 522 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 4: return "vsub.i64\t%P0, %P1, %P2";
    case 1: /* fall through */ 
    case 2: /* fall through */
    case 3: return  "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_926 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8QImode, 0, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_927 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V16QImode, 0, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_928 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HImode, 0, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_929 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HImode, 0, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_930 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SImode, 0, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_931 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SImode, 0, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_932 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SFmode, 0, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_933 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SFmode, 0, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_934 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 637 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2DImode, 0, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_935 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8QImode, 1, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_936 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V16QImode, 1, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_937 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HImode, 1, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_938 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HImode, 1, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_939 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SImode, 1, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_940 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SImode, 1, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_941 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SFmode, 1, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_942 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SFmode, 1, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_943 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 659 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2DImode, 1, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char * const output_953[] = {
  "vorn\t%P0, %P1, %P2",
  "#",
  "#",
  "#",
};

static const char * const output_963[] = {
  "vbic\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char *
output_1027 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8QImode,
						    VALID_NEON_QREG_MODE (V8QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1028 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V16QImode,
						    VALID_NEON_QREG_MODE (V16QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1029 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4HImode,
						    VALID_NEON_QREG_MODE (V4HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1030 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8HImode,
						    VALID_NEON_QREG_MODE (V8HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1031 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V2SImode,
						    VALID_NEON_QREG_MODE (V2SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1032 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 873 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4SImode,
						    VALID_NEON_QREG_MODE (V4SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1033 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 892 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1034 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 892 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1035 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 892 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1036 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 892 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1037 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 892 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1038 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 892 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char *
output_1039 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 905 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1040 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 905 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1041 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 905 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1042 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 905 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1043 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 905 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1044 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 905 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char * const output_1059[] = {
  "vld1.32\t{%P0[0]}, %A1",
  "vmov.32\t%P0[0], %1",
};

static const char * const output_1060[] = {
  "vshl.u64\t%P0, %P1, %2",
  "vshl.u64\t%P0, %P1, %P2",
};

static const char * const output_1236[] = {
  "vceq.i8\t%P0, %P1, %P2",
  "vceq.i8\t%P0, %P1, #0",
};

static const char * const output_1237[] = {
  "vceq.i8\t%q0, %q1, %q2",
  "vceq.i8\t%q0, %q1, #0",
};

static const char * const output_1238[] = {
  "vceq.i16\t%P0, %P1, %P2",
  "vceq.i16\t%P0, %P1, #0",
};

static const char * const output_1239[] = {
  "vceq.i16\t%q0, %q1, %q2",
  "vceq.i16\t%q0, %q1, #0",
};

static const char * const output_1240[] = {
  "vceq.i32\t%P0, %P1, %P2",
  "vceq.i32\t%P0, %P1, #0",
};

static const char * const output_1241[] = {
  "vceq.i32\t%q0, %q1, %q2",
  "vceq.i32\t%q0, %q1, #0",
};

static const char * const output_1242[] = {
  "vceq.f32\t%P0, %P1, %P2",
  "vceq.f32\t%P0, %P1, #0",
};

static const char * const output_1243[] = {
  "vceq.f32\t%q0, %q1, %q2",
  "vceq.f32\t%q0, %q1, #0",
};

static const char * const output_1244[] = {
  "vcge.%T3%#8\t%P0, %P1, %P2",
  "vcge.%T3%#8\t%P0, %P1, #0",
};

static const char * const output_1245[] = {
  "vcge.%T3%#8\t%q0, %q1, %q2",
  "vcge.%T3%#8\t%q0, %q1, #0",
};

static const char * const output_1246[] = {
  "vcge.%T3%#16\t%P0, %P1, %P2",
  "vcge.%T3%#16\t%P0, %P1, #0",
};

static const char * const output_1247[] = {
  "vcge.%T3%#16\t%q0, %q1, %q2",
  "vcge.%T3%#16\t%q0, %q1, #0",
};

static const char * const output_1248[] = {
  "vcge.%T3%#32\t%P0, %P1, %P2",
  "vcge.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1249[] = {
  "vcge.%T3%#32\t%q0, %q1, %q2",
  "vcge.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1250[] = {
  "vcge.%T3%#32\t%P0, %P1, %P2",
  "vcge.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1251[] = {
  "vcge.%T3%#32\t%q0, %q1, %q2",
  "vcge.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1258[] = {
  "vcgt.%T3%#8\t%P0, %P1, %P2",
  "vcgt.%T3%#8\t%P0, %P1, #0",
};

static const char * const output_1259[] = {
  "vcgt.%T3%#8\t%q0, %q1, %q2",
  "vcgt.%T3%#8\t%q0, %q1, #0",
};

static const char * const output_1260[] = {
  "vcgt.%T3%#16\t%P0, %P1, %P2",
  "vcgt.%T3%#16\t%P0, %P1, #0",
};

static const char * const output_1261[] = {
  "vcgt.%T3%#16\t%q0, %q1, %q2",
  "vcgt.%T3%#16\t%q0, %q1, #0",
};

static const char * const output_1262[] = {
  "vcgt.%T3%#32\t%P0, %P1, %P2",
  "vcgt.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1263[] = {
  "vcgt.%T3%#32\t%q0, %q1, %q2",
  "vcgt.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1264[] = {
  "vcgt.%T3%#32\t%P0, %P1, %P2",
  "vcgt.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1265[] = {
  "vcgt.%T3%#32\t%q0, %q1, %q2",
  "vcgt.%T3%#32\t%q0, %q1, #0",
};

static const char *
output_1392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s8\t%0, %P1[%c2]";
}
}

static const char *
output_1393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s16\t%0, %P1[%c2]";
}
}

static const char *
output_1394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_1397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1399 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1400 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2691 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2691 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2691 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2691 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2718 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2718 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2718 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1407 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2718 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char * const output_1412[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1413[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1414[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1415[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1416[] = {
  "vmov\t%e0, %Q1, %R1\n\tvmov\t%f0, %Q1, %R1",
  "vmov\t%e0, %P1\n\tvmov\t%f0, %P1",
};

static const char *
output_1417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1424 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2908 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1454 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3100 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1455 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3100 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1456 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3114 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1457 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3114 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1470 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3170 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1471 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3170 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1472 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3170 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1473 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3189 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1474 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3189 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1475 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3189 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1476 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3208 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmull.%T4%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1477 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3208 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmull.%T4%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1478 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmull.s16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1479 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmull.s32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1480 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3240 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vq%O4dmulh.%T4%#16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1481 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3240 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vq%O4dmulh.%T4%#32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1482 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3256 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vq%O4dmulh.%T4%#16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1483 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3256 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vq%O4dmulh.%T4%#32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1484 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3273 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmla.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1485 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3273 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmla.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1486 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3273 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmla.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1487 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmla.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1488 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmla.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1489 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmla.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1490 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3313 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlal.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1491 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3313 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlal.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1492 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3330 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlal.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1493 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3330 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlal.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1494 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3347 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmls.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1495 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3347 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmls.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1496 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3347 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmls.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1497 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3367 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmls.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1498 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3367 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmls.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1499 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3367 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmls.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1500 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3387 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlsl.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1501 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3387 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlsl.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1502 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3404 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlsl.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1503 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3404 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlsl.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1504 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vext.8\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1505 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V16QImode));
  return "vext.8\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1506 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1507 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1508 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1509 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1510 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1511 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SFmode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1512 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (DImode));
  return "vext.64\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1513 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3629 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2DImode));
  return "vext.64\t%q0, %q1, %q2, %3";
}
}

static const char * const output_1529[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1530[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1531[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1532[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1533[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1534[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1535[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1536[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1537[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1538[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char *
output_1555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "v%O3shr.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "v%O3shr.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "v%O3shr.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "v%O3shr.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "v%O3shr.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "v%O3shr.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "v%O3shr.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3729 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "v%O3shr.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3743 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "v%O3shrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_1564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3743 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "v%O3shrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_1565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3743 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "v%O3shrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_1566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrn.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrn.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrn.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3771 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrun.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3771 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrun.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3771 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrun.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vshl.i8\t%P0, %P1, %2";
}
}

static const char *
output_1573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vshl.i8\t%q0, %q1, %2";
}
}

static const char *
output_1574 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vshl.i16\t%P0, %P1, %2";
}
}

static const char *
output_1575 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vshl.i16\t%q0, %q1, %2";
}
}

static const char *
output_1576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vshl.i32\t%P0, %P1, %2";
}
}

static const char *
output_1577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vshl.i32\t%q0, %q1, %2";
}
}

static const char *
output_1578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vshl.i64\t%P0, %P1, %2";
}
}

static const char *
output_1579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3785 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vshl.i64\t%q0, %q1, %2";
}
}

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshlu.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshlu.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshlu.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshlu.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshlu.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshlu.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshlu.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3813 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshlu.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3827 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.%T3%#8\t%q0, %P1, %2";
}
}

static const char *
output_1597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3827 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.%T3%#16\t%q0, %P1, %2";
}
}

static const char *
output_1598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3827 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.%T3%#32\t%q0, %P1, %2";
}
}

static const char *
output_1599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "v%O4sra.%T4%#8\t%P0, %P2, %3";
}
}

static const char *
output_1600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "v%O4sra.%T4%#8\t%q0, %q2, %3";
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "v%O4sra.%T4%#16\t%P0, %P2, %3";
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "v%O4sra.%T4%#16\t%q0, %q2, %3";
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "v%O4sra.%T4%#32\t%P0, %P2, %3";
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "v%O4sra.%T4%#32\t%q0, %q2, %3";
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "v%O4sra.%T4%#64\t%P0, %P2, %3";
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3843 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "v%O4sra.%T4%#64\t%q0, %q2, %3";
}
}

static const char *
output_1607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsri.8\t%P0, %P2, %3";
}
}

static const char *
output_1608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsri.8\t%q0, %q2, %3";
}
}

static const char *
output_1609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsri.16\t%P0, %P2, %3";
}
}

static const char *
output_1610 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsri.16\t%q0, %q2, %3";
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsri.32\t%P0, %P2, %3";
}
}

static const char *
output_1612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsri.32\t%q0, %q2, %3";
}
}

static const char *
output_1613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsri.64\t%P0, %P2, %3";
}
}

static const char *
output_1614 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3857 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsri.64\t%q0, %q2, %3";
}
}

static const char *
output_1615 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8QImode));
  return "vsli.8\t%P0, %P2, %3";
}
}

static const char *
output_1616 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V16QImode));
  return "vsli.8\t%q0, %q2, %3";
}
}

static const char *
output_1617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4HImode));
  return "vsli.16\t%P0, %P2, %3";
}
}

static const char *
output_1618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8HImode));
  return "vsli.16\t%q0, %q2, %3";
}
}

static const char *
output_1619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2SImode));
  return "vsli.32\t%P0, %P2, %3";
}
}

static const char *
output_1620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4SImode));
  return "vsli.32\t%q0, %q2, %3";
}
}

static const char *
output_1621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (DImode));
  return "vsli.64\t%P0, %P2, %3";
}
}

static const char *
output_1622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3871 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2DImode));
  return "vsli.64\t%q0, %q2, %3";
}
}

static const char *
output_1624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3894 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3915 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3937 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4055 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4077 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4100 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1671 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1673 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1674 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1675 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1677 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1682 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4412 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vld1.8\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4412 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vld1.16\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4412 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4412 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1697 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4456 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1698 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4456 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1699 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4456 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1700 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4456 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1701 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4456 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4476 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4476 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1704 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4476 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1705 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4476 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1706 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4476 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1707 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.8\t%h0, %A1";
}
}

static const char *
output_1708 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.16\t%h0, %A1";
}
}

static const char *
output_1709 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_1710 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_1711 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.64\t%h0, %A1";
}
}

static const char *
output_1716 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.8\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1717 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1718 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1719 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1720 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4571 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1721 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4571 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4571 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1723 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld2.8\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1727 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld2.64\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4624 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.8\t%h1, %A0";
}
}

static const char *
output_1729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4624 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.16\t%h1, %A0";
}
}

static const char *
output_1730 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4624 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_1731 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4624 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_1732 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4624 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.64\t%h1, %A0";
}
}

static const char *
output_1737 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4661 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.8\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1738 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4661 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1739 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4661 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4661 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1741 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4686 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1742 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4686 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1743 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4686 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4721 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.8\t%h0, %A1";
}
}

static const char *
output_1745 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4721 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.16\t%h0, %A1";
}
}

static const char *
output_1746 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4721 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_1747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4721 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_1748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4721 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.64\t%h0, %A1";
}
}

static const char *
output_1749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4764 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1750 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4764 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1751 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4764 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1752 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4764 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1754 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1755 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1756 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1757 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4805 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.8\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1758 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4805 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1759 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4805 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1760 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4805 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4832 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4832 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4832 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.8\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1765 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.64\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4895 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.8\t%h1, %A0";
}
}

static const char *
output_1770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4895 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.16\t%h1, %A0";
}
}

static const char *
output_1771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4895 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_1772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4895 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_1773 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4895 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.64\t%h1, %A0";
}
}

static const char *
output_1774 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4937 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1775 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4937 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4937 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1777 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4937 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4956 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4956 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4956 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4956 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1782 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4977 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.8\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1783 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4977 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4977 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4977 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1786 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5004 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5004 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5004 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.8\t%h0, %A1";
}
}

static const char *
output_1790 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.16\t%h0, %A1";
}
}

static const char *
output_1791 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_1792 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_1793 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.64\t%h0, %A1";
}
}

static const char *
output_1794 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5084 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1795 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5084 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5084 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5084 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5105 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5105 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1800 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5105 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5105 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1802 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5127 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.8\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5127 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1804 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5127 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1805 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5127 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1806 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5155 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1807 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5155 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1808 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5155 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5186 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.8\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1810 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5186 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5186 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1812 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5186 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5186 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.64\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5222 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.8\t%h1, %A0";
}
}

static const char *
output_1815 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5222 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.16\t%h1, %A0";
}
}

static const char *
output_1816 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5222 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_1817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5222 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_1818 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5222 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.64\t%h1, %A0";
}
}

static const char *
output_1819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5265 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1820 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5265 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5265 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1822 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5265 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1823 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5285 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1824 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5285 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1825 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5285 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1826 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5285 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1827 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5307 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.8\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1828 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5307 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1829 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5307 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1830 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5307 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1831 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5335 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1832 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5335 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1833 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5335 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1858 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vshll.s8 %q0, %P1, %2";
}
}

static const char *
output_1859 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vshll.u8 %q0, %P1, %2";
}
}

static const char *
output_1860 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vshll.s16 %q0, %P1, %2";
}
}

static const char *
output_1861 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vshll.u16 %q0, %P1, %2";
}
}

static const char *
output_1862 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vshll.s32 %q0, %P1, %2";
}
}

static const char *
output_1863 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5546 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/neon.md"
{
  return "vshll.u32 %q0, %P1, %2";
}
}

static const char *
output_1915 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 50 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (TARGET_HAVE_DMB)
      {
	/* Note we issue a system level barrier. We should consider issuing
	   a inner shareabilty zone barrier here instead, ie. "DMB ISH".  */
	/* ??? Differentiate based on SEQ_CST vs less strict?  */
	return "dmb\tsy";
      }

    if (TARGET_HAVE_DMB_MCR)
      return "mcr\tp15, 0, r0, c7, c10, 5";

    gcc_unreachable ();
  }
}

static const char *
output_1916 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 75 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_RELEASE)
      return "ldrb\t%0, %1";
    else
      return "ldab\t%0, %1";
  }
}

static const char *
output_1917 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 75 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_RELEASE)
      return "ldrh\t%0, %1";
    else
      return "ldah\t%0, %1";
  }
}

static const char *
output_1918 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 75 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_RELEASE)
      return "ldr\t%0, %1";
    else
      return "lda\t%0, %1";
  }
}

static const char *
output_1919 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 93 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_ACQUIRE)
      return "strb\t%1, %0";
    else
      return "stlb\t%1, %0";
  }
}

static const char *
output_1920 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 93 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_ACQUIRE)
      return "strh\t%1, %0";
    else
      return "stlh\t%1, %0";
  }
}

static const char *
output_1921 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 93 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_ACQUIRE)
      return "str\t%1, %0";
    else
      return "stl\t%1, %0";
  }
}

static const char *
output_2011 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_2012 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_2013 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_2014 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_2015 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 452 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    rtx value = operands[2];
    /* See comment in arm_store_exclusive<mode> above.  */
    gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
    operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
    return "stlexd%?\t%0, %2, %3, %C1";
  }
}

static const char *
output_2073 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 215 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-fixed.md"
{
  /* s16.15 * s16.15 -> s32.30.  */
  output_asm_insn ("smull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0

    [ S i i .... i i i ] [ i f f f ... f f ]
                        |
			v
	     [ S i ... i f ... f f ]

    Need 16 integral bits, so saturate at 15th bit of high word.  */

  output_asm_insn ("ssat\t%R3, #15, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (arm_restrict_it)
    {
      output_asm_insn ("mvn\t%4, %R3, asr #32", operands);
      output_asm_insn ("it\tne", operands);
      output_asm_insn ("movne\t%Q3, %4", operands);
    }
  else
    {
      if (TARGET_THUMB2)
        output_asm_insn ("it\tne", operands);
      output_asm_insn ("mvnne\t%Q3, %R3, asr #32", operands);
    }
  output_asm_insn ("mov\t%0, %Q3, lsr #15", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #17", operands);
  return "";
}
}

static const char *
output_2074 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 275 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-fixed.md"
{
  /* 16.16 * 16.16 -> 32.32.  */
  output_asm_insn ("umull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0

    [ i i i .... i i i ] [ f f f f ... f f ]
                        |
			v
	     [ i i ... i f ... f f ]

    Need 16 integral bits, so saturate at 16th bit of high word.  */

  output_asm_insn ("usat\t%R3, #16, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (arm_restrict_it)
    {
      output_asm_insn ("sbfx\t%4, %R3, #15, #1", operands);
      output_asm_insn ("it\tne", operands);
      output_asm_insn ("movne\t%Q3, %4", operands);
    }
  else
    {
      if (TARGET_THUMB2)
        output_asm_insn ("it\tne", operands);
      output_asm_insn ("sbfxne\t%Q3, %R3, #15, #1", operands);
    }
  output_asm_insn ("lsr\t%0, %Q3, #16", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #16", operands);
  return "";
}
}

static const char * const output_3229[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_3231[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3233[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3234[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3235[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3236[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3237[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3238[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3241[] = {
  "sbc%?\t%0, %1, %2",
  "rsc%?\t%0, %2, %1",
};

static const char * const output_3244[] = {
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %2",
  "sub%?\t%0, %1, %2",
  "rsb%?\t%0, %2, %1",
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_3273[] = {
  "and%?\t%0, %1, %2",
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char *
output_3275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2353 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_3280[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3286[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3288[] = {
  "orr%?\t%0, %1, %2",
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_3290[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3292[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_3299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3757 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3784 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4112 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char * const output_3323[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char * const output_3332[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3333[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3335[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3336[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3339[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_3340[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_3342[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3343[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3346[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_3347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6489 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_3348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6505 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_3349[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_3350[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_3351[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char *
output_3352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7198 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char * const output_3353[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_3354[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_3356 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9011 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_3357 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9437 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_3358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9498 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_3363 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11589 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_3364 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12082 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3365 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12111 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3366 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12131 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_3426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12803 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_3430[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3431[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3432[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_3434 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3435 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3436 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3479 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 686 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3480 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 703 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3481 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 720 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 30 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3648 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 72 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3:
      return "mvn%?\t%0, #%B1";
    case 4:
      return "movw%?\t%0, %1";
    case 5:
    case 6:
      return "ldr%?\t%0, %1";
    case 7:
    case 8:
      return "str%?\t%1, %0";
    case 9:
      return "fmsr%?\t%0, %1\t%@ int";
    case 10:
      return "fmrs%?\t%0, %1\t%@ int";
    case 11:
      return "fcpys%?\t%0, %1\t%@ int";
    case 12: case 13:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 171 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      return "fcpyd%?\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 329 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 365 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3652 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 404 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char * const output_3655[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_3656[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_3698[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_3699[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_3700[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_3701[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char * const output_3704[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_3705[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char * const output_3718[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char * const output_3719[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_3720[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3721[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3722[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_3724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1132 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_3728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1158 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_3744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_3745 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_3746 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_3747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_3748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 452 "/home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/sync.md"
{
    rtx value = operands[2];
    /* See comment in arm_store_exclusive<mode> above.  */
    gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
    operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
    return "stlexd%?\t%0, %2, %3, %C1";
  }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,0,r,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "r,0,r,Dd,Dd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,l,l,l,r,k,r,r,k,r,k,k,r,k,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,l,0,l,rk,k,r,rk,k,rk,k,r,rk,k,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,l,Py,Pd,rI,rI,k,Pj,Pj,L,L,L,PJ,PJ,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l,*rk,*hk,l,k,l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,l,*0,*0,k,k,0,l,k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "I,J,lL,*hk,*rk,M,O,Pa,Pb,Pc",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "L,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "l,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "lPd",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,l,l,r,r,r,rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,0,l,Pz,rI,r,r,k,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,Py,Pd,l,r,I,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l,&l,&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%l,*h,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,&r,&r,&r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,0,r,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_anddi_operand_neon,
    "w,DL,r,r,De,De,w,DL",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "I,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,r,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,&r,&r,&r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,0,r,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_iordi_operand_neon,
    "w,Dl,r,r,Df,Df,w,Dl",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,%0,r,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_xordi_operand,
    "w,r,r,Dg,Dg,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "TsI,TsI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "N,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,V,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,q,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,q",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,>,l,m,*r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,>,l,mi,l,*r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,l,>,l,m,*l*h*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,K,>,l,mi,l,*l*h*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX,mX,mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,r,mi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,K",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,r,l,Uu,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,I,Py,K,Uu,l,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,mF,l,*h,*r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,r,q,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "rDa,Db,Dc,mF,q",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l*h",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmpneg_operand,
    "L,J",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l,&l,&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,l,*l,1,1,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "IJ,lL,*l,lIJ,lIJ,lIJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,l,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "J,l,L,IJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,r,I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,r,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "Py,r,Di,rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=X,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "Cs,US",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk,rk,r,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,l,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,lPy,lPy,rI,L,rI,L,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,l,l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rI,L,lPy,lPy,rI,rI,L,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&Ts,&Ts,&Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rPy,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rPy,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    push_mult_memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_fp,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vfp_hard_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "X",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m,y,y,yr,y,yrUy,*w,r,*w,*w,*Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r,y,yr,y,yrUy,y,r,*w,*w,*Uvi,*w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,z,r,?z,?Uy,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,z,Uy,z,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,q,q,m,w,r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,q,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,Um,r,m,t,r,t,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Um,t,m,r,t,r,r,t,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,Uv,r,m,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,UvF,w,mF,r,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=t,t,t,t,t,t,?r,?r,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,t,t,0,?r,?r,0,t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,0,t,?r,0,?r,t,0,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w,w,w,w,?r,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w,0,?r,?r,0,w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w,?r,0,?r,w,0,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "tG",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "wG",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two,
    "Dp",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    vfp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,Py,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l,X,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0,1,0,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,l,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,I,Py,n,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&kr",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r,r,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,lPy,0,0,rI,K,rI,rI,K,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "lPy,0,rI,K,0,0,rI,K,rI,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator_strict_it,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,TsI,?TsI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "TsI,0,TsI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPt,Ps,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,IL,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?w,?&r,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,w,r,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "w,r,0,w,r,Dd,Dd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?=&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w,r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&w,X,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "i,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?r,?w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,r,0w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "rUm,i,r,i,rUm,i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,?&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,?&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,&w,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,r,0w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,i,r,i,r,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2r,X,&r,X,2r,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,&w,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "=Um",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_anddi_operand_neon,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_iordi_operand_neon,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_xordi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reload_memory_operand,
    "=o",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reload_memory_operand,
    "o",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    lt_ge_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    commutative_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_general_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    commutative_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator_strict_it,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    equality_operator,
    "",
    CC_NOOVmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,l,l,l,r,k,r,r,k,r,k,k,r,k,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,l,0,l,rk,k,r,rk,k,rk,k,r,rk,k,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,l,Py,Pd,rI,rI,k,Pj,Pj,L,L,L,PJ,PJ,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "l,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,l,l,r,r,r,rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,0,l,Pz,rI,r,r,k,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,Py,Pd,l,r,I,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,r,mi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,K",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,r,l,Uu,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,r,I,Py,K,Uu,l,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,r,I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk,rk,r,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,Uv,r,m,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,UvF,w,mF,r,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two,
    "Dp",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,l,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,I,Py,n,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:440 */
  {
    "*thumb1_adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q0, %Q0, %Q2\n\tadc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:452 */
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    5,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:481 */
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:511 */
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:574 */
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    0,
    15,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:616 */
  {
    "*thumb1_addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_6 },
#else
    { 0, 0, output_6 },
#endif
    { 0 },
    &operand_data[13],
    3,
    3,
    0,
    10,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:681 */
  {
    "addsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_compare0 },
    &operand_data[16],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:698 */
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_8 },
#else
    { 0, output_8, 0 },
#endif
    { 0 },
    &operand_data[17],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:714 */
  {
    "*compare_negsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[19],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:731 */
  {
    "cmpsi2_addneg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpsi2_addneg },
    &operand_data[21],
    4,
    4,
    1,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:788 */
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    3,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:805 */
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    3,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:822 */
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    { 0 },
    &operand_data[25],
    2,
    2,
    1,
    5,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:843 */
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    { 0 },
    &operand_data[25],
    2,
    2,
    1,
    5,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:864 */
  {
    "*addsi3_carryin_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    { 0 },
    &operand_data[27],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:864 */
  {
    "*addsi3_carryin_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_16 },
#else
    { 0, output_16, 0 },
#endif
    { 0 },
    &operand_data[27],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:882 */
  {
    "*addsi3_carryin_alt2_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_17 },
#else
    { 0, output_17, 0 },
#endif
    { 0 },
    &operand_data[30],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:882 */
  {
    "*addsi3_carryin_alt2_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_18 },
#else
    { 0, output_18, 0 },
#endif
    { 0 },
    &operand_data[30],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:900 */
  {
    "*addsi3_carryin_shift_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:900 */
  {
    "*addsi3_carryin_shift_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:918 */
  {
    "*addsi3_carryin_clobercc_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:918 */
  {
    "*addsi3_carryin_clobercc_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:930 */
  {
    "*subsi3_carryin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_23 },
#else
    { 0, output_23, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:946 */
  {
    "*subsi3_carryin_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc\t%0, %1, #%B2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[44],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:957 */
  {
    "*subsi3_carryin_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:971 */
  {
    "*subsi3_carryin_compare_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, #%B2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[44],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:985 */
  {
    "*subsi3_carryin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1002 */
  {
    "*rsbsi3_carryin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1067 */
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[50],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1093 */
  {
    "*thumb_subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q0, %Q0, %Q2\n\tsbc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[53],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1104 */
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1130 */
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1157 */
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1184 */
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1214 */
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1259 */
  {
    "thumb1_subsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_subsi3_insn },
    &operand_data[59],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1271 */
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_37 },
#else
    { 0, output_37, 0 },
#endif
    { 0 },
    &operand_data[62],
    3,
    3,
    0,
    9,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1314 */
  {
    "*subsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_38 },
#else
    { 0, output_38, 0 },
#endif
    { 0 },
    &operand_data[65],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1331 */
  {
    "subsi3_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_39 },
#else
    { 0, output_39, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_compare },
    &operand_data[65],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1388 */
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1398 */
  {
    "*arm_mulsi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[71],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1416 */
  {
    "*thumb_mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_42 },
#else
    { 0, 0, output_42 },
#endif
    { 0 },
    &operand_data[74],
    3,
    3,
    0,
    3,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1431 */
  {
    "*thumb_mulsi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_43 },
#else
    { 0, output_43, 0 },
#endif
    { 0 },
    &operand_data[77],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1444 */
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1458 */
  {
    "*mulsi3_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1472 */
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[80],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1485 */
  {
    "*mulsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[83],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1500 */
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[86],
    4,
    4,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1512 */
  {
    "*mulsi3addsi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[90],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1525 */
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[86],
    4,
    4,
    3,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1542 */
  {
    "*mulsi3addsi_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[90],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1559 */
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[94],
    4,
    4,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1574 */
  {
    "*mulsi3addsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[98],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1589 */
  {
    "*mulsi3subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mls%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[90],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1612 */
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[102],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1625 */
  {
    "*mulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[106],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1654 */
  {
    "*mulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[110],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1665 */
  {
    "*mulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1686 */
  {
    "*umulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[110],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1697 */
  {
    "*umulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1719 */
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[102],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1732 */
  {
    "*umulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[106],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1760 */
  {
    "*smulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[113],
    3,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1775 */
  {
    "*smulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[117],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1805 */
  {
    "*umulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[113],
    3,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1820 */
  {
    "*umulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[117],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1836 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhisi3 },
    &operand_data[121],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1848 */
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1862 */
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[127],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1876 */
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1891 */
  {
    "maddhisi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhisi4 },
    &operand_data[130],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1906 */
  {
    "*maddhisi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[134],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1921 */
  {
    "*maddhisi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatt%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[90],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1937 */
  {
    "maddhidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhidi4 },
    &operand_data[138],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1952 */
  {
    "*maddhidi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[142],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:1968 */
  {
    "*maddhidi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltt%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[146],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2112 */
  {
    "*anddi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_77 },
#else
    { 0, 0, output_77 },
#endif
    { 0 },
    &operand_data[150],
    3,
    3,
    0,
    8,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2158 */
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2180 */
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2271 */
  {
    "*arm_andsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_80 },
#else
    { 0, output_80, 0 },
#endif
    { 0 },
    &operand_data[153],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2298 */
  {
    "*thumb1_andsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[156],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2308 */
  {
    "*andsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_82 },
#else
    { 0, output_82, 0 },
#endif
    { 0 },
    &operand_data[159],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2325 */
  {
    "*andsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    { 0 },
    &operand_data[160],
    2,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2341 */
  {
    "*zeroextractsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_84 },
#else
    { 0, 0, output_84 },
#endif
    { 0 },
    &operand_data[163],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2365 */
  {
    "*ne_zeroextractsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[166],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2403 */
  {
    "*ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[166],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2429 */
  {
    "*ite_ne_zeroextractsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[166],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2468 */
  {
    "*ite_ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[171],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2785 */
  {
    "insv_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfc%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv_zero },
    &operand_data[175],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2798 */
  {
    "insv_t2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfi%?\t%0, %3, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv_t2 },
    &operand_data[175],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2812 */
  {
    "*anddi_notdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2837 */
  {
    "*anddi_notzesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    { 0 },
    &operand_data[182],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2866 */
  {
    "*anddi_notsesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2891 */
  {
    "andsi_notsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi_notsi_si },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2902 */
  {
    "thumb1_bicsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_bicsi3 },
    &operand_data[185],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2913 */
  {
    "andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi_not_shiftsi_si },
    &operand_data[188],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2928 */
  {
    "*andsi_notsi_si_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2942 */
  {
    "*andsi_notsi_si_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[83],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:2963 */
  {
    "*iordi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    { 0 },
    &operand_data[193],
    3,
    3,
    0,
    8,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3007 */
  {
    "*iordi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_100 },
#else
    { 0, output_100, 0 },
#endif
    { 0 },
    &operand_data[182],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3022 */
  {
    "*iordi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3064 */
  {
    "*iorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_102 },
#else
    { 0, output_102, 0 },
#endif
    { 0 },
    &operand_data[153],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3092 */
  {
    "*thumb1_iorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[156],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3115 */
  {
    "*iorsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[196],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3128 */
  {
    "*iorsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[199],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3148 */
  {
    "*xordi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_106 },
#else
    { 0, 0, output_106 },
#endif
    { 0 },
    &operand_data[202],
    3,
    3,
    0,
    6,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3188 */
  {
    "*xordi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    { 0 },
    &operand_data[182],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3203 */
  {
    "*xordi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3243 */
  {
    "*arm_xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_109 },
#else
    { 0, output_109, 0 },
#endif
    { 0 },
    &operand_data[205],
    3,
    3,
    0,
    4,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3268 */
  {
    "*thumb1_xorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[156],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3279 */
  {
    "*xorsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[208],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3292 */
  {
    "*xorsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[209],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3320 */
  {
    "*andsi_iorsi3_notsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[211],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3465 */
  {
    "*smax_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3476 */
  {
    "*smax_m1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3487 */
  {
    "*arm_smax_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[215],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3527 */
  {
    "*smin_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3538 */
  {
    "*arm_smin_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[215],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3570 */
  {
    "*arm_umaxsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[218],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3603 */
  {
    "*arm_uminsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[218],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3626 */
  {
    "*store_minmaxsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    { 0 },
    &operand_data[221],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3653 */
  {
    "*minmax_arithsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    { 0 },
    &operand_data[225],
    6,
    6,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3698 */
  {
    "*minmax_arithsi_non_canon",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    5,
    5,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3750 */
  {
    "*satsi_smax",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    { 0 },
    &operand_data[236],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3750 */
  {
    "*satsi_smin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_125 },
#else
    { 0, 0, output_125 },
#endif
    { 0 },
    &operand_data[236],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3775 */
  {
    "*satsi_smax_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_126 },
#else
    { 0, 0, output_126 },
#endif
    { 0 },
    &operand_data[240],
    6,
    6,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3775 */
  {
    "*satsi_smin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    { 0 },
    &operand_data[240],
    6,
    6,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3857 */
  {
    "arm_ashldi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%Q0, %Q1, asl #1\n\tadc\t%R0, %R1, %R1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_ashldi3_1bit },
    &operand_data[246],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3884 */
  {
    "*thumb1_ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsl\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[248],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3941 */
  {
    "arm_ashrdi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, asr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_ashrdi3_1bit },
    &operand_data[246],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:3965 */
  {
    "*thumb1_ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "asr\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[248],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4022 */
  {
    "arm_lshrdi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, lsr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_lshrdi3_1bit },
    &operand_data[246],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4049 */
  {
    "*thumb1_lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsr\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[248],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4096 */
  {
    "*thumb1_rotrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror\t%0, %0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[251],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4106 */
  {
    "*arm_shiftsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    { 0 },
    &operand_data[254],
    4,
    4,
    0,
    4,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4121 */
  {
    "*shiftsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_136 },
#else
    { 0, 0, output_136 },
#endif
    { 0 },
    &operand_data[258],
    4,
    4,
    3,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4136 */
  {
    "*shiftsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    { 0 },
    &operand_data[262],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4150 */
  {
    "*not_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[266],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4163 */
  {
    "*not_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[266],
    4,
    4,
    3,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4179 */
  {
    "*not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[270],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4360 */
  {
    "unaligned_loadsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadsi },
    &operand_data[274],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4372 */
  {
    "unaligned_loadhis",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sh%)\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadhis },
    &operand_data[276],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4385 */
  {
    "unaligned_loadhiu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(h%)\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadhiu },
    &operand_data[276],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4398 */
  {
    "unaligned_storesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%1, %0\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storesi },
    &operand_data[278],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4410 */
  {
    "unaligned_storehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%(h%)\t%1, %0\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storehi },
    &operand_data[280],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4427 */
  {
    "unaligned_loaddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loaddi },
    &operand_data[282],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4459 */
  {
    "unaligned_storedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storedi },
    &operand_data[284],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4480 */
  {
    "*extv_reg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[286],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4493 */
  {
    "extzv_t2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ubfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzv_t2 },
    &operand_data[286],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4508 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4519 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "udiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4550 */
  {
    "*arm_negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[246],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4573 */
  {
    "*thumb1_negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%R0, #0\n\tneg\t%Q0, %Q1\n\tsbc\t%R0, %R1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[290],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4590 */
  {
    "*arm_negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[292],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4602 */
  {
    "*thumb1_negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4624 */
  {
    "*zextendsidi_negsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4643 */
  {
    "*negdi_extendsidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[294],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4715 */
  {
    "*negdi_zero_extendsidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[296],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4756 */
  {
    "*arm_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4824 */
  {
    "*thumb1_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[300],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4839 */
  {
    "*arm_neg_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4896 */
  {
    "*thumb1_neg_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[300],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4935 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_163 },
#else
    { 0, output_163, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmpldi2 },
    &operand_data[303],
    2,
    2,
    0,
    4,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4968 */
  {
    "*arm_one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[292],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4980 */
  {
    "*thumb1_one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:4989 */
  {
    "*notsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5001 */
  {
    "*notsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[83],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5122 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqidi2 },
    &operand_data[305],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5122 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhidi2 },
    &operand_data[307],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5122 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendsidi2 },
    &operand_data[309],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5135 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqidi2 },
    &operand_data[311],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5135 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhidi2 },
    &operand_data[313],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5135 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsidi2 },
    &operand_data[315],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5232 */
  {
    "*thumb1_zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    { 0 },
    &operand_data[317],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5275 */
  {
    "*arm_zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    { 0 },
    &operand_data[319],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5286 */
  {
    "*arm_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    { 0 },
    &operand_data[319],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5297 */
  {
    "*arm_zero_extendhisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[127],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5345 */
  {
    "*thumb1_zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_178 },
#else
    { 0, output_178, 0 },
#endif
    { 0 },
    &operand_data[321],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5357 */
  {
    "*thumb1_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    { 0 },
    &operand_data[321],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5368 */
  {
    "*arm_zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_180 },
#else
    { 0, output_180, 0 },
#endif
    { 0 },
    &operand_data[323],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5380 */
  {
    "*arm_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_181 },
#else
    { 0, output_181, 0 },
#endif
    { 0 },
    &operand_data[323],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5391 */
  {
    "*arm_zero_extendqisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[325],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5443 */
  {
    "*compareqi_eq0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst%?\t%0, #255",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[326],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5500 */
  {
    "thumb1_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_184 },
#else
    { 0, 0, output_184 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_extendhisi2 },
    &operand_data[328],
    2,
    3,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5614 */
  {
    "*arm_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    { 0 },
    &operand_data[319],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5629 */
  {
    "*arm_extendhisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_186 },
#else
    { 0, output_186, 0 },
#endif
    { 0 },
    &operand_data[319],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5643 */
  {
    "*arm_extendhisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[127],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5677 */
  {
    "*arm_extendqihi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sb%)\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[331],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5716 */
  {
    "*arm_extendqisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_189 },
#else
    { 0, output_189, 0 },
#endif
    { 0 },
    &operand_data[333],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5730 */
  {
    "*arm_extendqisi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_190 },
#else
    { 0, output_190, 0 },
#endif
    { 0 },
    &operand_data[333],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5744 */
  {
    "*arm_extendqisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[325],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5826 */
  {
    "thumb1_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_192 },
#else
    { 0, 0, output_192 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_extendqisi2 },
    &operand_data[335],
    2,
    2,
    0,
    3,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:5950 */
  {
    "*arm_movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_193 },
#else
    { 0, 0, output_193 },
#endif
    { 0 },
    &operand_data[337],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6072 */
  {
    "*thumb1_movdi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_194 },
#else
    { 0, 0, output_194 },
#endif
    { 0 },
    &operand_data[339],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6200 */
  {
    "*arm_movt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, #:upper16:%c2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[341],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6212 */
  {
    "*arm_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_196 },
#else
    { 0, output_196, 0 },
#endif
    { 0 },
    &operand_data[344],
    2,
    2,
    0,
    6,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6305 */
  {
    "*thumb1_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_197 },
#else
    { 0, output_197, 0 },
#endif
    { 0 },
    &operand_data[346],
    2,
    2,
    0,
    9,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6418 */
  {
    "pic_load_addr_unified",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_unified },
    &operand_data[348],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6441 */
  {
    "pic_load_addr_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_32bit },
    &operand_data[351],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6457 */
  {
    "pic_load_addr_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_thumb1 },
    &operand_data[353],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6466 */
  {
    "pic_add_dot_plus_four",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_add_dot_plus_four },
    &operand_data[355],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6482 */
  {
    "pic_add_dot_plus_eight",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_add_dot_plus_eight },
    &operand_data[358],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6498 */
  {
    "tls_load_dot_plus_eight",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_load_dot_plus_eight },
    &operand_data[358],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6561 */
  {
    "*movsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_204 },
#else
    { 0, output_204, 0 },
#endif
    { 0 },
    &operand_data[361],
    2,
    2,
    1,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6884 */
  {
    "*thumb1_movhi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    { 0 },
    &operand_data[363],
    2,
    2,
    0,
    6,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6973 */
  {
    "*movhi_insn_arch4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_206 },
#else
    { 0, output_206, 0 },
#endif
    { 0 },
    &operand_data[365],
    2,
    2,
    0,
    4,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:6997 */
  {
    "*movhi_bytes",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_207 },
#else
    { 0, output_207, 0 },
#endif
    { 0 },
    &operand_data[367],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7129 */
  {
    "*arm_movqi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_208 },
#else
    { 0, output_208, 0 },
#endif
    { 0 },
    &operand_data[369],
    2,
    2,
    0,
    9,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7152 */
  {
    "*thumb1_movqi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_209 },
#else
    { 0, output_209, 0 },
#endif
    { 0 },
    &operand_data[371],
    2,
    2,
    0,
    6,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7192 */
  {
    "*arm32_movhf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    { 0 },
    &operand_data[373],
    2,
    2,
    0,
    4,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7236 */
  {
    "*thumb1_movhf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    { 0 },
    &operand_data[375],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7308 */
  {
    "*arm_movsf_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_212 },
#else
    { 0, output_212, 0 },
#endif
    { 0 },
    &operand_data[377],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7329 */
  {
    "*thumb1_movsf_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_213 },
#else
    { 0, output_213, 0 },
#endif
    { 0 },
    &operand_data[379],
    2,
    2,
    0,
    7,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7414 */
  {
    "*movdf_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    { 0 },
    &operand_data[381],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7443 */
  {
    "*thumb_movdf_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    { 0 },
    &operand_data[383],
    2,
    2,
    0,
    6,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7575 */
  {
    "movmem12b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movmem12b },
    &operand_data[385],
    4,
    7,
    6,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7597 */
  {
    "movmem8b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movmem8b },
    &operand_data[385],
    4,
    6,
    4,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7727 */
  {
    "cbranchsi4_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4_insn },
    &operand_data[392],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7788 */
  {
    "cbranchsi4_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4_scratch },
    &operand_data[396],
    5,
    5,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7825 */
  {
    "*negated_cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    { 0 },
    &operand_data[401],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7861 */
  {
    "*tbit_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    { 0 },
    &operand_data[405],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7906 */
  {
    "*tlobits_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    { 0 },
    &operand_data[405],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7951 */
  {
    "*tstsi3_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    { 0 },
    &operand_data[410],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:7989 */
  {
    "*cbranchne_decr1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    { 0 },
    &operand_data[414],
    5,
    5,
    1,
    4,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8093 */
  {
    "*addsi3_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    { 0 },
    &operand_data[419],
    6,
    6,
    2,
    6,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8175 */
  {
    "*addsi3_cbranch_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    { 0 },
    &operand_data[425],
    5,
    5,
    0,
    4,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8247 */
  {
    "*arm_cmpsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_227 },
#else
    { 0, output_227, 0 },
#endif
    { 0 },
    &operand_data[430],
    2,
    2,
    0,
    5,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8266 */
  {
    "*cmpsi_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[432],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8279 */
  {
    "*cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[432],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8292 */
  {
    "*arm_cmpsi_negshiftsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %2%S1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8312 */
  {
    "*arm_cmpdi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[436],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8350 */
  {
    "*arm_cmpdi_unsigned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[439],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8379 */
  {
    "*arm_cmpdi_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[441],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8390 */
  {
    "*thumb_cmpdi_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[443],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8408 */
  {
    "*deleted_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\t%@ deleted compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[445],
    1,
    1,
    1,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8436 */
  {
    "arm_cond_branch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_cond_branch },
    &operand_data[446],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8462 */
  {
    "*arm_cond_branch_reversed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    { 0 },
    &operand_data[446],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8502 */
  {
    "*mov_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[449],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8519 */
  {
    "*mov_negscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[449],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8538 */
  {
    "*mov_notscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[449],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8751 */
  {
    "*cstoresi_eq0_thumb1_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_241 },
#else
    { 0, output_241, 0 },
#endif
    { 0 },
    &operand_data[452],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8764 */
  {
    "*cstoresi_ne0_thumb1_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%2, %1, #1\n\tsbc\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[455],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8775 */
  {
    "cstoresi_nltu_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%1, %2\n\tsbc\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi_nltu_thumb1 },
    &operand_data[458],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8785 */
  {
    "cstoresi_ltu_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi_ltu_thumb1 },
    &operand_data[458],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8801 */
  {
    "thumb1_addsi3_addgeu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%3, %4\n\tadc\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_addsi3_addgeu },
    &operand_data[461],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8881 */
  {
    "*cmovsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    { 0 },
    &operand_data[466],
    5,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8881 */
  {
    "*cmovdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_247 },
#else
    { 0, 0, output_247 },
#endif
    { 0 },
    &operand_data[471],
    5,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8914 */
  {
    "*movsicc_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_248 },
#else
    { 0, output_248, 0 },
#endif
    { 0 },
    &operand_data[476],
    5,
    5,
    0,
    8,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:8983 */
  {
    "*movsfcc_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_249 },
#else
    { 0, output_249, 0 },
#endif
    { 0 },
    &operand_data[481],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9007 */
  {
    "*arm_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_250 },
#else
    { 0, 0, output_250 },
#endif
    { 0 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9032 */
  {
    "*thumb_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    { 0 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9090 */
  {
    "*call_reg_armv5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[486],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9100 */
  {
    "*call_reg_arm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_253 },
#else
    { 0, 0, output_253 },
#endif
    { 0 },
    &operand_data[486],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9119 */
  {
    "*call_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_254 },
#else
    { 0, 0, output_254 },
#endif
    { 0 },
    &operand_data[489],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9132 */
  {
    "*call_reg_thumb1_v5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[492],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9143 */
  {
    "*call_reg_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_256 },
#else
    { 0, 0, output_256 },
#endif
    { 0 },
    &operand_data[492],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9201 */
  {
    "*call_value_reg_armv5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[494],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9212 */
  {
    "*call_value_reg_arm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_258 },
#else
    { 0, 0, output_258 },
#endif
    { 0 },
    &operand_data[494],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9228 */
  {
    "*call_value_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    { 0 },
    &operand_data[488],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9243 */
  {
    "*call_value_reg_thumb1_v5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[491],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9255 */
  {
    "*call_value_reg_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_261 },
#else
    { 0, 0, output_261 },
#endif
    { 0 },
    &operand_data[491],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9279 */
  {
    "*call_symbol",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_262 },
#else
    { 0, 0, output_262 },
#endif
    { 0 },
    &operand_data[498],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9295 */
  {
    "*call_value_symbol",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_263 },
#else
    { 0, 0, output_263 },
#endif
    { 0 },
    &operand_data[500],
    4,
    4,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9312 */
  {
    "*call_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[501],
    3,
    3,
    0,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9325 */
  {
    "*call_value_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[503],
    4,
    4,
    0,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9375 */
  {
    "*sibcall_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    { 0 },
    &operand_data[507],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9395 */
  {
    "*sibcall_value_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    { 0 },
    &operand_data[506],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9434 */
  {
    "*arm_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_268 },
#else
    { 0, 0, output_268 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9451 */
  {
    "*cond_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_269 },
#else
    { 0, 0, output_269 },
#endif
    { 0 },
    &operand_data[447],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9451 */
  {
    "*cond_simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_270 },
#else
    { 0, 0, output_270 },
#endif
    { 0 },
    &operand_data[447],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9473 */
  {
    "*cond_return_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_271 },
#else
    { 0, 0, output_271 },
#endif
    { 0 },
    &operand_data[447],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9473 */
  {
    "*cond_simple_return_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_272 },
#else
    { 0, 0, output_272 },
#endif
    { 0 },
    &operand_data[447],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9495 */
  {
    "*arm_simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_273 },
#else
    { 0, 0, output_273 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9529 */
  {
    "*check_arch2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq\t%|r0, %|r0\n\tteq\t%|pc, %|pc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[510],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9663 */
  {
    "blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_blockage },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9711 */
  {
    "arm_casesi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_276 },
#else
    { 0, 0, output_276 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_casesi_internal },
    &operand_data[511],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9750 */
  {
    "thumb1_casesi_dispatch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_casesi_dispatch },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9782 */
  {
    "*arm_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9791 */
  {
    "*load_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[515],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9803 */
  {
    "*thumb1_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tpc, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[492],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9816 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9833 */
  {
    "trap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_trap },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9853 */
  {
    "*arith_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[516],
    6,
    6,
    0,
    4,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9904 */
  {
    "*arith_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[522],
    6,
    6,
    5,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9923 */
  {
    "*arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[528],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9940 */
  {
    "*sub_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[534],
    5,
    5,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9953 */
  {
    "*sub_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[539],
    5,
    5,
    4,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9971 */
  {
    "*sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[544],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:9988 */
  {
    "*and_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[549],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10017 */
  {
    "*ior_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_290 },
#else
    { 0, output_290, 0 },
#endif
    { 0 },
    &operand_data[553],
    4,
    4,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10124 */
  {
    "*compare_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[557],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10244 */
  {
    "*cond_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    { 0 },
    &operand_data[561],
    6,
    6,
    0,
    3,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10273 */
  {
    "*cond_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_293 },
#else
    { 0, 0, output_293 },
#endif
    { 0 },
    &operand_data[567],
    6,
    6,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10300 */
  {
    "*cond_sub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_294 },
#else
    { 0, 0, output_294 },
#endif
    { 0 },
    &operand_data[567],
    5,
    5,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10319 */
  {
    "*cmp_ite0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_295 },
#else
    { 0, 0, output_295 },
#endif
    { 0 },
    &operand_data[573],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10401 */
  {
    "*cmp_ite1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_296 },
#else
    { 0, 0, output_296 },
#endif
    { 0 },
    &operand_data[573],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10484 */
  {
    "*cmp_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_297 },
#else
    { 0, 0, output_297 },
#endif
    { 0 },
    &operand_data[573],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10566 */
  {
    "*cmp_ior",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_298 },
#else
    { 0, 0, output_298 },
#endif
    { 0 },
    &operand_data[573],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10648 */
  {
    "*ior_scc_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[580],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10680 */
  {
    "*ior_scc_scc_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[587],
    8,
    8,
    6,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10708 */
  {
    "*and_scc_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[580],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10742 */
  {
    "*and_scc_scc_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[587],
    8,
    8,
    6,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10774 */
  {
    "*and_scc_scc_nodom",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[595],
    7,
    7,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10845 */
  {
    "*negscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[602],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10919 */
  {
    "movcond_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movcond_addsi },
    &operand_data[606],
    6,
    6,
    0,
    3,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:10958 */
  {
    "movcond",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_306 },
#else
    { 0, 0, output_306 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movcond },
    &operand_data[612],
    6,
    6,
    0,
    3,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11024 */
  {
    "*ifcompare_plus_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[618],
    7,
    7,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11041 */
  {
    "*if_plus_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_308 },
#else
    { 0, output_308, 0 },
#endif
    { 0 },
    &operand_data[625],
    6,
    6,
    0,
    4,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11067 */
  {
    "*ifcompare_move_plus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[618],
    7,
    7,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11084 */
  {
    "*if_move_plus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_310 },
#else
    { 0, output_310, 0 },
#endif
    { 0 },
    &operand_data[625],
    6,
    6,
    0,
    4,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11104 */
  {
    "*ifcompare_arith_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[631],
    10,
    10,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11123 */
  {
    "*if_arith_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I6%d5\t%0, %1, %2\n\t%I7%D5\t%0, %3, %4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[641],
    9,
    9,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11140 */
  {
    "*ifcompare_arith_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_313 },
#else
    { 0, 0, output_313 },
#endif
    { 0 },
    &operand_data[650],
    8,
    8,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11182 */
  {
    "*if_arith_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_314 },
#else
    { 0, output_314, 0 },
#endif
    { 0 },
    &operand_data[658],
    7,
    7,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11199 */
  {
    "*ifcompare_move_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_315 },
#else
    { 0, 0, output_315 },
#endif
    { 0 },
    &operand_data[665],
    8,
    8,
    0,
    2,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11242 */
  {
    "*if_move_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_316 },
#else
    { 0, output_316, 0 },
#endif
    { 0 },
    &operand_data[658],
    7,
    7,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11260 */
  {
    "*ifcompare_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[673],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11277 */
  {
    "*if_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_318 },
#else
    { 0, output_318, 0 },
#endif
    { 0 },
    &operand_data[679],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11295 */
  {
    "*ifcompare_not_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[673],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11312 */
  {
    "*if_not_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_320 },
#else
    { 0, output_320, 0 },
#endif
    { 0 },
    &operand_data[679],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11329 */
  {
    "*ifcompare_shift_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[684],
    8,
    8,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11347 */
  {
    "*if_shift_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_322 },
#else
    { 0, output_322, 0 },
#endif
    { 0 },
    &operand_data[692],
    7,
    7,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11367 */
  {
    "*ifcompare_move_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[684],
    8,
    8,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11385 */
  {
    "*if_move_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_324 },
#else
    { 0, output_324, 0 },
#endif
    { 0 },
    &operand_data[692],
    7,
    7,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11405 */
  {
    "*ifcompare_shift_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    10,
    10,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11425 */
  {
    "*if_shift_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%d5\t%0, %1%S6\n\tmov%D5\t%0, %3%S7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[709],
    9,
    9,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11448 */
  {
    "*ifcompare_not_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[718],
    8,
    8,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11466 */
  {
    "*if_not_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%d5\t%0, %1\n\t%I6%D5\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[726],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11482 */
  {
    "*ifcompare_arith_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[718],
    8,
    8,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11500 */
  {
    "*if_arith_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D5\t%0, %1\n\t%I6%d5\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[726],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11516 */
  {
    "*ifcompare_neg_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[673],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11532 */
  {
    "*if_neg_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_332 },
#else
    { 0, output_332, 0 },
#endif
    { 0 },
    &operand_data[679],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11549 */
  {
    "*ifcompare_move_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[673],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11565 */
  {
    "*if_move_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_334 },
#else
    { 0, output_334, 0 },
#endif
    { 0 },
    &operand_data[679],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11582 */
  {
    "*arith_adjacentmem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    { 0 },
    &operand_data[733],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11773 */
  {
    "prologue_thumb1_interwork",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue_thumb1_interwork },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11796 */
  {
    "*epilogue_insns",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11953 */
  {
    "*cond_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_338 },
#else
    { 0, output_338, 0 },
#endif
    { 0 },
    &operand_data[738],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11972 */
  {
    "*sign_extract_onebit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    { 0 },
    &operand_data[166],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:11989 */
  {
    "*not_signextract_onebit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_340 },
#else
    { 0, 0, output_340 },
#endif
    { 0 },
    &operand_data[166],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12014 */
  {
    "*push_multi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_341 },
#else
    { 0, 0, output_341 },
#endif
    { 0 },
    &operand_data[743],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12060 */
  {
    "stack_tie",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_tie },
    &operand_data[746],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12073 */
  {
    "*load_multiple_with_writeback",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_343 },
#else
    { 0, 0, output_343 },
#endif
    { 0 },
    &operand_data[748],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12101 */
  {
    "*pop_multiple_with_writeback_and_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_344 },
#else
    { 0, 0, output_344 },
#endif
    { 0 },
    &operand_data[752],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12124 */
  {
    "*pop_multiple_with_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_345 },
#else
    { 0, 0, output_345 },
#endif
    { 0 },
    &operand_data[756],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12145 */
  {
    "*ldr_with_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, [%0], #4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[749],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12155 */
  {
    "*vfp_pop_multiple_with_writeback",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_347 },
#else
    { 0, 0, output_347 },
#endif
    { 0 },
    &operand_data[759],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12191 */
  {
    "align_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_348 },
#else
    { 0, 0, output_348 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align_4 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12201 */
  {
    "align_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_349 },
#else
    { 0, 0, output_349 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align_8 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12211 */
  {
    "consttable_end",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_350 },
#else
    { 0, 0, output_350 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_end },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12221 */
  {
    "consttable_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_351 },
#else
    { 0, 0, output_351 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_1 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12234 */
  {
    "consttable_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_352 },
#else
    { 0, 0, output_352 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_2 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12248 */
  {
    "consttable_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_353 },
#else
    { 0, 0, output_353 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_4 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12285 */
  {
    "consttable_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_354 },
#else
    { 0, 0, output_354 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_8 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12310 */
  {
    "consttable_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_355 },
#else
    { 0, 0, output_355 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_16 },
    &operand_data[357],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12355 */
  {
    "*thumb1_tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%|pc, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[492],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12366 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzsi2 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12374 */
  {
    "rbitsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rbit%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rbitsi2 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12398 */
  {
    "prefetch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pld\t%a0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prefetch },
    &operand_data[763],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12418 */
  {
    "force_register_use",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%@ %0 needed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_force_register_use },
    &operand_data[766],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12443 */
  {
    "arm_eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_eh_return },
    &operand_data[767],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12458 */
  {
    "thumb_eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb_eh_return },
    &operand_data[301],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12477 */
  {
    "load_tp_hard",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mrc%?\tp15, 0, %0, c13, c0, 3\t@ load_tp_hard",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_tp_hard },
    &operand_data[355],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12487 */
  {
    "load_tp_soft",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t__aeabi_read_tp\t@ load_tp_soft",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_tp_soft },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12499 */
  {
    "tlscall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_365 },
#else
    { 0, 0, output_365 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tlscall },
    &operand_data[769],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12532 */
  {
    "*arm_movtas_ze",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, %L1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[771],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12545 */
  {
    "*arm_rev",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_367 },
#else
    { 0, output_367, 0 },
#endif
    { 0 },
    &operand_data[773],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12646 */
  {
    "*arm_revsh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_368 },
#else
    { 0, output_368, 0 },
#endif
    { 0 },
    &operand_data[775],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12659 */
  {
    "*arm_rev16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_369 },
#else
    { 0, output_369, 0 },
#endif
    { 0 },
    &operand_data[777],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12681 */
  {
    "*thumb2_ldrd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %3, [%1, %2]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[779],
    5,
    5,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12699 */
  {
    "*thumb2_ldrd_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %2, [%1]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[784],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12714 */
  {
    "*thumb2_ldrd_base_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %2, [%1, #-4]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[784],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12729 */
  {
    "*thumb2_strd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%2, %4, [%0, %1]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[787],
    5,
    5,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12747 */
  {
    "*thumb2_strd_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%1, %2, [%0]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[792],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12762 */
  {
    "*thumb2_strd_base_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%1, %2, [%0, #-4]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[792],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12778 */
  {
    "crc32b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32b\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32b },
    &operand_data[795],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12778 */
  {
    "crc32h",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32h\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32h },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12778 */
  {
    "crc32w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32w\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32w },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12778 */
  {
    "crc32cb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32cb\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32cb },
    &operand_data[795],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12778 */
  {
    "crc32ch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32ch\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32ch },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12778 */
  {
    "crc32cw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32cw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32cw },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:24 */
  {
    "*ldm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[798],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:43 */
  {
    "*thumb_ldm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[804],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:60 */
  {
    "*ldm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[810],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:81 */
  {
    "*thumb_ldm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[816],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:100 */
  {
    "*stm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[822],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:116 */
  {
    "*stm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[828],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:134 */
  {
    "*thumb_stm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[834],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:150 */
  {
    "*ldm4_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[798],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:169 */
  {
    "*ldm4_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[810],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:190 */
  {
    "*stm4_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[822],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:205 */
  {
    "*stm4_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[828],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:222 */
  {
    "*ldm4_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[798],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:240 */
  {
    "*ldm4_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[810],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:260 */
  {
    "*stm4_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[822],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:275 */
  {
    "*stm4_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[828],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:292 */
  {
    "*ldm4_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[798],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:312 */
  {
    "*ldm4_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[810],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:334 */
  {
    "*stm4_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[822],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:350 */
  {
    "*stm4_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[828],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:475 */
  {
    "*ldm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[840],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:491 */
  {
    "*thumb_ldm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[845],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:505 */
  {
    "*ldm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[850],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:523 */
  {
    "*thumb_ldm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[855],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:539 */
  {
    "*stm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[860],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:553 */
  {
    "*stm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[865],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:569 */
  {
    "*thumb_stm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[870],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:583 */
  {
    "*ldm3_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[840],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:599 */
  {
    "*ldm3_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[850],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:617 */
  {
    "*stm3_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[860],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:630 */
  {
    "*stm3_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[865],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:645 */
  {
    "*ldm3_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[840],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:660 */
  {
    "*ldm3_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[850],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:677 */
  {
    "*stm3_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[860],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:690 */
  {
    "*stm3_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[865],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:705 */
  {
    "*ldm3_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[840],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:722 */
  {
    "*ldm3_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[850],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:741 */
  {
    "*stm3_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[860],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:755 */
  {
    "*stm3_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[865],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:864 */
  {
    "*ldm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[875],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:877 */
  {
    "*thumb_ldm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[879],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:888 */
  {
    "*ldm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:903 */
  {
    "*thumb_ldm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[887],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:916 */
  {
    "*stm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[891],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:928 */
  {
    "*stm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[895],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:942 */
  {
    "*thumb_stm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[899],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:954 */
  {
    "*ldm2_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[875],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:967 */
  {
    "*ldm2_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:982 */
  {
    "*stm2_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[891],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:993 */
  {
    "*stm2_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[895],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1006 */
  {
    "*ldm2_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[875],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1018 */
  {
    "*ldm2_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1032 */
  {
    "*stm2_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[891],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1043 */
  {
    "*stm2_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[895],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1056 */
  {
    "*ldm2_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[875],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1070 */
  {
    "*ldm2_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1086 */
  {
    "*stm2_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[891],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/ldmstm.md:1098 */
  {
    "*stm2_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[895],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md:12797 */
  {
    "*load_multiple",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_439 },
#else
    { 0, 0, output_439 },
#endif
    { 0 },
    &operand_data[903],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:30 */
  {
    "tbcstv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv8qi },
    &operand_data[906],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:39 */
  {
    "tbcstv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv4hi },
    &operand_data[908],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:48 */
  {
    "tbcstv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv2si },
    &operand_data[910],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:57 */
  {
    "iwmmxt_iordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_443 },
#else
    { 0, output_443, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_iordi3 },
    &operand_data[912],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:71 */
  {
    "iwmmxt_xordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_444 },
#else
    { 0, output_444, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_xordi3 },
    &operand_data[912],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:85 */
  {
    "iwmmxt_anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_445 },
#else
    { 0, output_445, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_anddi3 },
    &operand_data[912],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:99 */
  {
    "iwmmxt_nanddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_nanddi3 },
    &operand_data[915],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:109 */
  {
    "*iwmmxt_arm_movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_447 },
#else
    { 0, 0, output_447 },
#endif
    { 0 },
    &operand_data[918],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:164 */
  {
    "*iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_448 },
#else
    { 0, 0, output_448 },
#endif
    { 0 },
    &operand_data[920],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:210 */
  {
    "*cond_iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_449 },
#else
    { 0, 0, output_449 },
#endif
    { 0 },
    &operand_data[922],
    4,
    4,
    0,
    6,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_450 },
#else
    { 0, 0, output_450 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2si_internal },
    &operand_data[926],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_451 },
#else
    { 0, 0, output_451 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4hi_internal },
    &operand_data[928],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_452 },
#else
    { 0, 0, output_452 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv8qi_internal },
    &operand_data[930],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:313 */
  {
    "*andv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[932],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:313 */
  {
    "*andv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[935],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:313 */
  {
    "*andv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[938],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:323 */
  {
    "*iorv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[932],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Schreibtisch/Git/Zybo-Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/iwmmxt.md:323 */
  {
    "*iorv4hi3_iwmmxt",
    { .single =
#else
    {
  {