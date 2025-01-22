/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_negate_expr_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case INTEGER_CST:
      {
	{
	  if ((INTEGRAL_TYPE_P (type)
 && TYPE_UNSIGNED (type))
 || (!TYPE_OVERFLOW_SANITIZED (type)
 && may_negate_without_overflow_p (t))
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 14, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    case FIXED_CST:
      {
	{
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 15, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case NEGATE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  if (!TYPE_OVERFLOW_SANITIZED (type)
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 16, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    case REAL_CST:
      {
	{
	  if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (t))
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 17, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    case VECTOR_CST:
      {
	{
	  if (FLOAT_TYPE_P (TREE_TYPE (type)) || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 18, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    case MINUS_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if ((ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_WRAPS (type))
 || (FLOAT_TYPE_P (type)
 && !HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && !HONOR_SIGNED_ZEROS (type))
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 19, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
tree_unsigned_integer_sat_add (tree t, tree *res_ops)
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
	  case PLUS_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      {
		tree _p1_pops[2];
		if (tree_usadd_overflow_mask (_p1, _p1_pops))
		  {
		    tree _q50 = _p1_pops[0];
		    tree _q51 = _p1_pops[1];
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				{
				  if (types_match (type, captures[0], captures[1])
)
				    {
				      {
					res_ops[0] = captures[0];
					res_ops[1] = captures[1];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
					return true;
				      }
				    }
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
			      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				{
				  if (types_match (type, captures[0], captures[1])
)
				    {
				      {
					res_ops[0] = captures[0];
					res_ops[1] = captures[1];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
					return true;
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
	  case REALPART_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_q20))
		    {
		    case CFN_ADD_OVERFLOW:
		      if (call_expr_nargs (_q20) == 2)
    {
			  tree _q30 = CALL_EXPR_ARG (_q20, 0);
			  tree _q31 = CALL_EXPR_ARG (_q20, 1);
			  switch (TREE_CODE (_p1))
			    {
			    case NEGATE_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case IMAGPART_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
					    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					      {
						if (types_match (type, captures[0], captures[1])
)
						  {
						    {
						      res_ops[0] = captures[0];
						      res_ops[1] = captures[1];
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 46, __FILE__, __LINE__, false);
						      return true;
						    }
						  }
					      }
					  }
				        }
				      break;
				    }
				  CASE_CONVERT:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      switch (TREE_CODE (_q70))
				        {
					case NE_EXPR:
					  {
					    tree _q80 = TREE_OPERAND (_q70, 0);
					    tree _q81 = TREE_OPERAND (_q70, 1);
					    switch (TREE_CODE (_q80))
					      {
					      case IMAGPART_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
						    {
						      if (integer_zerop (_q81))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
							    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
							      {
								if (types_match (type, captures[0], captures[1])
)
								  {
								    {
								      res_ops[0] = captures[0];
								      res_ops[1] = captures[1];
								      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
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
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      break;
	    }
	  case NEGATE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case REALPART_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_p1, 0);
			  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
			    {
			      switch (TREE_CODE (_q50))
			        {
				case CALL_EXPR:
				  switch (get_call_combined_fn (_q50))
				    {
				    case CFN_ADD_OVERFLOW:
				      if (call_expr_nargs (_q50) == 2)
    {
					  tree _q70 = CALL_EXPR_ARG (_q50, 0);
					  tree _q71 = CALL_EXPR_ARG (_q50, 1);
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q70, _q71, _q30 };
					    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					      {
						if (types_match (type, captures[0], captures[1])
)
						  {
						    {
						      res_ops[0] = captures[0];
						      res_ops[1] = captures[1];
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 46, __FILE__, __LINE__, false);
						      return true;
						    }
						  }
					      }
					  }
				        }
				      break;
				    default:;
				    }
				  break;
			        default:;
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
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case NE_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case IMAGPART_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				if (integer_zerop (_q41))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case REALPART_EXPR:
				        {
					  tree _q80 = TREE_OPERAND (_p1, 0);
					  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
					    {
					      switch (TREE_CODE (_q80))
					        {
						case CALL_EXPR:
						  switch (get_call_combined_fn (_q80))
						    {
						    case CFN_ADD_OVERFLOW:
						      if (call_expr_nargs (_q80) == 2)
    {
							  tree _q100 = CALL_EXPR_ARG (_q80, 0);
							  tree _q101 = CALL_EXPR_ARG (_q80, 1);
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _q100, _q101, _q50 };
							    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
							      {
								if (types_match (type, captures[0], captures[1])
)
								  {
								    {
								      res_ops[0] = captures[0];
								      res_ops[1] = captures[1];
								      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
								      return true;
								    }
								  }
							      }
							  }
						        }
						      break;
						    default:;
						    }
						  break;
					        default:;
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
      {
	tree _p0_pops[2];
	if (tree_usadd_overflow_mask (_p0, _p0_pops))
	  {
	    tree _q20 = _p0_pops[0];
	    tree _q21 = _p0_pops[1];
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
			      {
				if (types_match (type, captures[0], captures[1])
)
				  {
				    {
				      res_ops[0] = captures[0];
				      res_ops[1] = captures[1];
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
				      return true;
				    }
				  }
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
			    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
			      {
				if (types_match (type, captures[0], captures[1])
)
				  {
				    {
				      res_ops[0] = captures[0];
				      res_ops[1] = captures[1];
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
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
      }
        break;
      }
    case COND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	tree _p2 = TREE_OPERAND (t, 2);
	switch (TREE_CODE (_p0))
	  {
	  case GE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case PLUS_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    if (integer_minus_onep (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
					    return true;
					  }
					}
				    }
				}
			      }
			  }
		      }
		    if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    if (integer_minus_onep (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
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
	  case LT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case PLUS_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
		      {
			if (integer_minus_onep (_p1))
			  {
			    if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
					    return true;
					  }
					}
				    }
				}
			      }
			  }
		      }
		    if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		      {
			if (integer_minus_onep (_p1))
			  {
			    if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
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
	  case LE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q21))
	        {
		case PLUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q21, 0);
		    tree _q41 = TREE_OPERAND (_q21, 1);
		    if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    if (integer_minus_onep (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
					    return true;
					  }
					}
				    }
				}
			      }
			  }
		      }
		    if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    if (integer_minus_onep (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
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
	  case GT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q21))
	        {
		case PLUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q21, 0);
		    tree _q41 = TREE_OPERAND (_q21, 1);
		    if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		      {
			if (integer_minus_onep (_p1))
			  {
			    if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 51, __FILE__, __LINE__, false);
					    return true;
					  }
					}
				    }
				}
			      }
			  }
		      }
		    if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		      {
			if (integer_minus_onep (_p1))
			  {
			    if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (types_match (type, captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 51, __FILE__, __LINE__, false);
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
	  case EQ_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q30))
		          {
			  case CFN_ADD_OVERFLOW:
			    if (call_expr_nargs (_q30) == 2)
    {
				tree _q40 = CALL_EXPR_ARG (_q30, 0);
				tree _q41 = CALL_EXPR_ARG (_q30, 1);
				if (integer_zerop (_q21))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case REALPART_EXPR:
				        {
					  tree _q80 = TREE_OPERAND (_p1, 0);
					  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
					    {
					      if (integer_minus_onep (_p2))
						{
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
						    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						      {
							if (types_match (type, captures[0], captures[1])
)
							  {
							    {
							      res_ops[0] = captures[0];
							      res_ops[1] = captures[1];
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 52, __FILE__, __LINE__, false);
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
			      }
			    break;
			  default:;
		          }
		        break;
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
	      switch (TREE_CODE (_q20))
	        {
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q30))
		          {
			  case CFN_ADD_OVERFLOW:
			    if (call_expr_nargs (_q30) == 2)
    {
				tree _q40 = CALL_EXPR_ARG (_q30, 0);
				tree _q41 = CALL_EXPR_ARG (_q30, 1);
				if (integer_zerop (_q21))
				  {
				    if (integer_minus_onep (_p1))
				      {
					switch (TREE_CODE (_p2))
					  {
					  case REALPART_EXPR:
					    {
					      tree _q90 = TREE_OPERAND (_p2, 0);
					      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
						{
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
						    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						      {
							if (types_match (type, captures[0], captures[1])
)
							  {
							    {
							      res_ops[0] = captures[0];
							      res_ops[1] = captures[1];
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 53, __FILE__, __LINE__, false);
							      return true;
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
				  }
				switch (TREE_CODE (_q41))
				  {
				  case INTEGER_CST:
				    {
				      if (integer_zerop (_q21))
					{
					  if (integer_minus_onep (_p1))
					    {
					      switch (TREE_CODE (_p2))
					        {
						case REALPART_EXPR:
						  {
						    tree _q90 = TREE_OPERAND (_p2, 0);
						    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
							  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
							    {
							      if (types_match (type, captures[0]) && int_fits_type_p (captures[1], type)
)
								{
								  {
								    res_ops[0] = captures[0];
								    res_ops[1] = captures[1];
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 54, __FILE__, __LINE__, false);
								    return true;
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
				        }
				      break;
				    }
			          default:;
			          }
			      }
			    break;
			  default:;
		          }
		        break;
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
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q21 };
			    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
			      {
				if (types_match (type, captures[0], captures[1])
)
				  {
				    {
 unsigned precision = TYPE_PRECISION (type);
 wide_int cst_1 = wi::to_wide (captures[1]);
 wide_int cst_2 = wi::to_wide (captures[2]);
 wide_int max = wi::mask (precision, false, precision);
 wide_int sum = wi::add (cst_1, cst_2);
					if (wi::eq_p (max, sum)
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 55, __FILE__, __LINE__, false);
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
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_58 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail277;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 165, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail277:;
    }
  return NULL_TREE;
}

tree
generic_simplify_61 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (log1),
 const enum tree_code ARG_UNUSED (log2),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail280;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[4];
      _r1 = fold_build2_loc (loc, log2, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
    if (!_r)
      goto next_after_fail280;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 168, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail280:;
  return NULL_TREE;
}

tree
generic_simplify_65 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail284;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail284;
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
	  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 172, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail284:;
    }
  return NULL_TREE;
}

tree
generic_simplify_74 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail294;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail294;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 179, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail294:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail295;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail295;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 180, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail295:;
    }
  return NULL_TREE;
}

tree
generic_simplify_82 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail305;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail305;
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
next_after_fail305:;
  return NULL_TREE;
}

tree
generic_simplify_89 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail312;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail312;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 191, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail312:;
  return NULL_TREE;
}

tree
generic_simplify_95 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail318;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail318;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 184, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail318:;
  return NULL_TREE;
}

tree
generic_simplify_101 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((TREE_CODE (captures[3]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (int_fits_type_p (captures[3], TREE_TYPE (captures[1]))
 || tree_nop_conversion_p (TREE_TYPE (captures[1]), type)))
 || types_match (captures[1], captures[3]))
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (TREE_TYPE (captures[1])) != OFFSET_TYPE
 && (bitop != BIT_AND_EXPR ||
0
)
 && (
 TYPE_PRECISION (TREE_TYPE (captures[1])) < TYPE_PRECISION (type)
 || (
0
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (type))
 || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT
 || !type_has_mode_precision_p (type)
 || (
0
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && single_use (captures[0])
 && single_use (captures[2])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail328;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 199, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail328:;
    }
  return NULL_TREE;
}

tree
generic_simplify_113 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail341;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
		{
		  _r3 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		}
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    _r2 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[7]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[7]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 204, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail341:;
    }
  return NULL_TREE;
}

tree
generic_simplify_122 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner_op),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool fail = false;
 wide_int zero_mask_not;
 wide_int C0;
 wide_int cst_emit;
 if (TREE_CODE (captures[1]) == SSA_NAME)
 zero_mask_not = get_nonzero_bits (captures[1]);
 else
 fail = true;
 if (inner_op == BIT_XOR_EXPR)
 {
 C0 = wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3]));
 cst_emit = C0 | wi::to_wide (captures[3]);
 }
 else
 {
 C0 = wi::to_wide (captures[2]);
 cst_emit = C0 ^ wi::to_wide (captures[3]);
 }
      if (!fail && (C0 & zero_mask_not) == 0
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail355;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail355;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail355;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail355;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  wide_int_to_tree (type, cst_emit);
	    tree _r;
	    _r = fold_build2_loc (loc, outer_op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 220, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail355:;
	}
      else
	{
	  if (!fail && (wi::to_wide (captures[3]) & zero_mask_not) == 0
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail356;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail356;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail356;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail356;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  wide_int_to_tree (type, cst_emit);
		tree _r;
		_r = fold_build2_loc (loc, inner_op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 221, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail356:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_137 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail402;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail402;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 241, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail402:;
  return NULL_TREE;
}

tree
generic_simplify_140 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail406;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail406;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 224, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail406:;
    }
  return NULL_TREE;
}

tree
generic_simplify_144 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[2]) > 0
 && tree_int_cst_sgn (captures[4]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[3])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (t));
 wide_int c = wi::add (wi::lshift (wone, wi::to_wide (captures[2])),
 wi::lshift (wone, wi::to_wide (captures[4])));
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail410;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail410;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail410;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != t)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, t, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t,c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 245, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail410:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_148 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (logic),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (ext))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (captures[1]) != INTEGER_CST
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail414;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  _o1[1] = captures[4];
	  _r1 = fold_build2_loc (loc, ext, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail414:;
    }
  return NULL_TREE;
}

tree
generic_simplify_155 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail421;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 255, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail421:;
  return NULL_TREE;
}

tree
generic_simplify_161 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail427;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 261, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail427:;
    }
  return NULL_TREE;
}

tree
generic_simplify_171 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail438;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail438;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 271, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail438:;
    }
  else
    {
      if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[3]))
)
	{
	  {
 tree utype = TREE_TYPE (captures[1]);
 if (TYPE_PRECISION (utype) < TYPE_PRECISION (TREE_TYPE (captures[3])))
 utype = TREE_TYPE (captures[3]);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail439;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
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
		  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
		if (!_r)
		  goto next_after_fail439;
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail439:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_189 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[3]) != INTEGER_CST
 && single_use (captures[0])
 && !integer_zerop (captures[2]) && !integer_minus_onep (captures[2])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail460;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 287, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail460:;
    }
  return NULL_TREE;
}

tree
generic_simplify_198 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail469;
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
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, mod, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != utype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 296, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail469:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_210 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail497;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[3];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 323, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail497:;
    }
  return NULL_TREE;
}

tree
generic_simplify_215 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ocmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TREE_CODE (TREE_TYPE (captures[0])) != COMPLEX_TYPE
 && (VECTOR_TYPE_P (type) || !VECTOR_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail502;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail502;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, ocmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 327, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail502:;
    }
  return NULL_TREE;
}

tree
generic_simplify_222 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail511;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail511;
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
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (utype);
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 336, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail511:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_229 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (invrot),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail528;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 353, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail528:;
  return NULL_TREE;
}

tree
generic_simplify_233 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail532;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != ctype)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, ctype, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != ctype)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, ctype, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 357, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail532:;
  }
  return NULL_TREE;
}

tree
generic_simplify_242 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail547;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 371, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail547:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_246 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail551;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  build_real (TREE_TYPE (captures[1]), dconst0);
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 374, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail551:;
    }
  else
    {
      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[0]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail552;
	  {
	    tree res_op0;
	    res_op0 =  build_real (TREE_TYPE (captures[0]), dconst0);
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 375, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail552:;
	}
      else
	{
	  if (REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[1])
 && !tree_expr_maybe_signaling_nan_p (captures[0])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail553;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 376, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail553:;
	    }
	  else
	    {
	      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_ISNAN (TREE_REAL_CST (captures[0]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[0])
 && !tree_expr_signaling_nan_p (captures[1])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail554;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == NE_EXPR, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 377, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail554:;
		}
	      else
		{
		  if (REAL_VALUE_ISINF (TREE_REAL_CST (captures[1]))
 && MODE_HAS_INFINITIES (TYPE_MODE (TREE_TYPE (captures[1])))
)
		    {
		      {
 REAL_VALUE_TYPE max;
 enum tree_code code = cmp;
 bool neg = REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]));
 if (neg)
 code = swap_tree_comparison (code);
			  if (code == GT_EXPR
 && !(HONOR_NANS (captures[0]) && flag_trapping_math)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail555;
			      {
				tree _r;
				_r =  constant_boolean_node (false, type);
				if (TREE_SIDE_EFFECTS (captures[0]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 378, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail555:;
			    }
			  else
			    {
			      if (code == LE_EXPR
)
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail556;
				      {
					tree _r;
					_r =  constant_boolean_node (true, type);
					if (TREE_SIDE_EFFECTS (captures[0]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 379, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail556:;
				    }
				  else
				    {
				      if (!flag_trapping_math
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail557;
					  {
					    if (! tree_invariant_p (captures[0])) goto next_after_fail557;
					    tree res_op0;
					    res_op0 = unshare_expr (captures[0]);
					    tree res_op1;
					    res_op1 = captures[0];
					    tree _r;
					    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 380, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail557:;
					}
				    }
				}
			      else
				{
				  if ((code == EQ_EXPR && !(HONOR_NANS (captures[0]) && flag_trapping_math))
 || code == GE_EXPR
)
				    {
				      {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
					  if (neg
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail558;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree res_op1;
						res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						tree _r;
						_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[1]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 381, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail558:;
					    }
					  else
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail559;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree res_op1;
						res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						tree _r;
						_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[1]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 382, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail559:;
					    }
				      }
				    }
				  else
				    {
				      if (code == LT_EXPR
)
					{
					  {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
					      if (neg
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail560;
						  {
						    tree res_op0;
						    res_op0 = captures[0];
						    tree res_op1;
						    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						    tree _r;
						    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[1]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 383, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail560:;
						}
					      else
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail561;
						  {
						    tree res_op0;
						    res_op0 = captures[0];
						    tree res_op1;
						    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						    tree _r;
						    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[1]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 384, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail561:;
						}
					  }
					}
				      else
					{
					  if (code == NE_EXPR
)
					    {
					      {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
						  if (! HONOR_NANS (captures[0])
)
						    {
						      if (neg
)
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail562;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 385, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail562:;
							}
						      else
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail563;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 386, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail563:;
							}
						    }
						  else
						    {
						      if (neg
)
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail564;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, UNGE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 387, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail564:;
							}
						      else
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail565;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, UNLE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 388, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail565:;
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
    }
  return NULL_TREE;
}

tree
generic_simplify_284 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
 bool ok = true;
 if (sanitize_flags_p (SANITIZE_BUILTIN)
 && (!cfun
 || (cfun->curr_properties & PROP_ssa) == 0))
 ok = false;
      if (ok && prec <= MAX_FIXED_MODE_SIZE
)
	{
	  if (tree_int_cst_sgn (captures[2]) < 0 || wi::to_widest (captures[2]) >= prec
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail674;
	      {
		tree _r;
		_r =  constant_boolean_node (op == EQ_EXPR ? false : true, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 480, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail674:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail675;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail675;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[1];
		  _o1[1] =  wide_int_to_tree (type0,
 wi::mask (tree_to_uhwi (captures[2]) + 1,
 false, prec));
		  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  wide_int_to_tree (type0,
 wi::shifted_mask (tree_to_uhwi (captures[2]), 1,
 false, prec));
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 481, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail675:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_291 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (cmp != NE_EXPR
 || ! FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || ! tree_expr_maybe_nan_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail686;
      {
	tree _r;
	_r =  constant_boolean_node (false, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 492, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail686:;
    }
  return NULL_TREE;
}

tree
generic_simplify_296 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail691;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail691;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 497, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail691:;
  return NULL_TREE;
}

tree
generic_simplify_302 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && ssa_name_has_boolean_range (captures[1])
 && !flag_non_call_exceptions
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail699;
      {
	tree _r;
	_r = captures[0];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 503, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail699:;
    }
  return NULL_TREE;
}

tree
generic_simplify_307 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[2])
 && tree_int_cst_sgn (captures[2]) > 0
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && wi::to_wide (captures[2]) + wi::to_wide (captures[1]) == 0
)
    {
      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail705;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail705;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_int_cst (integer_type_node,
 wi::exact_log2 (wi::to_wide (captures[2])));
	tree _r;
	_r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 509, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail705:;
    }
  return NULL_TREE;
}

tree
generic_simplify_316 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail714;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail714;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 518, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail714:;
  return NULL_TREE;
}

tree
generic_simplify_321 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SQRT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail721;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, SQRT, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail721;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 525, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail721:;
    }
  return NULL_TREE;
}

tree
generic_simplify_328 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (!TREE_OVERFLOW (captures[2])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail728;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] =  build_one_cst (type);
	      _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, POW, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail728;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 532, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail728:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_335 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && (CONSTANT_CLASS_P (captures[1]) || single_use (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail737;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 541, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail737:;
    }
  return NULL_TREE;
}

tree
generic_simplify_344 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (cmp2))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[2])) && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && wi::gt_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
)
    {
      {
 tree utype = TREE_TYPE (captures[2]);
 wide_int denom = wi::to_wide (captures[1]);
 wide_int right = wi::to_wide (captures[2]);
 wide_int smax = wi::sdiv_trunc (wi::max_value (TREE_TYPE (captures[0])), denom);
 wide_int smin = wi::sdiv_trunc (wi::min_value (TREE_TYPE (captures[0])), denom);
 bool small = wi::leu_p (right, smax);
 bool large = wi::geu_p (right, smin);
	  if (small || large
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail748;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail748;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail748;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (TREE_TYPE (_o1[0]) != utype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (TREE_TYPE (_o2[0]) != TREE_TYPE (res_op0))
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 552, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail748:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail749;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail749;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail749;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build2_loc (loc, cmp2, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 553, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail749:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_358 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (acmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree cst = uniform_integer_cst_p (captures[1]);
      if (tree_int_cst_sgn (cst) == -1
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail800;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  build_uniform_cst (TREE_TYPE (captures[1]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
	    tree _r;
	    _r = fold_build2_loc (loc, acmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 587, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail800:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_361 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail803;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail803;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, out, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 572, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail803:;
    }
  return NULL_TREE;
}

tree
generic_simplify_366 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (cmp3),
 const enum tree_code ARG_UNUSED (bit_op),
 const combined_fn ARG_UNUSED (ffs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
      if (integer_zerop (captures[2])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail808;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	    tree _r;
	    _r = fold_build2_loc (loc, cmp2, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 591, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail808:;
	}
      else
	{
	  if (tree_int_cst_sgn (captures[2]) < 0
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail809;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == GT_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 592, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail809:;
	    }
	  else
	    {
	      if (wi::to_widest (captures[2]) >= prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail810;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == GT_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 593, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail810:;
		}
	      else
		{
		  if (wi::to_widest (captures[2]) == prec - 1
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail811;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::shifted_mask (prec - 1, 1,
 false, prec));
			tree _r;
			_r = fold_build2_loc (loc, cmp3, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 594, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail811:;
		    }
		  else
		    {
		      if (single_use (captures[0])
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail812;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail812;
			  {
			    if (! tree_invariant_p (captures[1])) goto next_after_fail812;
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = unshare_expr (captures[1]);
			      _o1[1] =  build_zero_cst (TREE_TYPE (captures[1]));
			      _r1 = fold_build2_loc (loc, cmp2, type, _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[1];
				_o2[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::mask (tree_to_uhwi (captures[2]),
 false, prec));
				_r2 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _o1[1] =  build_zero_cst (TREE_TYPE (captures[1]));
			      _r1 = fold_build2_loc (loc, cmp3, type, _o1[0], _o1[1]);
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, bit_op, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 595, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail812:;
			}
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_388 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (coss))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail854;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, coss, type, 1, res_op0);
    if (!_r)
      goto next_after_fail854;
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 623, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail854:;
  return NULL_TREE;
}

tree
generic_simplify_391 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (pows))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 HOST_WIDE_INT n;
      if (real_isinteger (&TREE_REAL_CST (captures[2]), &n) && (n & 1) == 0
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail857;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, pows, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail857;
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 626, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail857:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_393 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (pow))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (! HONOR_INFINITIES (type)
 && ! flag_trapping_math
 && ! flag_errno_math
)
	{
	  if (! HONOR_NANS (type) && ! HONOR_SIGNED_ZEROS (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail859;
	      {
		tree _r;
		_r = captures[0];
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 628, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail859:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_397 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (hypots))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail863;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, hypots, type, 2, res_op0, res_op1);
    if (!_r)
      goto next_after_fail863;
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 632, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail863:;
  return NULL_TREE;
}

tree
generic_simplify_403 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail869;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 638, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail869:;
  return NULL_TREE;
}

tree
generic_simplify_408 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[5], op, captures[1], bitop,
 captures[2], captures[3], captures[4], ERROR_MARK, NULL_TREE,
 NULL_TREE, pmop);
      if (utype
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail874;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail874;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail874;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail874;
	  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail874;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail874;
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
		_o2[0] = captures[5];
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 642, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail874:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_424 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[2])
 && tree_to_uhwi (captures[2]) < 256
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
 tree nst = build_int_cst (integer_type_node, prec - 8);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail895;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] = captures[1];
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
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 659, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail895:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_433 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail926;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail926;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 679, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail926:;
  return NULL_TREE;
}

tree
generic_simplify_436 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail941;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail941;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 680, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail941:;
    }
  return NULL_TREE;
}

tree
generic_simplify_439 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail944;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail944;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 680, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail944:;
    }
  return NULL_TREE;
}

tree
generic_simplify_442 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail951;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, LTGT_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 681, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail951:;
  return NULL_TREE;
}

tree
generic_simplify_445 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && type_has_mode_precision_p (TREE_TYPE (captures[4]))
 && type_has_mode_precision_p (type)
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], captures[4])
 && (tree_int_cst_min_precision (captures[5], TYPE_SIGN (TREE_TYPE (captures[2])))
 <= TYPE_PRECISION (TREE_TYPE (captures[2])))
 && (wi::to_wide (captures[5])
 & wi::mask (TYPE_PRECISION (TREE_TYPE (captures[2])),
 true, TYPE_PRECISION (type))) == 0
)
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2]))
)
	{
	  {
 tree ntype = TREE_TYPE (captures[2]);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail954;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[2];
		    _o2[1] = captures[4];
		    _r2 = fold_build2_loc (loc, op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[5];
		    if (TREE_TYPE (_o2[0]) != ntype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, ntype, _o2[0]);
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
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 683, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail954:;
	  }
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail955;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
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
		    {
		      tree _o3[1], _r3;
		      _o3[0] = captures[4];
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
		    _o2[0] = captures[5];
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
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 684, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail955:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_462 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! TYPE_UNSIGNED (type)
 && ! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && single_use (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail973;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail973:;
    }
  return NULL_TREE;
}

tree
generic_simplify_470 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[2])
 && tree_expr_nonzero_p (captures[3])
 && expr_no_side_effects_p (captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail982;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail982;
      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail982;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail982;
      {
	tree _r;
	_r = captures[1];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 708, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail982:;
    }
  return NULL_TREE;
}

tree
generic_simplify_478 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree_code code = minmax_from_comparison (cmp, captures[0], captures[1], captures[0], captures[4]);
      if ((cmp == LT_EXPR || cmp == LE_EXPR)
 && code == MIN_EXPR
 && integer_nonzerop (fold_build2 (LE_EXPR, boolean_type_node, captures[3], captures[4]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail994;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail994;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail994;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail994;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    res_op1 = captures[4];
	    tree _r;
	    _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 720, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail994:;
	}
      else
	{
	  if ((cmp == GT_EXPR || cmp == GE_EXPR)
 && code == MAX_EXPR
 && integer_nonzerop (fold_build2 (GE_EXPR, boolean_type_node, captures[3], captures[4]))
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail995;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail995;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail995;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail995;
	      {
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		res_op1 = captures[4];
		tree _r;
		_r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 721, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail995:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_495 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1015;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 740, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1015:;
  return NULL_TREE;
}

tree
generic_simplify_501 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (minmax == MIN_EXPR
)
	    {
	      if (known_le (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1024;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1024;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1024;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1024:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1025;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1025;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1025;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1025:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1026;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1026;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1026;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1026:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1027;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1027;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1027;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1027:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_518 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1053;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      _r1 = maybe_build_call_expr_loc (loc, bswap, TREE_TYPE (_o1[0]), 1, _o1[0]);
      if (!_r1)
        goto next_after_fail1053;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 765, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1053:;
  return NULL_TREE;
}

tree
generic_simplify_529 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[5]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1064;
	  {
	    tree res_op0;
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[6];
	      _o1[5] = captures[7];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 6, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      if (!_r1)
	        goto next_after_fail1064;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[5]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 771, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1064:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_538 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[1])) || TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1073;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ovf, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail1073;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 780, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1073:;
    }
  return NULL_TREE;
}

tree
generic_simplify_549 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (floors),
 const combined_fn ARG_UNUSED (truncs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1084;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, truncs, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail1084;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 791, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1084:;
    }
  return NULL_TREE;
}

tree
generic_simplify_556 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ifn),
 const combined_fn ARG_UNUSED (lfn),
 const combined_fn ARG_UNUSED (llfn))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (TYPE_PRECISION (integer_type_node)
 == TYPE_PRECISION (long_integer_type_node)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1091;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, lfn, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1091;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 798, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1091:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_567 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1102;
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
	  goto next_after_fail1102;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 809, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1102:;
    }
  return NULL_TREE;
}

tree
generic_simplify_577 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
 || !TREE_SIDE_EFFECTS (captures[3]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
 unsigned int prec0 = TYPE_PRECISION (type0);
 unsigned int prec1 = TYPE_PRECISION (type1);
	  if (prec0 == prec1 || (prec0 > prec1 && TYPE_UNSIGNED (type1))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1112;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (_o1[0]) != type0)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type0, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
		if (!_r)
		  goto next_after_fail1112;
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 814, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1112:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_CONVERT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (INTEGRAL_TYPE_P (type)
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TREE_CODE (type) != BOOLEAN_TYPE
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1129;
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
		      tree _r;
		      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 829, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1129:;
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
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21 };
		tree res = generic_simplify_380 (loc, type, _p0, captures, BIT_AND_EXPR);
		if (res) return res;
	      }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20 };
		tree res = generic_simplify_380 (loc, type, _p0, captures, BIT_AND_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21 };
		tree res = generic_simplify_380 (loc, type, _p0, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20 };
		tree res = generic_simplify_380 (loc, type, _p0, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21 };
		tree res = generic_simplify_380 (loc, type, _p0, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20 };
		tree res = generic_simplify_380 (loc, type, _p0, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_zero_one_valued_p (_q20))
	  {
	    switch (TREE_CODE (_q21))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
 && (TYPE_UNSIGNED (type) || TYPE_PRECISION (type) > 1)
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1130;
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
			  tree res_op1;
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[2];
			    if (TREE_TYPE (_o1[0]) != type)
			      {
				_r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			      }
			    else
			      _r1 = _o1[0];
			    res_op1 = _r1;
			  }
			  tree _r;
			  _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 830, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1130:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		if (POINTER_TYPE_P (type)
)
		  {
		    if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1131;
		    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1131;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1131;
		    {
		      tree _r;
		      _r =  build_fold_addr_expr_with_type
 (build2 (MEM_REF, char_type_node, captures[0],
 wide_int_to_tree (ptr_type_node, wi::neg (wi::to_wide (captures[1])))),
 type);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 831, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1131:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_zero_one_valued_p (_q20))
	  {
	    switch (TREE_CODE (_q21))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    tree res = generic_simplify_381 (loc, type, _p0, captures, EQ_EXPR);
		    if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_zero_one_valued_p (_q20))
	  {
	    switch (TREE_CODE (_q21))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    tree res = generic_simplify_381 (loc, type, _p0, captures, NE_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
		      tree res = generic_simplify_382 (loc, type, _p0, captures, MIN_EXPR);
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
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
		      tree res = generic_simplify_382 (loc, type, _p0, captures, MAX_EXPR);
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
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !integer_zerop (captures[2])
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
		  {
		    if (TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[0]))
 || wi::ltu_p (wi::to_wide (captures[2]), TYPE_PRECISION (type))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1132;
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
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, LSHIFT_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1132:;
		      }
		    else
		      {
			if (wi::ltu_p (wi::to_wide (captures[2]), TYPE_PRECISION (TREE_TYPE (captures[0])))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1133;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1133:;
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1134;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1134:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1135;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1135:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1136;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1136:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1137;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1137:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1138;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1138:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1139;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1139:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1140;
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
next_after_fail1140:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1141;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1141:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1142;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1142:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1143;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1143:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1144;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1144:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1145;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1145:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1146;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1146:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1147;
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
next_after_fail1147:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1148;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1148:;
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
 && operand_equal_p (captures[1], build_low_bits_mask (TREE_TYPE (captures[1]),
 TYPE_PRECISION (type)), 0)
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1149;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree _r;
		      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		      if (TREE_SIDE_EFFECTS (captures[1]))
			_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 842, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1149:;
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
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
	  if (VECTOR_TYPE_P (type)
 && types_match (TREE_TYPE (captures[1]), truth_type_for (type))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1150;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		      if (EXPR_P (_r1))
		        goto next_after_fail1150;
		    }
		  else
		    _r1 = _o1[0];
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		      if (EXPR_P (_r1))
		        goto next_after_fail1150;
		    }
		  else
		    _r1 = _o1[0];
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 843, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1150:;
	    }
	}
        break;
      }
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_q22))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		      if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1151;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1151;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1151;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (_o1[0]) != type)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op1 = _r1;
			    }
			    tree res_op2;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[3];
			      if (TREE_TYPE (_o1[0]) != type)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op2 = _r1;
			    }
			    tree _r;
			    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 844, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1151:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q21, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
		      tree res = generic_simplify_383 (loc, type, _p0, captures, PLUS_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
		tree res = generic_simplify_384 (loc, type, _p0, captures, PLUS_EXPR);
		if (res) return res;
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
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
		tree res = generic_simplify_385 (loc, type, _p0, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
	  tree res = generic_simplify_386 (loc, type, _p0, captures, PLUS_EXPR);
	  if (res) return res;
	}
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q21, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
		      tree res = generic_simplify_383 (loc, type, _p0, captures, MINUS_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
		tree res = generic_simplify_384 (loc, type, _p0, captures, MINUS_EXPR);
		if (res) return res;
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
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
		tree res = generic_simplify_385 (loc, type, _p0, captures, MINUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
	  tree res = generic_simplify_386 (loc, type, _p0, captures, MINUS_EXPR);
	  if (res) return res;
	}
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q21, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
		      tree res = generic_simplify_383 (loc, type, _p0, captures, MULT_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
		tree res = generic_simplify_384 (loc, type, _p0, captures, MULT_EXPR);
		if (res) return res;
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
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
		tree res = generic_simplify_385 (loc, type, _p0, captures, MULT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
	  tree res = generic_simplify_386 (loc, type, _p0, captures, MULT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q21, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
		      tree res = generic_simplify_383 (loc, type, _p0, captures, RDIV_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
		tree res = generic_simplify_384 (loc, type, _p0, captures, RDIV_EXPR);
		if (res) return res;
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
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
		tree res = generic_simplify_385 (loc, type, _p0, captures, RDIV_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
	  tree res = generic_simplify_386 (loc, type, _p0, captures, RDIV_EXPR);
	  if (res) return res;
	}
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  tree res = generic_simplify_387 (loc, type, _p0, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_CEIL_DIV_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_302 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_301 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
      if (res) return res;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_303 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case ABS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			    tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
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
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
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
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
	      if (res) return res;
	    }
	  }
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
				tree res = generic_simplify_310 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR);
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
 && (TREE_CODE_CLASS (CEIL_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1588;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, CEIL_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1588;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, CEIL_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1588;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1588:;
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
 && (TREE_CODE_CLASS (CEIL_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1589;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1589;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, CEIL_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1589;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, CEIL_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1589;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1589:;
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
 && (TREE_CODE_CLASS (CEIL_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1590;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1590;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, CEIL_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1590;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, CEIL_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1590;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1590:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_EXACT_DIV_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	if (res) return res;
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
	      switch (TREE_CODE (_q40))
	        {
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (integer_onep (_q50))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q50, _q51 };
			  tree res = generic_simplify_298 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q41 };
		    tree res = generic_simplify_298 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q40, _q41 };
		    tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_onep (_q30))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q31 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_302 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_301 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
      if (res) return res;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_303 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case ABS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case EXACT_DIV_EXPR:
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
		      tree res = generic_simplify_306 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			    tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  tree res = generic_simplify_308 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
	      if (res) return res;
	    }
	  }
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
				tree res = generic_simplify_310 (loc, type, _p0, _p1, captures, EXACT_DIV_EXPR);
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
 && (TREE_CODE_CLASS (EXACT_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1597;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1597;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1597;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1597:;
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
 && (TREE_CODE_CLASS (EXACT_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1598;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1598;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1598;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1598;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1598:;
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
 && (TREE_CODE_CLASS (EXACT_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1599;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1599;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1599;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1599;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1599:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_LE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case REAL_CST:
	    {
	      if (real_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		    tree res = generic_simplify_330 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
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
    case TRUNC_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_331 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
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
	if (integer_minus_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		    tree res = generic_simplify_357 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			  tree res = generic_simplify_334 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case EXACT_DIV_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
				      tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
			  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, LE_EXPR);
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
    case TRUNC_DIV_EXPR:
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
		      tree res = generic_simplify_206 (loc, type, _p0, _p1, captures, LE_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_336 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_337 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_DIFF_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
		    tree res = generic_simplify_210 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    tree res = generic_simplify_211 (loc, type, _p0, _p1, captures, LE_EXPR);
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
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, LE_EXPR, BIT_AND_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, LE_EXPR, BIT_AND_EXPR);
		  if (res) return res;
		}
	      }
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
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (tree_expr_nonnegative_p (_q30))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, GE_EXPR, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    if (tree_expr_nonnegative_p (_q31))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, GE_EXPR, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_339 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR, BIT_AND_EXPR);
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
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MIN_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MAX_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR);
	      if (res) return res;
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_339 (loc, type, _p0, _p1, captures, MIN_EXPR, LE_EXPR, BIT_IOR_EXPR);
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
 && (TREE_CODE_CLASS (LE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1645;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1645;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1645;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1645:;
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
 && (TREE_CODE_CLASS (LE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1646;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1646;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1646;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1646;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1646:;
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
 && (TREE_CODE_CLASS (LE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1647;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1647;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1647;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1647;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1647:;
	    }
	}
        break;
      }
    default:;
    }
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, LE_EXPR, LT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		    tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_241 (loc, type, _p0, _p1, captures, LE_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      {
	tree _p1_pops[1];
	if (tree_nop_convert (_p1, _p1_pops))
	  {
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
		    tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
      }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
	    tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
	    if (res) return res;
	  }
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
	case BIT_NOT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
		    tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, LE_EXPR);
		    if (res) return res;
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
		  case BIT_NOT_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
			tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, LE_EXPR);
			if (res) return res;
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	  if (CONSTANT_CLASS_P (_p1))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
		tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_246 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, PLUS_EXPR, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q21 };
		    tree res = generic_simplify_342 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, MINUS_EXPR, LE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_248 (loc, type, _p0, _p1, captures, LE_EXPR);
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
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case FLOAT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, LE_EXPR, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case REAL_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_252 (loc, type, _p0, _p1, captures, LE_EXPR, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case EXACT_DIV_EXPR:
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_343 (loc, type, _p0, _p1, captures, LE_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			    tree res = generic_simplify_344 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
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
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_256 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_257 (loc, type, _p0, _p1, captures, LE_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_q20))
	  {
	  case ADDR_EXPR:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, LE_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ADDR_EXPR:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	if (uniform_integer_cst_p (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
	      tree res = generic_simplify_345 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
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
		      tree res = generic_simplify_359 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
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
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case ADDR_EXPR:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
		      tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, LE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, LE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, LE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_SQRT, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_SQRT, LE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  if (uniform_integer_cst_p (_p1))
    {
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
	tree res = generic_simplify_346 (loc, type, _p0, _p1, captures, LE_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q31))
		      {
		      case INTEGER_CST:
		        {
			  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
				tree res = generic_simplify_347 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			switch (TREE_CODE (_q41))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0, _q41 };
				tree res = generic_simplify_347 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
	      break;
	    }
          default:;
          }
        break;
      }
    case PLUS_EXPR:
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0, _q31 };
		    tree res = generic_simplify_342 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_348 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_minus_onep (_q31))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_360 (loc, type, _p0, _p1, captures, GE_EXPR);
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
  switch (TREE_CODE (_p0))
    {
    case REALPART_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_SUB_OVERFLOW:
	        if (call_expr_nargs (_q20) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    tree _q31 = CALL_EXPR_ARG (_q20, 1);
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			  tree res = generic_simplify_361 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REALPART_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_ADD_OVERFLOW:
	        if (call_expr_nargs (_q30) == 2)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
			  tree res = generic_simplify_362 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q40 };
			  tree res = generic_simplify_362 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case TRUNC_DIV_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_all_onesp (_q30))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
	      tree res = generic_simplify_363 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_353 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
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
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_p1))
	      {
	      case CFN_BUILT_IN_EXP:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOGF:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOGL:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_EXP:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LOG:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LOG2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_EXP10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LOG10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case PLUS_EXPR:
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
		      tree res = generic_simplify_354 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, LE_EXPR, GE_EXPR);
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
    case MINUS_EXPR:
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
		      tree res = generic_simplify_354 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, LE_EXPR, GE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_281 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_CTZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_366 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFS);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFSIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_366 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFSIMAX);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNT);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXPF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXPL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFSL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_366 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFSL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOGF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOGL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTLL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZIMAX);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, CFN_POPCOUNT);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_CTZ:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_356 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, CFN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_FFS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_366 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_FFS);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZLL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFSLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_366 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFSLL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_CEIL_MOD_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_312 (loc, type, _p0, _p1, captures, CEIL_MOD_EXPR);
	if (res) return res;
      }
    }
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_313 (loc, type, _p0, _p1, captures, CEIL_MOD_EXPR);
	if (res) return res;
      }
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_314 (loc, type, _p0, _p1, captures, CEIL_MOD_EXPR);
	if (res) return res;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_315 (loc, type, _p0, _p1, captures, CEIL_MOD_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case CEIL_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_316 (loc, type, _p0, _p1, captures, CEIL_MOD_EXPR);
	      if (res) return res;
	    }
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_317 (loc, type, _p0, _p1, captures, CEIL_MOD_EXPR);
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
 && (TREE_CODE_CLASS (CEIL_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1655;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, CEIL_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1655;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, CEIL_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1655;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1655:;
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
 && (TREE_CODE_CLASS (CEIL_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1656;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1656;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, CEIL_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1656;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, CEIL_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1656;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1656:;
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
 && (TREE_CODE_CLASS (CEIL_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1657;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1657;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, CEIL_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1657;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, CEIL_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1657;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1657:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_ROUND_MOD_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_312 (loc, type, _p0, _p1, captures, ROUND_MOD_EXPR);
	if (res) return res;
      }
    }
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_313 (loc, type, _p0, _p1, captures, ROUND_MOD_EXPR);
	if (res) return res;
      }
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_314 (loc, type, _p0, _p1, captures, ROUND_MOD_EXPR);
	if (res) return res;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_315 (loc, type, _p0, _p1, captures, ROUND_MOD_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case ROUND_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_316 (loc, type, _p0, _p1, captures, ROUND_MOD_EXPR);
	      if (res) return res;
	    }
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_317 (loc, type, _p0, _p1, captures, ROUND_MOD_EXPR);
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
 && (TREE_CODE_CLASS (ROUND_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1658;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1658;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1658;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1658:;
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
 && (TREE_CODE_CLASS (ROUND_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1659;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1659;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1659;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1659;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1659:;
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
 && (TREE_CODE_CLASS (ROUND_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1660;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1660;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1660;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1660;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1660:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_TRUNC_MOD_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_312 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	if (res) return res;
      }
    }
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_313 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	if (res) return res;
      }
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_314 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	if (res) return res;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_315 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case TRUNC_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_316 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	      if (res) return res;
	    }
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_317 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
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
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (TYPE_SIGN (type) == SIGNED
 && !TREE_OVERFLOW (captures[1])
 && wi::neg_p (wi::to_wide (captures[1]))
 && !TYPE_OVERFLOW_TRAPS (type)
 && !sign_bit_p (captures[1], captures[1])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1661;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = fold_build2_loc (loc, TRUNC_MOD_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1661:;
	    }
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		tree res = generic_simplify_367 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      {
	tree _q30_pops[1];
	if (tree_power_of_two_cand (_q30, _q30_pops))
	  {
	    tree _q40 = _q30_pops[0];
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q40 };
	      tree res = generic_simplify_318 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	      if (res) return res;
	    }
	  }
      }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_367 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_power_of_two_cand (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	tree res = generic_simplify_318 (loc, type, _p0, _p1, captures, TRUNC_MOD_EXPR);
	if (res) return res;
      }
    }
}
  switch (TREE_CODE (_p0))
    {
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
 && (TREE_CODE_CLASS (TRUNC_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1662;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1662;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1662;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1662:;
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
 && (TREE_CODE_CLASS (TRUNC_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1663;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1663;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1663;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1663;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1663:;
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
 && (TREE_CODE_CLASS (TRUNC_MOD_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1664;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1664;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1664;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1664;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1664:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_RSHIFT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case TRUNC_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_368 (loc, type, _p0, _p1, captures, RSHIFT_EXPR, TRUNC_MOD_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_368 (loc, type, _p0, _p1, captures, RSHIFT_EXPR, FLOOR_MOD_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    default:;
    }
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_369 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		if (!TYPE_UNSIGNED (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
)
		  {
		    {
 tree stype = TREE_TYPE (captures[2]);
 tree bt = truth_type_for (type);
 tree zeros = build_zero_cst (type);
 tree INTEGER_CST = NULL_TREE;
			if (INTEGRAL_TYPE_P (type)
 && canonicalize_math_after_vectorization_p ()
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1673;
			    {
			      tree res_op0;
			      {
				tree _o1[1], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] =  zeros;
				  _r2 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o2[0], _o2[1]);
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
			      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1673:;
			  }
			else
			  {
			    if (VECTOR_INTEGER_TYPE_P (type)
 && TYPE_MODE (bt) == TYPE_MODE (type)
 && expand_vec_cmp_expr_p (type, bt, GT_EXPR)
 && (INTEGER_CST = uniform_integer_cst_p (captures[2])) != NULL
 && wi::eq_p (wi::to_wide (INTEGER_CST), element_precision (type) - 1)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1674;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] =  zeros;
				    _r1 = fold_build2_loc (loc, GT_EXPR, bt, _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[2]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1674:;
			      }
			  }
		    }
		  }
	      }
	      break;
	    }
	  case VECTOR_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		if (!TYPE_UNSIGNED (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
)
		  {
		    {
 tree stype = TREE_TYPE (captures[2]);
 tree bt = truth_type_for (type);
 tree zeros = build_zero_cst (type);
 tree VECTOR_CST = NULL_TREE;
			if (INTEGRAL_TYPE_P (type)
 && canonicalize_math_after_vectorization_p ()
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1675;
			    {
			      tree res_op0;
			      {
				tree _o1[1], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] =  zeros;
				  _r2 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o2[0], _o2[1]);
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
			      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1675:;
			  }
			else
			  {
			    if (VECTOR_INTEGER_TYPE_P (type)
 && TYPE_MODE (bt) == TYPE_MODE (type)
 && expand_vec_cmp_expr_p (type, bt, GT_EXPR)
 && (VECTOR_CST = uniform_integer_cst_p (captures[2])) != NULL
 && wi::eq_p (wi::to_wide (VECTOR_CST), element_precision (type) - 1)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1676;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] =  zeros;
				    _r1 = fold_build2_loc (loc, GT_EXPR, bt, _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[2]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1676:;
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
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q21 };
		    tree res = generic_simplify_378 (loc, type, _p0, _p1, captures);
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
	case LSHIFT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p1, _q31 };
			tree res = generic_simplify_378 (loc, type, _p0, _p1, captures);
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
    }
}
if (integer_all_onesp (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (!TYPE_UNSIGNED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1677;
	  {
	    tree _r;
	    _r = captures[0];
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1001, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1677:;
	}
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1678;
	{
	  tree _r;
	  _r =  build_zero_cst (type);
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1678:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_371 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_372 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_373 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_374 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case RSHIFT_EXPR:
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_375 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, RSHIFT_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, RSHIFT_EXPR);
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, RSHIFT_EXPR);
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP128);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP16);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP32);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP64);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, RSHIFT_EXPR);
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, RSHIFT_EXPR);
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
    case BIT_IOR_EXPR:
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, RSHIFT_EXPR);
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
 && (TREE_CODE_CLASS (RSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1679;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1679;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1679;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1679:;
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
 && (TREE_CODE_CLASS (RSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1680;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1680;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1680;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1680;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1680:;
	    }
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_BSWAP128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP128);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP16);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP32);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_379 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP64);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
if (integer_onep (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (INTEGRAL_TYPE_P (type)
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1681;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1681;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      _o1[1] =  build_zero_cst (TREE_TYPE (captures[0]));
	      _r1 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1681:;
	}
    }
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
 && (TREE_CODE_CLASS (RSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1682;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1682;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1682;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1682;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1682:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1683;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1683:;
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

tree
generic_simplify_MAX_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_495 (loc, type, _p0, _p1, captures, MAX_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_496 (loc, type, _p0, _p1, captures, MAX_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_496 (loc, type, _p0, _p1, captures, MAX_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MAX_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
	      tree res = generic_simplify_497 (loc, type, _p0, _p1, captures, MAX_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
	      tree res = generic_simplify_497 (loc, type, _p0, _p1, captures, MAX_EXPR);
	      if (res) return res;
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
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_506 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_506 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MIN_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_506 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_506 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_507 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_507 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (INTEGRAL_TYPE_P (type)
 && TYPE_MAX_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST)
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1716;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1716:;
      }
    else
      {
	if (INTEGRAL_TYPE_P (type)
 && TYPE_MIN_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1717;
	    {
	      tree _r;
	      _r = captures[0];
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1717:;
	  }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case PLUS_EXPR:
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
		      {
			if (tree_int_cst_sgn (captures[2]) > 0
)
			  {
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1718;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1718;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1718:;
			  }
			else
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1719;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1719:;
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
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
		      {
			if (tree_int_cst_sgn (captures[2]) > 0
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1720;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1720;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1720:;
			  }
			else
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1721;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1721:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1722;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1722:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1723;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1723:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1724;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1724:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1725;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1725:;
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ADDR_EXPR:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_500 (loc, type, _p0, _p1, captures, MAX_EXPR, GT_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ADDR_EXPR:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		      tree res = generic_simplify_501 (loc, type, _p0, _p1, captures, MAX_EXPR, GT_EXPR);
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case ADDR_EXPR:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
		      tree res = generic_simplify_502 (loc, type, _p0, _p1, captures, MAX_EXPR, GT_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ADDR_EXPR:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
		tree res = generic_simplify_503 (loc, type, _p0, _p1, captures, MAX_EXPR, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1726;
		    {
		      tree res_op0;
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			_r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1726:;
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_504 (loc, type, _p0, _p1, captures, MAX_EXPR, MIN_EXPR);
		if (res) return res;
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
 && (TREE_CODE_CLASS (MAX_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1727;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1727;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1727;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1727:;
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
 && (TREE_CODE_CLASS (MAX_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1728;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1728;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1728;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1728;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1728:;
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
 && (TREE_CODE_CLASS (MAX_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1729;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1729;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1729;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1729;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1729:;
	    }
	}
        break;
      }
    default:;
    }
  if (tree_zero_one_valued_p (_p0))
    {
      if (tree_zero_one_valued_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    tree res = generic_simplify_505 (loc, type, _p0, _p1, captures, MAX_EXPR, BIT_IOR_EXPR);
	    if (res) return res;
	  }
        }
    }
  return NULL_TREE;
}

tree
generic_simplify_COND_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  {
		    tree _q50_pops[1];
		    if (tree_nop_convert (_q50, _q50_pops))
		      {
			tree _q60 = _q50_pops[0];
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_all_onesp (_q51))
			      {
				if (integer_zerop (_p2))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q50 };
				      tree res = generic_simplify_467 (loc, type, _p0, _p1, _p2, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		      }
		  }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if (integer_all_onesp (_q51))
			{
			  if (integer_zerop (_p2))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q50 };
				tree res = generic_simplify_468 (loc, type, _p0, _p1, _p2, captures);
				if (res) return res;
			      }
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
		  case PLUS_EXPR:
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
				if (integer_all_onesp (_q61))
				  {
				    if (integer_zerop (_p2))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q60 };
					  tree res = generic_simplify_467 (loc, type, _p0, _p1, _p2, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			  }
		      }
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  if (integer_all_onesp (_q61))
			    {
			      if (integer_zerop (_p2))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q60 };
				    tree res = generic_simplify_468 (loc, type, _p0, _p1, _p2, captures);
				    if (res) return res;
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
	  }
	if (tree_zero_one_valued_p (_q20))
	  {
	    if (integer_zerop (_q21))
	      {
		switch (TREE_CODE (_p1))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_p1, 0);
		      tree _q51 = TREE_OPERAND (_p1, 1);
		      if ((_p2 == _q51 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q51, 0) && types_match (_p2, _q51)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    tree res = generic_simplify_469 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
			    tree res = generic_simplify_469 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case BIT_IOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_p1, 0);
		      tree _q51 = TREE_OPERAND (_p1, 1);
		      if ((_p2 == _q51 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q51, 0) && types_match (_p2, _q51)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    tree res = generic_simplify_469 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
			    tree res = generic_simplify_469 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case PLUS_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_p1, 0);
		      tree _q51 = TREE_OPERAND (_p1, 1);
		      if ((_p2 == _q51 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q51, 0) && types_match (_p2, _q51)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    tree res = generic_simplify_469 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
			    tree res = generic_simplify_469 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_470 (loc, type, _p0, _p1, _p2, captures, TRUNC_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case CEIL_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_470 (loc, type, _p0, _p1, _p2, captures, CEIL_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case FLOOR_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_470 (loc, type, _p0, _p1, _p2, captures, FLOOR_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case ROUND_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_470 (loc, type, _p0, _p1, _p2, captures, ROUND_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_470 (loc, type, _p0, _p1, _p2, captures, EXACT_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_471 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			if (res) return res;
		      }
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q51, _q50 };
			tree res = generic_simplify_471 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_471 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q51, _q50 };
			tree res = generic_simplify_471 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_473 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_473 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
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
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_474 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_474 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
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
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
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
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_475 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
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
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      const enum tree_code op = MULT_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1793;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1793;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1793:;
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
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
				      const enum tree_code op = MULT_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1794;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1794;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1794:;
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
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case PLUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      const enum tree_code op = PLUS_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1795;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1795;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1795:;
					}
				    }
				  }
			      }
			    break;
			  }
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1796;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1796;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1796;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1796:;
					}
				    }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1797;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1797;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1797;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1797:;
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
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case PLUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
				      const enum tree_code op = PLUS_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1798;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1798;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1798:;
					}
				    }
				  }
			      }
			    break;
			  }
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1799;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1799;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1799;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1799:;
					}
				    }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1800;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1800;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1800;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1800:;
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (!TYPE_SATURATING (type)
 && (TYPE_OVERFLOW_WRAPS (type)
 || !wi::only_sign_bit_p (wi::to_wide (captures[1])))
 && wi::eq_p (wi::neg (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1801;
				    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1801;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1801;
				    {
				      tree _r;
				      _r = captures[2];
				      if (TREE_SIDE_EFFECTS (captures[1]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1031, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1801:;
				  }
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (wi::eq_p (wi::bit_not (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1802;
				    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1802;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1802;
				    {
				      tree _r;
				      _r = captures[2];
				      if (TREE_SIDE_EFFECTS (captures[1]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1032, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1802:;
				  }
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
		case ABS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
				  {
				    if (ABS_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
				      {
					{
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
					    if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1803;
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1803;
					    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1803;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1803;
					    {
					      tree res_op0;
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[0];
						_r1 = fold_build1_loc (loc, ABSU_EXPR, utype, _o1[0]);
						res_op0 = _r1;
					      }
					      tree _r;
					      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					      if (TREE_SIDE_EFFECTS (captures[1]))
						_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1033, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1803:;
					}
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1804;
					if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1804;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1804;
					{
					  tree _r;
					  _r = captures[2];
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1034, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1804:;
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
		case ABSU_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
				  {
				    if (ABSU_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
				      {
					{
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
					    if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1805;
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1805;
					    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1805;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1805;
					    {
					      tree res_op0;
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[0];
						_r1 = fold_build1_loc (loc, ABSU_EXPR, utype, _o1[0]);
						res_op0 = _r1;
					      }
					      tree _r;
					      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					      if (TREE_SIDE_EFFECTS (captures[1]))
						_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1033, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1805:;
					}
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1806;
					if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1806;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1806;
					{
					  tree _r;
					  _r = captures[2];
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1034, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1806:;
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  if (integer_zerop (_p2))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1807;
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1807;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1807;
				    {
				      tree res_op0;
				      res_op0 = captures[2];
				      tree res_op1;
				      res_op1 = captures[1];
				      tree _r;
				      _r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1035, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1807:;
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_479 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_zero_one_valued_p (_q20))
	  {
	    if (integer_zerop (_q21))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q60 };
			    tree res = generic_simplify_480 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q61 };
			    tree res = generic_simplify_480 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case BIT_IOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q60 };
			    tree res = generic_simplify_480 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q61 };
			    tree res = generic_simplify_480 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case PLUS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q60 };
			    tree res = generic_simplify_480 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q61 };
			    tree res = generic_simplify_480 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_481 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_481 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_481 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_481 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_481 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_481 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_482 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_482 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_482 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_482 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_482 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case POINTER_PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_482 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_onep (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_483 (loc, type, _p0, _p1, _p2, captures, TRUNC_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case CEIL_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_483 (loc, type, _p0, _p1, _p2, captures, CEIL_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case FLOOR_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_483 (loc, type, _p0, _p1, _p2, captures, FLOOR_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case ROUND_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_483 (loc, type, _p0, _p1, _p2, captures, ROUND_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_483 (loc, type, _p0, _p1, _p2, captures, EXACT_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_484 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_484 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_all_onesp (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_485 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_485 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
      if (tree_expr_nonnegative_p (_q21))
	{
	  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	    {
	      switch (TREE_CODE (_p2))
	        {
		case ABS_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p2, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_479 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
        }
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_479 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_486 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			    tree res = generic_simplify_486 (loc, type, _p0, _p1, _p2, captures);
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
    case INTEGER_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  if (integer_zerop (captures[0])
)
	    {
	      if (!VOID_TYPE_P (TREE_TYPE (captures[2])) || VOID_TYPE_P (type)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1808;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1808;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1808;
		  {
		    tree _r;
		    _r = captures[2];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1036, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1808:;
		}
	    }
	  else
	    {
	      if (!VOID_TYPE_P (TREE_TYPE (captures[1])) || VOID_TYPE_P (type)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1809;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1809;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1809;
		  {
		    tree _r;
		    _r = captures[1];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1037, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1809:;
		}
	    }
	}
        break;
      }
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_479 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			    tree res = generic_simplify_479 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_onep (_q31))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if (integer_onep (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				  if (TYPE_UNSIGNED (type)
)
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1810;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1810;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1810;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = unshare_expr (captures[0]);
					  _o1[1] = captures[1];
					  _r1 = fold_build2_loc (loc, GE_EXPR, boolean_type_node, _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree res_op1;
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[0];
					  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					  res_op1 = _r1;
					}
					tree res_op2;
					res_op2 = captures[2];
					tree _r;
					_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1038, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1810:;
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_472 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_477 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_476 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_478 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			    tree res = generic_simplify_479 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _p2 };
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1811;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1811;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1811;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1811;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1811;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1811:;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case COND_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	tree _q41 = TREE_OPERAND (_p2, 1);
	tree _q42 = TREE_OPERAND (_p2, 2);
	if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _q42 };
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1812;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1812;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1812;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1812;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1812;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1812:;
	    }
	  }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
	  if (inverse_conditions_p (captures[0], captures[2])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1813;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1813;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1813;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1813;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1813;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1041, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1813:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32, _p2 };
	  if (inverse_conditions_p (captures[0], captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1814;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1814;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1814;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1814;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1814;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[4];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1042, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1814:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p2 == _p1 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _p1, 0) && types_match (_p2, _p1)))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1815;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1815;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1043, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1815:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			const enum tree_code cmp = EQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1816;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1816;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1816;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1816:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if (zerop (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
			const enum tree_code cmp = EQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1817;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1817;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1817;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1817;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1817:;
			  }
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      const enum tree_code cmp = EQ_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1818;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1818;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1818;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1818:;
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
	      if (integer_zerop (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      tree res = generic_simplify_487 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_SIGNBITF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_BUILT_IN_SIGNBITF);
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
	      case CFN_BUILT_IN_SIGNBITL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_BUILT_IN_SIGNBITL);
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
	      case CFN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_SIGNBIT);
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
	      case CFN_BUILT_IN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_BUILT_IN_SIGNBIT);
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
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			const enum tree_code cmp = UNEQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1819;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1819;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1819;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1819:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if (zerop (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
			const enum tree_code cmp = UNEQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1820;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1820;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1820;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1820;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1820:;
			  }
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      const enum tree_code cmp = UNEQ_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1821;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1821;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1821;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1821:;
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
	      if (integer_zerop (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      tree res = generic_simplify_487 (loc, type, _p0, _p1, _p2, captures, UNEQ_EXPR);
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
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = NE_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1822;
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1822;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1822;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1822:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  if (integer_zerop (_p2))
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		const enum tree_code cmp = NE_EXPR;
		if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1823;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1823;
		    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1823;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1823;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1823:;
		  }
	      }
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = NE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1824;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1824;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1824;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1824:;
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
	      if (integer_zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			    tree res = generic_simplify_489 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_pow2p (_q31))
		{
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				  if (!POINTER_TYPE_P (type) && integer_pow2p (captures[2])
)
				    {
				      {
 int shift = (wi::exact_log2 (wi::to_wide (captures[2]))
 - wi::exact_log2 (wi::to_wide (captures[1])));
					  if (shift > 0
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1825;
					      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1825;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1825;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1825;
					      {
						tree res_op0;
						{
						  tree _o1[2], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    if (TREE_TYPE (_o2[0]) != type)
						      {
							_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
						      }
						    else
						      _r2 = _o2[0];
						    _o1[0] = _r2;
						  }
						  _o1[1] =  build_int_cst (integer_type_node, shift);
						  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 = captures[2];
						tree _r;
						_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1825:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1826;
					      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1826;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1826;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1826;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[2], _r2;
						    _o2[0] = captures[0];
						    _o2[1] =  build_int_cst (integer_type_node, -shift);
						    _r2 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
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
						res_op1 = captures[2];
						tree _r;
						_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1051, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1826:;
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
	        }
	      break;
	    }
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_SIGNBITF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_BUILT_IN_SIGNBITF);
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
	      case CFN_BUILT_IN_SIGNBITL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_BUILT_IN_SIGNBITL);
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
	      case CFN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_SIGNBIT);
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
	      case CFN_BUILT_IN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_BUILT_IN_SIGNBIT);
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
	      default:;
	      }
	    break;
          default:;
          }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case CALL_EXPR:
	        switch (get_call_combined_fn (_p1))
	          {
		  case CFN_PARITY:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_PARITY);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_PARITY);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFS:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFS);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFS);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFSIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSIMAX);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSIMAX);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNT:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNT);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNT);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITYL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFSL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNTLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTLL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTLL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_POPCOUNT:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_POPCOUNT);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_POPCOUNT);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITYIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYIMAX);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYIMAX);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSBL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBL);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBL);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_FFS:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_FFS);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_FFS);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITY:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITY);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITY);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNTIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTIMAX);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTIMAX);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSBIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBIMAX);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBIMAX);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSBLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBLL);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBLL);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_CLRSB:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, CFN_CLRSB);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, CFN_CLRSB);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP128:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP128);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP128);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNTL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSB:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSB);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSB);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFSLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSLL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSLL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITYLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYLL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYLL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP16:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP16);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP16);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP32:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP32);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP32);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP64:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP64);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP64);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  default:;
	          }
	        break;
	      default:;
	      }
	  }
        break;
      }
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = LTGT_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1827;
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1827;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1827;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1827:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  if (integer_zerop (_p2))
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		const enum tree_code cmp = LTGT_EXPR;
		if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1828;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1828;
		    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1828;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1828;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1828:;
		  }
	      }
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LTGT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1829;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1829;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1829;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1829:;
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
	      if (integer_zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			    tree res = generic_simplify_489 (loc, type, _p0, _p1, _p2, captures, LTGT_EXPR);
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = GE_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
				{
				  if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1830;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1830;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1830;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1830:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1831;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1831;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1831;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[2];
						  if (TREE_TYPE (_o1[0]) != stype)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1831:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1832;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1832;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1832;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1832:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = GE_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
			  {
			    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1833;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1833;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1833;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1833:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1834;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1834;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1834;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (TREE_TYPE (_o1[0]) != stype)
					      {
						_r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1834:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1835;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1835;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1835;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1835:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = GE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1836;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1836;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1836;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1836:;
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
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_p2))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = GT_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
				{
				  if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1837;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1837;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1837;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1837:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1838;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1838;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1838;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[2];
						  if (TREE_TYPE (_o1[0]) != stype)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1838:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1839;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1839;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1839;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1839:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = GT_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
			  {
			    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1840;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1840;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1840;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1840:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1841;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1841;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1841;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (TREE_TYPE (_o1[0]) != stype)
					      {
						_r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1841:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1842;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1842;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1842;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1842:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = GT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1843;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1843;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1843;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1843:;
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = LE_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
				{
				  if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1844;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1844;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1844;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1844:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1845;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1845;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1845;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    {
						      tree _o3[1], _r3;
						      _o3[0] = captures[2];
						      if (TREE_TYPE (_o3[0]) != stype)
							{
							  _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
							}
						      else
						        _r3 = _o3[0];
						      _o2[0] = _r3;
						    }
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1845:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1846;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1846;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1846;
				      {
					tree res_op0;
					{
					  tree _o1[1], _r1;
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[2];
					    _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
					    _o1[0] = _r2;
					  }
					  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1846:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = LE_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
			  {
			    if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1847;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1847;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1847;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      _o2[0] = captures[0];
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1847:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1848;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1848;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1848;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      {
						tree _o3[1], _r3;
						_o3[0] = captures[2];
						if (TREE_TYPE (_o3[0]) != stype)
						  {
						    _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
						  }
						else
						  _r3 = _o3[0];
						_o2[0] = _r3;
					      }
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1848:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1849;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1849;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1849;
				{
				  tree res_op0;
				  {
				    tree _o1[1], _r1;
				    {
				      tree _o2[1], _r2;
				      _o2[0] = captures[2];
				      _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				      _o1[0] = _r2;
				    }
				    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1849:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (ANY_INTEGRAL_TYPE_P (type)
 && !TYPE_OVERFLOW_WRAPS (type)
)
					    {
					      {
 tree utype = unsigned_type_for (type);
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1850;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1850;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1850;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							_r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
							_o1[0] = _r2;
						      }
						      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						      res_op0 = _r1;
						    }
						    tree _r;
						    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1059, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1850:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1851;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1851;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1851;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1060, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1851:;
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = LT_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
				{
				  if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1852;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1852;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1852;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1852:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1853;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1853;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1853;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    {
						      tree _o3[1], _r3;
						      _o3[0] = captures[2];
						      if (TREE_TYPE (_o3[0]) != stype)
							{
							  _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
							}
						      else
						        _r3 = _o3[0];
						      _o2[0] = _r3;
						    }
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1853:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1854;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1854;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1854;
				      {
					tree res_op0;
					{
					  tree _o1[1], _r1;
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[2];
					    _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
					    _o1[0] = _r2;
					  }
					  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1854:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = LT_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
			  {
			    if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1855;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1855;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1855;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      _o2[0] = captures[0];
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1855:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1856;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1856;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1856;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      {
						tree _o3[1], _r3;
						_o3[0] = captures[2];
						if (TREE_TYPE (_o3[0]) != stype)
						  {
						    _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
						  }
						else
						  _r3 = _o3[0];
						_o2[0] = _r3;
					      }
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1856:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1857;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1857;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1857;
				{
				  tree res_op0;
				  {
				    tree _o1[1], _r1;
				    {
				      tree _o2[1], _r2;
				      _o2[0] = captures[2];
				      _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				      _o1[0] = _r2;
				    }
				    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1857:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (ANY_INTEGRAL_TYPE_P (type)
 && !TYPE_OVERFLOW_WRAPS (type)
)
					    {
					      {
 tree utype = unsigned_type_for (type);
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1858;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1858;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1858;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							_r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
							_o1[0] = _r2;
						      }
						      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						      res_op0 = _r1;
						    }
						    tree _r;
						    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1059, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1858:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1859;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1859;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1859;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1060, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1859:;
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
	        }
	      break;
	    }
          default:;
          }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_p2))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_p1))
	      {
	      case INTEGER_CST:
	        {
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			if (integer_pow2p (captures[1])
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
			  {
			    {
 int shift = element_precision (captures[0]) - wi::exact_log2 (wi::to_wide (captures[1])) - 1;
				if (shift >= 0
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1860;
				    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1860;
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1860;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1860;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					{
					  tree _o2[2], _r2;
					  _o2[0] = captures[0];
					  _o2[1] =  build_int_cst (integer_type_node, shift);
					  _r2 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
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
				      res_op1 = captures[1];
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1860:;
				  }
				else
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1861;
				    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1861;
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1861;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1861;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					if (TREE_TYPE (_o1[0]) != type)
					  {
					    _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
					  }
					else
					  _r1 = _o1[0];
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1062, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1861:;
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
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if (tree_truth_valued_p (_q20))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	    if (COND_EXPR == VEC_COND_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	      {
		if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1862;
		if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1862;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1862;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 = captures[2];
		  tree res_op2;
		  res_op2 = captures[1];
		  tree _r;
		  _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1862:;
	      }
	  }
        }
    }
}
  return NULL_TREE;
}
#pragma GCC diagnostic pop
