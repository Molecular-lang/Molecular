/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_zero_one_valued_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[0]), 1)
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 28, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case BIT_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (integer_onep (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
	      if (INTEGRAL_TYPE_P (type)
)
		{
		  {
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 29, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	    }
	  }
	if (integer_onep (_p0))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { t, _p1 };
	      if (INTEGRAL_TYPE_P (type)
)
		{
		  {
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 29, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
	  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || TYPE_PRECISION (TREE_TYPE (captures[1])) > 1)
 && INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[1]), 1)
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 30, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    default:;
    }
if (tree_truth_valued_p (t))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
)
	{
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 31, __FILE__, __LINE__, false);
	    return true;
	  }
	}
    }
  }
  return false;
}

bool
tree_signed_integer_sat_add (tree t, tree *res_ops)
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
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case PLUS_EXPR:
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
							case BIT_NOT_EXPR:
							  {
							    tree _q120 = TREE_OPERAND (_q31, 0);
							    switch (TREE_CODE (_q120))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q130 = TREE_OPERAND (_q120, 0);
								  tree _q131 = TREE_OPERAND (_q120, 1);
								  if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								    {
								      if ((_q131 == _q100 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q100, 0) && types_match (_q131, _q100)))
									{
									  if (integer_zerop (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (tree_signed_integer_sat_val (_p1, _p1_pops))
										  {
										    tree _q170 = _p1_pops[0];
										    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
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
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
								  if ((_q130 == _q100 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q100, 0) && types_match (_q130, _q100)))
								    {
								      if ((_q131 == _q40 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q40, 0) && types_match (_q131, _q40)))
									{
									  if (integer_zerop (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (tree_signed_integer_sat_val (_p1, _p1_pops))
										  {
										    tree _q170 = _p1_pops[0];
										    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
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
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
				      break;
				    }
			          default:;
			          }
			      }
			  }
			  {
			    tree _q40_pops[1];
			    if (tree_nop_convert (_q40, _q40_pops))
			      {
				tree _q50 = _q40_pops[0];
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
					    switch (TREE_CODE (_q61))
					      {
					      case INTEGER_CST:
					        {
						  if ((_q41 == _q70 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q70, 0) && types_match (_q41, _q70)))
						    {
						      switch (TREE_CODE (_q31))
						        {
							case BIT_XOR_EXPR:
							  {
							    tree _q110 = TREE_OPERAND (_q31, 0);
							    tree _q111 = TREE_OPERAND (_q31, 1);
							    if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
							      {
								switch (TREE_CODE (_q111))
								  {
								  case INTEGER_CST:
								    {
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (tree_signed_integer_sat_val (_p1, _p1_pops))
									      {
										tree _q150 = _p1_pops[0];
										if ((_q150 == _q70 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q70, 0) && types_match (_q150, _q70)))
										  {
										    if ((_p2 == _q40 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q40, 0) && types_match (_p2, _q40)))
										      {
											{
											  tree captures[4] ATTRIBUTE_UNUSED = { _q70, _q61, _q40, _q111 };
											  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											    {
											      if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
								      break;
								    }
							          default:;
							          }
							      }
							    switch (TREE_CODE (_q110))
							      {
							      case INTEGER_CST:
							        {
								  if ((_q111 == _q70 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q70, 0) && types_match (_q111, _q70)))
								    {
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (tree_signed_integer_sat_val (_p1, _p1_pops))
									      {
										tree _q150 = _p1_pops[0];
										if ((_q150 == _q70 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q70, 0) && types_match (_q150, _q70)))
										  {
										    if ((_p2 == _q40 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q40, 0) && types_match (_p2, _q40)))
										      {
											{
											  tree captures[4] ATTRIBUTE_UNUSED = { _q70, _q61, _q40, _q110 };
											  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											    {
											      if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
					          break;
					        }
					      default:;
					      }
					  {
					    tree _q61_pops[1];
					    if (tree_nop_convert (_q61, _q61_pops))
					      {
						tree _q90 = _q61_pops[0];
						if ((_q41 == _q70 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q70, 0) && types_match (_q41, _q70)))
						  {
						    switch (TREE_CODE (_q31))
						      {
						      case BIT_NOT_EXPR:
						        {
							  tree _q120 = TREE_OPERAND (_q31, 0);
							  switch (TREE_CODE (_q120))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q130 = TREE_OPERAND (_q120, 0);
								tree _q131 = TREE_OPERAND (_q120, 1);
								if ((_q130 == _q70 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q70, 0) && types_match (_q130, _q70)))
								  {
								    if ((_q131 == _q90 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q90, 0) && types_match (_q131, _q90)))
								      {
									if (integer_zerop (_q21))
									  {
									    {
									      tree _p1_pops[1];
									      if (tree_signed_integer_sat_val (_p1, _p1_pops))
									        {
										  tree _q170 = _p1_pops[0];
										  if ((_q170 == _q70 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q70, 0) && types_match (_q170, _q70)))
										    {
										      if ((_p2 == _q40 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q40, 0) && types_match (_p2, _q40)))
											{
											  {
											    tree captures[3] ATTRIBUTE_UNUSED = { _q70, _q90, _q40 };
											    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											      {
												{
												  res_ops[0] = captures[0];
												  res_ops[1] = captures[1];
												  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
								if ((_q130 == _q90 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q90, 0) && types_match (_q130, _q90)))
								  {
								    if ((_q131 == _q70 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q70, 0) && types_match (_q131, _q70)))
								      {
									if (integer_zerop (_q21))
									  {
									    {
									      tree _p1_pops[1];
									      if (tree_signed_integer_sat_val (_p1, _p1_pops))
									        {
										  tree _q170 = _p1_pops[0];
										  if ((_q170 == _q70 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q70, 0) && types_match (_q170, _q70)))
										    {
										      if ((_p2 == _q40 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q40, 0) && types_match (_p2, _q40)))
											{
											  {
											    tree captures[3] ATTRIBUTE_UNUSED = { _q70, _q90, _q40 };
											    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											      {
												{
												  res_ops[0] = captures[0];
												  res_ops[1] = captures[1];
												  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
						  case PLUS_EXPR:
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
								switch (TREE_CODE (_q101))
								  {
								  case INTEGER_CST:
								    {
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (tree_signed_integer_sat_val (_p1, _p1_pops))
									      {
										tree _q150 = _p1_pops[0];
										if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										  {
										    if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
										      {
											{
											  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q101, _q71, _q41 };
											  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											    {
											      if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
			  tree _q41_pops[1];
			  if (tree_nop_convert (_q41, _q41_pops))
			    {
			      tree _q60 = _q41_pops[0];
			      switch (TREE_CODE (_q60))
			        {
				case PLUS_EXPR:
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
					      switch (TREE_CODE (_q71))
					        {
						case INTEGER_CST:
						  {
						    switch (TREE_CODE (_q31))
						      {
						      case BIT_XOR_EXPR:
						        {
							  tree _q110 = TREE_OPERAND (_q31, 0);
							  tree _q111 = TREE_OPERAND (_q31, 1);
							  if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
							    {
							      switch (TREE_CODE (_q111))
							        {
								case INTEGER_CST:
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
									    {
									      tree _q150 = _p1_pops[0];
									      if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										{
										  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
										    {
										      {
											tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q71, _q41, _q111 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
											      {
												{
												  res_ops[0] = captures[0];
												  res_ops[1] = captures[1];
												  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
								    break;
								  }
							        default:;
							        }
							    }
							  switch (TREE_CODE (_q110))
							    {
							    case INTEGER_CST:
							      {
								if ((_q111 == _q40 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q40, 0) && types_match (_q111, _q40)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
									    {
									      tree _q150 = _p1_pops[0];
									      if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										{
										  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
										    {
										      {
											tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q71, _q41, _q110 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
											      {
												{
												  res_ops[0] = captures[0];
												  res_ops[1] = captures[1];
												  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
			  switch (TREE_CODE (_q40))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q31))
				  {
				  case BIT_XOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q31, 0);
				      tree _q71 = TREE_OPERAND (_q31, 1);
				      if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
					{
					  {
					    tree _q71_pops[1];
					    if (tree_nop_convert (_q71, _q71_pops))
					      {
						tree _q90 = _q71_pops[0];
						switch (TREE_CODE (_q90))
						  {
						  case PLUS_EXPR:
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
								switch (TREE_CODE (_q101))
								  {
								  case INTEGER_CST:
								    {
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (tree_signed_integer_sat_val (_p1, _p1_pops))
									      {
										tree _q150 = _p1_pops[0];
										if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
										  {
										    if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
										      {
											{
											  tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q101, _q71, _q40 };
											  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											    {
											      if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
				        }
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    switch (TREE_CODE (_q80))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  tree _q91 = TREE_OPERAND (_q80, 1);
						  {
						    tree _q90_pops[1];
						    if (tree_nop_convert (_q90, _q90_pops))
						      {
							tree _q100 = _q90_pops[0];
							if ((_q100 == _q41 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q41, 0) && types_match (_q100, _q41)))
							  {
							    switch (TREE_CODE (_q91))
							      {
							      case INTEGER_CST:
							        {
								  if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
								    {
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (tree_signed_integer_sat_val (_p1, _p1_pops))
									      {
										tree _q150 = _p1_pops[0];
										if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
										  {
										    if ((_p2 == _q70 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q70, 0) && types_match (_p2, _q70)))
										      {
											{
											  tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q91, _q70, _q40 };
											  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											    {
											      if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
			  switch (TREE_CODE (_q41))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q31))
				  {
				  case BIT_XOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q31, 0);
				      tree _q71 = TREE_OPERAND (_q31, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    switch (TREE_CODE (_q80))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  tree _q91 = TREE_OPERAND (_q80, 1);
						  {
						    tree _q90_pops[1];
						    if (tree_nop_convert (_q90, _q90_pops))
						      {
							tree _q100 = _q90_pops[0];
							if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
							  {
							    switch (TREE_CODE (_q91))
							      {
							      case INTEGER_CST:
							        {
								  if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
								    {
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (tree_signed_integer_sat_val (_p1, _p1_pops))
									      {
										tree _q150 = _p1_pops[0];
										if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										  {
										    if ((_p2 == _q70 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q70, 0) && types_match (_p2, _q70)))
										      {
											{
											  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q91, _q70, _q41 };
											  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											    {
											      if (wi::bit_and (wi::to_wide (captures[1]), wi::to_wide (captures[3])) == 0
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
		      case BIT_NOT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				tree _q51 = TREE_OPERAND (_q40, 1);
				switch (TREE_CODE (_q31))
				  {
				  case BIT_XOR_EXPR:
				    {
				      tree _q80 = TREE_OPERAND (_q31, 0);
				      tree _q81 = TREE_OPERAND (_q31, 1);
				      if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
					{
					  {
					    tree _q81_pops[1];
					    if (tree_nop_convert (_q81, _q81_pops))
					      {
						tree _q100 = _q81_pops[0];
						switch (TREE_CODE (_q100))
						  {
						  case PLUS_EXPR:
						    {
						      tree _q110 = TREE_OPERAND (_q100, 0);
						      tree _q111 = TREE_OPERAND (_q100, 1);
						      {
							tree _q110_pops[1];
							if (tree_nop_convert (_q110, _q110_pops))
							  {
							    tree _q120 = _q110_pops[0];
							    if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
							      {
								{
								  tree _q111_pops[1];
								  if (tree_nop_convert (_q111, _q111_pops))
								    {
								      tree _q140 = _q111_pops[0];
								      if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
									{
									  if (integer_zerop (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (tree_signed_integer_sat_val (_p1, _p1_pops))
										  {
										    tree _q170 = _p1_pops[0];
										    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
										      {
											if ((_p2 == _q81 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q81, 0) && types_match (_p2, _q81)))
											  {
											    {
											      tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
											      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
				      if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
					{
					  {
					    tree _q81_pops[1];
					    if (tree_nop_convert (_q81, _q81_pops))
					      {
						tree _q100 = _q81_pops[0];
						switch (TREE_CODE (_q100))
						  {
						  case PLUS_EXPR:
						    {
						      tree _q110 = TREE_OPERAND (_q100, 0);
						      tree _q111 = TREE_OPERAND (_q100, 1);
						      {
							tree _q110_pops[1];
							if (tree_nop_convert (_q110, _q110_pops))
							  {
							    tree _q120 = _q110_pops[0];
							    if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
							      {
								{
								  tree _q111_pops[1];
								  if (tree_nop_convert (_q111, _q111_pops))
								    {
								      tree _q140 = _q111_pops[0];
								      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
									{
									  if (integer_zerop (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (tree_signed_integer_sat_val (_p1, _p1_pops))
										  {
										    tree _q170 = _p1_pops[0];
										    if ((_q170 == _q51 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q51, 0) && types_match (_q170, _q51)))
										      {
											if ((_p2 == _q81 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q81, 0) && types_match (_p2, _q81)))
											  {
											    {
											      tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
											      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
				      {
					tree _q80_pops[1];
					if (tree_nop_convert (_q80, _q80_pops))
					  {
					    tree _q90 = _q80_pops[0];
					    switch (TREE_CODE (_q90))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q100 = TREE_OPERAND (_q90, 0);
						  tree _q101 = TREE_OPERAND (_q90, 1);
						  {
						    tree _q100_pops[1];
						    if (tree_nop_convert (_q100, _q100_pops))
						      {
							tree _q110 = _q100_pops[0];
							if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
							  {
							    {
							      tree _q101_pops[1];
							      if (tree_nop_convert (_q101, _q101_pops))
							        {
								  tree _q130 = _q101_pops[0];
								  if ((_q130 == _q51 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q51, 0) && types_match (_q130, _q51)))
								    {
								      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
									{
									  if (integer_zerop (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (tree_signed_integer_sat_val (_p1, _p1_pops))
										  {
										    tree _q170 = _p1_pops[0];
										    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
										      {
											if ((_p2 == _q80 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q80, 0) && types_match (_p2, _q80)))
											  {
											    {
											      tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q80 };
											      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
							if ((_q110 == _q51 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q51, 0) && types_match (_q110, _q51)))
							  {
							    {
							      tree _q101_pops[1];
							      if (tree_nop_convert (_q101, _q101_pops))
							        {
								  tree _q130 = _q101_pops[0];
								  if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
								    {
								      if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
									{
									  if (integer_zerop (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (tree_signed_integer_sat_val (_p1, _p1_pops))
										  {
										    tree _q170 = _p1_pops[0];
										    if ((_q170 == _q51 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q51, 0) && types_match (_q170, _q51)))
										      {
											if ((_p2 == _q80 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q80, 0) && types_match (_p2, _q80)))
											  {
											    {
											      tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q80 };
											      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case PLUS_EXPR:
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
							case BIT_NOT_EXPR:
							  {
							    tree _q120 = TREE_OPERAND (_q31, 0);
							    switch (TREE_CODE (_q120))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q130 = TREE_OPERAND (_q120, 0);
								  tree _q131 = TREE_OPERAND (_q120, 1);
								  if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								    {
								      if ((_q131 == _q100 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q100, 0) && types_match (_q131, _q100)))
									{
									  if (integer_zerop (_q21))
									    {
									      if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
										{
										  switch (TREE_CODE (_p2))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q180 = TREE_OPERAND (_p2, 0);
											tree _q181 = TREE_OPERAND (_p2, 1);
											switch (TREE_CODE (_q180))
											  {
											  case NEGATE_EXPR:
											    {
											      tree _q190 = TREE_OPERAND (_q180, 0);
											      switch (TREE_CODE (_q190))
											        {
												CASE_CONVERT:
												  {
												    tree _q200 = TREE_OPERAND (_q190, 0);
												    switch (TREE_CODE (_q200))
												      {
												      case LT_EXPR:
												        {
													  tree _q210 = TREE_OPERAND (_q200, 0);
													  tree _q211 = TREE_OPERAND (_q200, 1);
													  if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
													    {
													      if (integer_zerop (_q211))
														{
														  if (tree_max_value (_q181))
														    {
														      {
															tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
															if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															  {
															    {
															      res_ops[0] = captures[0];
															      res_ops[1] = captures[1];
															      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
										      if (tree_max_value (_q180))
											{
											  switch (TREE_CODE (_q181))
											    {
											    case NEGATE_EXPR:
											      {
												tree _q200 = TREE_OPERAND (_q181, 0);
												switch (TREE_CODE (_q200))
												  {
												  CASE_CONVERT:
												    {
												      tree _q210 = TREE_OPERAND (_q200, 0);
												      switch (TREE_CODE (_q210))
												        {
													case LT_EXPR:
													  {
													    tree _q220 = TREE_OPERAND (_q210, 0);
													    tree _q221 = TREE_OPERAND (_q210, 1);
													    if ((_q220 == _q40 && ! TREE_SIDE_EFFECTS (_q220)) || (operand_equal_p (_q220, _q40, 0) && types_match (_q220, _q40)))
													      {
														if (integer_zerop (_q221))
														  {
														    {
														      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
														      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															{
															  {
															    res_ops[0] = captures[0];
															    res_ops[1] = captures[1];
															    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
									        }
									    }
								        }
								    }
								  if ((_q130 == _q100 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q100, 0) && types_match (_q130, _q100)))
								    {
								      if ((_q131 == _q40 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q40, 0) && types_match (_q131, _q40)))
									{
									  if (integer_zerop (_q21))
									    {
									      if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
										{
										  switch (TREE_CODE (_p2))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q180 = TREE_OPERAND (_p2, 0);
											tree _q181 = TREE_OPERAND (_p2, 1);
											switch (TREE_CODE (_q180))
											  {
											  case NEGATE_EXPR:
											    {
											      tree _q190 = TREE_OPERAND (_q180, 0);
											      switch (TREE_CODE (_q190))
											        {
												CASE_CONVERT:
												  {
												    tree _q200 = TREE_OPERAND (_q190, 0);
												    switch (TREE_CODE (_q200))
												      {
												      case LT_EXPR:
												        {
													  tree _q210 = TREE_OPERAND (_q200, 0);
													  tree _q211 = TREE_OPERAND (_q200, 1);
													  if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
													    {
													      if (integer_zerop (_q211))
														{
														  if (tree_max_value (_q181))
														    {
														      {
															tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
															if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															  {
															    {
															      res_ops[0] = captures[0];
															      res_ops[1] = captures[1];
															      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
										      if (tree_max_value (_q180))
											{
											  switch (TREE_CODE (_q181))
											    {
											    case NEGATE_EXPR:
											      {
												tree _q200 = TREE_OPERAND (_q181, 0);
												switch (TREE_CODE (_q200))
												  {
												  CASE_CONVERT:
												    {
												      tree _q210 = TREE_OPERAND (_q200, 0);
												      switch (TREE_CODE (_q210))
												        {
													case LT_EXPR:
													  {
													    tree _q220 = TREE_OPERAND (_q210, 0);
													    tree _q221 = TREE_OPERAND (_q210, 1);
													    if ((_q220 == _q40 && ! TREE_SIDE_EFFECTS (_q220)) || (operand_equal_p (_q220, _q40, 0) && types_match (_q220, _q40)))
													      {
														if (integer_zerop (_q221))
														  {
														    {
														      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
														      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															{
															  {
															    res_ops[0] = captures[0];
															    res_ops[1] = captures[1];
															    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				tree _q51 = TREE_OPERAND (_q40, 1);
				switch (TREE_CODE (_q31))
				  {
				  case BIT_XOR_EXPR:
				    {
				      tree _q80 = TREE_OPERAND (_q31, 0);
				      tree _q81 = TREE_OPERAND (_q31, 1);
				      if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
					{
					  {
					    tree _q81_pops[1];
					    if (tree_nop_convert (_q81, _q81_pops))
					      {
						tree _q100 = _q81_pops[0];
						switch (TREE_CODE (_q100))
						  {
						  case PLUS_EXPR:
						    {
						      tree _q110 = TREE_OPERAND (_q100, 0);
						      tree _q111 = TREE_OPERAND (_q100, 1);
						      {
							tree _q110_pops[1];
							if (tree_nop_convert (_q110, _q110_pops))
							  {
							    tree _q120 = _q110_pops[0];
							    if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
							      {
								{
								  tree _q111_pops[1];
								  if (tree_nop_convert (_q111, _q111_pops))
								    {
								      tree _q140 = _q111_pops[0];
								      if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
									{
									  if (integer_zerop (_q21))
									    {
									      if ((_p1 == _q81 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q81, 0) && types_match (_p1, _q81)))
										{
										  switch (TREE_CODE (_p2))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q180 = TREE_OPERAND (_p2, 0);
											tree _q181 = TREE_OPERAND (_p2, 1);
											switch (TREE_CODE (_q180))
											  {
											  case NEGATE_EXPR:
											    {
											      tree _q190 = TREE_OPERAND (_q180, 0);
											      switch (TREE_CODE (_q190))
											        {
												CASE_CONVERT:
												  {
												    tree _q200 = TREE_OPERAND (_q190, 0);
												    switch (TREE_CODE (_q200))
												      {
												      case LT_EXPR:
												        {
													  tree _q210 = TREE_OPERAND (_q200, 0);
													  tree _q211 = TREE_OPERAND (_q200, 1);
													  if ((_q210 == _q50 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q50, 0) && types_match (_q210, _q50)))
													    {
													      if (integer_zerop (_q211))
														{
														  if (tree_max_value (_q181))
														    {
														      {
															tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
															if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															  {
															    {
															      res_ops[0] = captures[0];
															      res_ops[1] = captures[1];
															      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
										      if (tree_max_value (_q180))
											{
											  switch (TREE_CODE (_q181))
											    {
											    case NEGATE_EXPR:
											      {
												tree _q200 = TREE_OPERAND (_q181, 0);
												switch (TREE_CODE (_q200))
												  {
												  CASE_CONVERT:
												    {
												      tree _q210 = TREE_OPERAND (_q200, 0);
												      switch (TREE_CODE (_q210))
												        {
													case LT_EXPR:
													  {
													    tree _q220 = TREE_OPERAND (_q210, 0);
													    tree _q221 = TREE_OPERAND (_q210, 1);
													    if ((_q220 == _q50 && ! TREE_SIDE_EFFECTS (_q220)) || (operand_equal_p (_q220, _q50, 0) && types_match (_q220, _q50)))
													      {
														if (integer_zerop (_q221))
														  {
														    {
														      tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
														      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															{
															  {
															    res_ops[0] = captures[0];
															    res_ops[1] = captures[1];
															    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
				      if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
					{
					  {
					    tree _q81_pops[1];
					    if (tree_nop_convert (_q81, _q81_pops))
					      {
						tree _q100 = _q81_pops[0];
						switch (TREE_CODE (_q100))
						  {
						  case PLUS_EXPR:
						    {
						      tree _q110 = TREE_OPERAND (_q100, 0);
						      tree _q111 = TREE_OPERAND (_q100, 1);
						      {
							tree _q110_pops[1];
							if (tree_nop_convert (_q110, _q110_pops))
							  {
							    tree _q120 = _q110_pops[0];
							    if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
							      {
								{
								  tree _q111_pops[1];
								  if (tree_nop_convert (_q111, _q111_pops))
								    {
								      tree _q140 = _q111_pops[0];
								      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
									{
									  if (integer_zerop (_q21))
									    {
									      if ((_p1 == _q81 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q81, 0) && types_match (_p1, _q81)))
										{
										  switch (TREE_CODE (_p2))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q180 = TREE_OPERAND (_p2, 0);
											tree _q181 = TREE_OPERAND (_p2, 1);
											switch (TREE_CODE (_q180))
											  {
											  case NEGATE_EXPR:
											    {
											      tree _q190 = TREE_OPERAND (_q180, 0);
											      switch (TREE_CODE (_q190))
											        {
												CASE_CONVERT:
												  {
												    tree _q200 = TREE_OPERAND (_q190, 0);
												    switch (TREE_CODE (_q200))
												      {
												      case LT_EXPR:
												        {
													  tree _q210 = TREE_OPERAND (_q200, 0);
													  tree _q211 = TREE_OPERAND (_q200, 1);
													  if ((_q210 == _q51 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q51, 0) && types_match (_q210, _q51)))
													    {
													      if (integer_zerop (_q211))
														{
														  if (tree_max_value (_q181))
														    {
														      {
															tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
															if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															  {
															    {
															      res_ops[0] = captures[0];
															      res_ops[1] = captures[1];
															      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
										      if (tree_max_value (_q180))
											{
											  switch (TREE_CODE (_q181))
											    {
											    case NEGATE_EXPR:
											      {
												tree _q200 = TREE_OPERAND (_q181, 0);
												switch (TREE_CODE (_q200))
												  {
												  CASE_CONVERT:
												    {
												      tree _q210 = TREE_OPERAND (_q200, 0);
												      switch (TREE_CODE (_q210))
												        {
													case LT_EXPR:
													  {
													    tree _q220 = TREE_OPERAND (_q210, 0);
													    tree _q221 = TREE_OPERAND (_q210, 1);
													    if ((_q220 == _q51 && ! TREE_SIDE_EFFECTS (_q220)) || (operand_equal_p (_q220, _q51, 0) && types_match (_q220, _q51)))
													      {
														if (integer_zerop (_q221))
														  {
														    {
														      tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
														      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
															{
															  {
															    res_ops[0] = captures[0];
															    res_ops[1] = captures[1];
															    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
		          break;
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
				  case PLUS_EXPR:
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
							    case GE_EXPR:
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
							    case BIT_NOT_EXPR:
							      {
								tree _q130 = TREE_OPERAND (_q21, 0);
								switch (TREE_CODE (_q130))
								  {
								  case LT_EXPR:
								    {
								      tree _q140 = TREE_OPERAND (_q130, 0);
								      tree _q141 = TREE_OPERAND (_q130, 1);
								      switch (TREE_CODE (_q140))
								        {
									case BIT_XOR_EXPR:
									  {
									    tree _q150 = TREE_OPERAND (_q140, 0);
									    tree _q151 = TREE_OPERAND (_q140, 1);
									    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
									      {
										if ((_q151 == _q100 && ! TREE_SIDE_EFFECTS (_q151)) || (operand_equal_p (_q151, _q100, 0) && types_match (_q151, _q100)))
										  {
										    if (integer_zerop (_q141))
										      {
											{
											  tree _p1_pops[1];
											  if (tree_signed_integer_sat_val (_p1, _p1_pops))
											    {
											      tree _q190 = _p1_pops[0];
											      if ((_q190 == _q40 && ! TREE_SIDE_EFFECTS (_q190)) || (operand_equal_p (_q190, _q40, 0) && types_match (_q190, _q40)))
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
													      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
									    if ((_q150 == _q100 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q100, 0) && types_match (_q150, _q100)))
									      {
										if ((_q151 == _q40 && ! TREE_SIDE_EFFECTS (_q151)) || (operand_equal_p (_q151, _q40, 0) && types_match (_q151, _q40)))
										  {
										    if (integer_zerop (_q141))
										      {
											{
											  tree _p1_pops[1];
											  if (tree_signed_integer_sat_val (_p1, _p1_pops))
											    {
											      tree _q190 = _p1_pops[0];
											      if ((_q190 == _q40 && ! TREE_SIDE_EFFECTS (_q190)) || (operand_equal_p (_q190, _q40, 0) && types_match (_q190, _q40)))
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
													      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
		    switch (TREE_CODE (_q30))
		      {
		      case BIT_XOR_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
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
						      case PLUS_EXPR:
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
						      case PLUS_EXPR:
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
		case BIT_NOT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case LT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				tree _q51 = TREE_OPERAND (_q40, 1);
				if (integer_zerop (_q41))
				  {
				    switch (TREE_CODE (_q21))
				      {
				      case LT_EXPR:
				        {
					  tree _q90 = TREE_OPERAND (_q21, 0);
					  tree _q91 = TREE_OPERAND (_q21, 1);
					  switch (TREE_CODE (_q90))
					    {
					    case BIT_XOR_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
						  {
						    {
						      tree _q101_pops[1];
						      if (tree_nop_convert (_q101, _q101_pops))
						        {
							  tree _q120 = _q101_pops[0];
							  switch (TREE_CODE (_q120))
							    {
							    case PLUS_EXPR:
							      {
								tree _q130 = TREE_OPERAND (_q120, 0);
								tree _q131 = TREE_OPERAND (_q120, 1);
								{
								  tree _q130_pops[1];
								  if (tree_nop_convert (_q130, _q130_pops))
								    {
								      tree _q140 = _q130_pops[0];
								      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
									{
									  {
									    tree _q131_pops[1];
									    if (tree_nop_convert (_q131, _q131_pops))
									      {
										tree _q160 = _q131_pops[0];
										if ((_q160 == _q51 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q51, 0) && types_match (_q160, _q51)))
										  {
										    if (integer_zerop (_q91))
										      {
											{
											  tree _p1_pops[1];
											  if (tree_signed_integer_sat_val (_p1, _p1_pops))
											    {
											      tree _q190 = _p1_pops[0];
											      if ((_q190 == _q50 && ! TREE_SIDE_EFFECTS (_q190)) || (operand_equal_p (_q190, _q50, 0) && types_match (_q190, _q50)))
												{
												  if ((_p2 == _q101 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q101, 0) && types_match (_p2, _q101)))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q101 };
													if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
													  {
													    {
													      res_ops[0] = captures[0];
													      res_ops[1] = captures[1];
													      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
						if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
						  {
						    {
						      tree _q101_pops[1];
						      if (tree_nop_convert (_q101, _q101_pops))
						        {
							  tree _q120 = _q101_pops[0];
							  switch (TREE_CODE (_q120))
							    {
							    case PLUS_EXPR:
							      {
								tree _q130 = TREE_OPERAND (_q120, 0);
								tree _q131 = TREE_OPERAND (_q120, 1);
								{
								  tree _q130_pops[1];
								  if (tree_nop_convert (_q130, _q130_pops))
								    {
								      tree _q140 = _q130_pops[0];
								      if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
									{
									  {
									    tree _q131_pops[1];
									    if (tree_nop_convert (_q131, _q131_pops))
									      {
										tree _q160 = _q131_pops[0];
										if ((_q160 == _q50 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q50, 0) && types_match (_q160, _q50)))
										  {
										    if (integer_zerop (_q91))
										      {
											{
											  tree _p1_pops[1];
											  if (tree_signed_integer_sat_val (_p1, _p1_pops))
											    {
											      tree _q190 = _p1_pops[0];
											      if ((_q190 == _q51 && ! TREE_SIDE_EFFECTS (_q190)) || (operand_equal_p (_q190, _q51, 0) && types_match (_q190, _q51)))
												{
												  if ((_p2 == _q101 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q101, 0) && types_match (_p2, _q101)))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q101 };
													if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
													  {
													    {
													      res_ops[0] = captures[0];
													      res_ops[1] = captures[1];
													      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
							      {
								res_ops[0] = captures[0];
								res_ops[1] = captures[1];
								if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
								return true;
							      }
							    }
							}
						      }
						    break;
						  }
					        default:;
					        }
					    }
					  if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
					    {
					      switch (TREE_CODE (_p2))
					        {
						case REALPART_EXPR:
						  {
						    tree _q100 = TREE_OPERAND (_p2, 0);
						    if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q30 };
							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
							    {
							      {
								res_ops[0] = captures[0];
								res_ops[1] = captures[1];
								if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
								return true;
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
generic_simplify_379 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && CHAR_TYPE_SIZE == 8
 && tree_fits_uhwi_p (captures[2])
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned HOST_WIDE_INT bits = tree_to_uhwi (captures[2]);
 tree st = TYPE_PRECISION (type) > prec ? TREE_TYPE (captures[0]) : type;
	  if (TYPE_PRECISION (type) > prec
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (type)
 && bits < prec && bits + 8 >= prec
)
	    {
	      {
 tree nst = build_int_cst (integer_type_node, prec - 8);
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail829;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail829;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[2], _r2;
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[1];
			  if (TREE_TYPE (_o3[0]) != st)
			    {
			      _r3 = fold_build1_loc (loc, NOP_EXPR, st, _o3[0]);
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			_o2[1] = nst;
			_r2 = fold_build2_loc (loc, LSHIFT_EXPR, st, _o2[0], _o2[1]);
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
		    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 610, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail829:;
	      }
	    }
	  else
	    {
	      if (bits + 8 == prec
)
		{
		  if (TYPE_UNSIGNED (st)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail830;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail830;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != unsigned_char_type_node)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, unsigned_char_type_node, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 611, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail830:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail831;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail831;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != signed_char_type_node)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, signed_char_type_node, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 612, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail831:;
		    }
		}
	      else
		{
		  if (bits < prec && bits + 8 > prec
)
		    {
		      {
 tree nst = build_int_cst (integer_type_node, bits & 7);
 tree bt = TYPE_UNSIGNED (st) ? unsigned_char_type_node
 : signed_char_type_node;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail832;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail832;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[1];
				if (TREE_TYPE (_o2[0]) != bt)
				  {
				    _r2 = fold_build1_loc (loc, NOP_EXPR, bt, _o2[0]);
				  }
				else
				  _r2 = _o2[0];
				_o1[0] = _r2;
			      }
			      _o1[1] = nst;
			      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, bt, _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 613, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail832:;
		      }
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_392 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail858;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, pow, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail858;
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 627, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail858:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_399 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (HYPOT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail865;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_real_truncate (type, dconst_sqrt2 ());
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 634, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail865:;
    }
  return NULL_TREE;
}

tree
generic_simplify_405 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail871;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 640, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail871:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_411 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[4], NEGATE_EXPR, captures[1],
 bitop, captures[2], captures[3], NULL_TREE, ERROR_MARK,
 NULL_TREE, NULL_TREE, pmop);
      if (utype
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail877;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail877;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail877;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail877;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail877;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
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
		_r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
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
	      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 645, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail877:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_427 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail900;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail900;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail900;
	      {
		tree _r;
		_r = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail900:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail901;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail901;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail901;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail901:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail902;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail902;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail902;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 666, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail902:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail903;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail903;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail903;
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
next_after_fail903:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail904;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail904;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail904;
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
next_after_fail904:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail905;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail905;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail905;
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
next_after_fail905:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail906;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail906;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail906;
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
next_after_fail906:;
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
generic_simplify_455 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail965;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 694, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail965:;
    }
  return NULL_TREE;
}

tree
generic_simplify_458 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail968;
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
    _r = fold_build2_loc (loc, maxmin, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 696, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail968:;
  return NULL_TREE;
}

tree
generic_simplify_466 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (!HONOR_SIGN_DEPENDENT_ROUNDING (type) && single_use (captures[0])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail978;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree res_op2;
	    res_op2 = captures[3];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, CFN_FNMS, type, 3, res_op0, res_op1, res_op2);
	    if (!_r)
	      goto next_after_fail978;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail978:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_475 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail989;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail989;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail989:;
  return NULL_TREE;
}

tree
generic_simplify_482 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail999;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail999;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail999;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 725, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail999:;
  return NULL_TREE;
}

tree
generic_simplify_486 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1003;
      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1003;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1003;
      {
	tree _r;
	_r = captures[2];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 729, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1003:;
    }
  return NULL_TREE;
}

tree
generic_simplify_492 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_widest (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[3])) - 1
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1010;
      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1010;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1010;
      {
	tree _r;
	_r = captures[2];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 735, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1010:;
    }
  return NULL_TREE;
}

tree
generic_simplify_500 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1020;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1020;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1020;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1020:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1021;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1021;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1021;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1021:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1022;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1022;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1022;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1022:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1023;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1023;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1023;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1023:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_515 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1050;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 762, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1050:;
    }
  return NULL_TREE;
}

tree
generic_simplify_524 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1059;
	  {
	    tree res_op0;
	    {
	      tree _o1[4], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[4];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[3] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, cond_op, TREE_TYPE (_o1[1]), 4, _o1[0], _o1[1], _o1[2], _o1[3]);
	      if (!_r1)
	        goto next_after_fail1059;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 766, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1059:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_533 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1068;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[0];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[3];
    tree res_op2;
    res_op2 = captures[4];
    tree res_op3;
    res_op3 = captures[5];
    tree res_op4;
    res_op4 = captures[6];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, cond_op, type, 5, res_op0, res_op1, res_op2, res_op3, res_op4);
    if (!_r)
      goto next_after_fail1068;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 775, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1068:;
  return NULL_TREE;
}

tree
generic_simplify_544 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sinhs),
 const combined_fn ARG_UNUSED (atanhs),
 const combined_fn ARG_UNUSED (sqrts))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!flag_errno_math
)
    {
      {
 tree t_one = build_one_cst (type);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1079;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail1079;
	    tree res_op0;
	    res_op0 = unshare_expr (captures[1]);
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = unshare_expr (captures[1]);
		  _r3 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[0] = _r3;
		}
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = captures[1];
		  _r3 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[1] = _r3;
		}
		_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		_o1[0] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, sqrts, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail1079;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1079:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_562 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1097;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FNMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1097;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 804, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1097:;
    }
  return NULL_TREE;
}

tree
generic_simplify_572 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1107;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != t)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, t, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ctz, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail1107;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1107:;
  }
  return NULL_TREE;
}

tree
generic_simplify_582 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1118;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != type1)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, type1, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      if (TREE_TYPE (_o1[0]) != type0)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type0, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, parity, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1118;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 818, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1118:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_NEGATE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_negate_expr_p (_q21))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_461 (loc, type, _p0, captures);
	      if (res) return res;
	    }
	  }
	if (tree_negate_expr_p (_q20))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_461 (loc, type, _p0, captures);
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
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  if ((ANY_INTEGRAL_TYPE_P (type) && !TYPE_OVERFLOW_SANITIZED (type))
 || (FLOAT_TYPE_P (type)
 && !HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && !HONOR_SIGNED_ZEROS (type))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1164;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[0];
		tree _r;
		_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 855, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1164:;
	    }
	}
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  if (TYPE_OVERFLOW_UNDEFINED (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1165;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[0];
		tree _r;
		_r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 856, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1165:;
	    }
	}
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_negate_expr_p (_q21))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_462 (loc, type, _p0, captures);
	      if (res) return res;
	    }
	  }
	if (tree_negate_expr_p (_q20))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_462 (loc, type, _p0, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_negate_expr_p (_q21))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      if (! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && single_use (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1166;
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
		    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 857, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1166:;
		}
	    }
	  }
	if (tree_negate_expr_p (_q20))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      if (! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && single_use (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1167;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 858, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1167:;
		}
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
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
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		      tree res = generic_simplify_463 (loc, type, _p0, captures);
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		if (!TYPE_SATURATING (type)
)
		  {
		    if (INTEGRAL_TYPE_P (type)
 && (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
 || (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))))
 && !TYPE_OVERFLOW_SANITIZED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1168;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree _r;
			  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 859, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1168:;
		      }
		  }
	      }
	      break;
	    }
          default:;
          }
      {
	tree _q20_pops[1];
	if (tree_logical_inverted_value (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
	      if (INTEGRAL_TYPE_P (type)
 && TREE_CODE (type) != BOOLEAN_TYPE
 && TYPE_PRECISION (type) > 1
 && TREE_CODE (captures[2]) == SSA_NAME
 && ssa_name_has_boolean_range (captures[2])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1169;
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
		    res_op1 =  build_all_ones_cst (type);
		    tree _r;
		    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1169:;
		}
	    }
	  }
      }
      if (tree_negate_expr_p (_q20))
	{
	  {
	    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	    if (!TYPE_SATURATING (type)
)
	      {
		if (SCALAR_FLOAT_TYPE_P (type)
 && ((DECIMAL_FLOAT_TYPE_P (type)
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) >= TYPE_PRECISION (TREE_TYPE (captures[0])))
 || !HONOR_SIGN_DEPENDENT_ROUNDING (type))
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1170;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[0];
			_r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1170:;
		  }
	      }
	  }
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
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_463 (loc, type, _p0, captures);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  tree res = generic_simplify_464 (loc, type, _p0, captures);
	  if (res) return res;
	}
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  tree res = generic_simplify_465 (loc, type, _p0, captures);
	  if (res) return res;
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1171;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1171;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1171;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1171:;
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_FMA:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		tree res = generic_simplify_466 (loc, type, _p0, captures, CFN_BUILT_IN_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_FMAF:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		tree res = generic_simplify_466 (loc, type, _p0, captures, CFN_BUILT_IN_FMAF);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_FMAL:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		tree res = generic_simplify_466 (loc, type, _p0, captures, CFN_BUILT_IN_FMAL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_FMA:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		tree res = generic_simplify_466 (loc, type, _p0, captures, CFN_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_FMS:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		if (canonicalize_math_after_vectorization_p ()
)
		  {
		    if (!HONOR_SIGN_DEPENDENT_ROUNDING (type) && single_use (captures[0])
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1172;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree res_op2;
			  res_op2 = captures[3];
			  tree _r;
			  _r = maybe_build_call_expr_loc (loc, CFN_FNMA, type, 3, res_op0, res_op1, res_op2);
			  if (!_r)
			    goto next_after_fail1172;
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 862, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1172:;
		      }
		  }
	      }
	    }
	  break;
	case CFN_FNMA:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		if (canonicalize_math_after_vectorization_p ()
)
		  {
		    if (!HONOR_SIGN_DEPENDENT_ROUNDING (type) && single_use (captures[0])
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1173;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree res_op2;
			  res_op2 = captures[3];
			  tree _r;
			  _r = maybe_build_call_expr_loc (loc, CFN_FMS, type, 3, res_op0, res_op1, res_op2);
			  if (!_r)
			    goto next_after_fail1173;
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 863, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1173:;
		      }
		  }
	      }
	    }
	  break;
	case CFN_FNMS:
	  if (call_expr_nargs (_p0) == 3)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      tree _q22 = CALL_EXPR_ARG (_p0, 2);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		if (canonicalize_math_after_vectorization_p ()
)
		  {
		    if (!HONOR_SIGN_DEPENDENT_ROUNDING (type) && single_use (captures[0])
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1174;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree res_op2;
			  res_op2 = captures[3];
			  tree _r;
			  _r = maybe_build_call_expr_loc (loc, CFN_FMA, type, 3, res_op0, res_op1, res_op2);
			  if (!_r)
			    goto next_after_fail1174;
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 864, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1174:;
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
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
	      tree res = generic_simplify_464 (loc, type, _p0, captures);
	      if (res) return res;
	    }
	    break;
	  }
	case NEGATE_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
	      tree res = generic_simplify_465 (loc, type, _p0, captures);
	      if (res) return res;
	    }
	    break;
	  }
        default:;
        }
    }
}
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
	if (INTEGRAL_TYPE_P (type)
 && TREE_CODE (type) != BOOLEAN_TYPE
 && TYPE_PRECISION (type) > 1
 && TREE_CODE (captures[2]) == SSA_NAME
 && ssa_name_has_boolean_range (captures[2])
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1175;
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
	      res_op1 =  build_all_ones_cst (type);
	      tree _r;
	      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1175:;
	  }
      }
    }
}
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    tree res = generic_simplify_387 (loc, type, _p0, captures);
    if (res) return res;
  }
  return NULL_TREE;
}

tree
generic_simplify_EQ_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case CEIL_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, EQ_EXPR, CEIL_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, EQ_EXPR, FLOOR_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case ROUND_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, EQ_EXPR, ROUND_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case TRUNC_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, EQ_EXPR, TRUNC_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_zero_one_valued_p (_q20))
	  {
	    switch (TREE_CODE (_q21))
	      {
	      case INTEGER_CST:
	        {
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			if (tree_fits_shwi_p (captures[1])
 && tree_to_shwi (captures[1]) > 0
 && tree_to_shwi (captures[1]) < TYPE_PRECISION (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1497;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree _r;
			      _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 971, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1497:;
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_truth_valued_p (_q20))
	  {
	    if (tree_truth_valued_p (_q21))
	      {
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1498;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[1];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1498:;
			      }
			    }
		        }
		      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
			{
			  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1499;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[1];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1499:;
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
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_truth_valued_p (_q50))
		    {
		      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			{
			  if (tree_truth_valued_p (_q51))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1500;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[1];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1500:;
			      }
			    }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_truth_valued_p (_q50))
		    {
		      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			{
			  if (tree_truth_valued_p (_q51))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1501;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[1];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1501:;
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (tree_truth_valued_p (_q20))
	  {
	    if (tree_truth_valued_p (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		  tree res = generic_simplify_200 (loc, type, _p0, _p1, captures);
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
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			  tree res = generic_simplify_202 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
				      tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q41))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  switch (TREE_CODE (_q51))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
			  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_206 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1502;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1502:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1503;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1503:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1504;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1504:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1505;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1505:;
		      }
		  }
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
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40 };
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q30 };
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q30 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
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
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case POINTER_PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
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
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q21 };
			  tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q21 };
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
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
	      tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1506;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 913, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1506:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1507;
			{
			  tree res_op0;
			  res_op0 = captures[2];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[0]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 914, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1507:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
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
		    tree res = generic_simplify_210 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    tree res = generic_simplify_211 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (tree_truth_valued_p (_p1))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	    }
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q31, 0);
		  switch (TREE_CODE (_p1))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q50 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q50, 0) && types_match (_q70, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50 };
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	    switch (TREE_CODE (_q30))
	      {
	      CASE_CONVERT:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_p1))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q40 };
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q40 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q31))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q31, 0);
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
		  if (res) return res;
		}
	      }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case POINTER_PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      CASE_CONVERT:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_p1))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
			      tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		  tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
		  if (res) return res;
		}
	      }
	    break;
	  }
        default:;
        }
    }
}
if (tree_truth_valued_p (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case BIT_NOT_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  if (tree_truth_valued_p (_q30))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		tree res = generic_simplify_200 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	    }
          break;
        }
      default:;
      }
  {
    tree _p1_pops[1];
    if (tree_logical_inverted_value (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
      }
  }
  }
  switch (TREE_CODE (_p1))
    {
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q31))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q30))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	    switch (TREE_CODE (_q41))
	      {
	      CASE_CONVERT:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q40))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
		  if (res) return res;
		}
	      }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q41 };
			  tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q41 };
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case POINTER_PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q20, _q51 };
			      tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q20, _q51 };
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case POINTER_PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
	      tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	case POINTER_PLUS_EXPR:
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
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
		  tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      tree _q31 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case POINTER_PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
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
		case POINTER_PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
			    tree res = generic_simplify_214 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_215 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR);
	      if (res) return res;
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
	      switch (TREE_CODE (_q40))
	        {
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q51))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_q51, 0);
				if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				  {
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
				      tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q31))
		      {
		      CASE_CONVERT:
		        {
			  tree _q50 = TREE_OPERAND (_q31, 0);
			  switch (TREE_CODE (_p1))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				if ((_q70 == _q50 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q50, 0) && types_match (_q70, _q50)))
				  {
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
				      tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			        break;
			      }
			    default:;
			    }
			  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      switch (TREE_CODE (_q40))
	        {
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case INTEGER_CST:
		        {
			  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q41))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q41, 0);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_q21))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q21, 0);
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
		    tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q41))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q41, 0);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_q31))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case LT_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR, EQ_EXPR);
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR, GT_EXPR);
			if (res) return res;
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR, LE_EXPR);
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
    case LE_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR, EQ_EXPR);
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, GE_EXPR);
			if (res) return res;
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, LT_EXPR);
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
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR, EQ_EXPR);
			if (res) return res;
		      }
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR, EQ_EXPR);
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR, GT_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR, LE_EXPR);
			if (res) return res;
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR, EQ_EXPR);
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
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR, EQ_EXPR);
			if (res) return res;
		      }
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR, EQ_EXPR);
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, GE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, LT_EXPR);
			if (res) return res;
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR, EQ_EXPR);
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR, GT_EXPR);
			if (res) return res;
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, GE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR, GT_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR, GE_EXPR);
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
    case NE_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR, LE_EXPR);
			if (res) return res;
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, LT_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR, LE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR, LT_EXPR);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1508;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1508:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1509;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1509:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, EQ_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, EQ_EXPR, LE_EXPR);
	      if (res) return res;
	    }
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1510;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1510:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1511;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1511:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, EQ_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, EQ_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
if (tree_with_possible_nonzero_bits (_p0))
  {
    if (tree_with_known_nonzero_bits (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, EQ_EXPR);
	  if (res) return res;
	}
      }
  }
if (tree_with_known_nonzero_bits (_p0))
  {
    if (tree_with_possible_nonzero_bits (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, EQ_EXPR);
	  if (res) return res;
	}
      }
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
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, EQ_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, EQ_EXPR, LE_EXPR);
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
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, EQ_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, EQ_EXPR, GE_EXPR);
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
		      tree res = generic_simplify_220 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_222 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_pow2p (_q30))
		{
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
			    tree res = generic_simplify_223 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
				  tree res = generic_simplify_224 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      if (integer_onep (_q30))
		{
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q21 };
			    tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_pow2p (_q30))
		{
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
			    tree res = generic_simplify_226 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
				  tree res = generic_simplify_227 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
          default:;
          }
      {
	tree _q20_pops[1];
	if (tree_nop_convert (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    switch (TREE_CODE (_q30))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_onep (_q40))
		    {
		      if (integer_pow2p (_q21))
			{
			  if (integer_zerop (_p1))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q41, _q21 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case LROTATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LROTATE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_229 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, EQ_EXPR);
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_230 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, EQ_EXPR);
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
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_231 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case RROTATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RROTATE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_229 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, EQ_EXPR);
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_230 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, EQ_EXPR);
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
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_231 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, EQ_EXPR);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			tree res = generic_simplify_232 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
			tree res = generic_simplify_232 (loc, type, _p0, _p1, captures);
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
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if ((_q31 == _q41 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q41, 0) && types_match (_q31, _q41)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
			tree res = generic_simplify_232 (loc, type, _p0, _p1, captures);
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
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  if ((_q51 == _q30 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q30, 0) && types_match (_q51, _q30)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _p0, _q30 };
			tree res = generic_simplify_232 (loc, type, _p0, _p1, captures);
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
 && (TREE_CODE_CLASS (EQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1512;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, EQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1512;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, EQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1512;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1512:;
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
 && (TREE_CODE_CLASS (EQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1513;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1513;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, EQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1513;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, EQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1513;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1513:;
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP128);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP128:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP128);
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
	case CFN_BUILT_IN_BSWAP16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP16);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP16:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP16);
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
	case CFN_BUILT_IN_BSWAP32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP32);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP32:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP32);
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
	case CFN_BUILT_IN_BSWAP64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP64);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP64:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_BSWAP64);
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
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (EQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1514;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1514;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, EQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1514;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, EQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1514;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1514:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
	      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		{
		  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = EQ_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1515;
			    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1515;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1515;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, NE_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 972, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1515:;
			  }
		      }
		    }
	        }
	      if ((_q61 == _q22 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q22, 0) && types_match (_q61, _q22)))
		{
		  if ((_q62 == _q21 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q21, 0) && types_match (_q62, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = EQ_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1516;
			    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1516;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1516;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, EQ_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1516:;
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
	      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		{
		  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = EQ_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1517;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, NE_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 972, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1517:;
			  }
		      }
		    }
	        }
	      if ((_q61 == _q22 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q22, 0) && types_match (_q61, _q22)))
		{
		  if ((_q62 == _q21 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q21, 0) && types_match (_q62, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = EQ_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1518;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, EQ_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1518:;
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
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case ORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNLT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNLE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNGE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_237 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_238 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_240 (loc, type, _p0, _p1, captures, EQ_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		  tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
	tree res = generic_simplify_241 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      {
		tree _q40_pops[1];
		if (tree_maybe_bit_not (_q40, _q40_pops))
		  {
		    tree _q50 = _q40_pops[0];
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	  tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, EQ_EXPR);
	  if (res) return res;
	}
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
		tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		    tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	    tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_maybe_bit_not (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, EQ_EXPR);
	if (res) return res;
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
		    tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
			tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
	  tree res = generic_simplify_246 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, PLUS_EXPR, EQ_EXPR);
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, MINUS_EXPR, EQ_EXPR);
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
		      tree res = generic_simplify_248 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case REAL_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_252 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_253 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	      const enum tree_code eqne = EQ_EXPR;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1519;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build2_loc (loc, eqne, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1519:;
	    }
	  }
        break;
      }
    case ABSU_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	      const enum tree_code eqne = EQ_EXPR;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1520;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build2_loc (loc, eqne, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1520:;
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
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_256 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_257 (loc, type, _p0, _p1, captures, EQ_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_q20))
	  {
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
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _p1 };
			    tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		tree res = generic_simplify_259 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_260 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, EQ_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, EQ_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, EQ_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, EQ_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, EQ_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, EQ_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_SQRT, EQ_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_SQRT, EQ_EXPR);
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
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
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
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
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
	  case BIT_AND_EXPR:
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
			  switch (TREE_CODE (_p1))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q31 };
				      tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      switch (TREE_CODE (_q51))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _q51 };
				      tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
          default:;
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
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
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
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, EQ_EXPR);
	      if (res) return res;
	    }
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
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _p1 };
			    tree res = generic_simplify_265 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_265 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if (integer_zerop (_p1))
	{
	  {
	    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	    tree res = generic_simplify_266 (loc, type, _p0, _p1, captures, EQ_EXPR);
	    if (res) return res;
	  }
        }
    }
}
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_266 (loc, type, _p0, _p1, captures, EQ_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
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
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		  tree res = generic_simplify_268 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		  if (res) return res;
		}
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_pow2p (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
			tree res = generic_simplify_269 (loc, type, _p0, _p1, captures, EQ_EXPR, GE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _q21 };
		  tree res = generic_simplify_270 (loc, type, _p0, _p1, captures, EQ_EXPR, GE_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR, GE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
			tree res = generic_simplify_272 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR);
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR, GE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_273 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR);
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
		      tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    tree res = generic_simplify_276 (loc, type, _p0, _p1, captures, EQ_EXPR);
    if (res) return res;
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_277 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
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
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (TREE_CODE (TREE_TYPE (captures[0])) == BOOLEAN_TYPE
 && types_match (type, TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1521;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1521;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1521:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case VECTOR_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    const enum tree_code cmp = EQ_EXPR;
		    const enum tree_code icmp = LE_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1522;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1522;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1522:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1523;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1523;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 977, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1523:;
				      }
				  }
			    }
			  }
		    }
		  }
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    const enum tree_code cmp = EQ_EXPR;
		    const enum tree_code icmp = LE_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1524;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1524;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1524:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1525;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1525;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 977, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1525:;
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
	switch (TREE_CODE (_q20))
	  {
	  case VECTOR_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    const enum tree_code cmp = EQ_EXPR;
		    const enum tree_code icmp = LE_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1526;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1526;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1526:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1527;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1527;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 977, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1527:;
				      }
				  }
			    }
			  }
		    }
		  }
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    const enum tree_code cmp = EQ_EXPR;
		    const enum tree_code icmp = LE_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1528;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1528;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1528:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1529;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1529;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 977, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1529:;
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
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
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
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q31, 0);
			  switch (TREE_CODE (_q21))
			    {
			    case INTEGER_CST:
			      {
				if (integer_zerop (_p1))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q60, _q21 };
				      tree res = generic_simplify_279 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_280 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, EQ_EXPR);
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
		      tree res = generic_simplify_280 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, EQ_EXPR);
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
		      tree res = generic_simplify_281 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
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
	case CFN_BUILT_IN_CLZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR, CFN_BUILT_IN_CLZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_CTZ);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_FFS);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_REDUC_IOR:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_288 (loc, type, _p0, _p1, captures, EQ_EXPR);
		    if (res) return res;
		  }
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_FFSIMAX);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNT);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CLZL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR, CFN_BUILT_IN_CLZL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_CTZL);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_FFSL);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTLL);
		    if (res) return res;
		  }
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_CTZIMAX);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR, CFN_POPCOUNT);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_CLZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR, CFN_CLZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
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
		      tree res = generic_simplify_283 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_CTZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
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
		      tree res = generic_simplify_285 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_FFS);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CLZIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR, CFN_BUILT_IN_CLZIMAX);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CLZLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, EQ_EXPR, LT_EXPR, CFN_BUILT_IN_CLZLL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_CTZLL);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, EQ_EXPR, CFN_BUILT_IN_FFSLL);
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
generic_simplify_ORDERED_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
 && (TREE_CODE_CLASS (ORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1737;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1737;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1737;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1737:;
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
 && (TREE_CODE_CLASS (ORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1738;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1738;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1738;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1738;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1738:;
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
 && (TREE_CODE_CLASS (ORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1739;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1739;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1739;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1739;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1739:;
	    }
	}
        break;
      }
    default:;
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, ORDERED_EXPR, ORDERED_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, ORDERED_EXPR, ORDERED_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, ORDERED_EXPR, ORDERED_EXPR);
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
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (tree_expr_nan_p (captures[0]) || tree_expr_nan_p (captures[1])
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1740;
	{
	  tree _r;
	  _r =  constant_boolean_node (false, type);
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (TREE_SIDE_EFFECTS (captures[1]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1026, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1740:;
      }
    else
      {
	if (!tree_expr_maybe_nan_p (captures[0]) && !tree_expr_maybe_nan_p (captures[1])
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1741;
	    {
	      tree _r;
	      _r =  constant_boolean_node (true, type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1027, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1741:;
	  }
      }
  }
  return NULL_TREE;
}

tree
generic_simplify_TRUTH_OR_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1777;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1777;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1777;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1777;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1777;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1777;
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
next_after_fail1777:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1778;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1778;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1778;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1778;
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
next_after_fail1778:;
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1779;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1779;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1779;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1779;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1779;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1779;
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
next_after_fail1779:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1780;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1780;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1780;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1780;
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
next_after_fail1780:;
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1781;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1781;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1781;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1781;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1781;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1781;
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
next_after_fail1781:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1782;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1782;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1782;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1782;
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
next_after_fail1782:;
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1783;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1783;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1783;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1783;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1783;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1783;
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
next_after_fail1783:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1784;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1784;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1784;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1784;
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
next_after_fail1784:;
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1785;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1785;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1785;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1785;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1785;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1785;
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
next_after_fail1785:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1786;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1786;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1786;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1786;
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
next_after_fail1786:;
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1787;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1787;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1787;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1787;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1787;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1787;
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
next_after_fail1787:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1788;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1788;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1788;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1788;
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
next_after_fail1788:;
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1789;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1789;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1789;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1789;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1789;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1789;
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
next_after_fail1789:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1790;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1790;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1790;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1790;
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
next_after_fail1790:;
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1791;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1791;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1791;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1791;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1791;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1791;
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
next_after_fail1791:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1792;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1792;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1792;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1792;
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
next_after_fail1792:;
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
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop
