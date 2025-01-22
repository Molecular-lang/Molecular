/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_negate_expr_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (!TYPE_OVERFLOW_SANITIZED (type)
)
		      {
			{
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 15, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    if ((ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_WRAPS (type))
 || (FLOAT_TYPE_P (type)
 && !HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && !HONOR_SIGNED_ZEROS (type))
)
		      {
			{
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 16, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
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
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 17, __FILE__, __LINE__, false);
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
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 18, __FILE__, __LINE__, false);
	    return true;
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
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 19, __FILE__, __LINE__, false);
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
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 20, __FILE__, __LINE__, false);
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
gimple_signed_integer_sat_add (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  tree _p2 = gimple_assign_rhs3 (_a1);
		  _p2 = do_valueize (valueize, _p2);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_NOT_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															switch (TREE_CODE (_q120))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q120))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    case BIT_XOR_EXPR:
																      {
																	tree _q130 = gimple_assign_rhs1 (_a7);
																	_q130 = do_valueize (valueize, _q130);
																	tree _q131 = gimple_assign_rhs2 (_a7);
																	_q131 = do_valueize (valueize, _q131);
																	if (tree_swap_operands_p (_q130, _q131))
																	  std::swap (_q130, _q131);
																	if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	  {
																	    if ((_q131 == _q100 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q100, 0) && types_match (_q131, _q100)))
																	      {
																		if (integer_zerop (_q21))
																		  {
																		    {
																		      tree _p1_pops[1];
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
															    break;
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
								          default:;
								          }
								      }
								  }
								  {
								    tree _q40_pops[1];
								    if (gimple_nop_convert (_q40, _q40_pops, valueize))
								      {
									tree _q50 = _q40_pops[0];
									switch (TREE_CODE (_q50))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q50))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q60 = gimple_assign_rhs1 (_a5);
											_q60 = do_valueize (valueize, _q60);
											tree _q61 = gimple_assign_rhs2 (_a5);
											_q61 = do_valueize (valueize, _q61);
											if (tree_swap_operands_p (_q60, _q61))
											  std::swap (_q60, _q61);
											{
											  tree _q60_pops[1];
											  if (gimple_nop_convert (_q60, _q60_pops, valueize))
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
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_XOR_EXPR:
														      {
															tree _q110 = gimple_assign_rhs1 (_a6);
															_q110 = do_valueize (valueize, _q110);
															tree _q111 = gimple_assign_rhs2 (_a6);
															_q111 = do_valueize (valueize, _q111);
															if (tree_swap_operands_p (_q110, _q111))
															  std::swap (_q110, _q111);
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												          default:;
												          }
												      }
												    break;
												  }
											        default:;
											        }
											    {
											      tree _q61_pops[1];
											      if (gimple_nop_convert (_q61, _q61_pops, valueize))
											        {
												  tree _q90 = _q61_pops[0];
												  if ((_q41 == _q70 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q70, 0) && types_match (_q41, _q70)))
												    {
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d6 = get_def (valueize, _q31))
													    {
													      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													        switch (gimple_assign_rhs_code (_a6))
														  {
														  case BIT_NOT_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a6);
														      _q120 = do_valueize (valueize, _q120);
														      switch (TREE_CODE (_q120))
														        {
															case SSA_NAME:
															  if (gimple *_d7 = get_def (valueize, _q120))
															    {
															      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															        switch (gimple_assign_rhs_code (_a7))
																  {
																  case BIT_XOR_EXPR:
																    {
																      tree _q130 = gimple_assign_rhs1 (_a7);
																      _q130 = do_valueize (valueize, _q130);
																      tree _q131 = gimple_assign_rhs2 (_a7);
																      _q131 = do_valueize (valueize, _q131);
																      if (tree_swap_operands_p (_q130, _q131))
																        std::swap (_q130, _q131);
																      if ((_q130 == _q70 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q70, 0) && types_match (_q130, _q70)))
																	{
																	  if ((_q131 == _q90 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q90, 0) && types_match (_q131, _q90)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
															  break;
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
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q31))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
											  {
											    {
											      tree _q71_pops[1];
											      if (gimple_nop_convert (_q71, _q71_pops, valueize))
											        {
												  tree _q90 = _q71_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case PLUS_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  tree _q101 = gimple_assign_rhs2 (_a6);
														  _q101 = do_valueize (valueize, _q101);
														  if (tree_swap_operands_p (_q100, _q101))
														    std::swap (_q100, _q101);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												      break;
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
									    break;
								          default:;
								          }
								        break;
								      }
								    default:;
								    }
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q60))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a5);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a5);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
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
													case SSA_NAME:
													  if (gimple *_d6 = get_def (valueize, _q31))
													    {
													      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													        switch (gimple_assign_rhs_code (_a6))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a6);
														      _q110 = do_valueize (valueize, _q110);
														      tree _q111 = gimple_assign_rhs2 (_a6);
														      _q111 = do_valueize (valueize, _q111);
														      if (tree_swap_operands_p (_q110, _q111))
														        std::swap (_q110, _q111);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
									  break;
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
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q31))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
											  {
											    {
											      tree _q71_pops[1];
											      if (gimple_nop_convert (_q71, _q71_pops, valueize))
											        {
												  tree _q90 = _q71_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case PLUS_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  tree _q101 = gimple_assign_rhs2 (_a6);
														  _q101 = do_valueize (valueize, _q101);
														  if (tree_swap_operands_p (_q100, _q101))
														    std::swap (_q100, _q101);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												      break;
												    default:;
												    }
											        }
											    }
											  }
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      switch (TREE_CODE (_q80))
											        {
												case SSA_NAME:
												  if (gimple *_d6 = get_def (valueize, _q80))
												    {
												      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												        switch (gimple_assign_rhs_code (_a6))
													  {
													  case PLUS_EXPR:
													    {
													      tree _q90 = gimple_assign_rhs1 (_a6);
													      _q90 = do_valueize (valueize, _q90);
													      tree _q91 = gimple_assign_rhs2 (_a6);
													      _q91 = do_valueize (valueize, _q91);
													      if (tree_swap_operands_p (_q90, _q91))
													        std::swap (_q90, _q91);
													      {
														tree _q90_pops[1];
														if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												  break;
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
								      }
								    default:;
								    }
								  switch (TREE_CODE (_q41))
								    {
								    case INTEGER_CST:
								      {
									switch (TREE_CODE (_q31))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q31))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      switch (TREE_CODE (_q80))
											        {
												case SSA_NAME:
												  if (gimple *_d6 = get_def (valueize, _q80))
												    {
												      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												        switch (gimple_assign_rhs_code (_a6))
													  {
													  case PLUS_EXPR:
													    {
													      tree _q90 = gimple_assign_rhs1 (_a6);
													      _q90 = do_valueize (valueize, _q90);
													      tree _q91 = gimple_assign_rhs2 (_a6);
													      _q91 = do_valueize (valueize, _q91);
													      if (tree_swap_operands_p (_q90, _q91))
													        std::swap (_q90, _q91);
													      {
														tree _q90_pops[1];
														if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												  break;
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
								      }
								    default:;
								    }
							          break;
							        }
							      case BIT_NOT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q31))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q31))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      case BIT_XOR_EXPR:
											        {
												  tree _q80 = gimple_assign_rhs1 (_a6);
												  _q80 = do_valueize (valueize, _q80);
												  tree _q81 = gimple_assign_rhs2 (_a6);
												  _q81 = do_valueize (valueize, _q81);
												  if (tree_swap_operands_p (_q80, _q81))
												    std::swap (_q80, _q81);
												  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
																	  {
																	    tree _q140 = _q111_pops[0];
																	    if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																	      {
																		if (integer_zerop (_q21))
																		  {
																		    {
																		      tree _p1_pops[1];
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													        break;
													      default:;
													      }
													  }
												      }
												    }
												  if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
																	  {
																	    tree _q140 = _q111_pops[0];
																	    if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																	      {
																		if (integer_zerop (_q21))
																		  {
																		    {
																		      tree _p1_pops[1];
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													        break;
													      default:;
													      }
													  }
												      }
												    }
												  {
												    tree _q80_pops[1];
												    if (gimple_nop_convert (_q80, _q80_pops, valueize))
												      {
													tree _q90 = _q80_pops[0];
													switch (TREE_CODE (_q90))
													  {
													  case SSA_NAME:
													    if (gimple *_d7 = get_def (valueize, _q90))
													      {
														if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														  switch (gimple_assign_rhs_code (_a7))
														    {
														    case PLUS_EXPR:
														      {
															tree _q100 = gimple_assign_rhs1 (_a7);
															_q100 = do_valueize (valueize, _q100);
															tree _q101 = gimple_assign_rhs2 (_a7);
															_q101 = do_valueize (valueize, _q101);
															if (tree_swap_operands_p (_q100, _q101))
															  std::swap (_q100, _q101);
															{
															  tree _q100_pops[1];
															  if (gimple_nop_convert (_q100, _q100_pops, valueize))
															    {
															      tree _q110 = _q100_pops[0];
															      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
																{
																  {
																    tree _q101_pops[1];
																    if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																    if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													    break;
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
									        }
									      default:;
									      }
								        }
								      break;
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
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_NOT_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															switch (TREE_CODE (_q120))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q120))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    case BIT_XOR_EXPR:
																      {
																	tree _q130 = gimple_assign_rhs1 (_a7);
																	_q130 = do_valueize (valueize, _q130);
																	tree _q131 = gimple_assign_rhs2 (_a7);
																	_q131 = do_valueize (valueize, _q131);
																	if (tree_swap_operands_p (_q130, _q131))
																	  std::swap (_q130, _q131);
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
															      }
															    break;
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
								          default:;
								          }
								      }
								  }
							          break;
							        }
							      case BIT_NOT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q31))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q31))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      case BIT_XOR_EXPR:
											        {
												  tree _q80 = gimple_assign_rhs1 (_a6);
												  _q80 = do_valueize (valueize, _q80);
												  tree _q81 = gimple_assign_rhs2 (_a6);
												  _q81 = do_valueize (valueize, _q81);
												  if (tree_swap_operands_p (_q80, _q81))
												    std::swap (_q80, _q81);
												  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q50 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q50, 0) && types_match (_q210, _q50)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
													        break;
													      default:;
													      }
													  }
												      }
												    }
												  if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q51 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q51, 0) && types_match (_q210, _q51)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
													        break;
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
										      break;
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
							        }
							      default:;
							      }
						        }
						      break;
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
			        }
			      case BIT_AND_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case LT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													if (integer_zerop (_q31))
													  {
													    switch (TREE_CODE (_q21))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q21))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															case GE_EXPR:
															  {
															    tree _q130 = gimple_assign_rhs1 (_a6);
															    _q130 = do_valueize (valueize, _q130);
															    tree _q131 = gimple_assign_rhs2 (_a6);
															    _q131 = do_valueize (valueize, _q131);
															    switch (TREE_CODE (_q130))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q130))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case BIT_XOR_EXPR:
																	  {
																	    tree _q140 = gimple_assign_rhs1 (_a7);
																	    _q140 = do_valueize (valueize, _q140);
																	    tree _q141 = gimple_assign_rhs2 (_a7);
																	    _q141 = do_valueize (valueize, _q141);
																	    if (tree_swap_operands_p (_q140, _q141))
																	      std::swap (_q140, _q141);
																	    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	      {
																		if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		  {
																		    if (integer_zerop (_q131))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
															        break;
															      default:;
															      }
															    break;
															  }
															case BIT_NOT_EXPR:
															  {
															    tree _q130 = gimple_assign_rhs1 (_a6);
															    _q130 = do_valueize (valueize, _q130);
															    switch (TREE_CODE (_q130))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q130))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case LT_EXPR:
																	  {
																	    tree _q140 = gimple_assign_rhs1 (_a7);
																	    _q140 = do_valueize (valueize, _q140);
																	    tree _q141 = gimple_assign_rhs2 (_a7);
																	    _q141 = do_valueize (valueize, _q141);
																	    switch (TREE_CODE (_q140))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d8 = get_def (valueize, _q140))
																	          {
																		    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		      switch (gimple_assign_rhs_code (_a8))
																			{
																			case BIT_XOR_EXPR:
																			  {
																			    tree _q150 = gimple_assign_rhs1 (_a8);
																			    _q150 = do_valueize (valueize, _q150);
																			    tree _q151 = gimple_assign_rhs2 (_a8);
																			    _q151 = do_valueize (valueize, _q151);
																			    if (tree_swap_operands_p (_q150, _q151))
																			      std::swap (_q150, _q151);
																			    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																			      {
																				if ((_q151 == _q100 && ! TREE_SIDE_EFFECTS (_q151)) || (operand_equal_p (_q151, _q100, 0) && types_match (_q151, _q100)))
																				  {
																				    if (integer_zerop (_q141))
																				      {
																					{
																					  tree _p1_pops[1];
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																	        break;
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
															  }
															default:;
															}
													          }
													        break;
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
									    break;
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
					        }
					      case GE_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  if (integer_zerop (_q31))
								    {
								      switch (TREE_CODE (_q21))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q21))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case LT_EXPR:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      tree _q81 = gimple_assign_rhs2 (_a5);
										      _q81 = do_valueize (valueize, _q81);
										      switch (TREE_CODE (_q80))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q80))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case BIT_XOR_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      if (tree_swap_operands_p (_q90, _q91))
												        std::swap (_q90, _q91);
												      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case PLUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																if (tree_swap_operands_p (_q120, _q121))
																  std::swap (_q120, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														    break;
													          default:;
													          }
													      }
													  }
												        }
												      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case PLUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																if (tree_swap_operands_p (_q120, _q121))
																  std::swap (_q120, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														    break;
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
											  break;
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
					        }
					      case BIT_NOT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case LT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  if (integer_zerop (_q41))
										    {
										      switch (TREE_CODE (_q21))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q21))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case LT_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      switch (TREE_CODE (_q90))
												        {
													case SSA_NAME:
													  if (gimple *_d7 = get_def (valueize, _q90))
													    {
													      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													        switch (gimple_assign_rhs_code (_a7))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a7);
														      _q100 = do_valueize (valueize, _q100);
														      tree _q101 = gimple_assign_rhs2 (_a7);
														      _q101 = do_valueize (valueize, _q101);
														      if (tree_swap_operands_p (_q100, _q101))
														        std::swap (_q100, _q101);
														      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
															{
															  {
															    tree _q101_pops[1];
															    if (gimple_nop_convert (_q101, _q101_pops, valueize))
															      {
																tree _q120 = _q101_pops[0];
																switch (TREE_CODE (_q120))
																  {
																  case SSA_NAME:
																    if (gimple *_d8 = get_def (valueize, _q120))
																      {
																	if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	  switch (gimple_assign_rhs_code (_a8))
																	    {
																	    case PLUS_EXPR:
																	      {
																		tree _q130 = gimple_assign_rhs1 (_a8);
																		_q130 = do_valueize (valueize, _q130);
																		tree _q131 = gimple_assign_rhs2 (_a8);
																		_q131 = do_valueize (valueize, _q131);
																		if (tree_swap_operands_p (_q130, _q131))
																		  std::swap (_q130, _q131);
																		{
																		  tree _q130_pops[1];
																		  if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		    {
																		      tree _q140 = _q130_pops[0];
																		      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																			{
																			  {
																			    tree _q131_pops[1];
																			    if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			      {
																				tree _q160 = _q131_pops[0];
																				if ((_q160 == _q51 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q51, 0) && types_match (_q160, _q51)))
																				  {
																				    if (integer_zerop (_q91))
																				      {
																					{
																					  tree _p1_pops[1];
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																    break;
															          default:;
															          }
															      }
															  }
														        }
														      if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
															{
															  {
															    tree _q101_pops[1];
															    if (gimple_nop_convert (_q101, _q101_pops, valueize))
															      {
																tree _q120 = _q101_pops[0];
																switch (TREE_CODE (_q120))
																  {
																  case SSA_NAME:
																    if (gimple *_d8 = get_def (valueize, _q120))
																      {
																	if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	  switch (gimple_assign_rhs_code (_a8))
																	    {
																	    case PLUS_EXPR:
																	      {
																		tree _q130 = gimple_assign_rhs1 (_a8);
																		_q130 = do_valueize (valueize, _q130);
																		tree _q131 = gimple_assign_rhs2 (_a8);
																		_q131 = do_valueize (valueize, _q131);
																		if (tree_swap_operands_p (_q130, _q131))
																		  std::swap (_q130, _q131);
																		{
																		  tree _q130_pops[1];
																		  if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		    {
																		      tree _q140 = _q130_pops[0];
																		      if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																			{
																			  {
																			    tree _q131_pops[1];
																			    if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			      {
																				tree _q160 = _q131_pops[0];
																				if ((_q160 == _q50 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q50, 0) && types_match (_q160, _q50)))
																				  {
																				    if (integer_zerop (_q91))
																				      {
																					{
																					  tree _p1_pops[1];
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																    break;
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
													  break;
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
							        }
							      default:;
							      }
						        }
						      break;
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
			        }
			      case NE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_ADD_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    {
									      tree _p1_pops[1];
									      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									        {
										  tree _q80 = _p1_pops[0];
										  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
										    {
										      switch (TREE_CODE (_p2))
										        {
											case SSA_NAME:
											  if (gimple *_d5 = get_def (valueize, _p2))
											    {
											      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											        switch (gimple_assign_rhs_code (_a5))
												  {
												  case REALPART_EXPR:
												    {
												      tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q100) == SSA_NAME
												           || is_gimple_min_invariant (_q100)))
												        {
													  _q100 = do_valueize (valueize, _q100);
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
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
											  break;
										        default:;
										        }
										    }
										  if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
										    {
										      switch (TREE_CODE (_p2))
										        {
											case SSA_NAME:
											  if (gimple *_d5 = get_def (valueize, _p2))
											    {
											      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											        switch (gimple_assign_rhs_code (_a5))
												  {
												  case REALPART_EXPR:
												    {
												      tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q100) == SSA_NAME
												           || is_gimple_min_invariant (_q100)))
												        {
													  _q100 = do_valueize (valueize, _q100);
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
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
											  break;
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
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case LT_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case BIT_AND_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						if (tree_swap_operands_p (_q30, _q31))
						  std::swap (_q30, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_NOT_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      switch (TREE_CODE (_q120))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q120))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  case BIT_XOR_EXPR:
																    {
																      tree _q130 = gimple_assign_rhs1 (_a6);
																      _q130 = do_valueize (valueize, _q130);
																      tree _q131 = gimple_assign_rhs2 (_a6);
																      _q131 = do_valueize (valueize, _q131);
																      if (tree_swap_operands_p (_q130, _q131))
																        std::swap (_q130, _q131);
																      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	{
																	  if ((_q131 == _q100 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q100, 0) && types_match (_q131, _q100)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
															  break;
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
								        default:;
								        }
								    }
								}
								{
								  tree _q40_pops[1];
								  if (gimple_nop_convert (_q40, _q40_pops, valueize))
								    {
								      tree _q50 = _q40_pops[0];
								      switch (TREE_CODE (_q50))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q50))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q60 = gimple_assign_rhs1 (_a4);
										      _q60 = do_valueize (valueize, _q60);
										      tree _q61 = gimple_assign_rhs2 (_a4);
										      _q61 = do_valueize (valueize, _q61);
										      if (tree_swap_operands_p (_q60, _q61))
										        std::swap (_q60, _q61);
										      {
											tree _q60_pops[1];
											if (gimple_nop_convert (_q60, _q60_pops, valueize))
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
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a5);
														      _q110 = do_valueize (valueize, _q110);
														      tree _q111 = gimple_assign_rhs2 (_a5);
														      _q111 = do_valueize (valueize, _q111);
														      if (tree_swap_operands_p (_q110, _q111))
														        std::swap (_q110, _q111);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												        default:;
												        }
												    }
											          break;
											        }
											      default:;
											      }
											  {
											    tree _q61_pops[1];
											    if (gimple_nop_convert (_q61, _q61_pops, valueize))
											      {
												tree _q90 = _q61_pops[0];
												if ((_q41 == _q70 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q70, 0) && types_match (_q41, _q70)))
												  {
												    switch (TREE_CODE (_q31))
												      {
												      case SSA_NAME:
												        if (gimple *_d5 = get_def (valueize, _q31))
												          {
													    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													      switch (gimple_assign_rhs_code (_a5))
														{
														case BIT_NOT_EXPR:
														  {
														    tree _q120 = gimple_assign_rhs1 (_a5);
														    _q120 = do_valueize (valueize, _q120);
														    switch (TREE_CODE (_q120))
														      {
														      case SSA_NAME:
														        if (gimple *_d6 = get_def (valueize, _q120))
														          {
															    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															      switch (gimple_assign_rhs_code (_a6))
																{
																case BIT_XOR_EXPR:
																  {
																    tree _q130 = gimple_assign_rhs1 (_a6);
																    _q130 = do_valueize (valueize, _q130);
																    tree _q131 = gimple_assign_rhs2 (_a6);
																    _q131 = do_valueize (valueize, _q131);
																    if (tree_swap_operands_p (_q130, _q131))
																      std::swap (_q130, _q131);
																    if ((_q130 == _q70 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q70, 0) && types_match (_q130, _q70)))
																      {
																	if ((_q131 == _q90 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q90, 0) && types_match (_q131, _q90)))
																	  {
																	    if (integer_zerop (_q21))
																	      {
																		{
																		  tree _p1_pops[1];
																		  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
														        break;
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
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q31))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case BIT_XOR_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
											{
											  {
											    tree _q71_pops[1];
											    if (gimple_nop_convert (_q71, _q71_pops, valueize))
											      {
												tree _q90 = _q71_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case PLUS_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														tree _q101 = gimple_assign_rhs2 (_a5);
														_q101 = do_valueize (valueize, _q101);
														if (tree_swap_operands_p (_q100, _q101))
														  std::swap (_q100, _q101);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												    break;
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
									  break;
								        default:;
								        }
								      break;
								    }
							          default:;
							          }
							      {
								tree _q41_pops[1];
								if (gimple_nop_convert (_q41, _q41_pops, valueize))
								  {
								    tree _q60 = _q41_pops[0];
								    switch (TREE_CODE (_q60))
								      {
								      case SSA_NAME:
								        if (gimple *_d4 = get_def (valueize, _q60))
								          {
									    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									      switch (gimple_assign_rhs_code (_a4))
										{
										case PLUS_EXPR:
										  {
										    tree _q70 = gimple_assign_rhs1 (_a4);
										    _q70 = do_valueize (valueize, _q70);
										    tree _q71 = gimple_assign_rhs2 (_a4);
										    _q71 = do_valueize (valueize, _q71);
										    if (tree_swap_operands_p (_q70, _q71))
										      std::swap (_q70, _q71);
										    {
										      tree _q70_pops[1];
										      if (gimple_nop_convert (_q70, _q70_pops, valueize))
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
												      case SSA_NAME:
												        if (gimple *_d5 = get_def (valueize, _q31))
												          {
													    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													      switch (gimple_assign_rhs_code (_a5))
														{
														case BIT_XOR_EXPR:
														  {
														    tree _q110 = gimple_assign_rhs1 (_a5);
														    _q110 = do_valueize (valueize, _q110);
														    tree _q111 = gimple_assign_rhs2 (_a5);
														    _q111 = do_valueize (valueize, _q111);
														    if (tree_swap_operands_p (_q110, _q111))
														      std::swap (_q110, _q111);
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
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
								        break;
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
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q31))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case BIT_XOR_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
											{
											  {
											    tree _q71_pops[1];
											    if (gimple_nop_convert (_q71, _q71_pops, valueize))
											      {
												tree _q90 = _q71_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case PLUS_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														tree _q101 = gimple_assign_rhs2 (_a5);
														_q101 = do_valueize (valueize, _q101);
														if (tree_swap_operands_p (_q100, _q101))
														  std::swap (_q100, _q101);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												    break;
											          default:;
											          }
											      }
											  }
										        }
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case PLUS_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    tree _q91 = gimple_assign_rhs2 (_a5);
													    _q91 = do_valueize (valueize, _q91);
													    if (tree_swap_operands_p (_q90, _q91))
													      std::swap (_q90, _q91);
													    {
													      tree _q90_pops[1];
													      if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
											        break;
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
								    }
							          default:;
							          }
								switch (TREE_CODE (_q41))
								  {
								  case INTEGER_CST:
								    {
								      switch (TREE_CODE (_q31))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q31))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case BIT_XOR_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case PLUS_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    tree _q91 = gimple_assign_rhs2 (_a5);
													    _q91 = do_valueize (valueize, _q91);
													    if (tree_swap_operands_p (_q90, _q91))
													      std::swap (_q90, _q91);
													    {
													      tree _q90_pops[1];
													      if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
											        break;
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
								    }
							          default:;
							          }
							        break;
							      }
							    case BIT_NOT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case BIT_XOR_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										switch (TREE_CODE (_q31))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _q31))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case BIT_XOR_EXPR:
											      {
												tree _q80 = gimple_assign_rhs1 (_a5);
												_q80 = do_valueize (valueize, _q80);
												tree _q81 = gimple_assign_rhs2 (_a5);
												_q81 = do_valueize (valueize, _q81);
												if (tree_swap_operands_p (_q80, _q81))
												  std::swap (_q80, _q81);
												if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
																        {
																	  tree _q140 = _q111_pops[0];
																	  if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													      break;
													    default:;
													    }
												        }
												    }
												  }
												if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
																        {
																	  tree _q140 = _q111_pops[0];
																	  if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													      break;
													    default:;
													    }
												        }
												    }
												  }
												{
												  tree _q80_pops[1];
												  if (gimple_nop_convert (_q80, _q80_pops, valueize))
												    {
												      tree _q90 = _q80_pops[0];
												      switch (TREE_CODE (_q90))
												        {
													case SSA_NAME:
													  if (gimple *_d6 = get_def (valueize, _q90))
													    {
													      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													        switch (gimple_assign_rhs_code (_a6))
														  {
														  case PLUS_EXPR:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a6);
														      _q100 = do_valueize (valueize, _q100);
														      tree _q101 = gimple_assign_rhs2 (_a6);
														      _q101 = do_valueize (valueize, _q101);
														      if (tree_swap_operands_p (_q100, _q101))
														        std::swap (_q100, _q101);
														      {
															tree _q100_pops[1];
															if (gimple_nop_convert (_q100, _q100_pops, valueize))
															  {
															    tree _q110 = _q100_pops[0];
															    if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
															      {
																{
																  tree _q101_pops[1];
																  if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																  if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													  break;
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
									      }
									    default:;
									    }
								      }
								    break;
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
					      }
					    default:;
					    }
				      }
				    break;
			          default:;
			          }
			      }
			  }
		        break;
		      }
		    case GE_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case BIT_AND_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						if (tree_swap_operands_p (_q30, _q31))
						  std::swap (_q30, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_NOT_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      switch (TREE_CODE (_q120))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q120))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  case BIT_XOR_EXPR:
																    {
																      tree _q130 = gimple_assign_rhs1 (_a6);
																      _q130 = do_valueize (valueize, _q130);
																      tree _q131 = gimple_assign_rhs2 (_a6);
																      _q131 = do_valueize (valueize, _q131);
																      if (tree_swap_operands_p (_q130, _q131))
																        std::swap (_q130, _q131);
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
															    }
															  break;
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
								        default:;
								        }
								    }
								}
							        break;
							      }
							    case BIT_NOT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case BIT_XOR_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										switch (TREE_CODE (_q31))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _q31))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case BIT_XOR_EXPR:
											      {
												tree _q80 = gimple_assign_rhs1 (_a5);
												_q80 = do_valueize (valueize, _q80);
												tree _q81 = gimple_assign_rhs2 (_a5);
												_q81 = do_valueize (valueize, _q81);
												if (tree_swap_operands_p (_q80, _q81))
												  std::swap (_q80, _q81);
												if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q50 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q50, 0) && types_match (_q210, _q50)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
													      break;
													    default:;
													    }
												        }
												    }
												  }
												if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q51 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q51, 0) && types_match (_q210, _q51)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
													      break;
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
										    break;
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
							      }
							    default:;
							    }
						      }
						    break;
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
			      }
			  }
		        break;
		      }
		    case BIT_AND_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				if (tree_swap_operands_p (_q20, _q21))
				  std::swap (_q20, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case LT_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      if (integer_zerop (_q31))
													{
													  switch (TREE_CODE (_q21))
													    {
													    case SSA_NAME:
													      if (gimple *_d5 = get_def (valueize, _q21))
													        {
														  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
														    switch (gimple_assign_rhs_code (_a5))
														      {
														      case GE_EXPR:
														        {
															  tree _q130 = gimple_assign_rhs1 (_a5);
															  _q130 = do_valueize (valueize, _q130);
															  tree _q131 = gimple_assign_rhs2 (_a5);
															  _q131 = do_valueize (valueize, _q131);
															  switch (TREE_CODE (_q130))
															    {
															    case SSA_NAME:
															      if (gimple *_d6 = get_def (valueize, _q130))
															        {
																  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																    switch (gimple_assign_rhs_code (_a6))
																      {
																      case BIT_XOR_EXPR:
																        {
																	  tree _q140 = gimple_assign_rhs1 (_a6);
																	  _q140 = do_valueize (valueize, _q140);
																	  tree _q141 = gimple_assign_rhs2 (_a6);
																	  _q141 = do_valueize (valueize, _q141);
																	  if (tree_swap_operands_p (_q140, _q141))
																	    std::swap (_q140, _q141);
																	  if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	    {
																	      if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		{
																		  if (integer_zerop (_q131))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
															      break;
															    default:;
															    }
														          break;
														        }
														      case BIT_NOT_EXPR:
														        {
															  tree _q130 = gimple_assign_rhs1 (_a5);
															  _q130 = do_valueize (valueize, _q130);
															  switch (TREE_CODE (_q130))
															    {
															    case SSA_NAME:
															      if (gimple *_d6 = get_def (valueize, _q130))
															        {
																  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																    switch (gimple_assign_rhs_code (_a6))
																      {
																      case LT_EXPR:
																        {
																	  tree _q140 = gimple_assign_rhs1 (_a6);
																	  _q140 = do_valueize (valueize, _q140);
																	  tree _q141 = gimple_assign_rhs2 (_a6);
																	  _q141 = do_valueize (valueize, _q141);
																	  switch (TREE_CODE (_q140))
																	    {
																	    case SSA_NAME:
																	      if (gimple *_d7 = get_def (valueize, _q140))
																	        {
																		  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																		    switch (gimple_assign_rhs_code (_a7))
																		      {
																		      case BIT_XOR_EXPR:
																		        {
																			  tree _q150 = gimple_assign_rhs1 (_a7);
																			  _q150 = do_valueize (valueize, _q150);
																			  tree _q151 = gimple_assign_rhs2 (_a7);
																			  _q151 = do_valueize (valueize, _q151);
																			  if (tree_swap_operands_p (_q150, _q151))
																			    std::swap (_q150, _q151);
																			  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																			    {
																			      if ((_q151 == _q100 && ! TREE_SIDE_EFFECTS (_q151)) || (operand_equal_p (_q151, _q100, 0) && types_match (_q151, _q100)))
																				{
																				  if (integer_zerop (_q141))
																				    {
																				      {
																					tree _p1_pops[1];
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																	      break;
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
														        }
														      default:;
														      }
													        }
													      break;
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
									  break;
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
					      }
					    case GE_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								if (integer_zerop (_q31))
								  {
								    switch (TREE_CODE (_q21))
								      {
								      case SSA_NAME:
								        if (gimple *_d4 = get_def (valueize, _q21))
								          {
									    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									      switch (gimple_assign_rhs_code (_a4))
										{
										case LT_EXPR:
										  {
										    tree _q80 = gimple_assign_rhs1 (_a4);
										    _q80 = do_valueize (valueize, _q80);
										    tree _q81 = gimple_assign_rhs2 (_a4);
										    _q81 = do_valueize (valueize, _q81);
										    switch (TREE_CODE (_q80))
										      {
										      case SSA_NAME:
										        if (gimple *_d5 = get_def (valueize, _q80))
										          {
											    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											      switch (gimple_assign_rhs_code (_a5))
												{
												case BIT_XOR_EXPR:
												  {
												    tree _q90 = gimple_assign_rhs1 (_a5);
												    _q90 = do_valueize (valueize, _q90);
												    tree _q91 = gimple_assign_rhs2 (_a5);
												    _q91 = do_valueize (valueize, _q91);
												    if (tree_swap_operands_p (_q90, _q91))
												      std::swap (_q90, _q91);
												    if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case PLUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      if (tree_swap_operands_p (_q120, _q121))
															        std::swap (_q120, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														  break;
													        default:;
													        }
													    }
													}
												      }
												    if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case PLUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      if (tree_swap_operands_p (_q120, _q121))
															        std::swap (_q120, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														  break;
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
										        break;
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
					      }
					    case BIT_NOT_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case LT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case BIT_XOR_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										if (integer_zerop (_q41))
										  {
										    switch (TREE_CODE (_q21))
										      {
										      case SSA_NAME:
										        if (gimple *_d5 = get_def (valueize, _q21))
										          {
											    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											      switch (gimple_assign_rhs_code (_a5))
												{
												case LT_EXPR:
												  {
												    tree _q90 = gimple_assign_rhs1 (_a5);
												    _q90 = do_valueize (valueize, _q90);
												    tree _q91 = gimple_assign_rhs2 (_a5);
												    _q91 = do_valueize (valueize, _q91);
												    switch (TREE_CODE (_q90))
												      {
												      case SSA_NAME:
												        if (gimple *_d6 = get_def (valueize, _q90))
												          {
													    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													      switch (gimple_assign_rhs_code (_a6))
														{
														case BIT_XOR_EXPR:
														  {
														    tree _q100 = gimple_assign_rhs1 (_a6);
														    _q100 = do_valueize (valueize, _q100);
														    tree _q101 = gimple_assign_rhs2 (_a6);
														    _q101 = do_valueize (valueize, _q101);
														    if (tree_swap_operands_p (_q100, _q101))
														      std::swap (_q100, _q101);
														    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
														      {
															{
															  tree _q101_pops[1];
															  if (gimple_nop_convert (_q101, _q101_pops, valueize))
															    {
															      tree _q120 = _q101_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  case PLUS_EXPR:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      tree _q131 = gimple_assign_rhs2 (_a7);
																	      _q131 = do_valueize (valueize, _q131);
																	      if (tree_swap_operands_p (_q130, _q131))
																	        std::swap (_q130, _q131);
																	      {
																		tree _q130_pops[1];
																		if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		  {
																		    tree _q140 = _q130_pops[0];
																		    if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																		      {
																			{
																			  tree _q131_pops[1];
																			  if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			    {
																			      tree _q160 = _q131_pops[0];
																			      if ((_q160 == _q51 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q51, 0) && types_match (_q160, _q51)))
																				{
																				  if (integer_zerop (_q91))
																				    {
																				      {
																					tree _p1_pops[1];
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																  break;
															        default:;
															        }
															    }
															}
														      }
														    if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
														      {
															{
															  tree _q101_pops[1];
															  if (gimple_nop_convert (_q101, _q101_pops, valueize))
															    {
															      tree _q120 = _q101_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  case PLUS_EXPR:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      tree _q131 = gimple_assign_rhs2 (_a7);
																	      _q131 = do_valueize (valueize, _q131);
																	      if (tree_swap_operands_p (_q130, _q131))
																	        std::swap (_q130, _q131);
																	      {
																		tree _q130_pops[1];
																		if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		  {
																		    tree _q140 = _q130_pops[0];
																		    if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																		      {
																			{
																			  tree _q131_pops[1];
																			  if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			    {
																			      tree _q160 = _q131_pops[0];
																			      if ((_q160 == _q50 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q50, 0) && types_match (_q160, _q50)))
																				{
																				  if (integer_zerop (_q91))
																				    {
																				      {
																					tree _p1_pops[1];
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																  break;
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
												        break;
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
							      }
							    default:;
							    }
						      }
						    break;
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
			      }
			  }
		        break;
		      }
		    case NE_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				if (tree_swap_operands_p (_q20, _q21))
				  std::swap (_q20, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_ADD_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									      {
										tree _q80 = _p1_pops[0];
										if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
										  {
										    switch (TREE_CODE (_p2))
										      {
										      case SSA_NAME:
										        if (gimple *_d4 = get_def (valueize, _p2))
										          {
											    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
											      switch (gimple_assign_rhs_code (_a4))
												{
												case REALPART_EXPR:
												  {
												    tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q100) == SSA_NAME
												         || is_gimple_min_invariant (_q100)))
												      {
													_q100 = do_valueize (valueize, _q100);
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
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
										        break;
										      default:;
										      }
										  }
										if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
										  {
										    switch (TREE_CODE (_p2))
										      {
										      case SSA_NAME:
										        if (gimple *_d4 = get_def (valueize, _p2))
										          {
											    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
											      switch (gimple_assign_rhs_code (_a4))
												{
												case REALPART_EXPR:
												  {
												    tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q100) == SSA_NAME
												         || is_gimple_min_invariant (_q100)))
												      {
													_q100 = do_valueize (valueize, _q100);
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
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
										        break;
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
	  else if (gphi *_a1 = dyn_cast <gphi *> (_d1))
	    {
	      basic_block _b1 = gimple_bb (_a1);
	      tree _p1, _p2;
	      gcond *_cond_1 = match_cond_with_binary_phi (_a1, &_p1, &_p2);
	      if (_cond_1)
		{
		  tree _cond_lhs_1 = gimple_cond_lhs (_cond_1);
		  tree _cond_rhs_1 = gimple_cond_rhs (_cond_1);
		  tree _p0 = build2 (gimple_cond_code (_cond_1), boolean_type_node, _cond_lhs_1, _cond_rhs_1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_NOT_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															switch (TREE_CODE (_q120))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q120))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    case BIT_XOR_EXPR:
																      {
																	tree _q130 = gimple_assign_rhs1 (_a7);
																	_q130 = do_valueize (valueize, _q130);
																	tree _q131 = gimple_assign_rhs2 (_a7);
																	_q131 = do_valueize (valueize, _q131);
																	if (tree_swap_operands_p (_q130, _q131))
																	  std::swap (_q130, _q131);
																	if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	  {
																	    if ((_q131 == _q100 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q100, 0) && types_match (_q131, _q100)))
																	      {
																		if (integer_zerop (_q21))
																		  {
																		    {
																		      tree _p1_pops[1];
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
															    break;
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
								          default:;
								          }
								      }
								  }
								  {
								    tree _q40_pops[1];
								    if (gimple_nop_convert (_q40, _q40_pops, valueize))
								      {
									tree _q50 = _q40_pops[0];
									switch (TREE_CODE (_q50))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q50))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q60 = gimple_assign_rhs1 (_a5);
											_q60 = do_valueize (valueize, _q60);
											tree _q61 = gimple_assign_rhs2 (_a5);
											_q61 = do_valueize (valueize, _q61);
											if (tree_swap_operands_p (_q60, _q61))
											  std::swap (_q60, _q61);
											{
											  tree _q60_pops[1];
											  if (gimple_nop_convert (_q60, _q60_pops, valueize))
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
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_XOR_EXPR:
														      {
															tree _q110 = gimple_assign_rhs1 (_a6);
															_q110 = do_valueize (valueize, _q110);
															tree _q111 = gimple_assign_rhs2 (_a6);
															_q111 = do_valueize (valueize, _q111);
															if (tree_swap_operands_p (_q110, _q111))
															  std::swap (_q110, _q111);
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												          default:;
												          }
												      }
												    break;
												  }
											        default:;
											        }
											    {
											      tree _q61_pops[1];
											      if (gimple_nop_convert (_q61, _q61_pops, valueize))
											        {
												  tree _q90 = _q61_pops[0];
												  if ((_q41 == _q70 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q70, 0) && types_match (_q41, _q70)))
												    {
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d6 = get_def (valueize, _q31))
													    {
													      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													        switch (gimple_assign_rhs_code (_a6))
														  {
														  case BIT_NOT_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a6);
														      _q120 = do_valueize (valueize, _q120);
														      switch (TREE_CODE (_q120))
														        {
															case SSA_NAME:
															  if (gimple *_d7 = get_def (valueize, _q120))
															    {
															      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															        switch (gimple_assign_rhs_code (_a7))
																  {
																  case BIT_XOR_EXPR:
																    {
																      tree _q130 = gimple_assign_rhs1 (_a7);
																      _q130 = do_valueize (valueize, _q130);
																      tree _q131 = gimple_assign_rhs2 (_a7);
																      _q131 = do_valueize (valueize, _q131);
																      if (tree_swap_operands_p (_q130, _q131))
																        std::swap (_q130, _q131);
																      if ((_q130 == _q70 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q70, 0) && types_match (_q130, _q70)))
																	{
																	  if ((_q131 == _q90 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q90, 0) && types_match (_q131, _q90)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
															  break;
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
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q31))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
											  {
											    {
											      tree _q71_pops[1];
											      if (gimple_nop_convert (_q71, _q71_pops, valueize))
											        {
												  tree _q90 = _q71_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case PLUS_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  tree _q101 = gimple_assign_rhs2 (_a6);
														  _q101 = do_valueize (valueize, _q101);
														  if (tree_swap_operands_p (_q100, _q101))
														    std::swap (_q100, _q101);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												      break;
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
									    break;
								          default:;
								          }
								        break;
								      }
								    default:;
								    }
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q60))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a5);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a5);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
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
													case SSA_NAME:
													  if (gimple *_d6 = get_def (valueize, _q31))
													    {
													      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													        switch (gimple_assign_rhs_code (_a6))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a6);
														      _q110 = do_valueize (valueize, _q110);
														      tree _q111 = gimple_assign_rhs2 (_a6);
														      _q111 = do_valueize (valueize, _q111);
														      if (tree_swap_operands_p (_q110, _q111))
														        std::swap (_q110, _q111);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
									  break;
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
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q31))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
											  {
											    {
											      tree _q71_pops[1];
											      if (gimple_nop_convert (_q71, _q71_pops, valueize))
											        {
												  tree _q90 = _q71_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case PLUS_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  tree _q101 = gimple_assign_rhs2 (_a6);
														  _q101 = do_valueize (valueize, _q101);
														  if (tree_swap_operands_p (_q100, _q101))
														    std::swap (_q100, _q101);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												      break;
												    default:;
												    }
											        }
											    }
											  }
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      switch (TREE_CODE (_q80))
											        {
												case SSA_NAME:
												  if (gimple *_d6 = get_def (valueize, _q80))
												    {
												      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												        switch (gimple_assign_rhs_code (_a6))
													  {
													  case PLUS_EXPR:
													    {
													      tree _q90 = gimple_assign_rhs1 (_a6);
													      _q90 = do_valueize (valueize, _q90);
													      tree _q91 = gimple_assign_rhs2 (_a6);
													      _q91 = do_valueize (valueize, _q91);
													      if (tree_swap_operands_p (_q90, _q91))
													        std::swap (_q90, _q91);
													      {
														tree _q90_pops[1];
														if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												  break;
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
								      }
								    default:;
								    }
								  switch (TREE_CODE (_q41))
								    {
								    case INTEGER_CST:
								      {
									switch (TREE_CODE (_q31))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q31))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_XOR_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      switch (TREE_CODE (_q80))
											        {
												case SSA_NAME:
												  if (gimple *_d6 = get_def (valueize, _q80))
												    {
												      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												        switch (gimple_assign_rhs_code (_a6))
													  {
													  case PLUS_EXPR:
													    {
													      tree _q90 = gimple_assign_rhs1 (_a6);
													      _q90 = do_valueize (valueize, _q90);
													      tree _q91 = gimple_assign_rhs2 (_a6);
													      _q91 = do_valueize (valueize, _q91);
													      if (tree_swap_operands_p (_q90, _q91))
													        std::swap (_q90, _q91);
													      {
														tree _q90_pops[1];
														if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																	if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												  break;
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
								      }
								    default:;
								    }
							          break;
							        }
							      case BIT_NOT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q31))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q31))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      case BIT_XOR_EXPR:
											        {
												  tree _q80 = gimple_assign_rhs1 (_a6);
												  _q80 = do_valueize (valueize, _q80);
												  tree _q81 = gimple_assign_rhs2 (_a6);
												  _q81 = do_valueize (valueize, _q81);
												  if (tree_swap_operands_p (_q80, _q81))
												    std::swap (_q80, _q81);
												  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
																	  {
																	    tree _q140 = _q111_pops[0];
																	    if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																	      {
																		if (integer_zerop (_q21))
																		  {
																		    {
																		      tree _p1_pops[1];
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													        break;
													      default:;
													      }
													  }
												      }
												    }
												  if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
																	  {
																	    tree _q140 = _q111_pops[0];
																	    if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																	      {
																		if (integer_zerop (_q21))
																		  {
																		    {
																		      tree _p1_pops[1];
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													        break;
													      default:;
													      }
													  }
												      }
												    }
												  {
												    tree _q80_pops[1];
												    if (gimple_nop_convert (_q80, _q80_pops, valueize))
												      {
													tree _q90 = _q80_pops[0];
													switch (TREE_CODE (_q90))
													  {
													  case SSA_NAME:
													    if (gimple *_d7 = get_def (valueize, _q90))
													      {
														if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														  switch (gimple_assign_rhs_code (_a7))
														    {
														    case PLUS_EXPR:
														      {
															tree _q100 = gimple_assign_rhs1 (_a7);
															_q100 = do_valueize (valueize, _q100);
															tree _q101 = gimple_assign_rhs2 (_a7);
															_q101 = do_valueize (valueize, _q101);
															if (tree_swap_operands_p (_q100, _q101))
															  std::swap (_q100, _q101);
															{
															  tree _q100_pops[1];
															  if (gimple_nop_convert (_q100, _q100_pops, valueize))
															    {
															      tree _q110 = _q100_pops[0];
															      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
																{
																  {
																    tree _q101_pops[1];
																    if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																    if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													    break;
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
									        }
									      default:;
									      }
								        }
								      break;
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
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_NOT_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															switch (TREE_CODE (_q120))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q120))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    case BIT_XOR_EXPR:
																      {
																	tree _q130 = gimple_assign_rhs1 (_a7);
																	_q130 = do_valueize (valueize, _q130);
																	tree _q131 = gimple_assign_rhs2 (_a7);
																	_q131 = do_valueize (valueize, _q131);
																	if (tree_swap_operands_p (_q130, _q131))
																	  std::swap (_q130, _q131);
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
															      }
															    break;
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
								          default:;
								          }
								      }
								  }
							          break;
							        }
							      case BIT_NOT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q31))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q31))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      case BIT_XOR_EXPR:
											        {
												  tree _q80 = gimple_assign_rhs1 (_a6);
												  _q80 = do_valueize (valueize, _q80);
												  tree _q81 = gimple_assign_rhs2 (_a6);
												  _q81 = do_valueize (valueize, _q81);
												  if (tree_swap_operands_p (_q80, _q81))
												    std::swap (_q80, _q81);
												  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q50 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q50, 0) && types_match (_q210, _q50)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
													        break;
													      default:;
													      }
													  }
												      }
												    }
												  if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												    {
												      {
													tree _q81_pops[1];
													if (gimple_nop_convert (_q81, _q81_pops, valueize))
													  {
													    tree _q100 = _q81_pops[0];
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case PLUS_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    if (tree_swap_operands_p (_q110, _q111))
															      std::swap (_q110, _q111);
															    {
															      tree _q110_pops[1];
															      if (gimple_nop_convert (_q110, _q110_pops, valueize))
															        {
																  tree _q120 = _q110_pops[0];
																  if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																    {
																      {
																	tree _q111_pops[1];
																	if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			  case SSA_NAME:
																			    if (gimple *_d8 = get_def (valueize, _p2))
																			      {
																				if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				  switch (gimple_assign_rhs_code (_a8))
																				    {
																				    case BIT_XOR_EXPR:
																				      {
																					tree _q180 = gimple_assign_rhs1 (_a8);
																					_q180 = do_valueize (valueize, _q180);
																					tree _q181 = gimple_assign_rhs2 (_a8);
																					_q181 = do_valueize (valueize, _q181);
																					if (tree_swap_operands_p (_q180, _q181))
																					  std::swap (_q180, _q181);
																					switch (TREE_CODE (_q180))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d9 = get_def (valueize, _q180))
																					      {
																						if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						  switch (gimple_assign_rhs_code (_a9))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q190 = gimple_assign_rhs1 (_a9);
																							_q190 = do_valueize (valueize, _q190);
																							switch (TREE_CODE (_q190))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d10 = get_def (valueize, _q190))
																							      {
																								if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								  switch (gimple_assign_rhs_code (_a10))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q200 = gimple_assign_rhs1 (_a10);
																									_q200 = do_valueize (valueize, _q200);
																									switch (TREE_CODE (_q200))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q200))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q51 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q51, 0) && types_match (_q210, _q51)))
																											  {
																											    if (integer_zerop (_q211))
																											      {
																												if (gimple_max_value (_q181, valueize))
																												  {
																												    {
																												      tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
																												      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																													{
																													  {
																													    res_ops[0] = captures[0];
																													    res_ops[1] = captures[1];
																													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						      }
																						    default:;
																						    }
																					      }
																					    break;
																				          default:;
																				          }
																				      if (gimple_max_value (_q180, valueize))
																					{
																					  switch (TREE_CODE (_q181))
																					    {
																					    case SSA_NAME:
																					      if (gimple *_d9 = get_def (valueize, _q181))
																					        {
																						  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																						    switch (gimple_assign_rhs_code (_a9))
																						      {
																						      case NEGATE_EXPR:
																						        {
																							  tree _q200 = gimple_assign_rhs1 (_a9);
																							  _q200 = do_valueize (valueize, _q200);
																							  switch (TREE_CODE (_q200))
																							    {
																							    case SSA_NAME:
																							      if (gimple *_d10 = get_def (valueize, _q200))
																							        {
																								  if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																								    switch (gimple_assign_rhs_code (_a10))
																								      {
																								      CASE_CONVERT:
																								        {
																									  tree _q210 = gimple_assign_rhs1 (_a10);
																									  _q210 = do_valueize (valueize, _q210);
																									  switch (TREE_CODE (_q210))
																									    {
																									    case SSA_NAME:
																									      if (gimple *_d11 = get_def (valueize, _q210))
																									        {
																										  if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										    switch (gimple_assign_rhs_code (_a11))
																										      {
																										      case LT_EXPR:
																										        {
																											  tree _q220 = gimple_assign_rhs1 (_a11);
																											  _q220 = do_valueize (valueize, _q220);
																											  tree _q221 = gimple_assign_rhs2 (_a11);
																											  _q221 = do_valueize (valueize, _q221);
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
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									      break;
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
																						        }
																						      default:;
																						      }
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
													        break;
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
										      break;
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
							        }
							      default:;
							      }
						        }
						      break;
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
			        }
			      case BIT_AND_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case LT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case PLUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (tree_swap_operands_p (_q70, _q71))
											  std::swap (_q70, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													if (integer_zerop (_q31))
													  {
													    switch (TREE_CODE (_q21))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q21))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															case GE_EXPR:
															  {
															    tree _q130 = gimple_assign_rhs1 (_a6);
															    _q130 = do_valueize (valueize, _q130);
															    tree _q131 = gimple_assign_rhs2 (_a6);
															    _q131 = do_valueize (valueize, _q131);
															    switch (TREE_CODE (_q130))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q130))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case BIT_XOR_EXPR:
																	  {
																	    tree _q140 = gimple_assign_rhs1 (_a7);
																	    _q140 = do_valueize (valueize, _q140);
																	    tree _q141 = gimple_assign_rhs2 (_a7);
																	    _q141 = do_valueize (valueize, _q141);
																	    if (tree_swap_operands_p (_q140, _q141))
																	      std::swap (_q140, _q141);
																	    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	      {
																		if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		  {
																		    if (integer_zerop (_q131))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
															        break;
															      default:;
															      }
															    break;
															  }
															case BIT_NOT_EXPR:
															  {
															    tree _q130 = gimple_assign_rhs1 (_a6);
															    _q130 = do_valueize (valueize, _q130);
															    switch (TREE_CODE (_q130))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q130))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case LT_EXPR:
																	  {
																	    tree _q140 = gimple_assign_rhs1 (_a7);
																	    _q140 = do_valueize (valueize, _q140);
																	    tree _q141 = gimple_assign_rhs2 (_a7);
																	    _q141 = do_valueize (valueize, _q141);
																	    switch (TREE_CODE (_q140))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d8 = get_def (valueize, _q140))
																	          {
																		    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		      switch (gimple_assign_rhs_code (_a8))
																			{
																			case BIT_XOR_EXPR:
																			  {
																			    tree _q150 = gimple_assign_rhs1 (_a8);
																			    _q150 = do_valueize (valueize, _q150);
																			    tree _q151 = gimple_assign_rhs2 (_a8);
																			    _q151 = do_valueize (valueize, _q151);
																			    if (tree_swap_operands_p (_q150, _q151))
																			      std::swap (_q150, _q151);
																			    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																			      {
																				if ((_q151 == _q100 && ! TREE_SIDE_EFFECTS (_q151)) || (operand_equal_p (_q151, _q100, 0) && types_match (_q151, _q100)))
																				  {
																				    if (integer_zerop (_q141))
																				      {
																					{
																					  tree _p1_pops[1];
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																	        break;
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
															  }
															default:;
															}
													          }
													        break;
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
									    break;
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
					        }
					      case GE_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  if (integer_zerop (_q31))
								    {
								      switch (TREE_CODE (_q21))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q21))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case LT_EXPR:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      tree _q81 = gimple_assign_rhs2 (_a5);
										      _q81 = do_valueize (valueize, _q81);
										      switch (TREE_CODE (_q80))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q80))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case BIT_XOR_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      if (tree_swap_operands_p (_q90, _q91))
												        std::swap (_q90, _q91);
												      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case PLUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																if (tree_swap_operands_p (_q120, _q121))
																  std::swap (_q120, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														    break;
													          default:;
													          }
													      }
													  }
												        }
												      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case PLUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																if (tree_swap_operands_p (_q120, _q121))
																  std::swap (_q120, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														    break;
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
											  break;
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
					        }
					      case BIT_NOT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case LT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  if (integer_zerop (_q41))
										    {
										      switch (TREE_CODE (_q21))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q21))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case LT_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      switch (TREE_CODE (_q90))
												        {
													case SSA_NAME:
													  if (gimple *_d7 = get_def (valueize, _q90))
													    {
													      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													        switch (gimple_assign_rhs_code (_a7))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a7);
														      _q100 = do_valueize (valueize, _q100);
														      tree _q101 = gimple_assign_rhs2 (_a7);
														      _q101 = do_valueize (valueize, _q101);
														      if (tree_swap_operands_p (_q100, _q101))
														        std::swap (_q100, _q101);
														      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
															{
															  {
															    tree _q101_pops[1];
															    if (gimple_nop_convert (_q101, _q101_pops, valueize))
															      {
																tree _q120 = _q101_pops[0];
																switch (TREE_CODE (_q120))
																  {
																  case SSA_NAME:
																    if (gimple *_d8 = get_def (valueize, _q120))
																      {
																	if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	  switch (gimple_assign_rhs_code (_a8))
																	    {
																	    case PLUS_EXPR:
																	      {
																		tree _q130 = gimple_assign_rhs1 (_a8);
																		_q130 = do_valueize (valueize, _q130);
																		tree _q131 = gimple_assign_rhs2 (_a8);
																		_q131 = do_valueize (valueize, _q131);
																		if (tree_swap_operands_p (_q130, _q131))
																		  std::swap (_q130, _q131);
																		{
																		  tree _q130_pops[1];
																		  if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		    {
																		      tree _q140 = _q130_pops[0];
																		      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																			{
																			  {
																			    tree _q131_pops[1];
																			    if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			      {
																				tree _q160 = _q131_pops[0];
																				if ((_q160 == _q51 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q51, 0) && types_match (_q160, _q51)))
																				  {
																				    if (integer_zerop (_q91))
																				      {
																					{
																					  tree _p1_pops[1];
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																    break;
															          default:;
															          }
															      }
															  }
														        }
														      if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
															{
															  {
															    tree _q101_pops[1];
															    if (gimple_nop_convert (_q101, _q101_pops, valueize))
															      {
																tree _q120 = _q101_pops[0];
																switch (TREE_CODE (_q120))
																  {
																  case SSA_NAME:
																    if (gimple *_d8 = get_def (valueize, _q120))
																      {
																	if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	  switch (gimple_assign_rhs_code (_a8))
																	    {
																	    case PLUS_EXPR:
																	      {
																		tree _q130 = gimple_assign_rhs1 (_a8);
																		_q130 = do_valueize (valueize, _q130);
																		tree _q131 = gimple_assign_rhs2 (_a8);
																		_q131 = do_valueize (valueize, _q131);
																		if (tree_swap_operands_p (_q130, _q131))
																		  std::swap (_q130, _q131);
																		{
																		  tree _q130_pops[1];
																		  if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		    {
																		      tree _q140 = _q130_pops[0];
																		      if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																			{
																			  {
																			    tree _q131_pops[1];
																			    if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			      {
																				tree _q160 = _q131_pops[0];
																				if ((_q160 == _q50 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q50, 0) && types_match (_q160, _q50)))
																				  {
																				    if (integer_zerop (_q91))
																				      {
																					{
																					  tree _p1_pops[1];
																					  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																    break;
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
													  break;
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
							        }
							      default:;
							      }
						        }
						      break;
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
			        }
			      case NE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_ADD_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    {
									      tree _p1_pops[1];
									      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									        {
										  tree _q80 = _p1_pops[0];
										  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
										    {
										      switch (TREE_CODE (_p2))
										        {
											case SSA_NAME:
											  if (gimple *_d5 = get_def (valueize, _p2))
											    {
											      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											        switch (gimple_assign_rhs_code (_a5))
												  {
												  case REALPART_EXPR:
												    {
												      tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q100) == SSA_NAME
												           || is_gimple_min_invariant (_q100)))
												        {
													  _q100 = do_valueize (valueize, _q100);
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
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
											  break;
										        default:;
										        }
										    }
										  if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
										    {
										      switch (TREE_CODE (_p2))
										        {
											case SSA_NAME:
											  if (gimple *_d5 = get_def (valueize, _p2))
											    {
											      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											        switch (gimple_assign_rhs_code (_a5))
												  {
												  case REALPART_EXPR:
												    {
												      tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q100) == SSA_NAME
												           || is_gimple_min_invariant (_q100)))
												        {
													  _q100 = do_valueize (valueize, _q100);
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
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
											  break;
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
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case LT_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case BIT_AND_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						if (tree_swap_operands_p (_q30, _q31))
						  std::swap (_q30, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_NOT_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      switch (TREE_CODE (_q120))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q120))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  case BIT_XOR_EXPR:
																    {
																      tree _q130 = gimple_assign_rhs1 (_a6);
																      _q130 = do_valueize (valueize, _q130);
																      tree _q131 = gimple_assign_rhs2 (_a6);
																      _q131 = do_valueize (valueize, _q131);
																      if (tree_swap_operands_p (_q130, _q131))
																        std::swap (_q130, _q131);
																      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	{
																	  if ((_q131 == _q100 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q100, 0) && types_match (_q131, _q100)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
															  break;
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
								        default:;
								        }
								    }
								}
								{
								  tree _q40_pops[1];
								  if (gimple_nop_convert (_q40, _q40_pops, valueize))
								    {
								      tree _q50 = _q40_pops[0];
								      switch (TREE_CODE (_q50))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q50))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q60 = gimple_assign_rhs1 (_a4);
										      _q60 = do_valueize (valueize, _q60);
										      tree _q61 = gimple_assign_rhs2 (_a4);
										      _q61 = do_valueize (valueize, _q61);
										      if (tree_swap_operands_p (_q60, _q61))
										        std::swap (_q60, _q61);
										      {
											tree _q60_pops[1];
											if (gimple_nop_convert (_q60, _q60_pops, valueize))
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
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a5);
														      _q110 = do_valueize (valueize, _q110);
														      tree _q111 = gimple_assign_rhs2 (_a5);
														      _q111 = do_valueize (valueize, _q111);
														      if (tree_swap_operands_p (_q110, _q111))
														        std::swap (_q110, _q111);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												        default:;
												        }
												    }
											          break;
											        }
											      default:;
											      }
											  {
											    tree _q61_pops[1];
											    if (gimple_nop_convert (_q61, _q61_pops, valueize))
											      {
												tree _q90 = _q61_pops[0];
												if ((_q41 == _q70 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q70, 0) && types_match (_q41, _q70)))
												  {
												    switch (TREE_CODE (_q31))
												      {
												      case SSA_NAME:
												        if (gimple *_d5 = get_def (valueize, _q31))
												          {
													    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													      switch (gimple_assign_rhs_code (_a5))
														{
														case BIT_NOT_EXPR:
														  {
														    tree _q120 = gimple_assign_rhs1 (_a5);
														    _q120 = do_valueize (valueize, _q120);
														    switch (TREE_CODE (_q120))
														      {
														      case SSA_NAME:
														        if (gimple *_d6 = get_def (valueize, _q120))
														          {
															    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															      switch (gimple_assign_rhs_code (_a6))
																{
																case BIT_XOR_EXPR:
																  {
																    tree _q130 = gimple_assign_rhs1 (_a6);
																    _q130 = do_valueize (valueize, _q130);
																    tree _q131 = gimple_assign_rhs2 (_a6);
																    _q131 = do_valueize (valueize, _q131);
																    if (tree_swap_operands_p (_q130, _q131))
																      std::swap (_q130, _q131);
																    if ((_q130 == _q70 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q70, 0) && types_match (_q130, _q70)))
																      {
																	if ((_q131 == _q90 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q90, 0) && types_match (_q131, _q90)))
																	  {
																	    if (integer_zerop (_q21))
																	      {
																		{
																		  tree _p1_pops[1];
																		  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																		  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
														        break;
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
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q31))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case BIT_XOR_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
											{
											  {
											    tree _q71_pops[1];
											    if (gimple_nop_convert (_q71, _q71_pops, valueize))
											      {
												tree _q90 = _q71_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case PLUS_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														tree _q101 = gimple_assign_rhs2 (_a5);
														_q101 = do_valueize (valueize, _q101);
														if (tree_swap_operands_p (_q100, _q101))
														  std::swap (_q100, _q101);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												    break;
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
									  break;
								        default:;
								        }
								      break;
								    }
							          default:;
							          }
							      {
								tree _q41_pops[1];
								if (gimple_nop_convert (_q41, _q41_pops, valueize))
								  {
								    tree _q60 = _q41_pops[0];
								    switch (TREE_CODE (_q60))
								      {
								      case SSA_NAME:
								        if (gimple *_d4 = get_def (valueize, _q60))
								          {
									    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									      switch (gimple_assign_rhs_code (_a4))
										{
										case PLUS_EXPR:
										  {
										    tree _q70 = gimple_assign_rhs1 (_a4);
										    _q70 = do_valueize (valueize, _q70);
										    tree _q71 = gimple_assign_rhs2 (_a4);
										    _q71 = do_valueize (valueize, _q71);
										    if (tree_swap_operands_p (_q70, _q71))
										      std::swap (_q70, _q71);
										    {
										      tree _q70_pops[1];
										      if (gimple_nop_convert (_q70, _q70_pops, valueize))
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
												      case SSA_NAME:
												        if (gimple *_d5 = get_def (valueize, _q31))
												          {
													    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													      switch (gimple_assign_rhs_code (_a5))
														{
														case BIT_XOR_EXPR:
														  {
														    tree _q110 = gimple_assign_rhs1 (_a5);
														    _q110 = do_valueize (valueize, _q110);
														    tree _q111 = gimple_assign_rhs2 (_a5);
														    _q111 = do_valueize (valueize, _q111);
														    if (tree_swap_operands_p (_q110, _q111))
														      std::swap (_q110, _q111);
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
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
								        break;
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
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q31))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case BIT_XOR_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
											{
											  {
											    tree _q71_pops[1];
											    if (gimple_nop_convert (_q71, _q71_pops, valueize))
											      {
												tree _q90 = _q71_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case PLUS_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														tree _q101 = gimple_assign_rhs2 (_a5);
														_q101 = do_valueize (valueize, _q101);
														if (tree_swap_operands_p (_q100, _q101))
														  std::swap (_q100, _q101);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
												    break;
											          default:;
											          }
											      }
											  }
										        }
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case PLUS_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    tree _q91 = gimple_assign_rhs2 (_a5);
													    _q91 = do_valueize (valueize, _q91);
													    if (tree_swap_operands_p (_q90, _q91))
													      std::swap (_q90, _q91);
													    {
													      tree _q90_pops[1];
													      if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
											        break;
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
								    }
							          default:;
							          }
								switch (TREE_CODE (_q41))
								  {
								  case INTEGER_CST:
								    {
								      switch (TREE_CODE (_q31))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q31))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case BIT_XOR_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case PLUS_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    tree _q91 = gimple_assign_rhs2 (_a5);
													    _q91 = do_valueize (valueize, _q91);
													    if (tree_swap_operands_p (_q90, _q91))
													      std::swap (_q90, _q91);
													    {
													      tree _q90_pops[1];
													      if (gimple_nop_convert (_q90, _q90_pops, valueize))
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
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 72, __FILE__, __LINE__, false);
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
											        break;
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
								    }
							          default:;
							          }
							        break;
							      }
							    case BIT_NOT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case BIT_XOR_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										switch (TREE_CODE (_q31))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _q31))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case BIT_XOR_EXPR:
											      {
												tree _q80 = gimple_assign_rhs1 (_a5);
												_q80 = do_valueize (valueize, _q80);
												tree _q81 = gimple_assign_rhs2 (_a5);
												_q81 = do_valueize (valueize, _q81);
												if (tree_swap_operands_p (_q80, _q81))
												  std::swap (_q80, _q81);
												if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
																        {
																	  tree _q140 = _q111_pops[0];
																	  if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													      break;
													    default:;
													    }
												        }
												    }
												  }
												if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
																        {
																	  tree _q140 = _q111_pops[0];
																	  if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																	    {
																	      if (integer_zerop (_q21))
																		{
																		  {
																		    tree _p1_pops[1];
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													      break;
													    default:;
													    }
												        }
												    }
												  }
												{
												  tree _q80_pops[1];
												  if (gimple_nop_convert (_q80, _q80_pops, valueize))
												    {
												      tree _q90 = _q80_pops[0];
												      switch (TREE_CODE (_q90))
												        {
													case SSA_NAME:
													  if (gimple *_d6 = get_def (valueize, _q90))
													    {
													      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													        switch (gimple_assign_rhs_code (_a6))
														  {
														  case PLUS_EXPR:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a6);
														      _q100 = do_valueize (valueize, _q100);
														      tree _q101 = gimple_assign_rhs2 (_a6);
														      _q101 = do_valueize (valueize, _q101);
														      if (tree_swap_operands_p (_q100, _q101))
														        std::swap (_q100, _q101);
														      {
															tree _q100_pops[1];
															if (gimple_nop_convert (_q100, _q100_pops, valueize))
															  {
															    tree _q110 = _q100_pops[0];
															    if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
															      {
																{
																  tree _q101_pops[1];
																  if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
																  if (gimple_nop_convert (_q101, _q101_pops, valueize))
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
																		    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 71, __FILE__, __LINE__, false);
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
													  break;
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
									      }
									    default:;
									    }
								      }
								    break;
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
					      }
					    default:;
					    }
				      }
				    break;
			          default:;
			          }
			      }
			  }
		        break;
		      }
		    case GE_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case BIT_AND_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						if (tree_swap_operands_p (_q30, _q31))
						  std::swap (_q30, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_NOT_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      switch (TREE_CODE (_q120))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q120))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  case BIT_XOR_EXPR:
																    {
																      tree _q130 = gimple_assign_rhs1 (_a6);
																      _q130 = do_valueize (valueize, _q130);
																      tree _q131 = gimple_assign_rhs2 (_a6);
																      _q131 = do_valueize (valueize, _q131);
																      if (tree_swap_operands_p (_q130, _q131))
																        std::swap (_q130, _q131);
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
															    }
															  break;
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
								        default:;
								        }
								    }
								}
							        break;
							      }
							    case BIT_NOT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case BIT_XOR_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										switch (TREE_CODE (_q31))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _q31))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case BIT_XOR_EXPR:
											      {
												tree _q80 = gimple_assign_rhs1 (_a5);
												_q80 = do_valueize (valueize, _q80);
												tree _q81 = gimple_assign_rhs2 (_a5);
												_q81 = do_valueize (valueize, _q81);
												if (tree_swap_operands_p (_q80, _q81))
												  std::swap (_q80, _q81);
												if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q50 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q50, 0) && types_match (_q210, _q50)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q81 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
													      break;
													    default:;
													    }
												        }
												    }
												  }
												if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
												  {
												    {
												      tree _q81_pops[1];
												      if (gimple_nop_convert (_q81, _q81_pops, valueize))
												        {
													  tree _q100 = _q81_pops[0];
													  switch (TREE_CODE (_q100))
													    {
													    case SSA_NAME:
													      if (gimple *_d6 = get_def (valueize, _q100))
													        {
														  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														    switch (gimple_assign_rhs_code (_a6))
														      {
														      case PLUS_EXPR:
														        {
															  tree _q110 = gimple_assign_rhs1 (_a6);
															  _q110 = do_valueize (valueize, _q110);
															  tree _q111 = gimple_assign_rhs2 (_a6);
															  _q111 = do_valueize (valueize, _q111);
															  if (tree_swap_operands_p (_q110, _q111))
															    std::swap (_q110, _q111);
															  {
															    tree _q110_pops[1];
															    if (gimple_nop_convert (_q110, _q110_pops, valueize))
															      {
																tree _q120 = _q110_pops[0];
																if ((_q120 == _q51 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q51, 0) && types_match (_q120, _q51)))
																  {
																    {
																      tree _q111_pops[1];
																      if (gimple_nop_convert (_q111, _q111_pops, valueize))
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
																			case SSA_NAME:
																			  if (gimple *_d7 = get_def (valueize, _p2))
																			    {
																			      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																			        switch (gimple_assign_rhs_code (_a7))
																				  {
																				  case BIT_XOR_EXPR:
																				    {
																				      tree _q180 = gimple_assign_rhs1 (_a7);
																				      _q180 = do_valueize (valueize, _q180);
																				      tree _q181 = gimple_assign_rhs2 (_a7);
																				      _q181 = do_valueize (valueize, _q181);
																				      if (tree_swap_operands_p (_q180, _q181))
																				        std::swap (_q180, _q181);
																				      switch (TREE_CODE (_q180))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d8 = get_def (valueize, _q180))
																					    {
																					      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					        switch (gimple_assign_rhs_code (_a8))
																						  {
																						  case NEGATE_EXPR:
																						    {
																						      tree _q190 = gimple_assign_rhs1 (_a8);
																						      _q190 = do_valueize (valueize, _q190);
																						      switch (TREE_CODE (_q190))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d9 = get_def (valueize, _q190))
																							    {
																							      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																							        switch (gimple_assign_rhs_code (_a9))
																								  {
																								  CASE_CONVERT:
																								    {
																								      tree _q200 = gimple_assign_rhs1 (_a9);
																								      _q200 = do_valueize (valueize, _q200);
																								      switch (TREE_CODE (_q200))
																								        {
																									case SSA_NAME:
																									  if (gimple *_d10 = get_def (valueize, _q200))
																									    {
																									      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																									        switch (gimple_assign_rhs_code (_a10))
																										  {
																										  case LT_EXPR:
																										    {
																										      tree _q210 = gimple_assign_rhs1 (_a10);
																										      _q210 = do_valueize (valueize, _q210);
																										      tree _q211 = gimple_assign_rhs2 (_a10);
																										      _q211 = do_valueize (valueize, _q211);
																										      if ((_q210 == _q51 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q51, 0) && types_match (_q210, _q51)))
																											{
																											  if (integer_zerop (_q211))
																											    {
																											      if (gimple_max_value (_q181, valueize))
																												{
																												  {
																												    tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q81 };
																												    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																												      {
																													{
																													  res_ops[0] = captures[0];
																													  res_ops[1] = captures[1];
																													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
																				        default:;
																				        }
																				    if (gimple_max_value (_q180, valueize))
																				      {
																					switch (TREE_CODE (_q181))
																					  {
																					  case SSA_NAME:
																					    if (gimple *_d8 = get_def (valueize, _q181))
																					      {
																						if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																						  switch (gimple_assign_rhs_code (_a8))
																						    {
																						    case NEGATE_EXPR:
																						      {
																							tree _q200 = gimple_assign_rhs1 (_a8);
																							_q200 = do_valueize (valueize, _q200);
																							switch (TREE_CODE (_q200))
																							  {
																							  case SSA_NAME:
																							    if (gimple *_d9 = get_def (valueize, _q200))
																							      {
																								if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																								  switch (gimple_assign_rhs_code (_a9))
																								    {
																								    CASE_CONVERT:
																								      {
																									tree _q210 = gimple_assign_rhs1 (_a9);
																									_q210 = do_valueize (valueize, _q210);
																									switch (TREE_CODE (_q210))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d10 = get_def (valueize, _q210))
																									      {
																										if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																										  switch (gimple_assign_rhs_code (_a10))
																										    {
																										    case LT_EXPR:
																										      {
																											tree _q220 = gimple_assign_rhs1 (_a10);
																											_q220 = do_valueize (valueize, _q220);
																											tree _q221 = gimple_assign_rhs2 (_a10);
																											_q221 = do_valueize (valueize, _q221);
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
																													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 73, __FILE__, __LINE__, false);
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
																									    break;
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
																						      }
																						    default:;
																						    }
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
													      break;
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
										    break;
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
							      }
							    default:;
							    }
						      }
						    break;
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
			      }
			  }
		        break;
		      }
		    case BIT_AND_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				if (tree_swap_operands_p (_q20, _q21))
				  std::swap (_q20, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case LT_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case PLUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      if (tree_swap_operands_p (_q70, _q71))
										        std::swap (_q70, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      if (integer_zerop (_q31))
													{
													  switch (TREE_CODE (_q21))
													    {
													    case SSA_NAME:
													      if (gimple *_d5 = get_def (valueize, _q21))
													        {
														  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
														    switch (gimple_assign_rhs_code (_a5))
														      {
														      case GE_EXPR:
														        {
															  tree _q130 = gimple_assign_rhs1 (_a5);
															  _q130 = do_valueize (valueize, _q130);
															  tree _q131 = gimple_assign_rhs2 (_a5);
															  _q131 = do_valueize (valueize, _q131);
															  switch (TREE_CODE (_q130))
															    {
															    case SSA_NAME:
															      if (gimple *_d6 = get_def (valueize, _q130))
															        {
																  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																    switch (gimple_assign_rhs_code (_a6))
																      {
																      case BIT_XOR_EXPR:
																        {
																	  tree _q140 = gimple_assign_rhs1 (_a6);
																	  _q140 = do_valueize (valueize, _q140);
																	  tree _q141 = gimple_assign_rhs2 (_a6);
																	  _q141 = do_valueize (valueize, _q141);
																	  if (tree_swap_operands_p (_q140, _q141))
																	    std::swap (_q140, _q141);
																	  if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	    {
																	      if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		{
																		  if (integer_zerop (_q131))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
															      break;
															    default:;
															    }
														          break;
														        }
														      case BIT_NOT_EXPR:
														        {
															  tree _q130 = gimple_assign_rhs1 (_a5);
															  _q130 = do_valueize (valueize, _q130);
															  switch (TREE_CODE (_q130))
															    {
															    case SSA_NAME:
															      if (gimple *_d6 = get_def (valueize, _q130))
															        {
																  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																    switch (gimple_assign_rhs_code (_a6))
																      {
																      case LT_EXPR:
																        {
																	  tree _q140 = gimple_assign_rhs1 (_a6);
																	  _q140 = do_valueize (valueize, _q140);
																	  tree _q141 = gimple_assign_rhs2 (_a6);
																	  _q141 = do_valueize (valueize, _q141);
																	  switch (TREE_CODE (_q140))
																	    {
																	    case SSA_NAME:
																	      if (gimple *_d7 = get_def (valueize, _q140))
																	        {
																		  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																		    switch (gimple_assign_rhs_code (_a7))
																		      {
																		      case BIT_XOR_EXPR:
																		        {
																			  tree _q150 = gimple_assign_rhs1 (_a7);
																			  _q150 = do_valueize (valueize, _q150);
																			  tree _q151 = gimple_assign_rhs2 (_a7);
																			  _q151 = do_valueize (valueize, _q151);
																			  if (tree_swap_operands_p (_q150, _q151))
																			    std::swap (_q150, _q151);
																			  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																			    {
																			      if ((_q151 == _q100 && ! TREE_SIDE_EFFECTS (_q151)) || (operand_equal_p (_q151, _q100, 0) && types_match (_q151, _q100)))
																				{
																				  if (integer_zerop (_q141))
																				    {
																				      {
																					tree _p1_pops[1];
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																	      break;
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
														        }
														      default:;
														      }
													        }
													      break;
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
									  break;
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
					      }
					    case GE_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						tree _q31 = gimple_assign_rhs2 (_a2);
						_q31 = do_valueize (valueize, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								if (integer_zerop (_q31))
								  {
								    switch (TREE_CODE (_q21))
								      {
								      case SSA_NAME:
								        if (gimple *_d4 = get_def (valueize, _q21))
								          {
									    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									      switch (gimple_assign_rhs_code (_a4))
										{
										case LT_EXPR:
										  {
										    tree _q80 = gimple_assign_rhs1 (_a4);
										    _q80 = do_valueize (valueize, _q80);
										    tree _q81 = gimple_assign_rhs2 (_a4);
										    _q81 = do_valueize (valueize, _q81);
										    switch (TREE_CODE (_q80))
										      {
										      case SSA_NAME:
										        if (gimple *_d5 = get_def (valueize, _q80))
										          {
											    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											      switch (gimple_assign_rhs_code (_a5))
												{
												case BIT_XOR_EXPR:
												  {
												    tree _q90 = gimple_assign_rhs1 (_a5);
												    _q90 = do_valueize (valueize, _q90);
												    tree _q91 = gimple_assign_rhs2 (_a5);
												    _q91 = do_valueize (valueize, _q91);
												    if (tree_swap_operands_p (_q90, _q91))
												      std::swap (_q90, _q91);
												    if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case PLUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      if (tree_swap_operands_p (_q120, _q121))
															        std::swap (_q120, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														  break;
													        default:;
													        }
													    }
													}
												      }
												    if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case PLUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      if (tree_swap_operands_p (_q120, _q121))
															        std::swap (_q120, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 74, __FILE__, __LINE__, false);
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
														  break;
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
										        break;
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
					      }
					    case BIT_NOT_EXPR:
					      {
						tree _q30 = gimple_assign_rhs1 (_a2);
						_q30 = do_valueize (valueize, _q30);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case LT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case BIT_XOR_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										if (integer_zerop (_q41))
										  {
										    switch (TREE_CODE (_q21))
										      {
										      case SSA_NAME:
										        if (gimple *_d5 = get_def (valueize, _q21))
										          {
											    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											      switch (gimple_assign_rhs_code (_a5))
												{
												case LT_EXPR:
												  {
												    tree _q90 = gimple_assign_rhs1 (_a5);
												    _q90 = do_valueize (valueize, _q90);
												    tree _q91 = gimple_assign_rhs2 (_a5);
												    _q91 = do_valueize (valueize, _q91);
												    switch (TREE_CODE (_q90))
												      {
												      case SSA_NAME:
												        if (gimple *_d6 = get_def (valueize, _q90))
												          {
													    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													      switch (gimple_assign_rhs_code (_a6))
														{
														case BIT_XOR_EXPR:
														  {
														    tree _q100 = gimple_assign_rhs1 (_a6);
														    _q100 = do_valueize (valueize, _q100);
														    tree _q101 = gimple_assign_rhs2 (_a6);
														    _q101 = do_valueize (valueize, _q101);
														    if (tree_swap_operands_p (_q100, _q101))
														      std::swap (_q100, _q101);
														    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
														      {
															{
															  tree _q101_pops[1];
															  if (gimple_nop_convert (_q101, _q101_pops, valueize))
															    {
															      tree _q120 = _q101_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  case PLUS_EXPR:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      tree _q131 = gimple_assign_rhs2 (_a7);
																	      _q131 = do_valueize (valueize, _q131);
																	      if (tree_swap_operands_p (_q130, _q131))
																	        std::swap (_q130, _q131);
																	      {
																		tree _q130_pops[1];
																		if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		  {
																		    tree _q140 = _q130_pops[0];
																		    if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																		      {
																			{
																			  tree _q131_pops[1];
																			  if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			    {
																			      tree _q160 = _q131_pops[0];
																			      if ((_q160 == _q51 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q51, 0) && types_match (_q160, _q51)))
																				{
																				  if (integer_zerop (_q91))
																				    {
																				      {
																					tree _p1_pops[1];
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																  break;
															        default:;
															        }
															    }
															}
														      }
														    if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
														      {
															{
															  tree _q101_pops[1];
															  if (gimple_nop_convert (_q101, _q101_pops, valueize))
															    {
															      tree _q120 = _q101_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  case PLUS_EXPR:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      tree _q131 = gimple_assign_rhs2 (_a7);
																	      _q131 = do_valueize (valueize, _q131);
																	      if (tree_swap_operands_p (_q130, _q131))
																	        std::swap (_q130, _q131);
																	      {
																		tree _q130_pops[1];
																		if (gimple_nop_convert (_q130, _q130_pops, valueize))
																		  {
																		    tree _q140 = _q130_pops[0];
																		    if ((_q140 == _q51 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q51, 0) && types_match (_q140, _q51)))
																		      {
																			{
																			  tree _q131_pops[1];
																			  if (gimple_nop_convert (_q131, _q131_pops, valueize))
																			    {
																			      tree _q160 = _q131_pops[0];
																			      if ((_q160 == _q50 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q50, 0) && types_match (_q160, _q50)))
																				{
																				  if (integer_zerop (_q91))
																				    {
																				      {
																					tree _p1_pops[1];
																					if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
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
																							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 75, __FILE__, __LINE__, false);
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
																  break;
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
												        break;
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
							      }
							    default:;
							    }
						      }
						    break;
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
			      }
			  }
		        break;
		      }
		    case NE_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				if (tree_swap_operands_p (_q20, _q21))
				  std::swap (_q20, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_ADD_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									      {
										tree _q80 = _p1_pops[0];
										if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
										  {
										    switch (TREE_CODE (_p2))
										      {
										      case SSA_NAME:
										        if (gimple *_d4 = get_def (valueize, _p2))
										          {
											    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
											      switch (gimple_assign_rhs_code (_a4))
												{
												case REALPART_EXPR:
												  {
												    tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q100) == SSA_NAME
												         || is_gimple_min_invariant (_q100)))
												      {
													_q100 = do_valueize (valueize, _q100);
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
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
										        break;
										      default:;
										      }
										  }
										if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
										  {
										    switch (TREE_CODE (_p2))
										      {
										      case SSA_NAME:
										        if (gimple *_d4 = get_def (valueize, _p2))
										          {
											    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
											      switch (gimple_assign_rhs_code (_a4))
												{
												case REALPART_EXPR:
												  {
												    tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q100) == SSA_NAME
												         || is_gimple_min_invariant (_q100)))
												      {
													_q100 = do_valueize (valueize, _q100);
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
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 76, __FILE__, __LINE__, false);
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
										        break;
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
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_ROUND_MOD_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_338 (res_op, seq, valueize, type, captures, ROUND_MOD_EXPR))
	  return true;
      }
    }
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_339 (res_op, seq, valueize, type, captures, ROUND_MOD_EXPR))
	  return true;
      }
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_340 (res_op, seq, valueize, type, captures, ROUND_MOD_EXPR))
	  return true;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_341 (res_op, seq, valueize, type, captures, ROUND_MOD_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ROUND_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_342 (res_op, seq, valueize, type, captures, ROUND_MOD_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_343 (res_op, seq, valueize, type, captures, ROUND_MOD_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
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
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2363;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2363;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2363;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2363:;
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
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2364;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2364;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2364;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2364:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
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
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2365;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2365;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2365;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2365:;
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
  return false;
}

bool
gimple_simplify_RSHIFT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree _q31_pops[1];
		    if (gimple_power_of_two_cand (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
			  if (gimple_simplify_394 (res_op, seq, valueize, type, captures, RSHIFT_EXPR, TRUNC_MOD_EXPR))
			    return true;
			}
		      }
		  }
	          break;
	        }
	      case FLOOR_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree _q31_pops[1];
		    if (gimple_power_of_two_cand (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
			  if (gimple_simplify_394 (res_op, seq, valueize, type, captures, RSHIFT_EXPR, FLOOR_MOD_EXPR))
			    return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				{
 wide_int c = wi::to_wide (captures[2]);
 wide_int n = wi::to_wide (captures[3]);
 bool shift = RSHIFT_EXPR == RSHIFT_EXPR;
 int_range_max vr0, vr1, vr3;
				    if (INTEGRAL_TYPE_P (type)
 && get_range_query (cfun)->range_of_expr (vr0, captures[1])
)
				      {
					if ((shift ? wi::ctz (
c
) >= n.to_shwi ()
 : wi::multiple_of_p (
c
, n, TYPE_SIGN (type)))
 && get_range_query (cfun)->range_of_expr (vr1, captures[2])
 && range_op_handler (PLUS_EXPR).overflow_free_p (vr0, vr1)
 && get_range_query (cfun)->range_of_expr (vr3, captures[0])
 && !vr3.undefined_p ()
 && (TYPE_UNSIGNED (type)
 || (vr0.nonnegative_p () && vr3.nonnegative_p ())
 || (vr0.nonpositive_p () && vr3.nonpositive_p ()))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2378;
					    {
					      res_op->set_op (PLUS_EXPR, type, 2);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2378;
						res_op->ops[0] = _r1;
					      }
					      res_op->ops[1] =  wide_int_to_tree (type,
(shift ? wi::rshift (
c
, n, TYPE_SIGN (type))
 : wi::div_trunc (
c
, n, TYPE_SIGN (type)))
);
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1111, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2378:;
					  }
					else
					  {
					    if (!vr0.undefined_p () && TYPE_UNSIGNED (type) && c.sign_mask () < 0
 &&
(shift ? wi::ctz (
-c
) >= n.to_shwi ()
 : wi::multiple_of_p (
-c
, n, TYPE_SIGN (type)))
 && wi::geu_p (vr0.lower_bound (), -c)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2379;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2379;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] =  wide_int_to_tree (type, -
(shift ? wi::rshift (
-c
, n, TYPE_SIGN (type))
 : wi::div_trunc (
-c
, n, TYPE_SIGN (type)))
);
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1112, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2379:;
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
    default:;
    }
  if (uniform_integer_cst_p (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_395 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
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
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2380;
				      {
					res_op->set_op (NEGATE_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  {
					    tree _o2[2], _r2;
					    _o2[0] = captures[1];
					    _o2[1] =  zeros;
					    gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, boolean_type_node, _o2[0], _o2[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2380;
					    _o1[0] = _r2;
					  }
					  if (type != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2380;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1133, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2380:;
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
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2381;
					  {
					    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[1];
					      _o1[1] =  zeros;
					      gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, bt, _o1[0], _o1[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2381;
					      res_op->ops[0] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1134, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2381:;
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
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2382;
				      {
					res_op->set_op (NEGATE_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  {
					    tree _o2[2], _r2;
					    _o2[0] = captures[1];
					    _o2[1] =  zeros;
					    gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, boolean_type_node, _o2[0], _o2[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2382;
					    _o1[0] = _r2;
					  }
					  if (type != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2382;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1133, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2382:;
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
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2383;
					  {
					    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[1];
					      _o1[1] =  zeros;
					      gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, bt, _o1[0], _o1[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2383;
					      res_op->ops[0] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1134, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2383:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q21 };
			      if (gimple_simplify_406 (res_op, seq, valueize, type, captures))
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
        }
      break;
    default:;
    }
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case LSHIFT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p1, _q31 };
				  if (gimple_simplify_406 (res_op, seq, valueize, type, captures))
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
	    }
	  break;
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2384;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1135, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2384:;
	}
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2385;
	{
	  tree tem;
	  tem =  build_zero_cst (type);
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1136, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2385:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_398 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_399 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    if (gimple_simplify_401 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (gimple_simplify_402 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
	      return true;
	  }
	}
      break;
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_400 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case RSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_403 (res_op, seq, valueize, type, captures, RSHIFT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
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
						if (gimple_simplify_404 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, RSHIFT_EXPR))
						  return true;
					      }
					      break;
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
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
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
						if (gimple_simplify_404 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, RSHIFT_EXPR))
						  return true;
					      }
					      break;
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
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
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
						if (gimple_simplify_404 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, RSHIFT_EXPR))
						  return true;
					      }
					      break;
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
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_p1))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
					    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128))
					      return true;
					  }
				          break;
				        }
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_p1))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
					    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16))
					      return true;
					  }
				          break;
				        }
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_p1))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
					    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32))
					      return true;
					  }
				          break;
				        }
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_p1))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
					    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64))
					      return true;
					  }
				          break;
				        }
				      default:;
				      }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_405 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, RSHIFT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_405 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, RSHIFT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_405 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, RSHIFT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
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
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2386;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2386;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2386;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2386:;
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
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2387;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2387;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2387;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2387:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2388;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      _o1[1] =  build_zero_cst (TREE_TYPE (captures[0]));
	      gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail2388;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1137, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2388:;
	}
    }
  }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
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
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2389;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2389;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2389;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2389:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case RSHIFT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  switch (TREE_CODE (_q51))
								    {
								    case INTEGER_CST:
								      {
									if ((_q41 == _q50 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q50, 0) && types_match (_q41, _q50)))
									  {
									    switch (TREE_CODE (_q41))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _q41))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case PLUS_EXPR:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    tree _q91 = gimple_assign_rhs2 (_a5);
											    _q91 = do_valueize (valueize, _q91);
											    if (tree_swap_operands_p (_q90, _q91))
											      std::swap (_q90, _q91);
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case BIT_AND_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    if (tree_swap_operands_p (_q100, _q101))
													      std::swap (_q100, _q101);
													    switch (TREE_CODE (_q101))
													      {
													      case INTEGER_CST:
													        {
														  switch (TREE_CODE (_q91))
														    {
														    case SSA_NAME:
														      if (gimple *_d7 = get_def (valueize, _q91))
														        {
															  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															    switch (gimple_assign_rhs_code (_a7))
															      {
															      case BIT_AND_EXPR:
															        {
																  tree _q130 = gimple_assign_rhs1 (_a7);
																  _q130 = do_valueize (valueize, _q130);
																  tree _q131 = gimple_assign_rhs2 (_a7);
																  _q131 = do_valueize (valueize, _q131);
																  if (tree_swap_operands_p (_q130, _q131))
																    std::swap (_q130, _q131);
																  switch (TREE_CODE (_q130))
																    {
																    case SSA_NAME:
																      if (gimple *_d8 = get_def (valueize, _q130))
																        {
																	  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	    switch (gimple_assign_rhs_code (_a8))
																	      {
																	      case RSHIFT_EXPR:
																	        {
																		  tree _q140 = gimple_assign_rhs1 (_a8);
																		  _q140 = do_valueize (valueize, _q140);
																		  tree _q141 = gimple_assign_rhs2 (_a8);
																		  _q141 = do_valueize (valueize, _q141);
																		  if ((_q140 == _q100 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q100, 0) && types_match (_q140, _q100)))
																		    {
																		      switch (TREE_CODE (_q140))
																		        {
																			case SSA_NAME:
																			  if (gimple *_d9 = get_def (valueize, _q140))
																			    {
																			      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																			        switch (gimple_assign_rhs_code (_a9))
																				  {
																				  case MINUS_EXPR:
																				    {
																				      tree _q160 = gimple_assign_rhs1 (_a9);
																				      _q160 = do_valueize (valueize, _q160);
																				      tree _q161 = gimple_assign_rhs2 (_a9);
																				      _q161 = do_valueize (valueize, _q161);
																				      switch (TREE_CODE (_q161))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d10 = get_def (valueize, _q161))
																					    {
																					      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																					        switch (gimple_assign_rhs_code (_a10))
																						  {
																						  case BIT_AND_EXPR:
																						    {
																						      tree _q180 = gimple_assign_rhs1 (_a10);
																						      _q180 = do_valueize (valueize, _q180);
																						      tree _q181 = gimple_assign_rhs2 (_a10);
																						      _q181 = do_valueize (valueize, _q181);
																						      if (tree_swap_operands_p (_q180, _q181))
																						        std::swap (_q180, _q181);
																						      switch (TREE_CODE (_q180))
																						        {
																							case SSA_NAME:
																							  if (gimple *_d11 = get_def (valueize, _q180))
																							    {
																							      if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																							        switch (gimple_assign_rhs_code (_a11))
																								  {
																								  case RSHIFT_EXPR:
																								    {
																								      tree _q190 = gimple_assign_rhs1 (_a11);
																								      _q190 = do_valueize (valueize, _q190);
																								      tree _q191 = gimple_assign_rhs2 (_a11);
																								      _q191 = do_valueize (valueize, _q191);
																								      if ((_q190 == _q160 && ! TREE_SIDE_EFFECTS (_q190)) || (operand_equal_p (_q190, _q160, 0) && types_match (_q190, _q160)))
																									{
																									  switch (TREE_CODE (_q191))
																									    {
																									    case INTEGER_CST:
																									      {
																										switch (TREE_CODE (_q181))
																										  {
																										  case INTEGER_CST:
																										    {
																										      switch (TREE_CODE (_q141))
																										        {
																											case INTEGER_CST:
																											  {
																											    switch (TREE_CODE (_q131))
																											      {
																											      case INTEGER_CST:
																											        {
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
																														      tree captures[12] ATTRIBUTE_UNUSED = { _q50, _q51, _q100, _q101, _q160, _q191, _q181, _q141, _q131, _q31, _q21, _p1 };
																														      if (gimple_simplify_408 (res_op, seq, valueize, type, captures))
																														        return true;
																														    }
																														    break;
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
																									    default:;
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
																						    }
																						  default:;
																						  }
																					    }
																					  break;
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
															        }
															      default:;
															      }
														        }
														      break;
														    default:;
														    }
													          break;
													        }
													      default:;
													      }
													    switch (TREE_CODE (_q100))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _q100))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															case RSHIFT_EXPR:
															  {
															    tree _q110 = gimple_assign_rhs1 (_a7);
															    _q110 = do_valueize (valueize, _q110);
															    tree _q111 = gimple_assign_rhs2 (_a7);
															    _q111 = do_valueize (valueize, _q111);
															    switch (TREE_CODE (_q110))
															      {
															      case SSA_NAME:
															        if (gimple *_d8 = get_def (valueize, _q110))
															          {
																    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																      switch (gimple_assign_rhs_code (_a8))
																	{
																	case MINUS_EXPR:
																	  {
																	    tree _q120 = gimple_assign_rhs1 (_a8);
																	    _q120 = do_valueize (valueize, _q120);
																	    tree _q121 = gimple_assign_rhs2 (_a8);
																	    _q121 = do_valueize (valueize, _q121);
																	    switch (TREE_CODE (_q121))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d9 = get_def (valueize, _q121))
																	          {
																		    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																		      switch (gimple_assign_rhs_code (_a9))
																			{
																			case BIT_AND_EXPR:
																			  {
																			    tree _q140 = gimple_assign_rhs1 (_a9);
																			    _q140 = do_valueize (valueize, _q140);
																			    tree _q141 = gimple_assign_rhs2 (_a9);
																			    _q141 = do_valueize (valueize, _q141);
																			    if (tree_swap_operands_p (_q140, _q141))
																			      std::swap (_q140, _q141);
																			    switch (TREE_CODE (_q140))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d10 = get_def (valueize, _q140))
																			          {
																				    if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																				      switch (gimple_assign_rhs_code (_a10))
																					{
																					case RSHIFT_EXPR:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a10);
																					    _q150 = do_valueize (valueize, _q150);
																					    tree _q151 = gimple_assign_rhs2 (_a10);
																					    _q151 = do_valueize (valueize, _q151);
																					    if ((_q150 == _q120 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q120, 0) && types_match (_q150, _q120)))
																					      {
																						switch (TREE_CODE (_q151))
																						  {
																						  case INTEGER_CST:
																						    {
																						      switch (TREE_CODE (_q141))
																						        {
																							case INTEGER_CST:
																							  {
																							    switch (TREE_CODE (_q111))
																							      {
																							      case INTEGER_CST:
																							        {
																								  switch (TREE_CODE (_q101))
																								    {
																								    case INTEGER_CST:
																								      {
																									switch (TREE_CODE (_q91))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q91))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case BIT_AND_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if (tree_swap_operands_p (_q210, _q211))
																											  std::swap (_q210, _q211);
																											if ((_q210 == _q110 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q110, 0) && types_match (_q210, _q110)))
																											  {
																											    switch (TREE_CODE (_q211))
																											      {
																											      case INTEGER_CST:
																											        {
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
																														      tree captures[12] ATTRIBUTE_UNUSED = { _q50, _q51, _q110, _q211, _q120, _q151, _q141, _q111, _q101, _q31, _q21, _p1 };
																														      if (gimple_simplify_408 (res_op, seq, valueize, type, captures))
																														        return true;
																														    }
																														    break;
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
																										      }
																										    default:;
																										    }
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
																			        break;
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
																	  }
																	default:;
																	}
															          }
															        break;
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
													  }
													default:;
													}
											          }
											        break;
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
									  }
								        break;
								      }
								    default:;
								    }
							          break;
							        }
							      case PLUS_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  if (tree_swap_operands_p (_q50, _q51))
								    std::swap (_q50, _q51);
								  switch (TREE_CODE (_q50))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q50))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_AND_EXPR:
									        {
										  tree _q60 = gimple_assign_rhs1 (_a5);
										  _q60 = do_valueize (valueize, _q60);
										  tree _q61 = gimple_assign_rhs2 (_a5);
										  _q61 = do_valueize (valueize, _q61);
										  if (tree_swap_operands_p (_q60, _q61))
										    std::swap (_q60, _q61);
										  switch (TREE_CODE (_q61))
										    {
										    case INTEGER_CST:
										      {
											switch (TREE_CODE (_q51))
											  {
											  case SSA_NAME:
											    if (gimple *_d6 = get_def (valueize, _q51))
											      {
												if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												  switch (gimple_assign_rhs_code (_a6))
												    {
												    case BIT_AND_EXPR:
												      {
													tree _q90 = gimple_assign_rhs1 (_a6);
													_q90 = do_valueize (valueize, _q90);
													tree _q91 = gimple_assign_rhs2 (_a6);
													_q91 = do_valueize (valueize, _q91);
													if (tree_swap_operands_p (_q90, _q91))
													  std::swap (_q90, _q91);
													switch (TREE_CODE (_q90))
													  {
													  case SSA_NAME:
													    if (gimple *_d7 = get_def (valueize, _q90))
													      {
														if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														  switch (gimple_assign_rhs_code (_a7))
														    {
														    case RSHIFT_EXPR:
														      {
															tree _q100 = gimple_assign_rhs1 (_a7);
															_q100 = do_valueize (valueize, _q100);
															tree _q101 = gimple_assign_rhs2 (_a7);
															_q101 = do_valueize (valueize, _q101);
															if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
															  {
															    switch (TREE_CODE (_q100))
															      {
															      case SSA_NAME:
															        if (gimple *_d8 = get_def (valueize, _q100))
															          {
																    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																      switch (gimple_assign_rhs_code (_a8))
																	{
																	case MINUS_EXPR:
																	  {
																	    tree _q120 = gimple_assign_rhs1 (_a8);
																	    _q120 = do_valueize (valueize, _q120);
																	    tree _q121 = gimple_assign_rhs2 (_a8);
																	    _q121 = do_valueize (valueize, _q121);
																	    switch (TREE_CODE (_q121))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d9 = get_def (valueize, _q121))
																	          {
																		    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																		      switch (gimple_assign_rhs_code (_a9))
																			{
																			case BIT_AND_EXPR:
																			  {
																			    tree _q140 = gimple_assign_rhs1 (_a9);
																			    _q140 = do_valueize (valueize, _q140);
																			    tree _q141 = gimple_assign_rhs2 (_a9);
																			    _q141 = do_valueize (valueize, _q141);
																			    if (tree_swap_operands_p (_q140, _q141))
																			      std::swap (_q140, _q141);
																			    switch (TREE_CODE (_q140))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d10 = get_def (valueize, _q140))
																			          {
																				    if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																				      switch (gimple_assign_rhs_code (_a10))
																					{
																					case RSHIFT_EXPR:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a10);
																					    _q150 = do_valueize (valueize, _q150);
																					    tree _q151 = gimple_assign_rhs2 (_a10);
																					    _q151 = do_valueize (valueize, _q151);
																					    if ((_q150 == _q120 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q120, 0) && types_match (_q150, _q120)))
																					      {
																						switch (TREE_CODE (_q151))
																						  {
																						  case INTEGER_CST:
																						    {
																						      switch (TREE_CODE (_q141))
																						        {
																							case INTEGER_CST:
																							  {
																							    switch (TREE_CODE (_q101))
																							      {
																							      case INTEGER_CST:
																							        {
																								  switch (TREE_CODE (_q91))
																								    {
																								    case INTEGER_CST:
																								      {
																									switch (TREE_CODE (_q41))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q41))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case RSHIFT_EXPR:
																										      {
																											tree _q210 = gimple_assign_rhs1 (_a11);
																											_q210 = do_valueize (valueize, _q210);
																											tree _q211 = gimple_assign_rhs2 (_a11);
																											_q211 = do_valueize (valueize, _q211);
																											if ((_q210 == _q40 && ! TREE_SIDE_EFFECTS (_q210)) || (operand_equal_p (_q210, _q40, 0) && types_match (_q210, _q40)))
																											  {
																											    switch (TREE_CODE (_q211))
																											      {
																											      case INTEGER_CST:
																											        {
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
																														      tree captures[12] ATTRIBUTE_UNUSED = { _q40, _q211, _q60, _q61, _q120, _q151, _q141, _q101, _q91, _q31, _q21, _p1 };
																														      if (gimple_simplify_408 (res_op, seq, valueize, type, captures))
																														        return true;
																														    }
																														    break;
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
																										      }
																										    default:;
																										    }
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
																			        break;
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
																	  }
																	default:;
																	}
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
										      }
										    default:;
										    }
										  switch (TREE_CODE (_q60))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q60))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      case RSHIFT_EXPR:
											        {
												  tree _q70 = gimple_assign_rhs1 (_a6);
												  _q70 = do_valueize (valueize, _q70);
												  tree _q71 = gimple_assign_rhs2 (_a6);
												  _q71 = do_valueize (valueize, _q71);
												  switch (TREE_CODE (_q70))
												    {
												    case SSA_NAME:
												      if (gimple *_d7 = get_def (valueize, _q70))
												        {
													  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													    switch (gimple_assign_rhs_code (_a7))
													      {
													      case MINUS_EXPR:
													        {
														  tree _q80 = gimple_assign_rhs1 (_a7);
														  _q80 = do_valueize (valueize, _q80);
														  tree _q81 = gimple_assign_rhs2 (_a7);
														  _q81 = do_valueize (valueize, _q81);
														  switch (TREE_CODE (_q81))
														    {
														    case SSA_NAME:
														      if (gimple *_d8 = get_def (valueize, _q81))
														        {
															  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
															    switch (gimple_assign_rhs_code (_a8))
															      {
															      case BIT_AND_EXPR:
															        {
																  tree _q100 = gimple_assign_rhs1 (_a8);
																  _q100 = do_valueize (valueize, _q100);
																  tree _q101 = gimple_assign_rhs2 (_a8);
																  _q101 = do_valueize (valueize, _q101);
																  if (tree_swap_operands_p (_q100, _q101))
																    std::swap (_q100, _q101);
																  switch (TREE_CODE (_q100))
																    {
																    case SSA_NAME:
																      if (gimple *_d9 = get_def (valueize, _q100))
																        {
																	  if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																	    switch (gimple_assign_rhs_code (_a9))
																	      {
																	      case RSHIFT_EXPR:
																	        {
																		  tree _q110 = gimple_assign_rhs1 (_a9);
																		  _q110 = do_valueize (valueize, _q110);
																		  tree _q111 = gimple_assign_rhs2 (_a9);
																		  _q111 = do_valueize (valueize, _q111);
																		  if ((_q110 == _q80 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q80, 0) && types_match (_q110, _q80)))
																		    {
																		      switch (TREE_CODE (_q111))
																		        {
																			case INTEGER_CST:
																			  {
																			    switch (TREE_CODE (_q101))
																			      {
																			      case INTEGER_CST:
																			        {
																				  switch (TREE_CODE (_q71))
																				    {
																				    case INTEGER_CST:
																				      {
																					switch (TREE_CODE (_q61))
																					  {
																					  case INTEGER_CST:
																					    {
																					      switch (TREE_CODE (_q51))
																					        {
																						case SSA_NAME:
																						  if (gimple *_d10 = get_def (valueize, _q51))
																						    {
																						      if (gassign *_a10 = dyn_cast <gassign *> (_d10))
																						        switch (gimple_assign_rhs_code (_a10))
																							  {
																							  case BIT_AND_EXPR:
																							    {
																							      tree _q170 = gimple_assign_rhs1 (_a10);
																							      _q170 = do_valueize (valueize, _q170);
																							      tree _q171 = gimple_assign_rhs2 (_a10);
																							      _q171 = do_valueize (valueize, _q171);
																							      if (tree_swap_operands_p (_q170, _q171))
																							        std::swap (_q170, _q171);
																							      if ((_q170 == _q70 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q70, 0) && types_match (_q170, _q70)))
																								{
																								  switch (TREE_CODE (_q171))
																								    {
																								    case INTEGER_CST:
																								      {
																									switch (TREE_CODE (_q41))
																									  {
																									  case SSA_NAME:
																									    if (gimple *_d11 = get_def (valueize, _q41))
																									      {
																										if (gassign *_a11 = dyn_cast <gassign *> (_d11))
																										  switch (gimple_assign_rhs_code (_a11))
																										    {
																										    case RSHIFT_EXPR:
																										      {
																											tree _q200 = gimple_assign_rhs1 (_a11);
																											_q200 = do_valueize (valueize, _q200);
																											tree _q201 = gimple_assign_rhs2 (_a11);
																											_q201 = do_valueize (valueize, _q201);
																											if ((_q200 == _q40 && ! TREE_SIDE_EFFECTS (_q200)) || (operand_equal_p (_q200, _q40, 0) && types_match (_q200, _q40)))
																											  {
																											    switch (TREE_CODE (_q201))
																											      {
																											      case INTEGER_CST:
																											        {
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
																														      tree captures[12] ATTRIBUTE_UNUSED = { _q40, _q201, _q70, _q171, _q80, _q111, _q101, _q71, _q61, _q31, _q21, _p1 };
																														      if (gimple_simplify_408 (res_op, seq, valueize, type, captures))
																														        return true;
																														    }
																														    break;
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
																										      }
																										    default:;
																										    }
																									      }
																									    break;
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
																      break;
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
													        }
													      default:;
													      }
												        }
												      break;
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
									        }
									      default:;
									      }
								        }
								      break;
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
					        }
					      default:;
					      }
				        }
				      break;
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
	        }
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_PERM_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
					{
					  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
						if (VECTOR_INTEGER_TYPE_P (type)
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2390;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2390;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2390:;
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
		        default:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2554;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF32, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2554;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2554:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF64X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2558;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF64X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2558;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2558:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_UNORDERED_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2563;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2563;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2563;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2563:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2564;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2564;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2564;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2564:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2565;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2565;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2565;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2565:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case FLOAT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_273 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, UNORDERED_EXPR))
				      return true;
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
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_276 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, UNORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_277 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, UNORDERED_EXPR))
		        return true;
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_631 (res_op, seq, valueize, type, captures, UNORDERED_EXPR))
	    return true;
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
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2566;
	{
	  tree tem;
	  tem =  constant_boolean_node (true, type);
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1179, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2566:;
      }
    else
      {
	if (!tree_expr_maybe_nan_p (captures[0]) && !tree_expr_maybe_nan_p (captures[1])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2567;
	    {
	      tree tem;
	      tem =  constant_boolean_node (false, type);
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1180, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2567:;
	  }
      }
  }
  return false;
}

bool
gimple_simplify_LTGT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2588;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), LTGT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2588;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), LTGT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2588;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2588:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2589;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LTGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2589;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LTGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2589;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2589:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2590;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), LTGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2590;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LTGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2590;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2590:;
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!flag_trapping_math || !tree_expr_maybe_nan_p (captures[0])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2591;
	    {
	      tree tem;
	      tem =  constant_boolean_node (false, type);
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1183, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2591:;
	  }
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case FLOAT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_273 (res_op, seq, valueize, type, captures, LTGT_EXPR, NE_EXPR))
				      return true;
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
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_276 (res_op, seq, valueize, type, captures, LTGT_EXPR, LTGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_277 (res_op, seq, valueize, type, captures, LTGT_EXPR, LTGT_EXPR))
		        return true;
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_631 (res_op, seq, valueize, type, captures, LTGT_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAF))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAF))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAF))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAF))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAF))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FMS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_661 (res_op, seq, valueize, type, captures))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_662 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_661 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (canonicalize_math_after_vectorization_p ()
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2817;
			{
			  res_op->set_op (CFN_FMA, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1244, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2817:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_662 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_VEC_PERM_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  switch (TREE_CODE (_p2))
				    {
				    case VECTOR_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51, _p2 };
					  if (gimple_simplify_690 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR))
					    return true;
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
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_p2))
				    {
				    case VECTOR_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51, _p2 };
					  if (gimple_simplify_690 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR))
					    return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  {
 tree op0 = captures[0], op1 = captures[1], op2 = captures[2];
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (op0));
 vec_perm_builder builder;
	      if (tree_to_vec_perm_builder (&builder, op2)
)
		{
		  {
 poly_uint64 nelts = TYPE_VECTOR_SUBPARTS (type);
 bool single_arg = (op0 == op1);
 vec_perm_indices sel (builder, single_arg ? 1 : 2, nelts);
		      if (sel.series_p (0, 1, 0, 1)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2820;
			  {
			    tree tem;
			    tem =  op0;
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1247, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2820:;
			}
		      else
			{
			  if (sel.series_p (0, 1, nelts, 1)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2821;
			      {
				tree tem;
				tem =  op1;
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1248, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2821:;
			    }
			  else
			    {
			      {
 if (!single_arg)
 {
 if (sel.all_from_input_p (0))
 op1 = op0;
 else if (sel.all_from_input_p (1))
 {
 op0 = op1;
 sel.rotate_inputs (1);
 }
 else if (known_ge (poly_uint64 (sel[0]), nelts))
 {
 std::swap (op0, op1);
 sel.rotate_inputs (1);
 }
 }
 gassign *def;
 tree cop0 = op0, cop1 = op1;
 if (TREE_CODE (op0) == SSA_NAME
 && (def = dyn_cast <gassign *> (SSA_NAME_DEF_STMT (op0)))
 && gimple_assign_rhs_code (def) == CONSTRUCTOR)
 cop0 = gimple_assign_rhs1 (def);
 if (TREE_CODE (op1) == SSA_NAME
 && (def = dyn_cast <gassign *> (SSA_NAME_DEF_STMT (op1)))
 && gimple_assign_rhs_code (def) == CONSTRUCTOR)
 cop1 = gimple_assign_rhs1 (def);
 tree t;
				  if ((TREE_CODE (cop0) == VECTOR_CST
 || TREE_CODE (cop0) == CONSTRUCTOR)
 && (TREE_CODE (cop1) == VECTOR_CST
 || TREE_CODE (cop1) == CONSTRUCTOR)
 && (t = fold_vec_perm (type, cop0, cop1, sel))
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2822;
				      {
					tree tem;
					tem =  t;
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1249, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2822:;
				    }
				  else
				    {
				      {
 bool changed = (op0 == op1 && !single_arg);
 tree ins = NULL_TREE;
 unsigned at = 0;
 if (op_mode != BLKmode
 && (TREE_CODE (cop0) == VECTOR_CST
 || TREE_CODE (cop0) == CONSTRUCTOR
 || TREE_CODE (cop1) == VECTOR_CST
 || TREE_CODE (cop1) == CONSTRUCTOR))
 {
 bool insert_first_p = sel.series_p (1, 1, nelts + 1, 1);
 if (insert_first_p)
 {
 at = 0;
 if ((ins = fold_read_from_vector (cop0, sel[0])))
 op0 = op1;
 }
 if (!insert_first_p || (!ins && maybe_eq (nelts, 2u)))
 {
 unsigned int encoded_nelts = sel.encoding ().encoded_nelts ();
 for (at = 0; at < encoded_nelts; ++at)
 if (maybe_ne (sel[at], at))
 break;
 if (at < encoded_nelts
 && (known_eq (at + 1, nelts)
 || sel.series_p (at + 1, 1, at + 1, 1)))
 {
 if (known_lt (poly_uint64 (sel[at]), nelts))
 ins = fold_read_from_vector (cop0, sel[at]);
 else
 ins = fold_read_from_vector (cop1, sel[at] - nelts);
 }
 }
 }
 if (!ins && sel.encoding () != builder)
 {
 tree oldop2 = op2;
 if (sel.ninputs () == 2
 || can_vec_perm_const_p (result_mode, op_mode, sel, false))
 op2 = vec_perm_indices_to_tree (TREE_TYPE (op2), sel);
 else
 {
 vec_perm_indices sel2 (builder, 2, nelts);
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false))
 op2 = vec_perm_indices_to_tree (TREE_TYPE (op2), sel2);
 else
 op2 = vec_perm_indices_to_tree (TREE_TYPE (op2), sel);
 }
 if (!operand_equal_p (op2, oldop2, 0))
 changed = true;
 }
					  if (ins
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2823;
					      {
						res_op->set_op (BIT_INSERT_EXPR, type, 3);
						res_op->ops[0] =  op0;
						res_op->ops[1] =  ins;
						res_op->ops[2] =  bitsize_int (at * vector_element_bits (type));
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1250, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail2823:;
					    }
					  else
					    {
					      if (changed
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2824;
						  {
						    res_op->set_op (VEC_PERM_EXPR, type, 3);
						    res_op->ops[0] =  op0;
						    res_op->ops[1] =  op1;
						    res_op->ops[2] =  op2;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1251, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2824:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      switch (TREE_CODE (_q20))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q20))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_PERM_EXPR:
				    {
				      tree _q30 = gimple_assign_rhs1 (_a2);
				      _q30 = do_valueize (valueize, _q30);
				      tree _q31 = gimple_assign_rhs2 (_a2);
				      _q31 = do_valueize (valueize, _q31);
				      tree _q32 = gimple_assign_rhs3 (_a2);
				      _q32 = do_valueize (valueize, _q32);
				      switch (TREE_CODE (_q32))
				        {
					case VECTOR_CST:
					  {
					    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
					      {
						switch (TREE_CODE (_p2))
						  {
						  case VECTOR_CST:
						    {
						      {
							tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q32, _p2 };
							if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
							  {
							    {
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[2]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 1);
								if (tree_to_vec_perm_builder (&builder0, captures[4])
 && tree_to_vec_perm_builder (&builder1, captures[5])
 && TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))
 == TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[1])))
)
								  {
								    {
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 1, nelts);
 for (int i = 0; i < nelts; i++)
 builder2.quick_push (sel0[sel1[i].to_constant ()]);
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[0])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
									if (op0
)
									  {
									    gimple_seq *lseq = seq;
									    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2825;
									    {
									      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
									      {
										tree _o1[3], _r1;
										_o1[0] = captures[2];
										_o1[1] = captures[3];
										_o1[2] =  op0;
										gimple_match_op tem_op (res_op->cond.any_else (), VEC_PERM_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1], _o1[2]);
										tem_op.resimplify (lseq, valueize);
										_r1 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r1) goto next_after_fail2825;
										res_op->ops[0] = _r1;
									      }
									      res_op->resimplify (lseq, valueize);
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1252, __FILE__, __LINE__, true);
									      return true;
									    }
next_after_fail2825:;
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
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_q22))
		    {
		    case VECTOR_CST:
		      {
			if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case VECTOR_CST:
			        {
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _q22, _p2 };
				    if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
				      {
					{
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[2]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 1);
					    if (tree_to_vec_perm_builder (&builder0, captures[4])
 && tree_to_vec_perm_builder (&builder1, captures[5])
 && TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))
 == TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[1])))
)
					      {
						{
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 1, nelts);
 for (int i = 0; i < nelts; i++)
 builder2.quick_push (sel0[sel1[i].to_constant ()]);
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[0])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
						    if (op0
)
						      {
							gimple_seq *lseq = seq;
							if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2826;
							{
							  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							  {
							    tree _o1[3], _r1;
							    _o1[0] = captures[2];
							    _o1[1] = captures[3];
							    _o1[2] =  op0;
							    gimple_match_op tem_op (res_op->cond.any_else (), VEC_PERM_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1], _o1[2]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2826;
							    res_op->ops[0] = _r1;
							  }
							  res_op->resimplify (lseq, valueize);
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1252, __FILE__, __LINE__, true);
							  return true;
							}
next_after_fail2826:;
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
        }
      break;
    default:;
    }
if (gimple_vec_same_elem_p (_p0, valueize))
  {
    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p2 };
	  if (types_match (type, TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2827;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1253, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2827:;
	    }
	  else
	    {
	      {
 tree elem = uniform_vector_p (captures[0]);
		  if (elem
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2828;
		      {
			tree tem;
			tem =  build_vector_from_val (type, elem);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1254, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2828:;
		    }
	      }
	    }
	}
      }
  }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q32))
		    {
		    case VECTOR_CST:
		      {
			switch (TREE_CODE (_p2))
			  {
			  case VECTOR_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
				if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
				  {
				    {
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[2]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 2);
					if (tree_to_vec_perm_builder (&builder0, captures[4])
 && tree_to_vec_perm_builder (&builder1, captures[5])
)
					  {
					    {
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 2, nelts);
 bool use_1 = false, use_2 = false;
 for (int i = 0; i < nelts; i++)
 {
 if (known_lt ((poly_uint64)sel1[i], sel1.nelts_per_input ()))
 builder2.quick_push (sel1[i]);
 else
 {
 poly_uint64 j = sel0[(sel1[i] - sel1.nelts_per_input ())
 .to_constant ()];
 if (known_lt (j, sel0.nelts_per_input ()))
 use_1 = true;
 else
 {
 use_2 = true;
 j -= sel0.nelts_per_input ();
 }
 builder2.quick_push (j + sel1.nelts_per_input ());
 }
 }
						if (use_1 ^ use_2
)
						  {
						    {
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[1])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
							if (op0
)
							  {
							    if (use_1
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2829;
								{
								  res_op->set_op (VEC_PERM_EXPR, type, 3);
								  res_op->ops[0] = captures[0];
								  res_op->ops[1] = captures[2];
								  res_op->ops[2] =  op0;
								  res_op->resimplify (lseq, valueize);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1255, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2829:;
							      }
							    else
							      {
								if (use_2
)
								  {
								    gimple_seq *lseq = seq;
								    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2830;
								    {
								      res_op->set_op (VEC_PERM_EXPR, type, 3);
								      res_op->ops[0] = captures[0];
								      res_op->ops[1] = captures[3];
								      res_op->ops[2] =  op0;
								      res_op->resimplify (lseq, valueize);
								      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1256, __FILE__, __LINE__, true);
								      return true;
								    }
next_after_fail2830:;
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
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_q22))
		    {
		    case VECTOR_CST:
		      {
			switch (TREE_CODE (_p2))
			  {
			  case VECTOR_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _p2 };
				if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
				  {
				    {
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[1]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 2);
					if (tree_to_vec_perm_builder (&builder0, captures[3])
 && tree_to_vec_perm_builder (&builder1, captures[5])
)
					  {
					    {
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 2, nelts);
 bool use_1 = false, use_2 = false;
 for (int i = 0; i < nelts; i++)
 {
 if (known_ge ((poly_uint64)sel1[i], sel1.nelts_per_input ()))
 builder2.quick_push (sel1[i]);
 else
 {
 poly_uint64 j = sel0[sel1[i].to_constant ()];
 if (known_lt (j, sel0.nelts_per_input ()))
 use_1 = true;
 else
 {
 use_2 = true;
 j -= sel0.nelts_per_input ();
 }
 builder2.quick_push (j);
 }
 }
						if (use_1 ^ use_2
)
						  {
						    {
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[0])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
							if (op0
)
							  {
							    if (use_1
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2831;
								{
								  res_op->set_op (VEC_PERM_EXPR, type, 3);
								  res_op->ops[0] = captures[1];
								  res_op->ops[1] = captures[4];
								  res_op->ops[2] =  op0;
								  res_op->resimplify (lseq, valueize);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1257, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2831:;
							      }
							    else
							      {
								if (use_2
)
								  {
								    gimple_seq *lseq = seq;
								    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2832;
								    {
								      res_op->set_op (VEC_PERM_EXPR, type, 3);
								      res_op->ops[0] = captures[2];
								      res_op->ops[1] = captures[4];
								      res_op->ops[2] =  op0;
								      res_op->resimplify (lseq, valueize);
								      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
								      return true;
								    }
next_after_fail2832:;
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
      break;
    default:;
    }
  return false;
}
#pragma GCC diagnostic pop
