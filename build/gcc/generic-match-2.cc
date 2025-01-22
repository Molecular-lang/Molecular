/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_logical_inverted_value (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 23, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	if (tree_truth_valued_p (_p0))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 24, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 25, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_truth_valued_p (_p0))
	  {
	    if (integer_truep (_p1))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  {
		    res_ops[0] = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 26, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	      }
	  }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_truth_valued_p (_p0))
	  {
	    if (integer_truep (_p1))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  {
		    res_ops[0] = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 27, __FILE__, __LINE__, false);
		    return true;
		  }
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
tree_signed_integer_sat_sub (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case COND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	tree _p2 = TREE_OPERAND (t, 2);
	switch (TREE_CODE (_p0))
	  {
	  case LT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
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
			  switch (TREE_CODE (_q31))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q31, 0);
				tree _q71 = TREE_OPERAND (_q31, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
							      {
								tree _q130 = _q101_pops[0];
								if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
									    {
									      tree _q160 = _p1_pops[0];
									      if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
										{
										  if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
											      return true;
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
					        break;
					      }
					    default:;
					    }
				        }
				    }
				  }
				if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
							      {
								tree _q130 = _q101_pops[0];
								if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
									    {
									      tree _q160 = _p1_pops[0];
									      if ((_q160 == _q41 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q41, 0) && types_match (_q160, _q41)))
										{
										  if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
											      return true;
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
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case MINUS_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree _q71_pops[1];
						  if (tree_nop_convert (_q71, _q71_pops))
						    {
						      tree _q100 = _q71_pops[0];
						      switch (TREE_CODE (_q31))
						        {
							case BIT_XOR_EXPR:
							  {
							    tree _q120 = TREE_OPERAND (_q31, 0);
							    tree _q121 = TREE_OPERAND (_q31, 1);
							    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
							      {
								if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
									    {
									      tree _q160 = _p1_pops[0];
									      if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
										{
										  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
											      return true;
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
							    if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
							      {
								if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
									    {
									      tree _q160 = _p1_pops[0];
									      if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
										{
										  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
											      return true;
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
							    break;
							  }
						        default:;
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
			  switch (TREE_CODE (_q31))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q31, 0);
				tree _q71 = TREE_OPERAND (_q31, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
							      {
								tree _q130 = _q101_pops[0];
								if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
								  {
								    if (integer_zerop (_q21))
								      {
									if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
									  {
									    {
									      tree _p2_pops[1];
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
									        {
										  tree _q170 = _p2_pops[0];
										  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
											      return true;
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
					        break;
					      }
					    default:;
					    }
				        }
				    }
				  }
				if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
							      {
								tree _q130 = _q101_pops[0];
								if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								  {
								    if (integer_zerop (_q21))
								      {
									if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
									  {
									    {
									      tree _p2_pops[1];
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
									        {
										  tree _q170 = _p2_pops[0];
										  if ((_q170 == _q41 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q41, 0) && types_match (_q170, _q41)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
											      return true;
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
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case MINUS_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree _q71_pops[1];
						  if (tree_nop_convert (_q71, _q71_pops))
						    {
						      tree _q100 = _q71_pops[0];
						      switch (TREE_CODE (_q31))
						        {
							case BIT_XOR_EXPR:
							  {
							    tree _q120 = TREE_OPERAND (_q31, 0);
							    tree _q121 = TREE_OPERAND (_q31, 1);
							    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
							      {
								if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
								  {
								    if (integer_zerop (_q21))
								      {
									if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
									  {
									    {
									      tree _p2_pops[1];
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
									        {
										  tree _q170 = _p2_pops[0];
										  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
											      return true;
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
							    if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
							      {
								if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
								  {
								    if (integer_zerop (_q21))
								      {
									if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
									  {
									    {
									      tree _p2_pops[1];
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
									        {
										  tree _q170 = _p2_pops[0];
										  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
										    {
										      {
											tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    {
											      res_ops[0] = captures[0];
											      res_ops[1] = captures[1];
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
											      return true;
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
							    break;
							  }
						        default:;
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
	      switch (TREE_CODE (_q20))
	        {
		case LT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_q30))
		      {
		      case BIT_XOR_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case MINUS_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree _q71_pops[1];
						  if (tree_nop_convert (_q71, _q71_pops))
						    {
						      tree _q100 = _q71_pops[0];
						      if (integer_zerop (_q31))
							{
							  switch (TREE_CODE (_q21))
							    {
							    case LT_EXPR:
							      {
								tree _q130 = TREE_OPERAND (_q21, 0);
								tree _q131 = TREE_OPERAND (_q21, 1);
								switch (TREE_CODE (_q130))
								  {
								  case BIT_XOR_EXPR:
								    {
								      tree _q140 = TREE_OPERAND (_q130, 0);
								      tree _q141 = TREE_OPERAND (_q130, 1);
								      if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
									{
									  if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
									    {
									      if (integer_zerop (_q131))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
										      {
											tree _q180 = _p1_pops[0];
											if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
											  {
											    if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
											      {
												{
												  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
													return true;
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
								      if ((_q140 == _q100 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q100, 0) && types_match (_q140, _q100)))
									{
									  if ((_q141 == _q40 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q40, 0) && types_match (_q141, _q40)))
									    {
									      if (integer_zerop (_q131))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
										      {
											tree _q180 = _p1_pops[0];
											if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
											  {
											    if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
											      {
												{
												  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
													return true;
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
			  if (integer_zerop (_q31))
			    {
			      switch (TREE_CODE (_q21))
			        {
				case LT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q21, 0);
				    tree _q81 = TREE_OPERAND (_q21, 1);
				    switch (TREE_CODE (_q80))
				      {
				      case BIT_XOR_EXPR:
				        {
					  tree _q90 = TREE_OPERAND (_q80, 0);
					  tree _q91 = TREE_OPERAND (_q80, 1);
					  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
					    {
					      {
						tree _q91_pops[1];
						if (tree_nop_convert (_q91, _q91_pops))
						  {
						    tree _q110 = _q91_pops[0];
						    switch (TREE_CODE (_q110))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q120 = TREE_OPERAND (_q110, 0);
							  tree _q121 = TREE_OPERAND (_q110, 1);
							  {
							    tree _q120_pops[1];
							    if (tree_nop_convert (_q120, _q120_pops))
							      {
								tree _q130 = _q120_pops[0];
								if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								  {
								    {
								      tree _q121_pops[1];
								      if (tree_nop_convert (_q121, _q121_pops))
								        {
									  tree _q150 = _q121_pops[0];
									  if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
									    {
									      if (integer_zerop (_q81))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
										      {
											tree _q180 = _p1_pops[0];
											if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
											  {
											    if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
											      {
												{
												  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q91 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
													return true;
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
						          break;
						        }
						      default:;
						      }
						  }
					      }
					    }
					  if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
					    {
					      {
						tree _q91_pops[1];
						if (tree_nop_convert (_q91, _q91_pops))
						  {
						    tree _q110 = _q91_pops[0];
						    switch (TREE_CODE (_q110))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q120 = TREE_OPERAND (_q110, 0);
							  tree _q121 = TREE_OPERAND (_q110, 1);
							  {
							    tree _q120_pops[1];
							    if (tree_nop_convert (_q120, _q120_pops))
							      {
								tree _q130 = _q120_pops[0];
								if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
								  {
								    {
								      tree _q121_pops[1];
								      if (tree_nop_convert (_q121, _q121_pops))
								        {
									  tree _q150 = _q121_pops[0];
									  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
									    {
									      if (integer_zerop (_q81))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
										      {
											tree _q180 = _p1_pops[0];
											if ((_q180 == _q41 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q41, 0) && types_match (_q180, _q41)))
											  {
											    if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
											      {
												{
												  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q91 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
													return true;
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
			  case CFN_SUB_OVERFLOW:
			    if (call_expr_nargs (_q30) == 2)
    {
				tree _q40 = CALL_EXPR_ARG (_q30, 0);
				tree _q41 = CALL_EXPR_ARG (_q30, 1);
				if (integer_zerop (_q21))
				  {
				    {
				      tree _p1_pops[1];
				      if (tree_signed_integer_sat_val (_p1, _p1_pops))
				        {
					  tree _q80 = _p1_pops[0];
					  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					    {
					      switch (TREE_CODE (_p2))
					        {
						case REALPART_EXPR:
						  {
						    tree _q100 = TREE_OPERAND (_p2, 0);
						    if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
							    {
							      if (types_match (type, captures[0], captures[1])
)
								{
								  {
								    res_ops[0] = captures[0];
								    res_ops[1] = captures[1];
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 81, __FILE__, __LINE__, false);
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
          default:;
          }
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_105 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail332;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail332;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 202, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail332:;
  return NULL_TREE;
}

tree
generic_simplify_111 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitop == BIT_AND_EXPR
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail338;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 205, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail338:;
    }
  else
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail339;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 206, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail339:;
    }
  return NULL_TREE;
}

tree
generic_simplify_120 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[5])
 && invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
    {
      if (integer_onep (captures[4])
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail350;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail350;
	  {
	    tree res_op0;
	    {
	      tree _o1[3], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[6];
	      _o1[2] = captures[9];
	      _r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[4];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 215, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail350:;
	}
      else
	{
	  if (integer_minus_onep (captures[4])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail351;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail351;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[6];
		tree res_op2;
		res_op2 = captures[9];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 216, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail351:;
	    }
	}
    }
  else
    {
      if (integer_zerop (captures[4])
 && invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
	{
	  if (integer_onep (captures[5])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail352;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail352;
	      {
		tree res_op0;
		{
		  tree _o1[3], _r1;
		  _o1[0] = captures[1];
		  _o1[1] = captures[9];
		  _o1[2] = captures[6];
		  _r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[5];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 217, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail352:;
	    }
	  else
	    {
	      if (integer_minus_onep (captures[5])
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail353;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail353;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[9];
		    tree res_op2;
		    res_op2 = captures[6];
		    tree _r;
		    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 218, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail353:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_139 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail405;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail405;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail405;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 244, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail405:;
  return NULL_TREE;
}

tree
generic_simplify_142 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[5]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[4])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (type));
 wide_int c = wi::add (wi::to_wide (captures[3]),
 wi::lshift (wone, wi::to_wide (captures[5])));
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail408;
	  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail408;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail408;
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 208, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail408:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_146 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail412;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail412;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 247, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail412:;
  return NULL_TREE;
}

tree
generic_simplify_149 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail415;
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
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 249, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail415:;
  return NULL_TREE;
}

tree
generic_simplify_153 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail419;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 253, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail419:;
  return NULL_TREE;
}

tree
generic_simplify_158 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail424;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 258, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail424:;
  return NULL_TREE;
}

tree
generic_simplify_164 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (opo),
 const enum tree_code ARG_UNUSED (opi))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail430;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 264, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail430:;
  return NULL_TREE;
}

tree
generic_simplify_172 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail440;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail440;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 273, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail440:;
    }
  return NULL_TREE;
}

tree
generic_simplify_177 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail445;
  {
    if (! tree_invariant_p (captures[1])) goto next_after_fail445;
    tree res_op0;
    res_op0 = unshare_expr (captures[1]);
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 276, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail445:;
  return NULL_TREE;
}

tree
generic_simplify_188 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_widest_int factor;
      if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && multiple_p (wi::to_poly_widest (captures[3]), wi::to_widest (captures[1]), &factor)
)
	{
	  {
 wi::overflow_type overflow;
 wide_int mul;
	      if (types_match (type, TREE_TYPE (captures[2]))
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[3]) == INTEGER_CST
 && (mul = wi::mul (wi::to_wide (captures[2]), wi::to_wide (captures[3]),
 TYPE_SIGN (type), &overflow),
 !overflow)
 && (TYPE_UNSIGNED (type)
 || known_eq (factor, 1)
 || (get_range_pos_neg (captures[0])
 | (((op == PLUS_EXPR) ^ (tree_int_cst_sgn (captures[2]) < 0))
 ? 1 : 2)) != 3)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail458;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] =  wide_int_to_tree (type, factor);
		      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (type, mul);
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (TREE_SIDE_EFFECTS (captures[3]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 285, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail458:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (type);
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail459;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[0];
			      if (TREE_TYPE (_o3[0]) != utype)
				{
				  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				}
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    _o2[1] =  wide_int_to_tree (utype, factor);
			    _r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[3];
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
			      _o3[0] = captures[2];
			      if (TREE_TYPE (_o3[0]) != utype)
				{
				  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				}
			      else
			        _r3 = _o3[0];
			      _o2[1] = _r3;
			    }
			    _r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 286, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail459:;
		  }
		}
	  }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_217 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::bit_and_not (get_known_nonzero_bits (captures[1]),
 get_nonzero_bits (captures[0])) != 0
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail504;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 329, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail504:;
    }
  return NULL_TREE;
}

tree
generic_simplify_223 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int c1 = wi::clz (wi::to_wide (captures[0]));
 int c2 = wi::clz (wi::to_wide (captures[2]));
      if (c1 < c2
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail512;
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail512;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail512;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail512;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR ? false : true, type);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 337, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail512:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail513;
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail513;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail513;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail513;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  build_int_cst (TREE_TYPE (captures[1]), c1 - c2);
	    tree _r;
	    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 338, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail513:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_232 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (TREE_TYPE (captures[1])) != COMPLEX_TYPE
 && (!VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (captures[1])))
 || !target_supports_op_p (TREE_TYPE (captures[1]), TRUNC_DIV_EXPR,
 optab_vector)
 || target_supports_op_p (TREE_TYPE (captures[1]), TRUNC_MOD_EXPR,
 optab_vector))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail531;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 356, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail531:;
    }
  return NULL_TREE;
}

tree
generic_simplify_238 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail538;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail538;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 362, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail538:;
    }
  return NULL_TREE;
}

tree
generic_simplify_244 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
 && (TREE_CODE (captures[2]) == INTEGER_CST || TREE_CODE (captures[2]) == VECTOR_CST)
)
    {
      {
 tree otype = TREE_TYPE (captures[2]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail549;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
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
	      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 373, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail549:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_249 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sq),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && ! flag_errno_math
)
    {
      if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
	{
	  if (cmp == EQ_EXPR || cmp == LT_EXPR || cmp == LE_EXPR
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail568;
	      {
		tree _r;
		_r =  constant_boolean_node (false, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 391, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail568:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR || !HONOR_NANS (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail569;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 392, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail569:;
		}
	      else
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail570;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 =  build_real (TREE_TYPE (captures[0]), dconst0);
		    tree _r;
		    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 393, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail570:;
		}
	    }
	}
      else
	{
	  if (real_equal (TREE_REAL_CST_PTR (captures[1]), &dconst0)
)
	    {
	      if (cmp == LT_EXPR
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail571;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 394, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail571:;
		}
	      else
		{
		  if (cmp == GE_EXPR && !HONOR_NANS (captures[0])
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail572;
		      {
			tree _r;
			_r =  constant_boolean_node (true, type);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 395, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail572:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail573;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[1];
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 396, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail573:;
			}
		      else
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail574;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[1];
			    tree _r;
			    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 397, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail574:;
			}
		    }
		}
	    }
	  else
	    {
	      if ((cmp == LT_EXPR
 || cmp == LE_EXPR
 || cmp == GT_EXPR
 || cmp == GE_EXPR)
 && !REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && !HONOR_SIGN_DEPENDENT_ROUNDING (TREE_TYPE (captures[0]))
)
		{
		  {
 REAL_VALUE_TYPE c2;
 enum tree_code ncmp = cmp;
 const real_format *fmt
 = REAL_MODE_FORMAT (TYPE_MODE (TREE_TYPE (captures[0])));
 real_arithmetic (&c2, MULT_EXPR,
 &TREE_REAL_CST (captures[1]), &TREE_REAL_CST (captures[1]));
 real_convert (&c2, fmt, &c2);
 if (!REAL_VALUE_ISINF (c2))
 {
 tree c3 = fold_const_call (CFN_SQRT, TREE_TYPE (captures[0]),
 build_real (TREE_TYPE (captures[0]), c2));
 if (c3 == NULL_TREE || TREE_CODE (c3) != REAL_CST)
 ncmp = ERROR_MARK;
 else if ((cmp == LT_EXPR || cmp == GE_EXPR)
 && real_less (&TREE_REAL_CST (c3), &TREE_REAL_CST (captures[1])))
 ncmp = cmp == LT_EXPR ? LE_EXPR : GT_EXPR;
 else if ((cmp == LE_EXPR || cmp == GT_EXPR)
 && real_less (&TREE_REAL_CST (captures[1]), &TREE_REAL_CST (c3)))
 ncmp = cmp == LE_EXPR ? LT_EXPR : GE_EXPR;
 else
 {
 REAL_VALUE_TYPE c2alt, tow;
 if (cmp == LT_EXPR || cmp == GE_EXPR)
 tow = dconst0;
 else
 tow = dconstinf;
 real_nextafter (&c2alt, fmt, &c2, &tow);
 real_convert (&c2alt, fmt, &c2alt);
 if (REAL_VALUE_ISINF (c2alt))
 ncmp = ERROR_MARK;
 else
 {
 c3 = fold_const_call (CFN_SQRT, TREE_TYPE (captures[0]),
 build_real (TREE_TYPE (captures[0]), c2alt));
 if (c3 == NULL_TREE || TREE_CODE (c3) != REAL_CST)
 ncmp = ERROR_MARK;
 else if (real_equal (&TREE_REAL_CST (c3),
 &TREE_REAL_CST (captures[1])))
 c2 = c2alt;
 }
 }
 }
		      if (cmp == GT_EXPR || cmp == GE_EXPR
)
			{
			  if (REAL_VALUE_ISINF (c2)
)
			    {
			      if (HONOR_INFINITIES (captures[0])
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail575;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
				    tree _r;
				    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 398, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail575:;
				}
			      else
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail576;
				  {
				    tree _r;
				    _r =  constant_boolean_node (false, type);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 399, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail576:;
				}
			    }
			  else
			    {
			      if (ncmp != ERROR_MARK
)
				{
				  if (ncmp == GE_EXPR
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail577;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 400, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail577:;
				    }
				  else
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail578;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 401, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail578:;
				    }
				}
			    }
			}
		      else
			{
			  if (REAL_VALUE_ISINF (c2)
)
			    {
			      if (! HONOR_NANS (captures[0]) && ! HONOR_INFINITIES (captures[0])
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail579;
				  {
				    tree _r;
				    _r =  constant_boolean_node (true, type);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 402, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail579:;
				}
			      else
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail580;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 403, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail580:;
				    }
				  else
				    {
				      if (! HONOR_INFINITIES (captures[0])
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail581;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    res_op1 =  build_real (TREE_TYPE (captures[0]), dconst0);
					    tree _r;
					    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 404, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail581:;
					}
				      else
					{
					  if (1
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail582;
					      {
						if (! tree_invariant_p (captures[0])) goto next_after_fail582;
						tree res_op0;
						{
						  tree _o1[2], _r1;
						  _o1[0] = unshare_expr (captures[0]);
						  _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
						  _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
						  res_op0 = _r1;
						}
						tree res_op1;
						{
						  tree _o1[2], _r1;
						  _o1[0] = captures[0];
						  _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
						  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
						  res_op1 = _r1;
						}
						tree _r;
						_r = fold_build2_loc (loc, TRUTH_ANDIF_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[1]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 405, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail582:;
					    }
					}
				    }
				}
			    }
			  else
			    {
			      if (ncmp != ERROR_MARK && ! HONOR_NANS (captures[0])
)
				{
				  if (ncmp == LT_EXPR
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail583;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 406, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail583:;
				    }
				  else
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail584;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 407, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail584:;
				    }
				}
			      else
				{
				  if (ncmp != ERROR_MARK &&
1
)
				    {
				      if (ncmp == LT_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail585;
					  {
					    if (! tree_invariant_p (captures[0])) goto next_after_fail585;
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = unshare_expr (captures[0]);
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					      _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
					      _r1 = fold_build2_loc (loc, LT_EXPR, type, _o1[0], _o1[1]);
					      res_op1 = _r1;
					    }
					    tree _r;
					    _r = fold_build2_loc (loc, TRUTH_ANDIF_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 408, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail585:;
					}
				      else
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail586;
					  {
					    if (! tree_invariant_p (captures[0])) goto next_after_fail586;
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = unshare_expr (captures[0]);
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					      _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
					      _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
					      res_op1 = _r1;
					    }
					    tree _r;
					    _r = fold_build2_loc (loc, TRUTH_ANDIF_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 409, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail586:;
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
generic_simplify_309 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail707;
	  {
	    tree _r;
	    _r = captures[0];
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 511, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail707:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_314 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail712;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 516, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail712:;
    }
  return NULL_TREE;
}

tree
generic_simplify_324 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH),
 const combined_fn ARG_UNUSED (TANH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail724;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TANH, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail724;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 528, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail724:;
    }
  return NULL_TREE;
}

tree
generic_simplify_330 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (neg_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (!HONOR_SIGNED_ZEROS (captures[1]) && !HONOR_INFINITIES (captures[1])
)
	{
	  if (real_less (&dconst0, TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail730;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 534, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail730:;
	    }
	  else
	    {
	      if (real_less (TREE_REAL_CST_PTR (captures[0]), &dconst0)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail731;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, neg_op, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 535, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail731:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_341 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (acmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree cst = uniform_integer_cst_p (captures[1]);
      if (tree_int_cst_sgn (cst) == 1
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail744;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  build_uniform_cst (TREE_TYPE (captures[1]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst) - 1));
	    tree _r;
	    _r = fold_build2_loc (loc, acmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 548, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail744:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_350 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail785;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail785;
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
next_after_fail785:;
    }
  return NULL_TREE;
}

tree
generic_simplify_356 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool ok = true;
 HOST_WIDE_INT val = 0;
 if (!tree_fits_shwi_p (captures[3]))
 ok = false;
 else
 {
 val = tree_to_shwi (captures[3]);
 if (op == GT_EXPR || op == LE_EXPR)
 {
 if (val == HOST_WIDE_INT_MAX)
 ok = false;
 else
 val++;
 }
 }
 HOST_WIDE_INT zero_val = tree_to_shwi (captures[2]);
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
 if (prec > MAX_FIXED_MODE_SIZE)
 ok = false;
      if (val <= 0
)
	{
	  if (ok && zero_val >= val
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail796;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail796;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail796;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == EQ_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 583, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail796:;
	    }
	}
      else
	{
	  if (val >= prec
)
	    {
	      if (ok && zero_val < val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail797;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail797;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail797;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail797:;
		}
	    }
	  else
	    {
	      if (ok && (zero_val < 0 || zero_val >= prec)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail798;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail798;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail798;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (val, false, prec));
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  build_zero_cst (type0);
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 585, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail798:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_368 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[3]) && tree_int_cst_sgn (captures[3]) > 0
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail814;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail814;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[2];
	    _o2[1] =  build_int_cst (TREE_TYPE (captures[2]),
 1);
	    _r2 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, shift, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 597, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail814:;
    }
  return NULL_TREE;
}

tree
generic_simplify_374 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree tem = uniform_vector_p (captures[1]);
      if (tem
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail820;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  tem;
	    tree _r;
	    _r = fold_build2_loc (loc, shiftrotate, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 602, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail820:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_381 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((integer_zerop (captures[1]) || integer_onep (captures[1]))
)
    {
      if ((eqne == EQ_EXPR) ^ integer_zerop (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail834;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 615, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail834:;
	}
      else
	{
	  if (types_match (type, TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail835;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_one_cst (type);
		tree _r;
		_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 616, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail835:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_385 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && op != MULT_EXPR
 && op != RDIV_EXPR
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && type_has_mode_precision_p (TREE_TYPE (captures[4]))
 && type_has_mode_precision_p (type)
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], type)
 && (types_match (captures[2], captures[4])
 || poly_int_tree_p (captures[3]))
)
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail845;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 618, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail845:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail846;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
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
		    _o2[0] = captures[4];
		    if (TREE_TYPE (_o2[0]) != utype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 619, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail846:;
	  }
	}
    }
  else
    {
      if (FLOAT_TYPE_P (type)
 && DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (type)
)
	{
	  {
 tree arg0 = strip_float_extensions (captures[2]);
 tree arg1 = strip_float_extensions (captures[4]);
 tree itype = TREE_TYPE (captures[0]);
 tree ty1 = TREE_TYPE (arg0);
 tree ty2 = TREE_TYPE (arg1);
 enum tree_code code = TREE_CODE (itype);
	      if (FLOAT_TYPE_P (ty1)
 && FLOAT_TYPE_P (ty2)
)
		{
		  {
 tree newtype = type;
 if (TYPE_MODE (ty1) == SDmode
 || TYPE_MODE (ty2) == SDmode
 || TYPE_MODE (type) == SDmode)
 newtype = dfloat32_type_node;
 if (TYPE_MODE (ty1) == DDmode
 || TYPE_MODE (ty2) == DDmode
 || TYPE_MODE (type) == DDmode)
 newtype = dfloat64_type_node;
 if (TYPE_MODE (ty1) == TDmode
 || TYPE_MODE (ty2) == TDmode
 || TYPE_MODE (type) == TDmode)
 newtype = dfloat128_type_node;
		      if ((newtype == dfloat32_type_node
 || newtype == dfloat64_type_node
 || newtype == dfloat128_type_node)
 && newtype == type
 && types_match (newtype, type)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail847;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail847;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail847;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (_o1[0]) != newtype)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[4];
			      if (TREE_TYPE (_o1[0]) != newtype)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 620, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail847:;
			}
		      else
			{
			  {
 if (element_precision (ty1) > element_precision (newtype))
 newtype = ty1;
 if (element_precision (ty2) > element_precision (newtype))
 newtype = ty2;
			      if (element_precision (newtype) < element_precision (itype)
 && (!VECTOR_MODE_P (TYPE_MODE (newtype))
 || target_supports_op_p (newtype, op, optab_default))
 && (flag_unsafe_math_optimizations
 || (element_precision (newtype) == element_precision (type)
 && real_can_shorten_arithmetic (element_mode (itype),
 element_mode (type))
 && !excess_precision_type (newtype)))
 && !types_match (itype, newtype)
)
				{
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail848;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail848;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail848;
				  {
				    tree res_op0;
				    {
				      tree _o1[2], _r1;
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[2];
					if (TREE_TYPE (_o2[0]) != newtype)
					  {
					    _r2 = fold_build1_loc (loc, NOP_EXPR, newtype, _o2[0]);
					  }
					else
					  _r2 = _o2[0];
					_o1[0] = _r2;
				      }
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[4];
					if (TREE_TYPE (_o2[0]) != newtype)
					  {
					    _r2 = fold_build1_loc (loc, NOP_EXPR, newtype, _o2[0]);
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      res_op0 = _r1;
				    }
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 621, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail848:;
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
generic_simplify_416 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 || bitwise_inverted_equal_p (captures[1], captures[2], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail882;
	  {
	    tree _r;
	    _r =  wascmp ? constant_boolean_node (false, type) : build_zero_cst (type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 650, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail882:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_428 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail907;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail907;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail907;
	      {
		tree _r;
		_r = captures[0];
		if (TREE_SIDE_EFFECTS (captures[4]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail907:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail908;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail908;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail908;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail908:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail909;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail909;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail909;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 666, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail909:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail910;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail910;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail910;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
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
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 667, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail910:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail911;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail911;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail911;
			      {
				tree res_op0;
				res_op0 = captures[4];
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
				_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 668, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail911:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail912;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail912;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail912;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
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
				    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 669, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail912:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail913;
				      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail913;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail913;
				      {
					tree res_op0;
					res_op0 = captures[4];
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
					_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail913:;
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
generic_simplify_456 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
)
    {
      {
 tree shift_type = TREE_TYPE (captures[2]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail966;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != shift_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 691, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail966:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_463 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && wi::to_wide (captures[1]) == element_precision (type) - 1
)
    {
      {
 tree stype = TREE_TYPE (captures[0]);
 tree ntype = TYPE_UNSIGNED (stype) ? signed_type_for (stype)
 : unsigned_type_for (stype);
	  if (VECTOR_TYPE_P (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail974;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, ntype, _o2[0]);
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 701, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail974:;
	    }
	  else
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail975;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (TREE_TYPE (_o2[0]) != ntype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, ntype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 702, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail975:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_483 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1000;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1000;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1000;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1000:;
  return NULL_TREE;
}

tree
generic_simplify_488 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq),
 const combined_fn ARG_UNUSED (sign))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (neeq == NE_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1005;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1005;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 731, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1005:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1006;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1006;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 732, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1006:;
    }
  return NULL_TREE;
}

tree
generic_simplify_497 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1017;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1017;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1017:;
  return NULL_TREE;
}

tree
generic_simplify_503 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1032;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1032;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1032;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1032:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1033;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1033;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1033;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1033:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1034;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1034;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1034;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1034:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1035;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1035;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1035;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1035:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_522 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1057;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1057;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1057;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1057;
  {
    tree _r;
    _r = captures[3];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1057:;
  return NULL_TREE;
}

tree
generic_simplify_530 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[4]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1065;
	  {
	    tree res_op0;
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      _o1[3] = captures[3];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[7];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[5];
	      _o1[6] = captures[6];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 7, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      if (!_r1)
	        goto next_after_fail1065;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1065:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_539 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && ! HONOR_NANS (type) && ! HONOR_INFINITIES (type)
 && ! flag_trapping_math
 && ! flag_errno_math
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1074;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = maybe_build_call_expr_loc (loc, logs, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail1074;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 781, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1074:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_551 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1086;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1086:;
  return NULL_TREE;
}

tree
generic_simplify_559 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIGNBIT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1094;
  {
    tree _r;
    _r =  integer_zero_node;
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 801, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1094:;
  return NULL_TREE;
}

tree
generic_simplify_565 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1100;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FNMA, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1100;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 807, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1100:;
    }
  return NULL_TREE;
}

tree
generic_simplify_575 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1110;
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
		  goto next_after_fail1110;
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 814, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1110:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_586 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (plusminus),
 const enum tree_code ARG_UNUSED (minusplus))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!VECTOR_INTEGER_TYPE_P (type)
 && !FLOAT_WORDS_BIG_ENDIAN
 && (operand_equal_p (captures[0], captures[2], 0)
 ? operand_equal_p (captures[1], captures[3], 0)
 : operand_equal_p (captures[0], captures[3], 0) && operand_equal_p (captures[1], captures[2], 0))
)
    {
      {
 vec_perm_builder builder;
	  if (tree_to_vec_perm_builder (&builder, captures[4])
)
	    {
	      {
 poly_uint64 nelts = TYPE_VECTOR_SUBPARTS (type);
 vec_perm_indices sel (builder, 2, nelts);
 machine_mode vec_mode = TYPE_MODE (type);
 machine_mode wide_mode;
 scalar_mode wide_elt_mode;
 poly_uint64 wide_nunits;
 scalar_mode inner_mode = GET_MODE_INNER (vec_mode);
		  if (VECTOR_MODE_P (vec_mode)
 && sel.series_p (0, 2, 0, 2)
 && sel.series_p (1, 2, nelts + 1, 2)
 && GET_MODE_2XWIDER_MODE (inner_mode).exists (&wide_elt_mode)
 && multiple_p (GET_MODE_NUNITS (vec_mode), 2, &wide_nunits)
 && related_vector_mode (vec_mode, wide_elt_mode,
 wide_nunits).exists (&wide_mode)
)
		    {
		      {
 tree stype
 = lang_hooks.types.type_for_mode (GET_MODE_INNER (wide_mode),
 TYPE_UNSIGNED (type));
 tree ntype = build_vector_type_for_mode (stype, wide_mode);
 const struct real_format *fmt_old = FLOAT_MODE_FORMAT (vec_mode);
 const struct real_format *fmt_new = FLOAT_MODE_FORMAT (wide_mode);
			  if (TYPE_MODE (stype) != BLKmode
 && VECTOR_TYPE_P (ntype)
 && fmt_old != NULL
 && fmt_new != NULL
)
			    {
			      {
 if (known_eq (GET_MODE_NUNITS (wide_mode), 1)
 && !target_supports_op_p (ntype, NEGATE_EXPR, optab_vector))
 ntype = stype;
				  if (fmt_new->signbit_rw
 == fmt_old->signbit_rw + GET_MODE_UNIT_BITSIZE (vec_mode)
 && fmt_new->signbit_rw == fmt_new->signbit_ro
 && targetm.can_change_mode_class (TYPE_MODE (ntype),
 TYPE_MODE (type), ALL_REGS)
 && ((optimize_vectors_before_lowering_p ()
 && VECTOR_TYPE_P (ntype))
 || target_supports_op_p (ntype, NEGATE_EXPR, optab_vector))
)
				    {
				      if (plusminus == PLUS_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1122;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[3];
						  _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, ntype, _o3[0]);
						  _o2[0] = _r3;
						}
						_r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						_o1[0] = _r2;
					      }
					      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 = captures[2];
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[0]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (TREE_SIDE_EFFECTS (captures[4]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 822, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1122:;
					}
				      else
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1123;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, ntype, _o3[0]);
						  _o2[0] = _r3;
						}
						_r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						_o1[0] = _r2;
					      }
					      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
					      res_op1 = _r1;
					    }
					    tree _r;
					    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (TREE_SIDE_EFFECTS (captures[4]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 823, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1123:;
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
generic_simplify_CONJ_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CONJ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		tree res = generic_simplify_515 (loc, type, _p0, captures);
		if (res) return res;
	      }
	      break;
	    }
	  case COMPLEX_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		{
 tree itype = TREE_TYPE (type);
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1241;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			if (TREE_TYPE (_o1[0]) != itype)
			  {
			    _r1 = fold_build1_loc (loc, NOP_EXPR, itype, _o1[0]);
			  }
			else
			  _r1 = _o1[0];
			res_op0 = _r1;
		      }
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[3];
			  if (TREE_TYPE (_o2[0]) != itype)
			    {
			      _r2 = fold_build1_loc (loc, NOP_EXPR, itype, _o2[0]);
			    }
			  else
			    _r2 = _o2[0];
			  _o1[0] = _r2;
			}
			_r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, COMPLEX_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1241:;
		}
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case CONJ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  tree res = generic_simplify_515 (loc, type, _p0, captures);
	  if (res) return res;
	}
        break;
      }
    case COMPLEX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  {
 tree itype = TREE_TYPE (type);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1242;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (_o1[0]) != itype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, itype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[3];
		    if (TREE_TYPE (_o2[0]) != itype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, itype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = fold_build2_loc (loc, COMPLEX_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1242:;
	  }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_MINUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1269;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1269;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 881, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1269:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (fold_real_zero_addition_p (type, captures[0], captures[1], 1)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1270;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = non_lvalue_loc (loc, res_op0);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 898, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1270:;
	  }
      }
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR);
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
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, MINUS_EXPR, MINUS_EXPR);
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!FLOAT_TYPE_P (type)
 || (!tree_expr_maybe_nan_p (captures[0])
 && !tree_expr_maybe_infinite_p (captures[0])
 && (!HONOR_SIGN_DEPENDENT_ROUNDING (type)
 || !HONOR_SIGNED_ZEROS (type)))
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1271;
	    {
	      tree _r;
	      _r =  build_zero_cst (type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 899, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1271:;
	  }
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
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case TRUNC_DIV_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
			    {
			      if ((_q51 == _q61 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q61, 0))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q61 };
				    tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q51))
		      {
		      case TRUNC_DIV_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q51, 0);
			  tree _q71 = TREE_OPERAND (_q51, 1);
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q20, 0))
			    {
			      if ((_q71 == _q50 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q50, 0))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q70, _q71, _q20, _q50 };
				    tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q20, _q51 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q41))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    tree _q61 = TREE_OPERAND (_q41, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q40 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
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
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case MULT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
		      {
			if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q51 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q41))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    tree _q61 = TREE_OPERAND (_q41, 1);
		    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _p0, 0))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _p0, _q40 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  if ((_q31 == _q41 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _q41, 0))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _p0, _q41 };
			tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
		{
		  if ((_q51 == _q30 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q30, 0))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q30 };
			tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
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
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		      {
			if (integer_onep (_q41))
			  {
			    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q50 };
				  tree res = generic_simplify_39 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q31))
		      {
			if ((_q21 == _q41 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q41, 0) && types_match (_q21, _q41)))
			  {
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q20, _q30, _q40 };
				  tree res = generic_simplify_39 (loc, type, _p0, _p1, captures);
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
        break;
      }
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
		    tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
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
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
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
	  case INTEGER_CST:
	    {
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				if (~wi::to_wide (captures[2]) == wi::to_wide (captures[4])
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1272;
				    {
				      if (! tree_invariant_p (captures[4])) goto next_after_fail1272;
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = unshare_expr (captures[4]);
					_r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[4];
				      tree _r;
				      _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
				      if (TREE_SIDE_EFFECTS (captures[2]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 900, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1272:;
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
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
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
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
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
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
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
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
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
			    if (integer_onep (_q51))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    if (integer_onep (_q51))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
	      tree _q50_pops[1];
	      if (tree_nop_convert (_q50, _q50_pops))
	        {
		  tree _q60 = _q50_pops[0];
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				if (integer_onep (_q51))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				if (integer_onep (_q51))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
		  tree _q60_pops[1];
		  if (tree_nop_convert (_q60, _q60_pops))
		    {
		      tree _q70 = _q60_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
	          break;
	        }
	      default:;
	      }
	  }
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
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		if (!TYPE_OVERFLOW_SANITIZED (type)
)
		  {
		    {
 tree utype = unsigned_type_for (type);
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1273;
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
			      _o2[0] = captures[0];
			      if (TREE_TYPE (_o2[0]) != utype)
				{
				  _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
				}
			      else
			        _r2 = _o2[0];
			      _o1[1] = _r2;
			    }
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    res_op0 = _r1;
			  }
			  tree _r;
			  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 901, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1273:;
		    }
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1274;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 902, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1274:;
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1275;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1275:;
			  }
		      }
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
	      if (integer_all_onesp (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
			if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			  {
			    if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
		      tree _q70 = _p1_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_all_onesp (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p1, 0);
			    tree _q81 = TREE_OPERAND (_p1, 1);
			    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			      {
				if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
			      {
				if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
			  tree _q80 = _p1_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				  {
				    if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				  {
				    if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
		    }
	          break;
	        }
	      default:;
	      }
	  }
      }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_44 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_44 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_p1))
	  {
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1276;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1276:;
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1277;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 905, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1277:;
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_all_onesp (_q31))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p1, 0);
			    tree _q81 = TREE_OPERAND (_p1, 1);
			    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			      {
				if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
			      {
				if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
			  tree _q80 = _p1_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				  {
				    if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				  {
				    if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
		    }
	          break;
	        }
	      default:;
	      }
	  {
	    tree _q30_pops[1];
	    if (tree_nop_convert (_q30, _q30_pops))
	      {
		tree _q40 = _q30_pops[0];
		switch (TREE_CODE (_q40))
		  {
		  case BIT_AND_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      tree _q51 = TREE_OPERAND (_q40, 1);
		      if (integer_all_onesp (_q31))
			{
			  switch (TREE_CODE (_p1))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_p1, 0);
				tree _q91 = TREE_OPERAND (_p1, 1);
				if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				  {
				    if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				  {
				    if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
			      tree _q90 = _p1_pops[0];
			      switch (TREE_CODE (_q90))
			        {
				case BIT_IOR_EXPR:
				  {
				    tree _q100 = TREE_OPERAND (_q90, 0);
				    tree _q101 = TREE_OPERAND (_q90, 1);
				    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
				      {
					if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
					      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				    if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
				      {
					if ((_q101 == _q50 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q50, 0) && types_match (_q101, _q50)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
					      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
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
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	    break;
	  }
	case BIT_AND_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			  {
			    if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
		  tree _q60_pops[1];
		  if (tree_nop_convert (_q60, _q60_pops))
		    {
		      tree _q70 = _q60_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
	          break;
	        }
	      default:;
	      }
	  {
	    tree _p1_pops[1];
	    if (tree_nop_convert (_p1, _p1_pops))
	      {
		tree _q60 = _p1_pops[0];
		switch (TREE_CODE (_q60))
		  {
		  case PLUS_EXPR:
		    {
		      tree _q70 = TREE_OPERAND (_q60, 0);
		      tree _q71 = TREE_OPERAND (_q60, 1);
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    if (integer_onep (_q71))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    if (integer_onep (_q71))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
		      tree _q70_pops[1];
		      if (tree_nop_convert (_q70, _q70_pops))
		        {
			  tree _q80 = _q70_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				  {
				    if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				      {
					if (integer_onep (_q71))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
				if ((_q90 == _q31 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q31, 0) && types_match (_q90, _q31)))
				  {
				    if ((_q91 == _q30 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q30, 0) && types_match (_q91, _q30)))
				      {
					if (integer_onep (_q71))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
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
  if (tree_negate_expr_p (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (!FIXED_POINT_TYPE_P (type)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1278;
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
	      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1278:;
	  }
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
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _p1, _q40, _q51, _q20 };
			  tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _q51, _p1, _q40, _q50, _q20 };
			  tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
			  if (res) return res;
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _p1, _q41, _q20 };
		    tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _p1, _q40, _q20 };
		    tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
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
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			      {
				{
 poly_int64 diff;
				    if (ptr_difference_const (captures[0], captures[1], &diff)
)
				      {
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1279;
					{
					  tree res_op0;
					  res_op0 =  build_int_cst_type (type, diff);
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
					  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[0]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 907, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1279:;
				      }
				}
			      }
			  }
		          break;
		        }
		      default:;
		      }
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		      if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			{
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1280;
				  {
				    tree _r;
				    _r =  build_int_cst_type (type, diff);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 908, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1280:;
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
	  case POINTER_PLUS_EXPR:
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
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
			    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			      {
				{
 poly_int64 diff;
				    if (ptr_difference_const (captures[0], captures[2], &diff)
)
				      {
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1281;
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
					  res_op1 =  build_int_cst_type (type, diff);
					  tree _r;
					  _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[0]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 909, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1281:;
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		      if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			{
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1282;
				  {
				    tree _r;
				    _r =  build_int_cst_type (type, diff);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 910, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1282:;
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
if (integer_onep (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case SSA_NAME:
        {
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (INTEGRAL_TYPE_P (type)
 && ssa_name_has_boolean_range (captures[1])
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1283;
		{
		  tree res_op0;
		  res_op0 = captures[1];
		  tree res_op1;
		  res_op1 = captures[0];
		  tree _r;
		  _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 911, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1283:;
	      }
	  }
          break;
        }
      default:;
      }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _q30, _q41, _p0 };
		    tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
		    tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q30, _p1, _p1, _q31, _p0 };
	      tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
	      tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1284;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1284:;
		      }
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1285;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1285:;
		      }
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1286;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1286:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1287;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1287:;
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
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1288;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 913, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1288:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1289;
			{
			  tree res_op0;
			  res_op0 = captures[2];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[0]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 914, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1289:;
		      }
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
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1290;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  res_op1 = captures[3];
			  tree _r;
			  _r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[2]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 915, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1290:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1291;
			{
			  tree res_op0;
			  res_op0 = captures[3];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 916, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1291:;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		tree res = generic_simplify_47 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_47 (loc, type, _p0, _p1, captures);
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
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		    tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		    tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		    tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q30_pops[1];
	      if (tree_nop_convert (_q30, _q30_pops))
	        {
		  tree _q40 = _q30_pops[0];
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
			tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    {
	      tree _q31_pops[1];
	      if (tree_nop_convert (_q31, _q31_pops))
	        {
		  tree _q50 = _q31_pops[0];
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
			tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		  tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q30_pops[1];
	      if (tree_nop_convert (_q30, _q30_pops))
	        {
		  tree _q40 = _q30_pops[0];
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
			tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
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
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		    tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		    tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	case PLUS_EXPR:
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
			tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		  tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		  tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case MINUS_EXPR:
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		  tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
		  if (res) return res;
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
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_52 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_52 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if (CONSTANT_CLASS_P (_q20))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_17 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_21 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_each_onep (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_54 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
			  tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
			  tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
		    tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
		    tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
			  if (!TYPE_SATURATING (type)
)
			    {
			      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
				{
				  if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0)
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1292;
				      {
					tree res_op0;
					res_op0 = captures[1];
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (TREE_SIDE_EFFECTS (captures[2]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 917, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1292:;
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
			  tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
			  tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
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
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (integer_each_onep (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_54 (loc, type, _p0, _p1, captures);
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    if (CONSTANT_CLASS_P (_q30))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_17 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
if (CONSTANT_CLASS_P (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case MINUS_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  tree _q31 = TREE_OPERAND (_p1, 1);
	  if (CONSTANT_CLASS_P (_q30))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		tree res = generic_simplify_53 (loc, type, _p0, _p1, captures);
		if (res) return res;
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
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (CONSTANT_CLASS_P (_q40))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_53 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  }
if (integer_all_onesp (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (!TYPE_SATURATING (type)
)
	{
	  if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	    {
	      if (TREE_CODE (type) != COMPLEX_TYPE
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1293;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1293;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree _r;
		    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 918, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1293:;
		}
	    }
	}
    }
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
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
		    tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
		    tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
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
		case POINTER_PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1294;
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
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 919, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1294:;
				      }
				    }
				  else
				    {
				      if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0)
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1295;
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
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 920, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1295:;
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
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
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
		      case PLUS_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
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
	  case POINTER_PLUS_EXPR:
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
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				if (!TYPE_SATURATING (type)
)
				  {
				    if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
				      {
					if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
					  {
					    {
 tree utype = unsigned_type_for (type);
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1296;
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
						      _o2[0] = captures[2];
						      if (TREE_TYPE (_o2[0]) != utype)
							{
							  _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
							}
						      else
						        _r2 = _o2[0];
						      _o1[1] = _r2;
						    }
						    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    res_op0 = _r1;
						  }
						  tree _r;
						  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						  if (TREE_SIDE_EFFECTS (captures[3]))
						    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 921, __FILE__, __LINE__, true);
						  return _r;
						}
next_after_fail1296:;
					    }
					  }
					else
					  {
					    if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0
 && TREE_CODE (captures[2]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[2]) == 0)
)
					      {
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
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
						  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
						  if (TREE_SIDE_EFFECTS (captures[3]))
						    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
						  return _r;
						}
next_after_fail1297:;
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
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
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
		  if (tree_zero_one_valued_p (_q31))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
			tree res = generic_simplify_58 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      if (tree_zero_one_valued_p (_q30))
	{
	  switch (TREE_CODE (_q31))
	    {
	    case MINUS_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q31, 0);
		tree _q51 = TREE_OPERAND (_q31, 1);
		if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q30 };
		      tree res = generic_simplify_58 (loc, type, _p0, _p1, captures);
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1298;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1298;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1298;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1298:;
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1299;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1299;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1299;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1299;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1299:;
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1300;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1300;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1300:;
    }
  }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (fold_real_zero_addition_p (type, captures[1], captures[0], 0)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1301:;
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1302;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1302;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1302;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1302;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1302:;
	    }
	}
	if (integer_each_onep (_q31))
	  {
	    if (integer_zerop (_q32))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		  tree res = generic_simplify_59 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      tree _q42 = TREE_OPERAND (_q30, 2);
	      if (integer_each_onep (_q41))
		{
		  if (integer_zerop (_q42))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
			tree res = generic_simplify_59 (loc, type, _p0, _p1, captures);
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
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RDIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNT:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTLL:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
	          }
	        break;
	      case CFN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_POPCOUNT:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTIMAX:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTL:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (tree_vec_same_elem_p (_q31))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
			tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if (tree_vec_same_elem_p (_q30))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
			tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG);
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
	case CFN_BUILT_IN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2);
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
	case CFN_BUILT_IN_LOGF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOGF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF);
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
	case CFN_BUILT_IN_LOGL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOGL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL);
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
	case CFN_BUILT_IN_LOG10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F);
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
	case CFN_BUILT_IN_LOG10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L);
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
	case CFN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_LOG);
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
	case CFN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_LOG2);
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
	case CFN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_LOG10);
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
	case CFN_BUILT_IN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10);
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
	case CFN_BUILT_IN_LOG2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F);
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
	case CFN_BUILT_IN_LOG2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L);
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
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case MAX_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_q31))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
				{
 auto i = wi::neg (wi::to_wide (captures[2]));
				    if (wi::popcount (i) == 1
 && (wi::to_wide (captures[1])) == (i - 1)
)
				      {
					if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
					  {
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1303;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1303;
					    {
					      tree res_op0;
					      res_op0 = captures[0];
					      tree res_op1;
					      res_op1 = captures[1];
					      tree _r;
					      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 925, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1303:;
					  }
					else
					  {
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1304;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1304;
					    {
					      if (! tree_invariant_p (captures[0])) goto next_after_fail1304;
					      if (! tree_invariant_p (captures[1])) goto next_after_fail1304;
					      tree res_op0;
					      {
						tree _o1[2], _r1;
						_o1[0] = unshare_expr (captures[0]);
						_o1[1] = unshare_expr (captures[1]);
						_r1 = fold_build2_loc (loc, LE_EXPR, boolean_type_node, _o1[0], _o1[1]);
						res_op0 = _r1;
					      }
					      tree res_op1;
					      res_op1 = unshare_expr (captures[0]);
					      tree res_op2;
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[0];
						_o1[1] = captures[1];
						_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						res_op2 = _r1;
					      }
					      tree _r;
					      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1304:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1305;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1305:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q22))
	      {
	      case VECTOR_CST:
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
				switch (TREE_CODE (_q62))
				  {
				  case VECTOR_CST:
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
					tree res = generic_simplify_37 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
generic_simplify_LSHIFT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
		tree res = generic_simplify_368 (loc, type, _p0, _p1, captures, LSHIFT_EXPR, TRUNC_MOD_EXPR);
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
		tree res = generic_simplify_368 (loc, type, _p0, _p1, captures, LSHIFT_EXPR, FLOOR_MOD_EXPR);
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
      tree res = generic_simplify_369 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
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
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			  if (TYPE_SIGN (TREE_TYPE (captures[0])) == SIGNED
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (TREE_TYPE (captures[0])) - 1)
)
			    {
			      {
 wide_int wone = wi::one (TYPE_PRECISION (type));
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1665;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1665;
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
				    res_op1 =  wide_int_to_tree (type,
 wi::lshift (wone, wi::to_wide (captures[2])));
				    tree _r;
				    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1665:;
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case RSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				if (wi::ltu_p (wi::to_wide (captures[2]), element_precision (type))
 && INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) >= TYPE_PRECISION (type)
 || wi::geu_p (wi::to_wide (captures[2]),
 TYPE_PRECISION (type)
 - TYPE_PRECISION (TREE_TYPE (captures[0]))))
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1666;
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
					tree _o1[2], _r1;
					_o1[0] =  build_minus_one_cst (type);
					_o1[1] = captures[2];
					_r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op1 = _r1;
				      }
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1666:;
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
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    tree res = generic_simplify_370 (loc, type, _p0, _p1, captures);
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
	case RSHIFT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			tree res = generic_simplify_370 (loc, type, _p0, _p1, captures);
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
if (integer_onep (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case MINUS_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  tree _q31 = TREE_OPERAND (_p1, 1);
	  switch (TREE_CODE (_q30))
	    {
	    case INTEGER_CST:
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		  if (INTEGRAL_TYPE_P (type)
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
 && single_use (captures[1])
)
		    {
		      if (TYPE_UNSIGNED (type)
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1667;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[3];
			    tree _r;
			    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1667:;
			}
		      else
			{
			  {
 tree utype = unsigned_type_for (type);
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1668;
			      {
				tree res_op0;
				{
				  tree _o1[2], _r1;
				  {
				    tree _o2[2], _r2;
				    {
				      tree _o3[1], _r3;
				      _o3[0] = captures[0];
				      if (TREE_TYPE (_o3[0]) != utype)
					{
					  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
					}
				      else
				        _r3 = _o3[0];
				      _o2[0] = _r3;
				    }
				    _o2[1] = captures[2];
				    _r2 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  res_op0 = _r1;
				}
				tree _r;
				_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1668:;
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
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_371 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_372 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_373 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_374 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_375 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
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
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, LSHIFT_EXPR);
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
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, LSHIFT_EXPR);
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
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LSHIFT_EXPR);
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, LSHIFT_EXPR);
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
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, LSHIFT_EXPR);
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
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LSHIFT_EXPR);
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1669;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1669;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1669;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1669:;
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1670;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1670;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1670;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1670;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1670:;
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1671;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1671;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1671;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1671;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1671:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1672;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1672:;
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
generic_simplify_MIN_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_495 (loc, type, _p0, _p1, captures, MIN_EXPR);
	if (res) return res;
      }
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
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_496 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_496 (loc, type, _p0, _p1, captures, MIN_EXPR);
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
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
	      tree res = generic_simplify_497 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
	      tree res = generic_simplify_497 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
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
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
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
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
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
	      tree res = generic_simplify_499 (loc, type, _p0, _p1, captures);
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
	      tree res = generic_simplify_499 (loc, type, _p0, _p1, captures);
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
 && TYPE_MIN_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST)
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1702;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1013, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1702:;
      }
    else
      {
	if (INTEGRAL_TYPE_P (type)
 && TYPE_MAX_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1703;
	    {
	      tree _r;
	      _r = captures[0];
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1703:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1704;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1704:;
			  }
			else
			  {
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1705;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1705;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1705:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1706;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1706:;
			  }
			else
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1707;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1707;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1707:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1708;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1708:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1709;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1709:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1710;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1710:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1711;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1711:;
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
			    tree res = generic_simplify_500 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		      tree res = generic_simplify_501 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		      tree res = generic_simplify_502 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		tree res = generic_simplify_503 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1712;
		    {
		      tree res_op0;
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			_r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1712:;
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
		tree res = generic_simplify_504 (loc, type, _p0, _p1, captures, MIN_EXPR, MAX_EXPR);
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1713;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1713;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1713;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1713:;
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1714;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1714;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1714;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1714;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1714:;
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1715;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1715;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1715;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1715;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1715:;
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
	    tree res = generic_simplify_505 (loc, type, _p0, _p1, captures, MIN_EXPR, BIT_AND_EXPR);
	    if (res) return res;
	  }
        }
    }
  return NULL_TREE;
}

tree
generic_simplify_UNLT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1742;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1742;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1742;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1742:;
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1743;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1743;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1743;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1743;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1743:;
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1744;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1744;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1744;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1744;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1744:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_535 (loc, type, _p0, _p1, captures, UNLT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNLT_EXPR, LT_EXPR);
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
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNLT_EXPR, UNGT_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNLT_EXPR, UNGT_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNLT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_UNEQ_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1754;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1754;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1754;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1754:;
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
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1755;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1755;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1755;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1755;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1755:;
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
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1756;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1756;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1756;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1756;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1756:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_536 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNEQ_EXPR, EQ_EXPR);
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
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNEQ_EXPR, UNEQ_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNEQ_EXPR, UNEQ_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_BIT_INSERT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case BIT_FIELD_REF:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
	  if (VECTOR_TYPE_P (type)
 && (VECTOR_MODE_P (TYPE_MODE (type))
 || optimize_vectors_before_lowering_p ())
 && operand_equal_p (TYPE_SIZE (TREE_TYPE (captures[0])),
 TYPE_SIZE (TREE_TYPE (captures[2])), 0)
 && types_match (TREE_TYPE (TREE_TYPE (captures[0])), TREE_TYPE (captures[1]))
 && TYPE_VECTOR_SUBPARTS (type).is_constant ()
 && multiple_p (wi::to_poly_offset (captures[4]),
 wi::to_poly_offset (TYPE_SIZE (TREE_TYPE (type))))
)
	    {
	      {
 unsigned HOST_WIDE_INT elsz
 = tree_to_uhwi (TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))));
 poly_uint64 relt = exact_div (tree_to_poly_uint64 (captures[4]), elsz);
 poly_uint64 ielt = exact_div (tree_to_poly_uint64 (captures[5]), elsz);
 unsigned nunits = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder;
 builder.new_vector (nunits, nunits, 1);
 for (unsigned i = 0; i < nunits; ++i)
 builder.quick_push (known_eq (ielt, i) ? nunits + relt : i);
 vec_perm_indices sel (builder, 2, nunits);
		  if (!VECTOR_MODE_P (TYPE_MODE (type))
 || can_vec_perm_const_p (TYPE_MODE (type),
 TYPE_MODE (type), sel, false)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1939;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1939;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1939;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
			  res_op1 = _r1;
			}
			tree res_op2;
			res_op2 =  vec_perm_indices_to_tree (build_vector_type (ssizetype, nunits),
 sel);
			tree _r;
			_r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
			if (TREE_SIDE_EFFECTS (captures[3]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1084, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1939:;
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
generic_simplify (location_t loc, enum tree_code code, const tree type ATTRIBUTE_UNUSED, tree _p0, tree _p1, tree _p2)
{
  switch (code)
    {
    case COND_EXPR:
      return generic_simplify_COND_EXPR (loc, code, type, _p0, _p1, _p2);
    case VEC_COND_EXPR:
      return generic_simplify_VEC_COND_EXPR (loc, code, type, _p0, _p1, _p2);
    case BIT_FIELD_REF:
      return generic_simplify_BIT_FIELD_REF (loc, code, type, _p0, _p1, _p2);
    case BIT_INSERT_EXPR:
      return generic_simplify_BIT_INSERT_EXPR (loc, code, type, _p0, _p1, _p2);
    case VEC_PERM_EXPR:
      return generic_simplify_VEC_PERM_EXPR (loc, code, type, _p0, _p1, _p2);
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}
void
generic_dump_logs (const char *file1, int line1_id, const char *file2, int line2, bool simplify)
{
  static int dbg_line_numbers[1097] = {
	/* 0 */ 161, 164, 173, 175, 178, 181, 183, 189, 197, 195, 
	/* 10 */ 199, 201, 921, 923, 2052, 2058, 2060, 2063, 2068, 2071, 
	/* 20 */ 2284, 2288, 2290, 2292, 2294, 2296, 2298, 2300, 2327, 2343, 
	/* 30 */ 2351, 2333, 2891, 2893, 2895, 2902, 2899, 2909, 2911, 2918, 
	/* 40 */ 2915, 3099, 3109, 3120, 3125, 3130, 3163, 3168, 3134, 3138, 
	/* 50 */ 3142, 3146, 3174, 3180, 3186, 3150, 3195, 3199, 3224, 3230, 
	/* 60 */ 3252, 3236, 3265, 3204, 3208, 3218, 3212, 3269, 3285, 3320, 
	/* 70 */ 3297, 3338, 3345, 3387, 3354, 3363, 3378, 3372, 3400, 3409, 
	/* 80 */ 3418, 3427, 3437, 5597, 8787, 8808, 10928, 10931, 10936, 11151, 
	/* 90 */ 11154, 11175, 11180, 8607, 254, 281, 282, 476, 1280, 1416, 
	/* 100 */ 1752, 1802, 1807, 1911, 1870, 3957, 3895, 2406, 2438, 4000, 
	/* 110 */ 4001, 4005, 4006, 4016, 4020, 4024, 4039, 4042, 4046, 3972, 
	/* 120 */ 3975, 3980, 4127, 4133, 4139, 4321, 4322, 4348, 4367, 4386, 
	/* 130 */ 4729, 5496, 6744, 8235, 8310, 9857, 9905, 9919, 10955, 11268, 
	/* 140 */ 905, 911, 1396, 1405, 1888, 1879, 1826, 2555, 3908, 3948, 
	/* 150 */ 3953, 3954, 3962, 3963, 3966, 3983, 4058, 4061, 4065, 4147, 
	/* 160 */ 4169, 4207, 4218, 4257, 4272, 4735, 6754, 8315, 9915, 10959, 
	/* 170 */ 1286, 1290, 1382, 1391, 1421, 1426, 1468, 1453, 1460, 1483, 
	/* 180 */ 1484, 1488, 1489, 1510, 1965, 1515, 1522, 1542, 1645, 1669, 
	/* 190 */ 1759, 1764, 1774, 1784, 1898, 1957, 1985, 1995, 1997, 2198, 
	/* 200 */ 2217, 2225, 2230, 2235, 2251, 2241, 2242, 4443, 4456, 4466, 
	/* 210 */ 2265, 2276, 2279, 2311, 2389, 2418, 2420, 2425, 2427, 2548, 
	/* 220 */ 2968, 2970, 3516, 3531, 3549, 3732, 3733, 3734, 3739, 3744, 
	/* 230 */ 3750, 3756, 3788, 3789, 3794, 3795, 3800, 3805, 3809, 3858, 
	/* 240 */ 3872, 3521, 3540, 3542, 3526, 4480, 4492, 7401, 9184, 1431, 
	/* 250 */ 1436, 1547, 1552, 1769, 1859, 1779, 1923, 1789, 1794, 1917, 
	/* 260 */ 1969, 1930, 1936, 2529, 1943, 2003, 4741, 6813, 6815, 6864, 
	/* 270 */ 6872, 10002, 10008, 444, 450, 482, 1225, 1245, 1250, 2044, 
	/* 280 */ 2045, 2082, 2564, 5482, 5489, 5539, 5542, 5592, 8228, 8642, 
	/* 290 */ 8472, 8479, 8636, 8681, 8686, 312, 868, 2316, 2543, 2582, 
	/* 300 */ 2592, 2631, 2637, 2640, 2645, 2810, 2661, 2663, 2664, 2667, 
	/* 310 */ 2669, 2670, 2672, 2674, 2676, 2678, 2680, 2682, 2696, 2697, 
	/* 320 */ 2731, 2816, 2841, 2757, 2784, 2824, 2829, 2854, 2861, 2927, 
	/* 330 */ 3830, 4671, 4679, 4682, 4688, 4691, 4718, 5026, 5027, 5061, 
	/* 340 */ 5065, 5194, 5034, 5035, 5079, 5082, 5083, 5088, 5091, 5094, 
	/* 350 */ 5095, 5047, 5050, 5239, 5243, 5248, 5507, 5657, 5661, 6824, 
	/* 360 */ 6840, 6842, 6854, 6884, 6890, 6891, 6906, 6907, 6911, 6929, 
	/* 370 */ 6934, 6966, 6974, 6984, 6993, 6997, 7003, 7010, 7026, 7030, 
	/* 380 */ 7034, 7041, 7042, 7047, 7048, 7055, 7056, 7058, 7059, 7075, 
	/* 390 */ 7086, 7098, 7102, 7104, 7109, 7112, 7115, 7123, 7185, 7186, 
	/* 400 */ 7190, 7191, 7198, 7202, 7206, 7209, 7215, 7216, 7220, 7223, 
	/* 410 */ 7230, 7250, 7253, 7256, 7259, 7308, 7311, 7315, 7322, 7328, 
	/* 420 */ 7336, 7345, 7346, 7444, 7454, 7493, 7499, 7515, 7528, 7530, 
	/* 430 */ 7532, 7558, 7600, 7579, 7580, 7587, 7589, 7605, 7611, 7616, 
	/* 440 */ 7625, 7631, 7637, 7642, 7647, 7679, 7756, 7661, 7671, 7794, 
	/* 450 */ 7796, 7798, 7800, 7802, 7804, 7808, 7810, 7833, 7856, 7968, 
	/* 460 */ 7975, 7976, 7984, 7985, 8148, 9228, 9230, 9318, 9320, 9321, 
	/* 470 */ 9327, 9343, 9345, 9347, 9365, 9366, 9642, 9645, 9659, 9668, 
	/* 480 */ 9732, 9733, 9787, 9789, 9865, 10274, 10276, 10278, 10710, 6820, 
	/* 490 */ 6831, 6833, 6941, 456, 1198, 1219, 8592, 8597, 8602, 516, 
	/* 500 */ 517, 528, 533, 540, 549, 557, 566, 612, 615, 803, 
	/* 510 */ 956, 973, 1004, 577, 833, 837, 842, 848, 852, 860, 
	/* 520 */ 948, 728, 738, 740, 742, 8222, 8647, 8669, 8652, 8657, 
	/* 530 */ 8662, 8676, 8710, 8715, 790, 793, 1620, 2605, 2608, 2705, 
	/* 540 */ 2717, 2799, 2743, 2770, 2882, 2885, 4709, 4701, 6778, 8078, 
	/* 550 */ 7358, 7361, 7387, 7388, 7881, 7883, 7885, 7887, 7891, 7893, 
	/* 560 */ 7895, 7897, 7901, 7906, 7913, 7918, 7938, 7940, 7942, 7944, 
	/* 570 */ 8091, 8099, 8109, 8117, 8127, 8249, 8251, 9242, 9261, 9301, 
	/* 580 */ 9710, 9712, 9713, 9768, 9771, 9773, 2621, 6768, 7431, 8323, 
	/* 590 */ 8328, 10295, 10297, 10299, 10301, 10305, 894, 930, 1270, 4847, 
	/* 600 */ 4917, 4920, 4928, 4995, 4997, 4998, 4999, 5206, 4898, 4907, 
	/* 610 */ 5711, 5714, 5715, 5723, 2209, 3841, 3846, 4613, 9067, 9069, 
	/* 620 */ 9100, 9135, 11212, 1162, 8540, 8561, 1171, 8284, 8290, 8587, 
	/* 630 */ 9014, 1185, 1189, 8582, 8765, 1364, 1448, 1496, 1441, 1473, 
	/* 640 */ 1504, 1537, 1578, 1589, 1600, 1612, 2450, 1841, 1849, 1854, 
	/* 650 */ 1977, 2306, 2570, 3095, 5165, 5183, 5184, 5682, 5688, 5736, 
	/* 660 */ 3486, 3488, 3498, 3500, 3605, 3606, 3607, 3612, 3617, 3623, 
	/* 670 */ 3629, 3661, 3662, 3667, 3668, 3673, 3678, 3682, 3506, 3511, 
	/* 680 */ 3556, 6956, 7404, 9170, 9172, 9900, 1527, 1532, 2508, 1700, 
	/* 690 */ 2513, 5217, 2488, 2519, 2523, 5231, 4656, 6805, 6807, 2089, 
	/* 700 */ 2127, 2150, 2151, 2493, 3933, 9585, 3477, 4771, 4814, 4827, 
	/* 710 */ 6219, 6221, 6223, 6433, 6437, 6445, 6472, 6474, 6323, 6326, 
	/* 720 */ 6488, 6492, 6550, 4759, 4778, 4785, 4791, 4797, 4803, 6556, 
	/* 730 */ 6688, 9201, 9202, 6698, 10062, 10070, 7709, 7710, 7724, 7725, 
	/* 740 */ 4499, 4503, 4513, 4531, 4596, 4598, 4600, 4602, 4651, 9192, 
	/* 750 */ 4517, 4524, 4509, 4623, 4632, 4635, 4834, 4967, 4977, 8177, 
	/* 760 */ 8180, 8199, 5633, 5645, 5648, 5652, 10504, 10510, 10518, 10524, 
	/* 770 */ 10533, 10539, 10547, 10553, 10599, 10607, 8000, 6949, 6945, 8158, 
	/* 780 */ 8165, 8300, 8305, 8406, 8503, 8520, 8552, 8572, 8577, 8828, 
	/* 790 */ 8805, 8784, 8613, 8617, 8908, 8918, 8925, 8934, 8952, 8959, 
	/* 800 */ 8940, 9207, 9213, 9575, 9581, 9578, 9589, 9595, 9603, 9609, 
	/* 810 */ 9617, 9623, 9677, 9880, 9895, 10161, 10164, 9969, 9983, 9996, 
	/* 820 */ 10680, 10694, 10785, 10786, 219, 2009, 2019, 5768, 2028, 1112, 
	/* 830 */ 2461, 3076, 5259, 5261, 5271, 5363, 5374, 5387, 5410, 5420, 
	/* 840 */ 5429, 5441, 5467, 5776, 6173, 1697, 1711, 1718, 1740, 1747, 
	/* 850 */ 2321, 2536, 2014, 2023, 2032, 2098, 2102, 2133, 2139, 3920, 
	/* 860 */ 6731, 3928, 9599, 9613, 9627, 5276, 5285, 5297, 5307, 5313, 
	/* 870 */ 5785, 5322, 5319, 5605, 5613, 5621, 5624, 5608, 5616, 5627, 
	/* 880 */ 5639, 237, 710, 2374, 4578, 5554, 5560, 5562, 5803, 5814, 
	/* 890 */ 5823, 11227, 2975, 2979, 242, 2996, 3000, 3012, 260, 297, 
	/* 900 */ 1400, 1706, 1814, 1821, 1831, 1836, 2108, 3020, 3032, 3026, 
	/* 910 */ 3038, 2119, 2726, 2751, 2778, 2762, 2789, 4181, 4153, 4228, 
	/* 920 */ 4237, 4280, 4291, 5567, 5578, 11193, 11194, 1625, 1630, 7394, 
	/* 930 */ 10658, 10662, 1653, 1658, 2501, 3821, 247, 300, 2735, 3045, 
	/* 940 */ 3052, 3059, 3065, 4190, 3070, 4246, 4294, 4303, 5570, 356, 
	/* 950 */ 304, 324, 333, 341, 415, 430, 438, 629, 669, 965, 
	/* 960 */ 1150, 1155, 1253, 1256, 1356, 2364, 5583, 8257, 8263, 8454, 
	/* 970 */ 8704, 2481, 5980, 5988, 7461, 8032, 8058, 8059, 2471, 8026, 
	/* 980 */ 592, 595, 719, 748, 754, 760, 768, 773, 778, 821, 
	/* 990 */ 825, 8269, 8275, 7950, 879, 1311, 4863, 1300, 1303, 1335, 
	/* 1000 */ 1346, 4840, 4912, 5005, 1370, 1559, 1635, 1663, 2256, 5011, 
	/* 1010 */ 5012, 7398, 11200, 4538, 4542, 4570, 4571, 4644, 4549, 4553, 
	/* 1020 */ 4561, 4562, 4949, 5602, 8008, 8010, 8017, 8019, 6953, 6452, 
	/* 1030 */ 6457, 6525, 6531, 6540, 6541, 4747, 5754, 5756, 6563, 6569, 
	/* 1040 */ 6572, 6581, 6585, 6590, 6619, 6624, 6685, 6632, 6637, 6695, 
	/* 1050 */ 7739, 7741, 6654, 6655, 6656, 6706, 6675, 6676, 6677, 6718, 
	/* 1060 */ 6719, 7770, 7775, 6598, 5760, 5762, 5999, 6001, 9373, 9379, 
	/* 1070 */ 9384, 9393, 9395, 9415, 9460, 9463, 9464, 9496, 9502, 9504, 
	/* 1080 */ 9505, 9527, 9532, 9537, 9567, 10809, 10811, 10846, 10920, 10923, 
	/* 1090 */ 11008, 10943, 10949, 11077, 11079, 11141, 11143
  };

  fprintf (dump_file, "%s %s:%d, %s:%d\n",
	  simplify ? "Applying pattern" : "Matching expression", file1, dbg_line_numbers[line1_id], file2, line2);
}

#pragma GCC diagnostic pop
