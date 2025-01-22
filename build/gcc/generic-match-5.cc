/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_power_of_two_cand (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 12, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LSHIFT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		{
		  res_ops[0] = captures[0];
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 13, __FILE__, __LINE__, false);
		  return true;
		}
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  return false;
}

bool
tree_with_possible_nonzero_bits (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case BIT_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_with_possible_nonzero_bits_1 (_p0))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 35, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
	if (tree_with_possible_nonzero_bits_1 (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 35, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    default:;
    }
if (tree_with_possible_nonzero_bits_1 (t))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      {
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 36, __FILE__, __LINE__, false);
	return true;
      }
    }
  }
  return false;
}

bool
tree_unsigned_integer_sat_trunc (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case BIT_IOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		CASE_CONVERT:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case GT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  switch (TREE_CODE (_q41))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_p1))
				  {
				  CASE_CONVERT:
				    {
				      tree _q70 = TREE_OPERAND (_p1, 0);
				      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q41 };
					    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					      {
						if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
						  {
						    {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int int_cst = wi::to_wide (captures[1], itype_precision);
							if (otype_precision < itype_precision && wi::eq_p (trunc_max, int_cst)
)
							  {
							    {
							      res_ops[0] = captures[0];
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 68, __FILE__, __LINE__, false);
							      return true;
							    }
							  }
						    }
						  }
					      }
					  }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  CASE_CONVERT:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      CASE_CONVERT:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  switch (TREE_CODE (_q50))
			    {
			    case GT_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_q50, 0);
				tree _q61 = TREE_OPERAND (_q50, 1);
				if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				  {
				    switch (TREE_CODE (_q61))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q61 };
					    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					      {
						if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
						  {
						    {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int int_cst = wi::to_wide (captures[1], itype_precision);
							if (otype_precision < itype_precision && wi::eq_p (trunc_max, int_cst)
)
							  {
							    {
							      res_ops[0] = captures[0];
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 68, __FILE__, __LINE__, false);
							      return true;
							    }
							  }
						    }
						  }
					      }
					  }
				          break;
				        }
				      default:;
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case PLUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      CASE_CONVERT:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  switch (TREE_CODE (_q50))
			    {
			    case LE_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_q50, 0);
				tree _q61 = TREE_OPERAND (_q50, 1);
				if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				  {
				    switch (TREE_CODE (_q61))
				      {
				      case INTEGER_CST:
				        {
					  switch (TREE_CODE (_q41))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q61, _q41 };
						  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						    {
						      if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
							{
							  {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
							      if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
								{
								  {
								    res_ops[0] = captures[0];
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 69, __FILE__, __LINE__, false);
								    return true;
								  }
								}
							  }
							}
						    }
						}
					        break;
					      }
					    default:;
					    }
				          break;
				        }
				      default:;
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q41))
			    {
			    CASE_CONVERT:
			      {
				tree _q60 = TREE_OPERAND (_q41, 0);
				switch (TREE_CODE (_q60))
				  {
				  case LE_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
					{
					  switch (TREE_CODE (_q71))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q71, _q40 };
						  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						    {
						      if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
							{
							  {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
							      if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
								{
								  {
								    res_ops[0] = captures[0];
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 69, __FILE__, __LINE__, false);
								    return true;
								  }
								}
							  }
							}
						    }
						}
					        break;
					      }
					    default:;
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		CASE_CONVERT:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case LE_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  switch (TREE_CODE (_q41))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q21))
				  {
				  case INTEGER_CST:
				    {
				      switch (TREE_CODE (_p1))
				        {
					CASE_CONVERT:
					  {
					    tree _q80 = TREE_OPERAND (_p1, 0);
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q21 };
						  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						    {
						      if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
							{
							  {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
							      if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
								{
								  {
								    res_ops[0] = captures[0];
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 69, __FILE__, __LINE__, false);
								    return true;
								  }
								}
							  }
							}
						    }
						}
					      }
					    break;
					  }
				        default:;
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      CASE_CONVERT:
		        {
			  tree _q40 = TREE_OPERAND (_q21, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case LE_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				tree _q51 = TREE_OPERAND (_q40, 1);
				switch (TREE_CODE (_q51))
				  {
				  case INTEGER_CST:
				    {
				      switch (TREE_CODE (_p1))
				        {
					CASE_CONVERT:
					  {
					    tree _q80 = TREE_OPERAND (_p1, 0);
					    if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
						  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						    {
						      if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
							{
							  {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
							      if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
								{
								  {
								    res_ops[0] = captures[0];
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 69, __FILE__, __LINE__, false);
								    return true;
								  }
								}
							  }
							}
						    }
						}
					      }
					    break;
					  }
				        default:;
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	switch (TREE_CODE (_p0))
	  {
	  case MIN_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
		      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
			{
			  if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && single_use (captures[1])
)
			    {
			      {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int int_cst = wi::to_wide (captures[2], itype_precision);
				  if (otype_precision < itype_precision && wi::eq_p (trunc_max, int_cst)
)
				    {
				      {
					res_ops[0] = captures[0];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 70, __FILE__, __LINE__, false);
					return true;
				      }
				    }
			      }
			    }
			}
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_20 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (TYPE_OVERFLOW_UNDEFINED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail232;
	      {
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 121, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail232:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_22 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!TYPE_OVERFLOW_TRAPS (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail234;
	      {
		tree res_op0;
		res_op0 =  build_all_ones_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 123, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail234:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_25 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (plusminus))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (!FLOAT_TYPE_P (type) || flag_associative_math)
)
    {
      if (!ALL_FRACT_MODE_P (TYPE_MODE (type))
)
	{
	  if ((!ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_WRAPS (type)
 || (INTEGRAL_TYPE_P (type)
 && ((tree_expr_nonzero_p (captures[0])
 && expr_not_equal_to (captures[0],
 wi::minus_one (TYPE_PRECISION (type))))
 || (plusminus == PLUS_EXPR
 ? expr_not_equal_to (captures[2],
 wi::max_value (TYPE_PRECISION (type), SIGNED))
 : (expr_not_equal_to (captures[2],
 wi::min_value (TYPE_PRECISION (type), SIGNED))
 && expr_not_equal_to (captures[2],
 wi::min_value (TYPE_PRECISION (type), SIGNED)
 + 1))))))
 && single_use (captures[1])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail238;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] =  build_one_cst (type);
		  _o1[1] = captures[2];
		  _r1 = fold_build2_loc (loc, plusminus, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[0];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 127, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail238:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_28 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail241;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != boolean_type_node)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, boolean_type_node, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[0];
	tree _r;
	_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 130, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail241:;
    }
  return NULL_TREE;
}

tree
generic_simplify_31 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail244;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 133, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail244:;
    }
  return NULL_TREE;
}

tree
generic_simplify_34 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail247;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = maybe_build_call_expr_loc (loc, POPCOUNT, type, 1, _o1[0]);
      if (!_r1)
        goto next_after_fail247;
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[3];
      _r1 = maybe_build_call_expr_loc (loc, POPCOUNT, type, 1, _o1[0]);
      if (!_r1)
        goto next_after_fail247;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 136, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail247:;
  return NULL_TREE;
}

tree
generic_simplify_38 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 || (VECTOR_INTEGER_TYPE_P (type)
 && ((optimize_vectors_before_lowering_p ()
 && TREE_CODE (TYPE_SIZE (type)) == INTEGER_CST)
 || target_supports_op_p (type, TRUNC_MOD_EXPR,
 optab_vector)))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail251;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 140, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail251:;
    }
  return NULL_TREE;
}

tree
generic_simplify_42 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type) && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[2]))
 && !TYPE_SATURATING (TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail255;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail255;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[0];
	    _o2[1] = captures[1];
	    _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[0] = _r2;
	  }
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 144, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail255:;
    }
  return NULL_TREE;
}

tree
generic_simplify_48 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail261;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 149, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail261:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_52 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail267;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 155, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail267:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_56 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && TREE_CODE (captures[1]) != INTEGER_CST
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
	    {
	      {
 tree utype = unsigned_type_for (type);
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail273;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (TREE_TYPE (_o2[0]) != utype)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[0] = _r2;
		      }
		      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 161, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail273:;
	      }
	    }
	  else
	    {
	      if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail274;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (TREE_TYPE (_o1[0]) != type)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 162, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail274:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_64 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail283;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 171, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail283:;
    }
  return NULL_TREE;
}

tree
generic_simplify_70 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail289;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail289;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 175, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail289:;
  return NULL_TREE;
}

tree
generic_simplify_75 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail296;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail296;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 181, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail296:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail297;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail297;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 182, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail297:;
    }
  return NULL_TREE;
}

tree
generic_simplify_83 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail306;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail306;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[3];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 187, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail306:;
  return NULL_TREE;
}

tree
generic_simplify_91 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail314;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 193, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail314:;
  return NULL_TREE;
}

tree
generic_simplify_99 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[6]))
)
    {
      if (single_use (captures[4]) && single_use (captures[5])
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail324;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail324;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 197, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail324:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail325;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail325;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[4];
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 198, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail325:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_109 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail336;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail336;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 202, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail336:;
  return NULL_TREE;
}

tree
generic_simplify_116 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[2])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int c = wi::add (wi::to_wide (captures[3]), 1);
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail344;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail344;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != t)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, t, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 209, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail344:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_123 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail357;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail357;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 222, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail357:;
  return NULL_TREE;
}

tree
generic_simplify_128 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[4]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && operand_equal_p (captures[2], captures[4]))
)
    {
      {
 int cmp = 0;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[4]) == INTEGER_CST)
 cmp = tree_int_cst_compare (captures[2], captures[4]);
	  if ((code1 == LT_EXPR || code1 == LE_EXPR)
 && (code2 == LT_EXPR || code2 == LE_EXPR)
)
	    {
	      if ((cmp < 0) || (cmp == 0 && code1 == LT_EXPR)
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail374;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail374;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail374;
		  {
		    tree _r;
		    _r = captures[3];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 232, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail374:;
		}
	      else
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail375;
		  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail375;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail375;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 233, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail375:;
		}
	    }
	  else
	    {
	      if ((code1 == GT_EXPR || code1 == GE_EXPR)
 && (code2 == GT_EXPR || code2 == GE_EXPR)
)
		{
		  if ((cmp > 0) || (cmp == 0 && code1 == GT_EXPR)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail376;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail376;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail376;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 234, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail376:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail377;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail377;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail377;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 235, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail377:;
		    }
		}
	      else
		{
		  if (cmp == 0
 && ((code1 == LT_EXPR && code2 == GT_EXPR)
 || (code1 == GT_EXPR && code2 == LT_EXPR))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail378;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail378;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail378;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 = captures[4];
			tree _r;
			_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 236, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail378:;
		    }
		  else
		    {
		      if (cmp >= 0
 && (code1 == LT_EXPR || code1 == LE_EXPR)
 && (code2 == GT_EXPR || code2 == GE_EXPR)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail379;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail379;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail379;
			  {
			    tree _r;
			    _r =  constant_boolean_node (true, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 237, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail379:;
			}
		      else
			{
			  if (cmp <= 0
 && (code1 == GT_EXPR || code1 == GE_EXPR)
 && (code2 == LT_EXPR || code2 == LE_EXPR)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail380;
			      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail380;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail380;
			      {
				tree _r;
				_r =  constant_boolean_node (true, type);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 238, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail380:;
			    }
			}
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_151 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail417;
  {
    if (! tree_invariant_p (captures[3])) goto next_after_fail417;
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = unshare_expr (captures[3]);
      _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[2], _r1;
      {
	tree _o2[1], _r2;
	_o2[0] = captures[4];
	_r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	if (EXPR_P (_r2))
	  goto next_after_fail417;
	_o1[0] = _r2;
      }
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      if (EXPR_P (_r1))
        goto next_after_fail417;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 251, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail417:;
  return NULL_TREE;
}

tree
generic_simplify_159 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail425;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 259, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail425:;
    }
  return NULL_TREE;
}

tree
generic_simplify_167 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail433;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != boolean_type_node)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, boolean_type_node, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[0];
	tree _r;
	_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 266, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail433:;
    }
  return NULL_TREE;
}

tree
generic_simplify_175 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail443;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail443;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 274, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail443:;
    }
  return NULL_TREE;
}

tree
generic_simplify_184 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!canonicalize_math_p ()
)
    {
      if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail454;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail454;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  build_zero_cst (type);
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 282, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail454:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_190 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SQRT_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (!tree_expr_maybe_signaling_nan_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail461;
	  {
	    tree _r;
	    _r = captures[1];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail461:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_197 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE(captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail468;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE(captures[0]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 295, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail468:;
    }
  return NULL_TREE;
}

tree
generic_simplify_204 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 && (CONSTANT_CLASS_P (captures[2]) || (single_use (captures[1]) && single_use (captures[0])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail478;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[3]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 305, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail478:;
    }
  return NULL_TREE;
}

tree
generic_simplify_211 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail498;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 324, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail498:;
    }
  return NULL_TREE;
}

tree
generic_simplify_218 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp1),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail505;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 330, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail505:;
    }
  return NULL_TREE;
}

tree
generic_simplify_224 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_fits_shwi_p (captures[3])
 && tree_to_shwi (captures[3]) > 0
 && tree_to_shwi (captures[3]) < TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      if (tree_to_shwi (captures[3]) > wi::ctz (wi::to_wide (captures[5]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail514;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (TREE_SIDE_EFFECTS (captures[5]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 339, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail514:;
	}
      else
	{
	  {
 wide_int c1 = wi::to_wide (captures[3]);
 wide_int c2 = wi::lrshift (wi::to_wide (captures[4]), c1);
 wide_int c3 = wi::lrshift (wi::to_wide (captures[5]), c1);
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail515;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail515;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail515;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail515;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] =  wide_int_to_tree (TREE_TYPE (captures[2]), c2);
		  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  wide_int_to_tree (TREE_TYPE (captures[2]), c3);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 340, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail515:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_236 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[1]));
	  if (ic == icmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail535;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail535;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 360, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail535:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail536;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail536;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 361, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail536:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_245 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[1]) && single_use (captures[3])
)
    {
      {
 tree otype = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail550;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (TREE_TYPE (_o1[0]) != otype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, otype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != otype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, otype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 372, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail550:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_251 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (SCALAR_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 && ! DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      {
 format_helper fmt (REAL_MODE_FORMAT (TYPE_MODE (TREE_TYPE (captures[0]))));
 tree type1 = TREE_TYPE (captures[1]);
 bool type1_signed_p = TYPE_SIGN (type1) == SIGNED;
 tree type2 = TREE_TYPE (captures[2]);
 bool type2_signed_p = TYPE_SIGN (type2) == SIGNED;
	  if (fmt.can_represent_integral_type_p (type1)
 && fmt.can_represent_integral_type_p (type2)
)
	    {
	      if (cmp == ORDERED_EXPR || cmp == UNORDERED_EXPR
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail588;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == ORDERED_EXPR, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 411, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail588:;
		}
	      else
		{
		  if (TYPE_PRECISION (type1) > TYPE_PRECISION (type2)
 && type1_signed_p >= type2_signed_p
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail589;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 412, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail589:;
		    }
		  else
		    {
		      if (TYPE_PRECISION (type1) < TYPE_PRECISION (type2)
 && type1_signed_p <= type2_signed_p
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail590;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      if (TREE_TYPE (_o1[0]) != type2)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, type2, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[2];
			    tree _r;
			    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 413, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail590:;
			}
		      else
			{
			  if (TYPE_PRECISION (type1) == TYPE_PRECISION (type2)
 && type1_signed_p == type2_signed_p
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail591;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree res_op1;
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[2];
				  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
				    {
				      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
				    }
				  else
				    _r1 = _o1[0];
				  res_op1 = _r1;
				}
				tree _r;
				_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 414, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail591:;
			    }
			}
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_263 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && !wi::neg_p (wi::to_wide (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail624;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      _r3 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      _o2[0] = _r3;
	    }
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 440, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail624:;
    }
  return NULL_TREE;
}

tree
generic_simplify_268 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail629;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail629;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
    tree _r;
    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 445, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail629:;
  return NULL_TREE;
}

tree
generic_simplify_272 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail633;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail633;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 448, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail633:;
    }
  return NULL_TREE;
}

tree
generic_simplify_277 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && !FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[0])))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !(
1
 && TREE_CODE (TREE_TYPE (captures[0])) == REFERENCE_TYPE
 && (flag_sanitize & (SANITIZE_NULL | SANITIZE_ALIGNMENT))))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[1])))))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail652;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 458, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail652:;
    }
  return NULL_TREE;
}

tree
generic_simplify_280 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[2]) && !TREE_OVERFLOW (captures[3])
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[1]))
 && !TYPE_SATURATING (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (rop, captures[3], captures[2]);
	  if (TREE_OVERFLOW (res)
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail659;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail659;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail659;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 465, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail659:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail660;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail660;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail660;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 =  TREE_OVERFLOW (res)
 ? drop_tree_overflow (res) : res;
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 466, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail660:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_285 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 HOST_WIDE_INT zero_val = tree_to_shwi (captures[2]);
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
      if (prec <= MAX_FIXED_MODE_SIZE
)
	{
	  if (tree_int_cst_sgn (captures[3]) < 0 || wi::to_widest (captures[3]) >= prec
)
	    {
	      if (zero_val != wi::to_widest (captures[3])
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail676;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail676;
		  {
		    tree _r;
		    _r =  constant_boolean_node (op == EQ_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[3]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 482, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail676:;
		}
	    }
	  else
	    {
	      if (zero_val < 0 || zero_val >= prec
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail677;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail677;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail677;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (tree_to_uhwi (captures[3]) + 1,
 false, prec));
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (type0,
 wi::shifted_mask (tree_to_uhwi (captures[3]), 1,
 false, prec));
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 483, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail677:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_294 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail689;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, copysigns, type, 2, res_op0, res_op1);
    if (!_r)
      goto next_after_fail689;
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 495, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail689:;
  return NULL_TREE;
}

tree
generic_simplify_300 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail697;
      {
	tree _r;
	_r = captures[0];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 501, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail697:;
    }
  return NULL_TREE;
}

tree
generic_simplify_305 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail702;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 506, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail702:;
    }
  return NULL_TREE;
}

tree
generic_simplify_310 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && wi::multiple_of_p (wi::to_widest (captures[1]), wi::to_widest (captures[2]), SIGNED)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail708;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, div, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 512, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail708:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_319 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail717;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 521, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail717:;
    }
  return NULL_TREE;
}

tree
generic_simplify_325 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TANH),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail725;
      {
	tree res_op0;
	res_op0 = build_one_cst (type);
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  _r1 = maybe_build_call_expr_loc (loc, COSH, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail725;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 529, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail725:;
    }
  return NULL_TREE;
}

tree
generic_simplify_332 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
    {
      if (tree_expr_nonnegative_p (captures[1]) && tree_expr_nonzero_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail733;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 537, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail733:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST
 && wi::neg_p (wi::to_wide (captures[1]), TYPE_SIGN (TREE_TYPE (captures[1])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail734;
	      {
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		res_op1 = captures[0];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 538, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail734:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_346 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2]))
 || VECTOR_INTEGER_TYPE_P (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
    {
      {
 tree cst = uniform_integer_cst_p (captures[2]);
 tree arg1_type = TREE_TYPE (cst);
 unsigned int prec = TYPE_PRECISION (arg1_type);
 wide_int max = wi::max_value (arg1_type);
 wide_int signed_max = wi::max_value (prec, SIGNED);
 wide_int min = wi::min_value (arg1_type);
	  if (wi::to_wide (cst) == max
)
	    {
	      if (cmp == GT_EXPR
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail766;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 554, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail766:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail767;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 = captures[2];
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 555, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail767:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail768;
			  {
			    tree _r;
			    _r =  constant_boolean_node (true, type);
			    if (TREE_SIDE_EFFECTS (captures[0]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 556, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail768:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail769;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 = captures[2];
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 557, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail769:;
			    }
			}
		    }
		}
	    }
	  else
	    {
	      if (wi::to_wide (cst) == min
)
		{
		  if (cmp == LT_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail770;
		      {
			tree _r;
			_r =  constant_boolean_node (false, type);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 558, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail770:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail771;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[2];
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 559, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail771:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail772;
			      {
				tree _r;
				_r =  constant_boolean_node (true, type);
				if (TREE_SIDE_EFFECTS (captures[0]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 560, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail772:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail773;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 561, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail773:;
				}
			    }
			}
		    }
		}
	      else
		{
		  if (wi::to_wide (cst) == max - 1
)
		    {
		      if (cmp == GT_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail774;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 562, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail774:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail775;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 563, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail775:;
			    }
			}
		    }
		  else
		    {
		      if (wi::to_wide (cst) == min + 1
)
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail776;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 564, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail776:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail777;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    tree _r;
				    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 565, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail777:;
				}
			    }
			}
		      else
			{
			  if (wi::to_wide (cst) == signed_max
 && TYPE_UNSIGNED (arg1_type)
 && TYPE_MODE (arg1_type) != BLKmode
 && prec == GET_MODE_PRECISION (SCALAR_INT_TYPE_MODE (arg1_type))
 && INTEGRAL_TYPE_P (arg1_type)
)
			    {
			      if (cmp == LE_EXPR || cmp == GT_EXPR
)
				{
				  {
 tree st = signed_type_for (TREE_TYPE (captures[2]));
				      if (cst == captures[2] && cmp == LE_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail778;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (TREE_TYPE (_o1[0]) != st)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  build_zero_cst (st);
					    tree _r;
					    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 566, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail778:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail779;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (TREE_TYPE (_o1[0]) != st)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 =  build_zero_cst (st);
						tree _r;
						_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 567, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail779:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail780;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
						      res_op0 = _r1;
						    }
						    tree res_op1;
						    res_op1 =  build_zero_cst (st);
						    tree _r;
						    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[2]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 568, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail780:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail781;
						      {
							tree res_op0;
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  build_zero_cst (st);
							tree _r;
							_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
							if (TREE_SIDE_EFFECTS (captures[2]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 569, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail781:;
						    }
						}
					    }
					}
				  }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_398 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (HYPOT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail864;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 633, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail864:;
  return NULL_TREE;
}

tree
generic_simplify_404 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail870;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 639, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail870:;
  return NULL_TREE;
}

tree
generic_simplify_410 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[3], op, captures[1], ERROR_MARK,
 NULL_TREE, NULL_TREE, captures[2], ERROR_MARK,
 NULL_TREE, NULL_TREE, pmop);
      if (utype
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail876;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail876;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail876;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail876;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[1];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		_r2 = fold_build2_loc (loc, op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 644, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail876:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_423 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[3])
 && tree_fits_uhwi_p (captures[4])
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
 unsigned HOST_WIDE_INT bits = tree_to_uhwi (captures[3]);
 unsigned HOST_WIDE_INT mask = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT lo = bits & 7;
 unsigned HOST_WIDE_INT hi = bits - lo;
	  if (bits < prec
 && mask < (256u>>lo)
 && bits < TYPE_PRECISION (TREE_TYPE(captures[0]))
)
	    {
	      {
 unsigned HOST_WIDE_INT ns = (prec - (hi + 8)) + lo;
		  if (ns == 0
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail893;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail893;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail893;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  if (TREE_TYPE (_o1[0]) != type)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 = captures[4];
			tree _r;
			_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 657, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail893:;
		    }
		  else
		    {
		      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
 tree nst = build_int_cst (integer_type_node, ns);
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail894;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail894;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail894;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[2];
				  if (TREE_TYPE (_o3[0]) != utype)
				    {
				      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] = nst;
				_r2 = fold_build2_loc (loc, RSHIFT_EXPR, utype, _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      if (TREE_TYPE (_o1[0]) != type)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[4];
			    tree _r;
			    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 658, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail894:;
		      }
		    }
	      }
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_438 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail943;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail943;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 679, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail943:;
  return NULL_TREE;
}

tree
generic_simplify_441 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) <= HOST_BITS_PER_WIDE_INT
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) > 0
 && tree_to_uhwi (captures[4]) < TYPE_PRECISION (type)
)
    {
      {
 unsigned int shiftc = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT mask = TREE_INT_CST_LOW (captures[5]);
 unsigned HOST_WIDE_INT newmask, zerobits = 0;
 tree shift_type = TREE_TYPE (captures[2]);
 unsigned int prec;
 if (shift == LSHIFT_EXPR)
 zerobits = ((HOST_WIDE_INT_1U << shiftc) - 1);
 else if (shift == RSHIFT_EXPR
 && type_has_mode_precision_p (shift_type))
 {
 prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 tree arg00 = captures[3];
 if (captures[2] != captures[3]
 && TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 {
 tree inner_type = TREE_TYPE (captures[3]);
 if (type_has_mode_precision_p (inner_type)
 && TYPE_PRECISION (inner_type) < prec)
 {
 prec = TYPE_PRECISION (inner_type);
 if (shiftc < prec)
 shift_type = inner_type;
 }
 }
 zerobits = HOST_WIDE_INT_M1U;
 if (shiftc < prec)
 {
 zerobits >>= HOST_BITS_PER_WIDE_INT - shiftc;
 zerobits <<= prec - shiftc;
 }
 if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && prec == TYPE_PRECISION (TREE_TYPE (captures[2])))
 {
 if ((mask & zerobits) == 0)
 shift_type = unsigned_type_for (TREE_TYPE (captures[2]));
 else
 zerobits = 0;
 }
 }
	  if ((mask & zerobits) == mask
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail948;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail948;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail948;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail948;
	      {
		tree _r;
		_r =  build_int_cst (type, 0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail948:;
	    }
	  else
	    {
	      {
 newmask = mask | zerobits;
		  if (newmask != mask && (newmask & (newmask + 1)) == 0
)
		    {
		      {
 for (prec = BITS_PER_UNIT;
 prec < HOST_BITS_PER_WIDE_INT; prec <<= 1)
 if (newmask == (HOST_WIDE_INT_1U << prec) - 1)
 break;
			  if (prec < HOST_BITS_PER_WIDE_INT
 || newmask == HOST_WIDE_INT_M1U
)
			    {
			      {
 tree newmaskt = build_int_cst_type (TREE_TYPE (captures[5]), newmask);
				  if (!tree_int_cst_equal (newmaskt, captures[5])
)
				    {
				      if (shift_type != TREE_TYPE (captures[2])
)
					{
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail949;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail949;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail949;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail949;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (TREE_TYPE (_o3[0]) != shift_type)
						    {
						      _r3 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o3[0]);
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						_r2 = fold_build2_loc (loc, shift, shift_type, _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      if (TREE_TYPE (_o1[0]) != type)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  newmaskt;
					    tree _r;
					    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail949:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail950;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail950;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail950;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    res_op1 =  newmaskt;
					    tree _r;
					    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 656, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail950:;
					}
				    }
			      }
			    }
		      }
		    }
	      }
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_464 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail976;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[0];
      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_each_one_cst (type);
    tree _r;
    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 703, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail976:;
  return NULL_TREE;
}

tree
generic_simplify_472 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree from_type = TREE_TYPE (captures[0]);
 tree c1_type = TREE_TYPE (captures[1]), c2_type = TREE_TYPE (captures[2]);
 enum tree_code code = ERROR_MARK;
 if (INTEGRAL_TYPE_P (from_type)
 && int_fits_type_p (captures[2], from_type)
 && (types_match (c1_type, from_type)
 || (TYPE_PRECISION (c1_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c1_type) == TYPE_SIGN (from_type))))
 && (types_match (c2_type, from_type)
 || (TYPE_PRECISION (c2_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c2_type) == TYPE_SIGN (from_type)))))
 {
 if (cmp != EQ_EXPR)
 code = minmax_from_comparison (cmp, captures[0], captures[1], captures[0], captures[2]);
 else if (int_fits_type_p (captures[1], from_type))
 code = EQ_EXPR;
 }
      if (code == MAX_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail984;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail984;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail984;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail984;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 710, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail984:;
	}
      else
	{
	  if (code == MIN_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail985;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail985;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail985;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail985;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 711, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail985:;
	    }
	  else
	    {
	      if (code == EQ_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail986;
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail986;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail986;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail986;
		  {
		    if (! tree_invariant_p (captures[1])) goto next_after_fail986;
		    tree res_op0;
		    {
		      tree _o1[3], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			{
			  tree _o3[1], _r3;
			  _o3[0] = unshare_expr (captures[1]);
			  if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
			    {
			      _r3 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
			    }
			  else
			    _r3 = _o3[0];
			  _o2[1] = _r3;
			}
			_r2 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o2[0], _o2[1]);
			_o1[0] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (TREE_TYPE (_o2[0]) != from_type)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, from_type, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[1] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (TREE_TYPE (_o2[0]) != from_type)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, from_type, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[2] = _r2;
		      }
		      _r1 = fold_build3_loc (loc, COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 712, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail986:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_509 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_isnan (TREE_REAL_CST_PTR (captures[1]))
 && (!HONOR_SNANS (captures[1]) || !TREE_REAL_CST (captures[1]).signalling)
 && !tree_expr_maybe_signaling_nan_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1041;
      {
	tree _r;
	_r = captures[0];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 753, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1041:;
    }
  return NULL_TREE;
}

tree
generic_simplify_516 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1051;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 763, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1051:;
  return NULL_TREE;
}

tree
generic_simplify_523 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1058;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1058;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1058;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1058;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 733, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1058:;
  return NULL_TREE;
}

tree
generic_simplify_531 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1066;
	  {
	    tree res_op0;
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      _o1[3] = captures[5];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[7];
	      _o1[6] = captures[8];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 7, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      if (!_r1)
	        goto next_after_fail1066;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[6]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[6]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 773, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1066:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_542 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (tans),
 const combined_fn ARG_UNUSED (atans))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1077;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1077:;
    }
  return NULL_TREE;
}

tree
generic_simplify_548 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1083;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = maybe_build_call_expr_loc (loc, tos, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail1083;
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1083:;
    }
  return NULL_TREE;
}

tree
generic_simplify_557 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ifn),
 const combined_fn ARG_UNUSED (lfn),
 const combined_fn ARG_UNUSED (llfn))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (TYPE_PRECISION (long_long_integer_type_node)
 == TYPE_PRECISION (long_integer_type_node)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1092;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, lfn, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1092;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 799, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1092:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_568 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1103;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1103;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 810, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1103:;
    }
  return NULL_TREE;
}

tree
generic_simplify_578 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (pfun))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 wide_int nz = tree_nonzero_bits (captures[0]);
	  if (nz == 1
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1113;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1113;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 815, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1113:;
	    }
	  else
	    {
	      if (wi::popcount (nz) == 1
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1114;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1114;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    if (TREE_TYPE (_o2[0]) != utype)
			      {
				_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  _o1[1] =  build_int_cst (integer_type_node,
 wi::ctz (nz));
			  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, utype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1114:;
		  }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_FLOAT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
1
 && type == TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1183;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1183:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
	      if (((
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1184;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1184:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1185;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1185:;
		    }
		  else
		    {
		      if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1186;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1186:;
			}
		      else
			{
			  if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1187;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1187:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1188;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1188:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1189;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 840, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1189:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1190;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1190:;
					}
				    }
				}
			    }
			}
		    }
		}
	  }
	}
        break;
      }
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
	      if (((
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1191;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1191:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1192;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1192:;
		    }
		  else
		    {
		      if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1193;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1193:;
			}
		      else
			{
			  if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1194;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1194:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1195;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1195:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1196;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 840, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1196:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1197;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1197:;
					}
				    }
				}
			    }
			}
		    }
		}
	  }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_BIT_IOR_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1306;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 881, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1306:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_63 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_64 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_65 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_all_onesp (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_all_onesp (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_66 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q21, _q20 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q41 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q31 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _p0, _q30 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  {
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case EQ_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q31, _q30 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_minus_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_73 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_minus_onep (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_74 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_onep (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_75 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_76 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
	      tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
	      tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      tree res = generic_simplify_80 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			      tree res = generic_simplify_80 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      {
	tree _p1_pops[1];
	if (tree_nop_convert (_p1, _p1_pops))
	  {
	    tree _q50 = _p1_pops[0];
	    switch (TREE_CODE (_q50))
	      {
	      case EQ_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q50, 0);
		  tree _q61 = TREE_OPERAND (_q50, 1);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
      }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q61 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q60 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q61 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q60 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q71 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q70 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q71 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q70 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case EQ_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	    break;
	  }
        default:;
        }
    }
}
  if (integer_all_onesp (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1307;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 927, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1307:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1308;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1308;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 928, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1308:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree _q40_pops[1];
		if (tree_maybe_bit_not (_q40, _q40_pops))
		  {
		    tree _q50 = _q40_pops[0];
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	      break;
	    }
          default:;
          }
	{
	  tree _q20_pops[1];
	  if (tree_maybe_bit_not (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
		      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
        break;
      }
    default:;
    }
  {
    tree _p1_pops[1];
    if (tree_maybe_bit_not (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
      }
  }
  {
    tree _p0_pops[1];
    if (tree_maybe_bit_not (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	  tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
      }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_87 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q41 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q40 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q20, _q31 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q20, _q30 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _q31 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q31, _q30 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q30, _q31 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q31, _q30 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_90 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			    {
			      if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			    {
			      if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_90 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q20 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q21 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q21 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q60 };
			    tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
		      tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
			  tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
			  tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q51, _q20 };
			  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _q50, _q20 };
			  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _q20 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _q20 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _p0 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
	      tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _q30, _p0 };
	      tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q61 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q60 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q61 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q60 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q51 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q51 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q50 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q71 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q70 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q71 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q70 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q61 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q60 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q61 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q60 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_101 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_102 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q61 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q60 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q61 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q60 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p0, _q21 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q51, _p0, _q20 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q50, _p0, _q21 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q30, _p0, _q31 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q31, _p0, _q30 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q30, _p0, _q31 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q31, _p0, _q30 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q40))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      {
		tree _q31_pops[1];
		if (tree_nop_convert (_q31, _q31_pops))
		  {
		    tree _q50 = _q31_pops[0];
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q31))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q31))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				tree _q71 = TREE_OPERAND (_p1, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    switch (TREE_CODE (_q71))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q71 };
					    tree res = generic_simplify_115 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
					    if (res) return res;
					  }
				          break;
				        }
				      default:;
				      }
				  }
			        break;
			      }
			    default:;
			    }
			{
			  tree _p1_pops[1];
			  if (tree_nop_convert (_p1, _p1_pops))
			    {
			      tree _q70 = _p1_pops[0];
			      switch (TREE_CODE (_q70))
			        {
				case MULT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    {
				      tree _q80_pops[1];
				      if (tree_nop_convert (_q80, _q80_pops))
				        {
					  tree _q90 = _q80_pops[0];
					  switch (TREE_CODE (_q81))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q70, _q90, _q81 };
						  tree res = generic_simplify_114 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
						  if (res) return res;
						}
					        break;
					      }
					    default:;
					    }
				        }
				    }
				    break;
				  }
			        default:;
			        }
			    }
			}
			  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
				tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      break;
	    }
          default:;
          }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case BIT_AND_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	    switch (TREE_CODE (_q40))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q41))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	    break;
	  }
        default:;
        }
    }
}
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if (integer_zerop (_q22))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q61))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1309;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1309;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1309;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1309:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q62))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1310;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1310;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1310:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, EQ_EXPR, NE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR, EQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNEQ_EXPR, LTGT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LTGT_EXPR, UNEQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if (integer_zerop (_q22))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q61))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1311;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1311;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1311;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1311:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q62))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1312;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1312;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1312;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1312:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, EQ_EXPR, NE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR, EQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNEQ_EXPR, LTGT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LTGT_EXPR, UNEQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      tree _q42 = TREE_OPERAND (_q21, 2);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q60 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q61 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q60 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q61 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _p0, _q21 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q21, _p0, _q20 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q20, _p0, _q21 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_124 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _p0, _q21 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_124 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _p0, _q20 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_131 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_131 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q51 };
			tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_133 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_133 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_137 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_137 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
			tree res = generic_simplify_140 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q51 };
			tree res = generic_simplify_140 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q51))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50, _q51 };
			    tree res = generic_simplify_141 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q51, _p0, _q21 };
				tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    {
	      tree _p1_pops[1];
	      if (tree_nop_convert (_p1, _p1_pops))
	        {
		  tree _q50 = _p1_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case MULT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree _q60_pops[1];
			  if (tree_nop_convert (_q60, _q60_pops))
			    {
			      tree _q70 = _q60_pops[0];
			      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				{
				  switch (TREE_CODE (_q61))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _q61, _p0, _q21 };
					  tree res = generic_simplify_115 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
					  if (res) return res;
					}
				        break;
				      }
				    default:;
				    }
			        }
			    }
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (tree_truth_valued_p (_p1))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
}
if (tree_truth_valued_p (_p0))
  {
    {
      tree _p1_pops[1];
      if (tree_logical_inverted_value (_p1, _p1_pops))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
  }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
		    tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case MULT_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      switch (TREE_CODE (_q41))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
			      tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			      if (res) return res;
			    }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	    }
	    break;
	  }
        default:;
        }
    }
}
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1313;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1313:;
			  }
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1314;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1314:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1315;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1315:;
			  }
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1316;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1316:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
	      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1317;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1317;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1317;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1317:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1318;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1318;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1318;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1318;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1318:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1319;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1319;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1319;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1319;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1319:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case UNORDERED_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q50 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q50, 0) && types_match (_q51, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			if (types_match (captures[0], captures[1])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1320;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 929, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1320:;
			  }
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q51 };
			tree res = generic_simplify_146 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
			tree res = generic_simplify_146 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case UNORDERED_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			tree res = generic_simplify_147 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _p0, _q20 };
			tree res = generic_simplify_147 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				  {
				    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				      {
					if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1321;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1321;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1321:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1322;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1322;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1322;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1322;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1322:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
				      {
					if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1323;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1323;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1323:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1324;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1324;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1324;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1324;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1324:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				  {
				    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				      {
					if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1325;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1325;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1325:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1326;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1326;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1326;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1326;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1326:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
				      {
					if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1327;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1327;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1327:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1328;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1328;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1328;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1328;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1328:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				      {
					if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1329;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1329;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1329:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1330;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1330;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1330;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1330;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1330:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
				      {
					if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1331;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1331;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1331:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1332;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1332;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1332;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1332;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1332:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				      {
					if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1333;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1333;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1333:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1334;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1334;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1334;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1334;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1334:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
				      {
					if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1335;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1335;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1335:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1336;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1336;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1336;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1336;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1336:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
		    {
		      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
			    if (VECTOR_INTEGER_TYPE_P (type)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1337;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    captures[3] = _r1;
				  }
				  res_op0 = unshare_expr (captures[3]);
				  tree res_op1;
				  res_op1 = captures[3];
				  tree res_op2;
				  res_op2 = captures[1];
				  tree _r;
				  _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1337:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop
