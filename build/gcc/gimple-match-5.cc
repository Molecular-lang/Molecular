/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_maybe_truncate (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      CASE_CONVERT:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
)
		      {
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 12, __FILE__, __LINE__, false);
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
  return false;
}

bool
gimple_zero_one_valued_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[0]), 1)
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 29, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (integer_onep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
			if (INTEGRAL_TYPE_P (type)
)
			  {
			    {
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 30, __FILE__, __LINE__, false);
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
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 30, __FILE__, __LINE__, false);
			      return true;
			    }
			  }
		      }
		    }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
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
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 31, __FILE__, __LINE__, false);
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
if (gimple_truth_valued_p (t, valueize))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
)
	{
	  {
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 32, __FILE__, __LINE__, false);
	    return true;
	  }
	}
    }
  }
  return false;
}

bool
gimple_compositional_complex (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      CASE_CONVERT:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case COMPLEX_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				    {
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
	          break;
	        }
	      case COMPLEX_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
  return false;
}

bool
gimple_nop_atomic_bit_test_and_p (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case BIT_AND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q30 = gimple_call_arg (_c3, 0);
						    _q30 = do_valueize (valueize, _q30);
						    tree _q31 = gimple_call_arg (_c3, 1);
						    _q31 = do_valueize (valueize, _q31);
						    switch (TREE_CODE (_q31))
						      {
						      case INTEGER_CST:
						        {
							  switch (TREE_CODE (_p1))
							    {
							    case INTEGER_CST:
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q31, _p1, _p0, _q30 };
								  {
 int ibit = tree_log2 (captures[0]);
 int ibit2 = tree_log2 (captures[1]);
								      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
									{
									  {
									    res_ops[0] = captures[0];
									    res_ops[1] = captures[1];
									    res_ops[2] = captures[2];
									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 83, __FILE__, __LINE__, false);
									    return true;
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
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_16:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_16:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_1:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_2:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_4:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_8:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_16:
					        if (gimple_call_num_args (_c3) == 3)
					          {
						    tree _q30 = gimple_call_arg (_c3, 0);
						    _q30 = do_valueize (valueize, _q30);
						    tree _q31 = gimple_call_arg (_c3, 1);
						    _q31 = do_valueize (valueize, _q31);
						    tree _q32 = gimple_call_arg (_c3, 2);
						    _q32 = do_valueize (valueize, _q32);
						    switch (TREE_CODE (_q31))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q31))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case LSHIFT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_assign_rhs2 (_a4);
								    _q51 = do_valueize (valueize, _q51);
								    if (integer_onep (_q50))
								      {
									switch (TREE_CODE (_p1))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _p1))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    CASE_CONVERT:
										      {
											tree _q90 = gimple_assign_rhs1 (_a5);
											_q90 = do_valueize (valueize, _q90);
											if ((_q90 == _q31 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q31, 0) && types_match (_q90, _q31)))
											  {
											    {
											      tree captures[6] ATTRIBUTE_UNUSED = { _q31, _p0, _q30, _q50, _q51, _q32 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[0];
												    res_ops[2] = captures[1];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
									    break;
								          default:;
								          }
									if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
									  {
									    {
									      tree captures[6] ATTRIBUTE_UNUSED = { _q31, _p0, _q30, _q50, _q51, _q32 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
						      case INTEGER_CST:
						        {
							  switch (TREE_CODE (_p1))
							    {
							    case INTEGER_CST:
							      {
								{
								  tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p0, _q30, _q32 };
								  {
 int ibit = tree_log2 (captures[0]);
 int ibit2 = tree_log2 (captures[1]);
								      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
									{
									  {
									    res_ops[0] = captures[0];
									    res_ops[1] = captures[1];
									    res_ops[2] = captures[2];
									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 85, __FILE__, __LINE__, false);
									    return true;
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
						    tree _q31_pops[1];
						    if (gimple_nop_convert (_q31, _q31_pops, valueize))
						      {
							tree _q50 = _q31_pops[0];
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									tree _q61 = gimple_assign_rhs2 (_a4);
									_q61 = do_valueize (valueize, _q61);
									if (integer_onep (_q60))
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _p1))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											CASE_CONVERT:
											  {
											    tree _q100 = gimple_assign_rhs1 (_a5);
											    _q100 = do_valueize (valueize, _q100);
											    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
											      {
												{
												  tree captures[6] ATTRIBUTE_UNUSED = { _q50, _p0, _q30, _q60, _q61, _q32 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[0];
													res_ops[2] = captures[1];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
									        break;
									      default:;
									      }
									    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q50, _p0, _q30, _q60, _q61, _q32 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[0];
											res_ops[2] = captures[1];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
					        break;
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							    switch (gimple_call_combined_fn (_c4))
							      {
							      case CFN_BUILT_IN_ATOMIC_FETCH_OR_1:
							      case CFN_BUILT_IN_ATOMIC_FETCH_OR_2:
							      case CFN_BUILT_IN_ATOMIC_FETCH_OR_4:
							      case CFN_BUILT_IN_ATOMIC_FETCH_OR_8:
							      case CFN_BUILT_IN_ATOMIC_FETCH_OR_16:
							      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_1:
							      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_2:
							      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_4:
							      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_8:
							      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_16:
							      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_1:
							      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_2:
							      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_4:
							      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_8:
							      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_16:
							        if (gimple_call_num_args (_c4) == 3)
							          {
								    tree _q50 = gimple_call_arg (_c4, 0);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_call_arg (_c4, 1);
								    _q51 = do_valueize (valueize, _q51);
								    tree _q52 = gimple_call_arg (_c4, 2);
								    _q52 = do_valueize (valueize, _q52);
								    {
								      tree _q51_pops[1];
								      if (gimple_nop_convert (_q51, _q51_pops, valueize))
								        {
									  tree _q70 = _q51_pops[0];
									  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									    {
									      switch (TREE_CODE (_q70))
									        {
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _q70))
										    {
										      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										        switch (gimple_assign_rhs_code (_a5))
											  {
											  case LSHIFT_EXPR:
											    {
											      tree _q90 = gimple_assign_rhs1 (_a5);
											      _q90 = do_valueize (valueize, _q90);
											      tree _q91 = gimple_assign_rhs2 (_a5);
											      _q91 = do_valueize (valueize, _q91);
											      if (integer_onep (_q90))
												{
												  {
												    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q90, _q91, _q52 };
												    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												      {
													{
													  res_ops[0] = captures[0];
													  res_ops[1] = captures[0];
													  res_ops[2] = captures[1];
													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
										  break;
									        default:;
									        }
									    }
								        }
								    }
								    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
								      {
									switch (TREE_CODE (_q51))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q51))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (integer_onep (_q80))
											  {
											    {
											      tree captures[6] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q80, _q81, _q52 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[0];
												    res_ops[2] = captures[1];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
									    break;
								          default:;
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
					          break;
					        }
					      default:;
					      }
					  else if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_16:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_16:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_1:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_2:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_4:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_8:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_16:
					        if (gimple_call_num_args (_c3) == 3)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    tree _q42 = gimple_call_arg (_c3, 2);
						    _q42 = do_valueize (valueize, _q42);
						    {
						      tree _q41_pops[1];
						      if (gimple_nop_convert (_q41, _q41_pops, valueize))
						        {
							  tree _q60 = _q41_pops[0];
							  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							    {
							      switch (TREE_CODE (_q60))
							        {
								case SSA_NAME:
								  if (gimple *_d4 = get_def (valueize, _q60))
								    {
								      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								        switch (gimple_assign_rhs_code (_a4))
									  {
									  case LSHIFT_EXPR:
									    {
									      tree _q80 = gimple_assign_rhs1 (_a4);
									      _q80 = do_valueize (valueize, _q80);
									      tree _q81 = gimple_assign_rhs2 (_a4);
									      _q81 = do_valueize (valueize, _q81);
									      if (integer_onep (_q80))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _p1, _q40, _q80, _q81, _q42 };
										    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										      {
											{
											  res_ops[0] = captures[0];
											  res_ops[1] = captures[0];
											  res_ops[2] = captures[1];
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
								  break;
							        default:;
							        }
							    }
						        }
						    }
						    if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						      {
							switch (TREE_CODE (_q41))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q41))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (integer_onep (_q70))
									  {
									    {
									      tree captures[6] ATTRIBUTE_UNUSED = { _q20, _p1, _q40, _q70, _q71, _q42 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
							    break;
						          default:;
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
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
			        if (gimple_call_num_args (_c2) == 2)
			          {
				    tree _q20 = gimple_call_arg (_c2, 0);
				    _q20 = do_valueize (valueize, _q20);
				    tree _q21 = gimple_call_arg (_c2, 1);
				    _q21 = do_valueize (valueize, _q21);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						case LSHIFT_EXPR:
						  {
						    tree _q40 = gimple_assign_rhs1 (_a3);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_assign_rhs2 (_a3);
						    _q41 = do_valueize (valueize, _q41);
						    if (integer_onep (_q40))
						      {
							switch (TREE_CODE (_p1))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _p1))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
									  {
									    {
									      tree captures[5] ATTRIBUTE_UNUSED = { _q21, _p0, _q20, _q40, _q41 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							    break;
						          default:;
						          }
							if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _q21, _p0, _q20, _q40, _q41 };
							      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								{
								  {
								    res_ops[0] = captures[0];
								    res_ops[1] = captures[0];
								    res_ops[2] = captures[1];
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
				      case INTEGER_CST:
				        {
					  switch (TREE_CODE (_p1))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _p1, _p0, _q20 };
						  {
 int ibit = tree_log2 (captures[0]);
 int ibit2 = tree_log2 (captures[1]);
						      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    res_ops[2] = captures[2];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 83, __FILE__, __LINE__, false);
							    return true;
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
				    tree _q21_pops[1];
				    if (gimple_nop_convert (_q21, _q21_pops, valueize))
				      {
					tree _q40 = _q21_pops[0];
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case LSHIFT_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							tree _q51 = gimple_assign_rhs2 (_a3);
							_q51 = do_valueize (valueize, _q51);
							if (integer_onep (_q50))
							  {
							    switch (TREE_CODE (_p1))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _p1))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									CASE_CONVERT:
									  {
									    tree _q80 = gimple_assign_rhs1 (_a4);
									    _q80 = do_valueize (valueize, _q80);
									    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
									      {
										{
										  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p0, _q20, _q50, _q51 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[0];
											res_ops[2] = captures[1];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							        break;
							      default:;
							      }
							    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							      {
								{
								  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p0, _q20, _q50, _q51 };
								  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[0];
									res_ops[2] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
			        break;
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_1:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_2:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_4:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_8:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_16:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_1:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_2:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_4:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_8:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_16:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_1:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_2:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_4:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_8:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_16:
			        if (gimple_call_num_args (_c2) == 3)
			          {
				    tree _q20 = gimple_call_arg (_c2, 0);
				    _q20 = do_valueize (valueize, _q20);
				    tree _q21 = gimple_call_arg (_c2, 1);
				    _q21 = do_valueize (valueize, _q21);
				    tree _q22 = gimple_call_arg (_c2, 2);
				    _q22 = do_valueize (valueize, _q22);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						case LSHIFT_EXPR:
						  {
						    tree _q40 = gimple_assign_rhs1 (_a3);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_assign_rhs2 (_a3);
						    _q41 = do_valueize (valueize, _q41);
						    if (integer_onep (_q40))
						      {
							switch (TREE_CODE (_p1))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _p1))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
									  {
									    {
									      tree captures[6] ATTRIBUTE_UNUSED = { _q21, _p0, _q20, _q40, _q41, _q22 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
							    break;
						          default:;
						          }
							if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
							  {
							    {
							      tree captures[6] ATTRIBUTE_UNUSED = { _q21, _p0, _q20, _q40, _q41, _q22 };
							      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								{
								  {
								    res_ops[0] = captures[0];
								    res_ops[1] = captures[0];
								    res_ops[2] = captures[1];
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
				      case INTEGER_CST:
				        {
					  switch (TREE_CODE (_p1))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[5] ATTRIBUTE_UNUSED = { _q21, _p1, _p0, _q20, _q22 };
						  {
 int ibit = tree_log2 (captures[0]);
 int ibit2 = tree_log2 (captures[1]);
						      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    res_ops[2] = captures[2];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 85, __FILE__, __LINE__, false);
							    return true;
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
				    tree _q21_pops[1];
				    if (gimple_nop_convert (_q21, _q21_pops, valueize))
				      {
					tree _q40 = _q21_pops[0];
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case LSHIFT_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							tree _q51 = gimple_assign_rhs2 (_a3);
							_q51 = do_valueize (valueize, _q51);
							if (integer_onep (_q50))
							  {
							    switch (TREE_CODE (_p1))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _p1))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									CASE_CONVERT:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q40, _p0, _q20, _q50, _q51, _q22 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[0];
											res_ops[2] = captures[1];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
							        break;
							      default:;
							      }
							    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							      {
								{
								  tree captures[6] ATTRIBUTE_UNUSED = { _q40, _p0, _q20, _q50, _q51, _q22 };
								  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[0];
									res_ops[2] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_OR_16:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_16:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_1:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_2:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_4:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_8:
					      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_16:
					        if (gimple_call_num_args (_c3) == 3)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    tree _q42 = gimple_call_arg (_c3, 2);
						    _q42 = do_valueize (valueize, _q42);
						    {
						      tree _q41_pops[1];
						      if (gimple_nop_convert (_q41, _q41_pops, valueize))
						        {
							  tree _q60 = _q41_pops[0];
							  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							    {
							      switch (TREE_CODE (_q60))
							        {
								case SSA_NAME:
								  if (gimple *_d4 = get_def (valueize, _q60))
								    {
								      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								        switch (gimple_assign_rhs_code (_a4))
									  {
									  case LSHIFT_EXPR:
									    {
									      tree _q80 = gimple_assign_rhs1 (_a4);
									      _q80 = do_valueize (valueize, _q80);
									      tree _q81 = gimple_assign_rhs2 (_a4);
									      _q81 = do_valueize (valueize, _q81);
									      if (integer_onep (_q80))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q80, _q81, _q42 };
										    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										      {
											{
											  res_ops[0] = captures[0];
											  res_ops[1] = captures[0];
											  res_ops[2] = captures[1];
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
								  break;
							        default:;
							        }
							    }
						        }
						    }
						    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
						      {
							switch (TREE_CODE (_q41))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q41))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (integer_onep (_q70))
									  {
									    {
									      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q70, _q71, _q42 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
							    break;
						          default:;
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
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_1:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_2:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_4:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_8:
			      case CFN_BUILT_IN_ATOMIC_FETCH_OR_16:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_1:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_2:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_4:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_8:
			      case CFN_BUILT_IN_ATOMIC_FETCH_XOR_16:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_1:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_2:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_4:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_8:
			      case CFN_BUILT_IN_ATOMIC_XOR_FETCH_16:
			        if (gimple_call_num_args (_c2) == 3)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_call_arg (_c2, 1);
				    _q31 = do_valueize (valueize, _q31);
				    tree _q32 = gimple_call_arg (_c2, 2);
				    _q32 = do_valueize (valueize, _q32);
				    {
				      tree _q31_pops[1];
				      if (gimple_nop_convert (_q31, _q31_pops, valueize))
				        {
					  tree _q50 = _q31_pops[0];
					  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					    {
					      switch (TREE_CODE (_q50))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q50))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  case LSHIFT_EXPR:
							    {
							      tree _q70 = gimple_assign_rhs1 (_a3);
							      _q70 = do_valueize (valueize, _q70);
							      tree _q71 = gimple_assign_rhs2 (_a3);
							      _q71 = do_valueize (valueize, _q71);
							      if (integer_onep (_q70))
								{
								  {
								    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q70, _q71, _q32 };
								    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[0];
									  res_ops[2] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
						  break;
					        default:;
					        }
					    }
				        }
				    }
				    if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
				      {
					switch (TREE_CODE (_q31))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q31))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case LSHIFT_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (integer_onep (_q60))
							  {
							    {
							      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q60, _q61, _q32 };
							      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								{
								  {
								    res_ops[0] = captures[0];
								    res_ops[1] = captures[0];
								    res_ops[2] = captures[1];
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 84, __FILE__, __LINE__, false);
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
					    break;
				          default:;
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
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q30 = gimple_call_arg (_c3, 0);
						    _q30 = do_valueize (valueize, _q30);
						    tree _q31 = gimple_call_arg (_c3, 1);
						    _q31 = do_valueize (valueize, _q31);
						    switch (TREE_CODE (_q31))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q31))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case LSHIFT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_assign_rhs2 (_a4);
								    _q51 = do_valueize (valueize, _q51);
								    if (integer_onep (_q50))
								      {
									switch (TREE_CODE (_p1))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _p1))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    CASE_CONVERT:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
											  {
											    {
											      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p0, _q30, _q50, _q51 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[0];
												    res_ops[2] = captures[1];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
									    break;
								          default:;
								          }
									if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
									  {
									    {
									      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p0, _q30, _q50, _q51 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
						  {
						    tree _q31_pops[1];
						    if (gimple_nop_convert (_q31, _q31_pops, valueize))
						      {
							tree _q50 = _q31_pops[0];
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									tree _q61 = gimple_assign_rhs2 (_a4);
									_q61 = do_valueize (valueize, _q61);
									if (integer_onep (_q60))
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _p1))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											CASE_CONVERT:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _p0, _q30, _q60, _q61 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[0];
													res_ops[2] = captures[1];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
									        break;
									      default:;
									      }
									    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
									      {
										{
										  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _p0, _q30, _q60, _q61 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[0];
											res_ops[2] = captures[1];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
					        break;
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							    switch (gimple_call_combined_fn (_c4))
							      {
							      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
							      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
							      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
							      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
							      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
							      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
							        if (gimple_call_num_args (_c4) == 2)
							          {
								    tree _q50 = gimple_call_arg (_c4, 0);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_call_arg (_c4, 1);
								    _q51 = do_valueize (valueize, _q51);
								    {
								      tree _q51_pops[1];
								      if (gimple_nop_convert (_q51, _q51_pops, valueize))
								        {
									  tree _q70 = _q51_pops[0];
									  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									    {
									      switch (TREE_CODE (_q70))
									        {
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _q70))
										    {
										      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										        switch (gimple_assign_rhs_code (_a5))
											  {
											  case LSHIFT_EXPR:
											    {
											      tree _q90 = gimple_assign_rhs1 (_a5);
											      _q90 = do_valueize (valueize, _q90);
											      tree _q91 = gimple_assign_rhs2 (_a5);
											      _q91 = do_valueize (valueize, _q91);
											      if (integer_onep (_q90))
												{
												  {
												    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q90, _q91 };
												    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												      {
													{
													  res_ops[0] = captures[0];
													  res_ops[1] = captures[0];
													  res_ops[2] = captures[1];
													  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
										  break;
									        default:;
									        }
									    }
								        }
								    }
								    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
								      {
									switch (TREE_CODE (_q51))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q51))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (integer_onep (_q80))
											  {
											    {
											      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q80, _q81 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[0];
												    res_ops[2] = captures[1];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
									    break;
								          default:;
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
					          break;
					        }
					      default:;
					      }
					  else if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    {
						      tree _q41_pops[1];
						      if (gimple_nop_convert (_q41, _q41_pops, valueize))
						        {
							  tree _q60 = _q41_pops[0];
							  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							    {
							      switch (TREE_CODE (_q60))
							        {
								case SSA_NAME:
								  if (gimple *_d4 = get_def (valueize, _q60))
								    {
								      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								        switch (gimple_assign_rhs_code (_a4))
									  {
									  case LSHIFT_EXPR:
									    {
									      tree _q80 = gimple_assign_rhs1 (_a4);
									      _q80 = do_valueize (valueize, _q80);
									      tree _q81 = gimple_assign_rhs2 (_a4);
									      _q81 = do_valueize (valueize, _q81);
									      if (integer_onep (_q80))
										{
										  {
										    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _p1, _q40, _q80, _q81 };
										    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										      {
											{
											  res_ops[0] = captures[0];
											  res_ops[1] = captures[0];
											  res_ops[2] = captures[1];
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
								  break;
							        default:;
							        }
							    }
						        }
						    }
						    if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						      {
							switch (TREE_CODE (_q41))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q41))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (integer_onep (_q70))
									  {
									    {
									      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _p1, _q40, _q70, _q71 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							    break;
						          default:;
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
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_16:
					        if (gimple_call_num_args (_c3) == 3)
					          {
						    tree _q30 = gimple_call_arg (_c3, 0);
						    _q30 = do_valueize (valueize, _q30);
						    tree _q31 = gimple_call_arg (_c3, 1);
						    _q31 = do_valueize (valueize, _q31);
						    tree _q32 = gimple_call_arg (_c3, 2);
						    _q32 = do_valueize (valueize, _q32);
						    switch (TREE_CODE (_q31))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q31))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case BIT_NOT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    switch (TREE_CODE (_q50))
								      {
								      case SSA_NAME:
								        if (gimple *_d5 = get_def (valueize, _q50))
								          {
									    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									      switch (gimple_assign_rhs_code (_a5))
										{
										case LSHIFT_EXPR:
										  {
										    tree _q60 = gimple_assign_rhs1 (_a5);
										    _q60 = do_valueize (valueize, _q60);
										    tree _q61 = gimple_assign_rhs2 (_a5);
										    _q61 = do_valueize (valueize, _q61);
										    if (integer_onep (_q60))
										      {
											switch (TREE_CODE (_p1))
											  {
											  case SSA_NAME:
											    if (gimple *_d6 = get_def (valueize, _p1))
											      {
												if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												  switch (gimple_assign_rhs_code (_a6))
												    {
												    CASE_CONVERT:
												      {
													tree _q100 = gimple_assign_rhs1 (_a6);
													_q100 = do_valueize (valueize, _q100);
													if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
													  {
													    {
													      tree captures[7] ATTRIBUTE_UNUSED = { _q31, _q50, _p0, _q30, _q60, _q61, _q32 };
													      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    res_ops[2] = captures[2];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
											    break;
										          default:;
										          }
											if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
											  {
											    {
											      tree captures[7] ATTRIBUTE_UNUSED = { _q31, _q50, _p0, _q30, _q60, _q61, _q32 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
						      case INTEGER_CST:
						        {
							  switch (TREE_CODE (_p1))
							    {
							    case INTEGER_CST:
							      {
								{
								  tree captures[6] ATTRIBUTE_UNUSED = { _q31, _p1, _p0, t, _q30, _q32 };
								  {
 int ibit = wi::exact_log2 (wi::zext (wi::bit_not (wi::to_wide (captures[0])),
 TYPE_PRECISION(type)));
 int ibit2 = tree_log2 (captures[1]);
								      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
									{
									  {
									    res_ops[0] = captures[0];
									    res_ops[1] = captures[1];
									    res_ops[2] = captures[2];
									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 88, __FILE__, __LINE__, false);
									    return true;
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
						    tree _q31_pops[1];
						    if (gimple_nop_convert (_q31, _q31_pops, valueize))
						      {
							tree _q50 = _q31_pops[0];
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case BIT_NOT_EXPR:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (integer_onep (_q70))
											  {
											    switch (TREE_CODE (_p1))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _p1))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													CASE_CONVERT:
													  {
													    tree _q110 = gimple_assign_rhs1 (_a6);
													    _q110 = do_valueize (valueize, _q110);
													    if ((_q110 == _q60 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q60, 0) && types_match (_q110, _q60)))
													      {
														{
														  tree captures[7] ATTRIBUTE_UNUSED = { _q31, _q60, _p0, _q30, _q70, _q71, _q32 };
														  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															res_ops[2] = captures[2];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
											        break;
											      default:;
											      }
											    if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _q31, _q60, _p0, _q30, _q70, _q71, _q32 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
						      }
						  }
					          }
					        break;
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q30 = gimple_call_arg (_c3, 0);
						    _q30 = do_valueize (valueize, _q30);
						    tree _q31 = gimple_call_arg (_c3, 1);
						    _q31 = do_valueize (valueize, _q31);
						    switch (TREE_CODE (_q31))
						      {
						      case INTEGER_CST:
						        {
							  switch (TREE_CODE (_p1))
							    {
							    case INTEGER_CST:
							      {
								{
								  tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p0, t, _q30 };
								  {
 int ibit = wi::exact_log2 (wi::zext (wi::bit_not (wi::to_wide (captures[0])),
 TYPE_PRECISION(type)));
 int ibit2 = tree_log2 (captures[1]);
								      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
									{
									  {
									    res_ops[0] = captures[0];
									    res_ops[1] = captures[1];
									    res_ops[2] = captures[2];
									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 89, __FILE__, __LINE__, false);
									    return true;
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
				    default:;
				    }
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							    switch (gimple_call_combined_fn (_c4))
							      {
							      case CFN_BUILT_IN_ATOMIC_FETCH_AND_1:
							      case CFN_BUILT_IN_ATOMIC_FETCH_AND_2:
							      case CFN_BUILT_IN_ATOMIC_FETCH_AND_4:
							      case CFN_BUILT_IN_ATOMIC_FETCH_AND_8:
							      case CFN_BUILT_IN_ATOMIC_FETCH_AND_16:
							        if (gimple_call_num_args (_c4) == 3)
							          {
								    tree _q50 = gimple_call_arg (_c4, 0);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_call_arg (_c4, 1);
								    _q51 = do_valueize (valueize, _q51);
								    tree _q52 = gimple_call_arg (_c4, 2);
								    _q52 = do_valueize (valueize, _q52);
								    switch (TREE_CODE (_q51))
								      {
								      case SSA_NAME:
								        if (gimple *_d5 = get_def (valueize, _q51))
								          {
									    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									      switch (gimple_assign_rhs_code (_a5))
										{
										case BIT_NOT_EXPR:
										  {
										    tree _q70 = gimple_assign_rhs1 (_a5);
										    _q70 = do_valueize (valueize, _q70);
										    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
										      {
											switch (TREE_CODE (_q70))
											  {
											  case SSA_NAME:
											    if (gimple *_d6 = get_def (valueize, _q70))
											      {
												if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												  switch (gimple_assign_rhs_code (_a6))
												    {
												    case LSHIFT_EXPR:
												      {
													tree _q90 = gimple_assign_rhs1 (_a6);
													_q90 = do_valueize (valueize, _q90);
													tree _q91 = gimple_assign_rhs2 (_a6);
													_q91 = do_valueize (valueize, _q91);
													if (integer_onep (_q90))
													  {
													    {
													      tree captures[7] ATTRIBUTE_UNUSED = { _q51, _q20, _p1, _q50, _q90, _q91, _q52 };
													      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    res_ops[2] = captures[2];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
								  {
								    tree _q51_pops[1];
								    if (gimple_nop_convert (_q51, _q51_pops, valueize))
								      {
									tree _q70 = _q51_pops[0];
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_NOT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q80))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case LSHIFT_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    if (integer_onep (_q100))
													      {
														{
														  tree captures[7] ATTRIBUTE_UNUSED = { _q51, _q20, _p1, _q50, _q100, _q101, _q52 };
														  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															res_ops[2] = captures[2];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
							        break;
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
					  else if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_16:
					        if (gimple_call_num_args (_c3) == 3)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    tree _q42 = gimple_call_arg (_c3, 2);
						    _q42 = do_valueize (valueize, _q42);
						    switch (TREE_CODE (_q41))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q41))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case BIT_NOT_EXPR:
								  {
								    tree _q60 = gimple_assign_rhs1 (_a4);
								    _q60 = do_valueize (valueize, _q60);
								    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
								      {
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (integer_onep (_q80))
											  {
											    {
											      tree captures[7] ATTRIBUTE_UNUSED = { _q41, _q20, _p1, _q40, _q80, _q81, _q42 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
								    case BIT_NOT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									  {
									    switch (TREE_CODE (_q70))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _q70))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case LSHIFT_EXPR:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    tree _q91 = gimple_assign_rhs2 (_a5);
											    _q91 = do_valueize (valueize, _q91);
											    if (integer_onep (_q90))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _q41, _q20, _p1, _q40, _q90, _q91, _q42 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
					        break;
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
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
					      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    {
						      tree _q41_pops[1];
						      if (gimple_nop_convert (_q41, _q41_pops, valueize))
						        {
							  tree _q60 = _q41_pops[0];
							  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							    {
							      switch (TREE_CODE (_q60))
							        {
								case SSA_NAME:
								  if (gimple *_d4 = get_def (valueize, _q60))
								    {
								      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								        switch (gimple_assign_rhs_code (_a4))
									  {
									  case LSHIFT_EXPR:
									    {
									      tree _q80 = gimple_assign_rhs1 (_a4);
									      _q80 = do_valueize (valueize, _q80);
									      tree _q81 = gimple_assign_rhs2 (_a4);
									      _q81 = do_valueize (valueize, _q81);
									      if (integer_onep (_q80))
										{
										  {
										    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q80, _q81 };
										    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										      {
											{
											  res_ops[0] = captures[0];
											  res_ops[1] = captures[0];
											  res_ops[2] = captures[1];
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
								  break;
							        default:;
							        }
							    }
						        }
						    }
						    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
						      {
							switch (TREE_CODE (_q41))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q41))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (integer_onep (_q70))
									  {
									    {
									      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q70, _q71 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[0];
										    res_ops[2] = captures[1];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							    break;
						          default:;
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
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_1:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_2:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_4:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_8:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_OR_16:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_1:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_2:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_4:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_8:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_XOR_16:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_1:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_2:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_4:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_8:
			      case CFN_BUILT_IN_SYNC_XOR_AND_FETCH_16:
			        if (gimple_call_num_args (_c2) == 2)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_call_arg (_c2, 1);
				    _q31 = do_valueize (valueize, _q31);
				    {
				      tree _q31_pops[1];
				      if (gimple_nop_convert (_q31, _q31_pops, valueize))
				        {
					  tree _q50 = _q31_pops[0];
					  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					    {
					      switch (TREE_CODE (_q50))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q50))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  case LSHIFT_EXPR:
							    {
							      tree _q70 = gimple_assign_rhs1 (_a3);
							      _q70 = do_valueize (valueize, _q70);
							      tree _q71 = gimple_assign_rhs2 (_a3);
							      _q71 = do_valueize (valueize, _q71);
							      if (integer_onep (_q70))
								{
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q70, _q71 };
								    if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[0];
									  res_ops[2] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
						  break;
					        default:;
					        }
					    }
				        }
				    }
				    if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
				      {
					switch (TREE_CODE (_q31))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q31))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case LSHIFT_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (integer_onep (_q60))
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q60, _q61 };
							      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
								{
								  {
								    res_ops[0] = captures[0];
								    res_ops[1] = captures[0];
								    res_ops[2] = captures[1];
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
					    break;
				          default:;
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
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_1:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_2:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_4:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_8:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_16:
			        if (gimple_call_num_args (_c2) == 3)
			          {
				    tree _q20 = gimple_call_arg (_c2, 0);
				    _q20 = do_valueize (valueize, _q20);
				    tree _q21 = gimple_call_arg (_c2, 1);
				    _q21 = do_valueize (valueize, _q21);
				    tree _q22 = gimple_call_arg (_c2, 2);
				    _q22 = do_valueize (valueize, _q22);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
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
								case LSHIFT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_assign_rhs2 (_a4);
								    _q51 = do_valueize (valueize, _q51);
								    if (integer_onep (_q50))
								      {
									switch (TREE_CODE (_p1))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _p1))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    CASE_CONVERT:
										      {
											tree _q90 = gimple_assign_rhs1 (_a5);
											_q90 = do_valueize (valueize, _q90);
											if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
											  {
											    {
											      tree captures[7] ATTRIBUTE_UNUSED = { _q21, _q40, _p0, _q20, _q50, _q51, _q22 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
									    break;
								          default:;
								          }
									if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
									  {
									    {
									      tree captures[7] ATTRIBUTE_UNUSED = { _q21, _q40, _p0, _q20, _q50, _q51, _q22 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[1];
										    res_ops[2] = captures[2];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
				      case INTEGER_CST:
				        {
					  switch (TREE_CODE (_p1))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[6] ATTRIBUTE_UNUSED = { _q21, _p1, _p0, t, _q20, _q22 };
						  {
 int ibit = wi::exact_log2 (wi::zext (wi::bit_not (wi::to_wide (captures[0])),
 TYPE_PRECISION(type)));
 int ibit2 = tree_log2 (captures[1]);
						      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    res_ops[2] = captures[2];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 88, __FILE__, __LINE__, false);
							    return true;
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
				    tree _q21_pops[1];
				    if (gimple_nop_convert (_q21, _q21_pops, valueize))
				      {
					tree _q40 = _q21_pops[0];
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case BIT_NOT_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									tree _q61 = gimple_assign_rhs2 (_a4);
									_q61 = do_valueize (valueize, _q61);
									if (integer_onep (_q60))
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _p1))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											CASE_CONVERT:
											  {
											    tree _q100 = gimple_assign_rhs1 (_a5);
											    _q100 = do_valueize (valueize, _q100);
											    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20, _q60, _q61, _q22 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
									        break;
									      default:;
									      }
									    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
									      {
										{
										  tree captures[7] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20, _q60, _q61, _q22 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[1];
											res_ops[2] = captures[2];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
				      }
				  }
			          }
			        break;
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
			        if (gimple_call_num_args (_c2) == 2)
			          {
				    tree _q20 = gimple_call_arg (_c2, 0);
				    _q20 = do_valueize (valueize, _q20);
				    tree _q21 = gimple_call_arg (_c2, 1);
				    _q21 = do_valueize (valueize, _q21);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
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
								case LSHIFT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_assign_rhs2 (_a4);
								    _q51 = do_valueize (valueize, _q51);
								    if (integer_onep (_q50))
								      {
									switch (TREE_CODE (_p1))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _p1))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    CASE_CONVERT:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											  {
											    {
											      tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _p0, _q20, _q50, _q51 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
									    break;
								          default:;
								          }
									if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
									  {
									    {
									      tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _p0, _q20, _q50, _q51 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[1];
										    res_ops[2] = captures[2];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
				      case INTEGER_CST:
				        {
					  switch (TREE_CODE (_p1))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[5] ATTRIBUTE_UNUSED = { _q21, _p1, _p0, t, _q20 };
						  {
 int ibit = wi::exact_log2 (wi::zext (wi::bit_not (wi::to_wide (captures[0])),
 TYPE_PRECISION(type)));
 int ibit2 = tree_log2 (captures[1]);
						      if (ibit == ibit2
 && ibit >= 0
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    res_ops[2] = captures[2];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 89, __FILE__, __LINE__, false);
							    return true;
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
				    tree _q21_pops[1];
				    if (gimple_nop_convert (_q21, _q21_pops, valueize))
				      {
					tree _q40 = _q21_pops[0];
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case BIT_NOT_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									tree _q61 = gimple_assign_rhs2 (_a4);
									_q61 = do_valueize (valueize, _q61);
									if (integer_onep (_q60))
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _p1))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											CASE_CONVERT:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
											      {
												{
												  tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20, _q60, _q61 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
									        break;
									      default:;
									      }
									    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20, _q60, _q61 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[1];
											res_ops[2] = captures[2];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_1:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_2:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_4:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_8:
					      case CFN_BUILT_IN_ATOMIC_FETCH_AND_16:
					        if (gimple_call_num_args (_c3) == 3)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    tree _q42 = gimple_call_arg (_c3, 2);
						    _q42 = do_valueize (valueize, _q42);
						    switch (TREE_CODE (_q41))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q41))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case BIT_NOT_EXPR:
								  {
								    tree _q60 = gimple_assign_rhs1 (_a4);
								    _q60 = do_valueize (valueize, _q60);
								    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
								      {
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (integer_onep (_q80))
											  {
											    {
											      tree captures[7] ATTRIBUTE_UNUSED = { _q41, _p0, _p1, _q40, _q80, _q81, _q42 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
								    case BIT_NOT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
									  {
									    switch (TREE_CODE (_q70))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _q70))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case LSHIFT_EXPR:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    tree _q91 = gimple_assign_rhs2 (_a5);
											    _q91 = do_valueize (valueize, _q91);
											    if (integer_onep (_q90))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _q41, _p0, _p1, _q40, _q90, _q91, _q42 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
					        break;
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
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_1:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_2:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_4:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_8:
			      case CFN_BUILT_IN_ATOMIC_FETCH_AND_16:
			        if (gimple_call_num_args (_c2) == 3)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_call_arg (_c2, 1);
				    _q31 = do_valueize (valueize, _q31);
				    tree _q32 = gimple_call_arg (_c2, 2);
				    _q32 = do_valueize (valueize, _q32);
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q31))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						case BIT_NOT_EXPR:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						      {
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (integer_onep (_q70))
									  {
									    {
									      tree captures[7] ATTRIBUTE_UNUSED = { _q31, _p0, _p1, _q30, _q70, _q71, _q32 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[1];
										    res_ops[2] = captures[2];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
				  {
				    tree _q31_pops[1];
				    if (gimple_nop_convert (_q31, _q31_pops, valueize))
				      {
					tree _q50 = _q31_pops[0];
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case BIT_NOT_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							  {
							    switch (TREE_CODE (_q60))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q60))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case LSHIFT_EXPR:
									  {
									    tree _q80 = gimple_assign_rhs1 (_a4);
									    _q80 = do_valueize (valueize, _q80);
									    tree _q81 = gimple_assign_rhs2 (_a4);
									    _q81 = do_valueize (valueize, _q81);
									    if (integer_onep (_q80))
									      {
										{
										  tree captures[7] ATTRIBUTE_UNUSED = { _q31, _p0, _p1, _q30, _q80, _q81, _q32 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[1];
											res_ops[2] = captures[2];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, false);
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
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q30 = gimple_call_arg (_c3, 0);
						    _q30 = do_valueize (valueize, _q30);
						    tree _q31 = gimple_call_arg (_c3, 1);
						    _q31 = do_valueize (valueize, _q31);
						    switch (TREE_CODE (_q31))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q31))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case BIT_NOT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    switch (TREE_CODE (_q50))
								      {
								      case SSA_NAME:
								        if (gimple *_d5 = get_def (valueize, _q50))
								          {
									    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									      switch (gimple_assign_rhs_code (_a5))
										{
										case LSHIFT_EXPR:
										  {
										    tree _q60 = gimple_assign_rhs1 (_a5);
										    _q60 = do_valueize (valueize, _q60);
										    tree _q61 = gimple_assign_rhs2 (_a5);
										    _q61 = do_valueize (valueize, _q61);
										    if (integer_onep (_q60))
										      {
											switch (TREE_CODE (_p1))
											  {
											  case SSA_NAME:
											    if (gimple *_d6 = get_def (valueize, _p1))
											      {
												if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												  switch (gimple_assign_rhs_code (_a6))
												    {
												    CASE_CONVERT:
												      {
													tree _q90 = gimple_assign_rhs1 (_a6);
													_q90 = do_valueize (valueize, _q90);
													if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
													  {
													    {
													      tree captures[6] ATTRIBUTE_UNUSED = { _q31, _q50, _p0, _q30, _q60, _q61 };
													      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    res_ops[2] = captures[2];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
											    break;
										          default:;
										          }
											if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
											  {
											    {
											      tree captures[6] ATTRIBUTE_UNUSED = { _q31, _q50, _p0, _q30, _q60, _q61 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
						  {
						    tree _q31_pops[1];
						    if (gimple_nop_convert (_q31, _q31_pops, valueize))
						      {
							tree _q50 = _q31_pops[0];
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case BIT_NOT_EXPR:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if (integer_onep (_q70))
											  {
											    switch (TREE_CODE (_p1))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _p1))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													CASE_CONVERT:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
													      {
														{
														  tree captures[6] ATTRIBUTE_UNUSED = { _q31, _q60, _p0, _q30, _q70, _q71 };
														  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															res_ops[2] = captures[2];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
											        break;
											      default:;
											      }
											    if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
											      {
												{
												  tree captures[6] ATTRIBUTE_UNUSED = { _q31, _q60, _p0, _q30, _q70, _q71 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							    switch (gimple_call_combined_fn (_c4))
							      {
							      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
							      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
							        if (gimple_call_num_args (_c4) == 2)
							          {
								    tree _q50 = gimple_call_arg (_c4, 0);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_call_arg (_c4, 1);
								    _q51 = do_valueize (valueize, _q51);
								    switch (TREE_CODE (_q51))
								      {
								      case SSA_NAME:
								        if (gimple *_d5 = get_def (valueize, _q51))
								          {
									    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									      switch (gimple_assign_rhs_code (_a5))
										{
										case BIT_NOT_EXPR:
										  {
										    tree _q70 = gimple_assign_rhs1 (_a5);
										    _q70 = do_valueize (valueize, _q70);
										    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
										      {
											switch (TREE_CODE (_q70))
											  {
											  case SSA_NAME:
											    if (gimple *_d6 = get_def (valueize, _q70))
											      {
												if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												  switch (gimple_assign_rhs_code (_a6))
												    {
												    case LSHIFT_EXPR:
												      {
													tree _q90 = gimple_assign_rhs1 (_a6);
													_q90 = do_valueize (valueize, _q90);
													tree _q91 = gimple_assign_rhs2 (_a6);
													_q91 = do_valueize (valueize, _q91);
													if (integer_onep (_q90))
													  {
													    {
													      tree captures[6] ATTRIBUTE_UNUSED = { _q51, _q20, _p1, _q50, _q90, _q91 };
													      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    res_ops[2] = captures[2];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
								  {
								    tree _q51_pops[1];
								    if (gimple_nop_convert (_q51, _q51_pops, valueize))
								      {
									tree _q70 = _q51_pops[0];
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_NOT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q80))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case LSHIFT_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    if (integer_onep (_q100))
													      {
														{
														  tree captures[6] ATTRIBUTE_UNUSED = { _q51, _q20, _p1, _q50, _q100, _q101 };
														  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															res_ops[2] = captures[2];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
							        break;
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
					  else if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    switch (TREE_CODE (_q41))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q41))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case BIT_NOT_EXPR:
								  {
								    tree _q60 = gimple_assign_rhs1 (_a4);
								    _q60 = do_valueize (valueize, _q60);
								    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
								      {
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (integer_onep (_q80))
											  {
											    {
											      tree captures[6] ATTRIBUTE_UNUSED = { _q41, _q20, _p1, _q40, _q80, _q81 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
								    case BIT_NOT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									  {
									    switch (TREE_CODE (_q70))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _q70))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case LSHIFT_EXPR:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    tree _q91 = gimple_assign_rhs2 (_a5);
											    _q91 = do_valueize (valueize, _q91);
											    if (integer_onep (_q90))
											      {
												{
												  tree captures[6] ATTRIBUTE_UNUSED = { _q41, _q20, _p1, _q40, _q90, _q91 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
					        break;
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
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					    switch (gimple_call_combined_fn (_c3))
					      {
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
					      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
					        if (gimple_call_num_args (_c3) == 2)
					          {
						    tree _q40 = gimple_call_arg (_c3, 0);
						    _q40 = do_valueize (valueize, _q40);
						    tree _q41 = gimple_call_arg (_c3, 1);
						    _q41 = do_valueize (valueize, _q41);
						    switch (TREE_CODE (_q41))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q41))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								case BIT_NOT_EXPR:
								  {
								    tree _q60 = gimple_assign_rhs1 (_a4);
								    _q60 = do_valueize (valueize, _q60);
								    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
								      {
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LSHIFT_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (integer_onep (_q80))
											  {
											    {
											      tree captures[6] ATTRIBUTE_UNUSED = { _q41, _p0, _p1, _q40, _q80, _q81 };
											      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												{
												  {
												    res_ops[0] = captures[0];
												    res_ops[1] = captures[1];
												    res_ops[2] = captures[2];
												    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
								    case BIT_NOT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
									  {
									    switch (TREE_CODE (_q70))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _q70))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case LSHIFT_EXPR:
											  {
											    tree _q90 = gimple_assign_rhs1 (_a5);
											    _q90 = do_valueize (valueize, _q90);
											    tree _q91 = gimple_assign_rhs2 (_a5);
											    _q91 = do_valueize (valueize, _q91);
											    if (integer_onep (_q90))
											      {
												{
												  tree captures[6] ATTRIBUTE_UNUSED = { _q41, _p0, _p1, _q40, _q90, _q91 };
												  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
												    {
												      {
													res_ops[0] = captures[0];
													res_ops[1] = captures[1];
													res_ops[2] = captures[2];
													if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
					        break;
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
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_1:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_2:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_4:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_8:
			      case CFN_BUILT_IN_SYNC_FETCH_AND_AND_16:
			        if (gimple_call_num_args (_c2) == 2)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_call_arg (_c2, 1);
				    _q31 = do_valueize (valueize, _q31);
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q31))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						case BIT_NOT_EXPR:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						      {
							switch (TREE_CODE (_q50))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q50))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LSHIFT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (integer_onep (_q70))
									  {
									    {
									      tree captures[6] ATTRIBUTE_UNUSED = { _q31, _p0, _p1, _q30, _q70, _q71 };
									      if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										{
										  {
										    res_ops[0] = captures[0];
										    res_ops[1] = captures[1];
										    res_ops[2] = captures[2];
										    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
				  {
				    tree _q31_pops[1];
				    if (gimple_nop_convert (_q31, _q31_pops, valueize))
				      {
					tree _q50 = _q31_pops[0];
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case BIT_NOT_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							  {
							    switch (TREE_CODE (_q60))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q60))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case LSHIFT_EXPR:
									  {
									    tree _q80 = gimple_assign_rhs1 (_a4);
									    _q80 = do_valueize (valueize, _q80);
									    tree _q81 = gimple_assign_rhs2 (_a4);
									    _q81 = do_valueize (valueize, _q81);
									    if (integer_onep (_q80))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q31, _p0, _p1, _q30, _q80, _q81 };
										  if (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
)
										    {
										      {
											res_ops[0] = captures[0];
											res_ops[1] = captures[1];
											res_ops[2] = captures[2];
											if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
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
			        break;
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
gimple_simplify_383 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > 1
 && (wi::to_wide (captures[2])
 == wi::max_value (TYPE_PRECISION (TREE_TYPE (captures[0])), SIGNED) - 1)
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1130;
	  {
	    res_op->set_op (icmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1130;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_int_cst (stype, 0);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 612, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1130:;
      }
    }
  return false;
}

bool
gimple_simplify_386 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1133;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 597, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1133:;
    }
  return false;
}

bool
gimple_simplify_389 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[2])) && !VECTOR_TYPE_P (TREE_TYPE (captures[2]))
)
    {
      {
 tree t = TREE_TYPE (captures[2]), cpx = build_complex_type (t);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1136;
	  {
	    res_op->set_op (out, type, 2);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		_o2[0] = captures[2];
		_o2[1] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), CFN_MUL_OVERFLOW, cpx, _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1136;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1136;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (t);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1136:;
      }
    }
  return false;
}

bool
gimple_simplify_395 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((
1
 || !sanitize_flags_p (SANITIZE_SHIFT_EXPONENT))
 && (TYPE_UNSIGNED (type)
 || shift == LSHIFT_EXPR
 || tree_expr_nonnegative_p (captures[0]))
 && wi::ges_p (wi::to_wide (uniform_integer_cst_p (captures[1])),
 element_precision (type))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1146;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 624, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1146:;
    }
  return false;
}

bool
gimple_simplify_398 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1149;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 627, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1149:;
  return false;
}

bool
gimple_simplify_400 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree tem = uniform_vector_p (captures[1]);
      if (tem
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1151;
	  {
	    res_op->set_op (shiftrotate, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] =  tem;
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 629, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1151:;
	}
  }
  return false;
}

bool
gimple_simplify_404 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      {
 tree mask = int_const_binop (shift, fold_convert (type, captures[3]), captures[4]);
	  if (mask
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1158;
	      {
		res_op->set_op (bit_op, type, 2);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1158;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[4];
		  gimple_match_op tem_op (res_op->cond.any_else (), shift, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1158;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] =  mask;
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 635, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1158:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_410 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((integer_zerop (captures[1]) || integer_onep (captures[1]))
)
    {
      if ((eqne == EQ_EXPR) ^ integer_zerop (captures[1])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1169;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 645, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1169:;
	}
      else
	{
	  if (types_match (type, TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1170;
	      {
		res_op->set_op (BIT_XOR_EXPR, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  build_one_cst (type);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 646, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1170:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_414 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
 && optimize
 && FLOAT_TYPE_P (type)
 && FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 && types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[2]))
 && types_match (type, TREE_TYPE (captures[3]))
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (as_internal_fn (tos),
 type, OPTIMIZE_FOR_BOTH)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1174;
      {
	res_op->set_op (tos, type, 3);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->ops[2] = captures[3];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 650, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1174:;
    }
  return false;
}

bool
gimple_simplify_420 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1192;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 656, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1192:;
    }
  return false;
}

bool
gimple_simplify_421 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (coss))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1193;
  {
    res_op->set_op (coss, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 657, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1193:;
  return false;
}

bool
gimple_simplify_423 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (coshs),
 const combined_fn ARG_UNUSED (atanhs),
 const combined_fn ARG_UNUSED (sqrts))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!flag_errno_math
)
    {
      {
 tree t_one = build_one_cst (type);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1195;
	  {
	    res_op->set_op (RDIV_EXPR, type, 2);
	    res_op->ops[0] =  t_one;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail1195;
		  _o2[0] = _r3;
		}
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail1195;
		  _o2[1] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1195;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), sqrts, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1195;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 659, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1195:;
      }
    }
  return false;
}

bool
gimple_simplify_426 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1198;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 662, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1198:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_428 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1201;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1201:;
  return false;
}

bool
gimple_simplify_431 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (hypots))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1204;
  {
    res_op->set_op (hypots, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 668, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1204:;
  return false;
}

bool
gimple_simplify_433 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (HYPOT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1206;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1206;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_real_truncate (type, dconst_sqrt2 ());
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1206:;
    }
  return false;
}

bool
gimple_simplify_435 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! TYPE_UNSIGNED (type)
 && ! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && single_use (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1208;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1208;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 672, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1208:;
    }
  return false;
}

bool
gimple_simplify_441 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1215;
      {
	res_op->set_op (BIT_AND_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 679, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1215:;
    }
  return false;
}

bool
gimple_simplify_448 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1222;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1222;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[1];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1222;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1222;
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1222;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1222;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 685, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1222:;
	}
  }
  return false;
}

bool
gimple_simplify_462 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1236;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1236:;
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
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1237;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (shift_type != TREE_TYPE (_o3[0])
						      && !useless_type_conversion_p (shift_type, TREE_TYPE (_o3[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o3[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r3) goto next_after_fail1237;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1237;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1237;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 699, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1237:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1238;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1238:;
					}
				    }
			      }
			    }
		      }
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_477 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1290;
      {
	res_op->set_op (GT_EXPR, type, 2);
	res_op->ops[0] = captures[3];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1290;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 724, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1290:;
    }
  return false;
}

bool
gimple_simplify_482 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1295;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1295:;
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
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1296;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (shift_type != TREE_TYPE (_o3[0])
						      && !useless_type_conversion_p (shift_type, TREE_TYPE (_o3[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o3[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r3) goto next_after_fail1296;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1296;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1296;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 699, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1296:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1297:;
					}
				    }
			      }
			    }
		      }
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_499 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1319;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1319;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1319:;
    }
  return false;
}

bool
gimple_simplify_503 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      {
 tree rotate_type = TREE_TYPE (captures[2]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1323;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (rotate_type != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (rotate_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, rotate_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1323;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      gimple_match_op tem_op (res_op->cond.any_else (), rotate, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1323;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1323:;
      }
    }
  return false;
}

bool
gimple_simplify_511 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) > 1
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1332;
      {
	res_op->set_op (op, type, 2);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    if (type != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1332;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1332;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 751, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1332:;
    }
  return false;
}

bool
gimple_simplify_523 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && (
 (INTEGRAL_TYPE_P (type)
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[2]), TREE_TYPE (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) <= TYPE_PRECISION (type)
 && TYPE_PRECISION (TREE_TYPE (captures[3])) <= TYPE_PRECISION (type))
 || (types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[3]))))
)
    {
      if (cmp == EQ_EXPR
)
	{
	  if (VECTOR_TYPE_P (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1380;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 763, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1380:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1381;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 764, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1381:;
	    }
	}
      else
	{
	  if (cmp == NE_EXPR
)
	    {
	      if (VECTOR_TYPE_P (type)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1382;
		  {
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 765, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1382:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1383;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 766, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1383:;
		}
	    }
	  else
	    {
	      if (cmp == LE_EXPR || cmp == UNLE_EXPR || cmp == LT_EXPR || cmp == UNLT_EXPR
)
		{
		  if (!HONOR_NANS (type)
)
		    {
		      if (VECTOR_TYPE_P (type)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1384;
			  {
			    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1384;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 767, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1384:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1385;
			  {
			    res_op->set_op (NOP_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1385;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 768, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1385:;
			}
		    }
		}
	      else
		{
		  if (cmp == GE_EXPR || cmp == UNGE_EXPR || cmp == GT_EXPR || cmp == UNGT_EXPR
)
		    {
		      if (!HONOR_NANS (type)
)
			{
			  if (VECTOR_TYPE_P (type)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1386;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1386;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 769, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1386:;
			    }
			  else
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1387;
			      {
				res_op->set_op (NOP_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1387;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1387:;
			    }
			}
		    }
		  else
		    {
		      if (cmp == UNEQ_EXPR
)
			{
			  if (!HONOR_NANS (type)
)
			    {
			      if (VECTOR_TYPE_P (type)
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1388;
				  {
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 771, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1388:;
				}
			      else
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1389;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1389:;
				}
			    }
			}
		      else
			{
			  if (cmp == LTGT_EXPR
)
			    {
			      if (!HONOR_NANS (type)
)
				{
				  if (VECTOR_TYPE_P (type)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1390;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 773, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1390:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1391;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1391:;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_541 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
    {
      if (ABSU_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1413;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1413;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1413:;
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1414;
	  {
	    tree tem;
	    tem = captures[2];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 789, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1414:;
	}
    }
  return false;
}

bool
gimple_simplify_555 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1428;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 800, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1428:;
  return false;
}

bool
gimple_simplify_561 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1437;
		  {
		    res_op->set_op (ABSU_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 803, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1437:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1438;
		  {
		    res_op->set_op (ABSU_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      if (stype != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1438;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 804, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1438:;
		}
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1439;
	  {
	    res_op->set_op (ABS_EXPR, type, 1);
	    res_op->ops[0] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 805, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1439:;
	}
    }
  return false;
}

bool
gimple_simplify_568 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1452;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1452;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1452;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 811, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1452:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1453;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[2];
			  if (stype != TREE_TYPE (_o3[0])
			      && !useless_type_conversion_p (stype, TREE_TYPE (_o3[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o3[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail1453;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1453;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1453;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1453:;
		}
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1454;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1454;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1454;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 813, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1454:;
	}
    }
  return false;
}

bool
gimple_simplify_583 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 {
 if (tree_fits_shwi_p (captures[3]))
 {
 HOST_WIDE_INT valw = tree_to_shwi (captures[3]);
 if ((int) valw == valw)
 {
 val = valw;
 ifn = IFN_CTZ;
 }
 }
 }
 else if (direct_internal_fn_supported_p (IFN_CTZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH)
 && CTZ_DEFINED_VALUE_AT_ZERO
 (SCALAR_INT_TYPE_MODE (TREE_TYPE (captures[2])), val) == 2)
 ifn = IFN_CTZ;
      if (ifn == IFN_CTZ && wi::to_widest (captures[3]) == val
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1479;
	  {
	    res_op->set_op (CFN_CTZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 824, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1479:;
	}
  }
  return false;
}

bool
gimple_simplify_592 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
0
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1488;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 830, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1488:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1489;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 831, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1489:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1490;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1490:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1491;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1491:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_610 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1521;
  {
    res_op->set_op (bitop, type, 2);
    res_op->ops[0] = captures[0];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      gimple_match_op tem_op (res_op->cond.any_else (), bswap, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1521;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 851, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1521:;
  return false;
}

bool
gimple_simplify_619 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (uncond_op),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[1]);
      if (vectorized_internal_fn_supported_p (as_internal_fn (cond_op), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1530;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[5], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[2];
	      _o1[2] = captures[3];
	      _o1[3] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1530;
		_o1[4] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1530;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 855, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1530:;
	}
  }
  return false;
}

bool
gimple_simplify_628 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1539;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      _o1[3] = captures[5];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1539;
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[7];
	      _o1[6] = captures[8];
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_len_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1539;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 864, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1539:;
	}
  }
  return false;
}

bool
gimple_simplify_642 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1553;
  {
    res_op->set_op (fns, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1553:;
  return false;
}

bool
gimple_simplify_646 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (floors),
 const combined_fn ARG_UNUSED (truncs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1557;
      {
	res_op->set_op (truncs, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 882, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1557:;
    }
  return false;
}

bool
gimple_simplify_653 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1564;
	  {
	    res_op->set_op (lfn, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1564:;
	}
    }
  return false;
}

bool
gimple_simplify_663 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1574;
      {
	res_op->set_op (CFN_FMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 899, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1574:;
    }
  return false;
}

bool
gimple_simplify_671 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (CTZ))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 combined_fn cfn = CFN_LAST;
 tree type0 = TREE_TYPE (captures[1]);
 if (TREE_CODE (type0) == BITINT_TYPE)
 {
 if (TYPE_PRECISION (type0) > MAX_FIXED_MODE_SIZE)
 cfn = CFN_CTZ;
 else
 type0
 = build_nonstandard_integer_type (TYPE_PRECISION (type0),
 1);
 }
 type0 = unsigned_type_for (type0);
 if (cfn == CFN_LAST
 && direct_internal_fn_supported_p (IFN_CTZ, type0,
 OPTIMIZE_FOR_BOTH))
 cfn = CFN_CTZ;
 if (cfn == CFN_LAST
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > BITS_PER_WORD
 && !direct_internal_fn_supported_p (IFN_CTZ,
 TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_BOTH))
 {
 if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (unsigned_type_node))
 cfn = CFN_BUILT_IN_CTZ;
 else if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (long_long_unsigned_type_node))
 cfn = CFN_BUILT_IN_CTZLL;
 }
 if (sanitize_flags_p (SANITIZE_BUILTIN)
 && (!cfun
 || (cfun->curr_properties & PROP_ssa) == 0))
 cfn = CFN_LAST;
	  if (cfn == CFN_CTZ
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1582;
	      {
		res_op->set_op (CFN_CTZ, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1582;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1582:;
	    }
	  else
	    {
	      if (cfn == CFN_BUILT_IN_CTZ
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1583;
		  {
		    res_op->set_op (CFN_BUILT_IN_CTZ, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type0 != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1583;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 905, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1583:;
		}
	      else
		{
		  if (cfn == CFN_BUILT_IN_CTZLL
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1584;
		      {
			res_op->set_op (CFN_BUILT_IN_CTZLL, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (type0 != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1584;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1584:;
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_688 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (reduc))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int i = single_nonzero_element (captures[1]);
      if (i >= 0
)
	{
	  {
 tree elt = vector_cst_elt (captures[1], i);
 tree elt_type = TREE_TYPE (elt);
 unsigned int elt_bits = tree_to_uhwi (TYPE_SIZE (elt_type));
 tree size = bitsize_int (elt_bits);
 tree pos = bitsize_int (elt_bits * i);
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1608;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[3], _r2;
		    _o2[0] = captures[0];
		    _o2[1] =  size;
		    _o2[2] =  pos;
		    gimple_match_op tem_op (res_op->cond.any_else (), BIT_FIELD_REF, elt_type, _o2[0], _o2[1], _o2[2]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1608;
		    _o1[0] = _r2;
		  }
		  _o1[1] =  elt;
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, elt_type, _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1608;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1608:;
	  }
	}
  }
  return false;
}

bool
gimple_simplify_CFN_COS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_COS;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1646;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1646:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_COS;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1647;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1647:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      case CFN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_422 (res_op, seq, valueize, type, captures, CFN_COS, CFN_ATAN, CFN_SQRT, CFN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CCOS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1670;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOS, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1670:;
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
gimple_simplify_CFN_BUILT_IN_CCOSH (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1673;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOSH, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1673:;
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
gimple_simplify_CFN_BUILT_IN_CABSL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      case CONJ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1685;
		    {
		      res_op->set_op (CFN_BUILT_IN_CABSL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1685:;
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1686;
		    {
		      res_op->set_op (CFN_BUILT_IN_CABSL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1686:;
		  }
	          break;
	        }
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_zerop (_q21))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1687;
			{
			  res_op->set_op (ABS_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 965, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1687:;
		      }
		    }
		  if (real_zerop (_q20))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1688;
			{
			  res_op->set_op (ABS_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 965, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1688:;
		      }
		    }
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1689;
			    {
			      res_op->set_op (MULT_EXPR, type, 2);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail1689;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] =  build_real_truncate (type, dconst_sqrt2 ());
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1689:;
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
  return false;
}

bool
gimple_simplify_REALPART_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1742;
		    {
		      tree tem;
		      tem = captures[0];
		      res_op->set_value (tem);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 986, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1742:;
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
			      case CONJ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				    gimple_seq *lseq = seq;
				    if (lseq
				        && (!single_use (captures[0])
				            || !single_use (captures[1])))
				      lseq = NULL;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1743;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[2];
					gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail1743;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 987, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1743:;
				  }
			          break;
			        }
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    const enum tree_code op = PLUS_EXPR;
				    gimple_seq *lseq = seq;
				    if (lseq
				        && (!single_use (captures[0])
				            || !single_use (captures[1])))
				      lseq = NULL;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1744;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[2], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1744;
					  _o1[0] = _r2;
					}
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[3];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1744;
					  _o1[1] = _r2;
					}
					gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail1744;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 988, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1744:;
				  }
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    const enum tree_code op = MINUS_EXPR;
				    gimple_seq *lseq = seq;
				    if (lseq
				        && (!single_use (captures[0])
				            || !single_use (captures[1])))
				      lseq = NULL;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1745;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[2], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1745;
					  _o1[0] = _r2;
					}
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[3];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1745;
					  _o1[1] = _r2;
					}
					gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail1745;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 988, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1745:;
				  }
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_CEXPIF:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])
				              || !single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1746;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSF, TREE_TYPE (_o1[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1746;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1746:;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_CEXPIL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])
				              || !single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1747;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSL, TREE_TYPE (_o1[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1747;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1747:;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_CEXPI:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])
				              || !single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1748;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COS, TREE_TYPE (_o1[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1748;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1748:;
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
	      case CONJ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])
		            || !single_use (captures[1])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1749;
		    {
		      res_op->set_op (NOP_EXPR, type, 1);
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1749;
			res_op->ops[0] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 987, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1749:;
		  }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    const enum tree_code op = PLUS_EXPR;
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])
		            || !single_use (captures[1])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1750;
		    {
		      res_op->set_op (NOP_EXPR, type, 1);
		      {
			tree _o1[2], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1750;
			  _o1[0] = _r2;
			}
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[3];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1750;
			  _o1[1] = _r2;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1750;
			res_op->ops[0] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 988, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1750:;
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    const enum tree_code op = MINUS_EXPR;
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])
		            || !single_use (captures[1])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1751;
		    {
		      res_op->set_op (NOP_EXPR, type, 1);
		      {
			tree _o1[2], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1751;
			  _o1[0] = _r2;
			}
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[3];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1751;
			  _o1[1] = _r2;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1751;
			res_op->ops[0] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 988, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1751:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CEXPIF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1752;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSF, TREE_TYPE (_o1[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1752;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1752:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPIL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1753;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSL, TREE_TYPE (_o1[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1753;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1753:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPI:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1754;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COS, TREE_TYPE (_o1[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1754;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1754:;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_LOG (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_637 (res_op, seq, valueize, type, captures, CFN_LOG))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		if (real_onep (_q20))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_LOG))
		        return true;
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1788;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1788:;
			}
		    }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_POW))
		        return true;
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_EXP2)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1789;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1789;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1789:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_SQRT)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1790;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1790;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1790:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_EXP10)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1791;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1791;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1791:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LOG10 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_637 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		if (real_onep (_q20))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
		        return true;
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1820;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1820;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1820:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_POW))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_CBRT)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1821;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1821;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1821:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP2)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1822;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1822;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1822:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_SQRT)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1823;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1823;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1823:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1824;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1824:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1825;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1825:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POW10F (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LOG10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1848;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1848:;
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
  return false;
}

bool
gimple_simplify_CFN_SQRT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1872;
			  {
			    res_op->set_op (CFN_EXP, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1872;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1872:;
			}
		    }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1873;
			  {
			    res_op->set_op (CFN_POW, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1873;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1873;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1873:;
			}
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1874;
			  {
			    res_op->set_op (CFN_EXP2, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1874;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1874:;
			}
		    }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1875;
			  {
			    res_op->set_op (CFN_POW, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real (type, dconst_quarter ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1875:;
			}
		    }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1876;
			  {
			    res_op->set_op (CFN_EXP10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1876;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1876:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SINF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_ATANF, CFN_BUILT_IN_SQRTF, CFN_BUILT_IN_COPYSIGNF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SINL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINL, CFN_BUILT_IN_ATANL, CFN_BUILT_IN_SQRTL, CFN_BUILT_IN_COPYSIGNL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_SINH (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_ATANH:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_641 (res_op, seq, valueize, type, captures, CFN_SINH, CFN_ATANH, CFN_SQRT))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_TRUNCF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_FLOORF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF16))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF16))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF16, CFN_BUILT_IN_TRUNCF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_FLOORF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128X))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128X, CFN_BUILT_IN_TRUNCF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CEILF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ROUNDF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF32))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_ROUND (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_ROUND:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_ROUND))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_ROUND))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF128 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_NEARBYINTF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF128))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL, CFN_BUILT_IN_RINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL, CFN_BUILT_IN_RINTF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_RINTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLFLOORL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_649 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL, CFN_BUILT_IN_LLFLOOR))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_650 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL, CFN_BUILT_IN_LLFLOORF))
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
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL))
        return true;
    }
  }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL, CFN_BUILT_IN_LFLOORL, CFN_BUILT_IN_LLFLOORL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLROUNDL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_649 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDL, CFN_BUILT_IN_LLROUND))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_650 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDL, CFN_BUILT_IN_LLROUNDF))
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDL, CFN_BUILT_IN_LROUNDL, CFN_BUILT_IN_LLROUNDL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LCEIL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_650 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEIL, CFN_BUILT_IN_LCEILF))
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEIL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IRINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_650 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINT, CFN_BUILT_IN_IRINTF))
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINT))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINT, CFN_BUILT_IN_LRINT, CFN_BUILT_IN_LLRINT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LCEILF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEILF))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IROUNDF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF, CFN_BUILT_IN_LROUNDF, CFN_BUILT_IN_LLROUNDF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_LLRINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_LLRINT))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_IRINT, CFN_LRINT, CFN_LLRINT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_SIGNBIT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_SIGNBIT))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_SIGNBIT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_CTZ (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_669 (res_op, seq, valueize, type, captures, CFN_CTZ))
		      return true;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_670 (res_op, seq, valueize, type, captures, CFN_CTZ))
		      return true;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_671 (res_op, seq, valueize, type, captures, CFN_CTZ))
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
		  case NEGATE_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_667 (res_op, seq, valueize, type, captures, CFN_CTZ))
			  return true;
		      }
		      break;
		    }
		  case ABS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_668 (res_op, seq, valueize, type, captures, CFN_CTZ))
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
}
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_PARITYLL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
		      return true;
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
			      case LROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_680 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
				      return true;
				  }
			          break;
			        }
			      case RROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_680 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
				      return true;
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
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
		      return true;
		  }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_683 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
		      return true;
		  }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_683 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
		      return true;
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
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_IOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
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
					case VECTOR_CST:
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
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
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (gimple_simplify_689 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
		      return true;
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
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1911;
			  {
			    res_op->set_op (BIT_IOR_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_IOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1911;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_IOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1911;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1010, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1911:;
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

bool
gimple_simplify_PLUS_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1961;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1011, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1961:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_53 (res_op, seq, valueize, type, captures))
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
		    case REAL_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_54 (res_op, seq, valueize, type, captures, PLUS_EXPR, PLUS_EXPR))
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
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_54 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR))
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
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case MAX_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      switch (TREE_CODE (_q50))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q50))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case NEGATE_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							{
							  if (integer_zerop (_q51))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
								if (gimple_simplify_55 (res_op, seq, valueize, type, captures))
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
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  if (integer_zerop (_q21))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case MAX_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if (tree_swap_operands_p (_q60, _q61))
						        std::swap (_q60, _q61);
						      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
							{
							  if (integer_zerop (_q61))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
								if (gimple_simplify_55 (res_op, seq, valueize, type, captures))
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
			      case PLUS_EXPR:
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
						      {
 bool overflowed = true;
 wi::overflow_type ovf1;
 wi::overflow_type ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[4]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::add (mul, wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 int_range_max vr0;
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE
 && get_global_range_query ()->range_of_expr (vr0, captures[2])
 && !vr0.varying_p () && !vr0.undefined_p ())
 {
 wide_int wmin0 = vr0.lower_bound ();
 wide_int wmax0 = vr0.upper_bound ();
 wmin0 = wi::mul (wmin0, wi::to_wide (captures[4]), TYPE_SIGN (type), &ovf1);
 wmax0 = wi::mul (wmax0, wi::to_wide (captures[4]), TYPE_SIGN (type), &ovf2);
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE)
 {
 wi::add (wmin0, mul, TYPE_SIGN (type), &ovf1);
 wi::add (wmax0, mul, TYPE_SIGN (type), &ovf2);
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE)
 overflowed = false;
 }
 }
 }
 else
 overflowed = false;
							  if (!overflowed
)
							    {
							      gimple_seq *lseq = seq;
							      if (lseq
							          && (!single_use (captures[0])
							              || !single_use (captures[1])))
							        lseq = NULL;
							      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1962;
							      {
								res_op->set_op (PLUS_EXPR, type, 2);
								{
								  tree _o1[2], _r1;
								  _o1[0] = captures[2];
								  _o1[1] = captures[4];
								  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								  tem_op.resimplify (lseq, valueize);
								  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								  if (!_r1) goto next_after_fail1962;
								  res_op->ops[0] = _r1;
								}
								res_op->ops[1] =  wide_int_to_tree (type, add);
								res_op->resimplify (lseq, valueize);
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
								return true;
							      }
next_after_fail1962:;
							    }
						      }
						    }
						    break;
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
	        }
	      case LSHIFT_EXPR:
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
			      case LSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_56 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			      if (gimple_simplify_57 (res_op, seq, valueize, type, captures))
			        return true;
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
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    if (gimple_simplify_58 (res_op, seq, valueize, type, captures))
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
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
      if (gimple_simplify_53 (res_op, seq, valueize, type, captures))
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
		    if (gimple_simplify_58 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (integer_onep (_q31))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			    if (gimple_simplify_59 (res_op, seq, valueize, type, captures))
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
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_onep (_q21))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			    if (gimple_simplify_59 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_22 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      case BIT_IOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_60 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case BIT_AND_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (tree_swap_operands_p (_q60, _q61))
							  std::swap (_q60, _q61);
							switch (TREE_CODE (_q61))
							  {
							  case INTEGER_CST:
							    {
							      {
								tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q60, _q61 };
								if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
				    case BIT_AND_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					switch (TREE_CODE (_q51))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
						if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_22 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_60 (res_op, seq, valueize, type, captures))
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
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
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
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
							{
							  if (integer_all_onesp (_p1))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
								if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
								  return true;
							      }
							    }
						        }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
						    {
						      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
							{
							  if (integer_all_onesp (_p1))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
								if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
		{
		  tree _q20_pops[1];
		  if (gimple_nop_convert (_q20, _q20_pops, valueize))
		    {
		      tree _q30 = _q20_pops[0];
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree _q21_pops[1];
					if (gimple_nop_convert (_q21, _q21_pops, valueize))
					  {
					    tree _q70 = _q21_pops[0];
					    switch (TREE_CODE (_q70))
					      {
					      case SSA_NAME:
					        if (gimple *_d3 = get_def (valueize, _q70))
					          {
						    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						      switch (gimple_assign_rhs_code (_a3))
							{
							case BIT_IOR_EXPR:
							  {
							    tree _q80 = gimple_assign_rhs1 (_a3);
							    _q80 = do_valueize (valueize, _q80);
							    tree _q81 = gimple_assign_rhs2 (_a3);
							    _q81 = do_valueize (valueize, _q81);
							    if (tree_swap_operands_p (_q80, _q81))
							      std::swap (_q80, _q81);
							    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
							      {
								if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
								  {
								    if (integer_all_onesp (_p1))
								      {
									{
									  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
									  if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
									    return true;
									}
								      }
								  }
							      }
							    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
							      {
								if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
								  {
								    if (integer_all_onesp (_p1))
								      {
									{
									  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
									  if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
		    }
		}
		  {
		    tree _q21_pops[1];
		    if (gimple_nop_convert (_q21, _q21_pops, valueize))
		      {
			tree _q40 = _q21_pops[0];
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			      if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			  return true;
		      }
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
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _p1))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							switch (TREE_CODE (_q60))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q60))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case BIT_AND_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (tree_swap_operands_p (_q70, _q71))
									  std::swap (_q70, _q71);
									switch (TREE_CODE (_q71))
									  {
									  case INTEGER_CST:
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q60, _q70, _q71 };
										if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
						    case BIT_AND_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (tree_swap_operands_p (_q60, _q61))
							  std::swap (_q60, _q61);
							switch (TREE_CODE (_q61))
							  {
							  case INTEGER_CST:
							    {
							      {
								tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1, _q60, _q61 };
								if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
			          break;
			        }
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q30 };
				    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if (integer_zerop (_q22))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case COND_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
					{
					  if (integer_zerop (_q61))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1963;
						{
						  res_op->set_op (COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[0] = unshare_expr (res_op->ops[0]);
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1963:;
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
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case COND_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
					{
					  if (integer_zerop (_q62))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1964;
						{
						  res_op->set_op (COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[0] = unshare_expr (res_op->ops[0]);
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1964:;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
							  break;
							case GE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
							  break;
							case GT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case NE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
							  break;
							case NE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case EQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
							  break;
							case EQ_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
							  break;
							case LT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
							  break;
							case LE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case UNORDERED_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case ORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
							  break;
							case ORDERED_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case ORDERED_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
							  break;
							case UNORDERED_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
							  break;
							case GE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
							  break;
							case GT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
							  break;
							case LE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
							  break;
							case LT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case UNEQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LTGT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
							  break;
							case LTGT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      case LTGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNEQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
							  break;
							case UNEQ_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
				        default:;
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case LT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
						        break;
						      case GE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
						        break;
						      case GT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case EQ_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case NE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
						        break;
						      case NE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case NE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case EQ_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
						        break;
						      case EQ_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case GE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
						        break;
						      case LT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case GT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
						        break;
						      case LE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case UNORDERED_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case ORDERED_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
						        break;
						      case ORDERED_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case ORDERED_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case UNORDERED_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
						        break;
						      case UNORDERED_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case UNLT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
						        break;
						      case GE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case UNLE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
						        break;
						      case GT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case UNGT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
						        break;
						      case LE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case UNGE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
						        break;
						      case LT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case UNEQ_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LTGT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
						        break;
						      case LTGT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
				      default:;
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LTGT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case UNEQ_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
						        break;
						      case UNEQ_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if (integer_zerop (_q22))
		    {
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
					  if (integer_zerop (_q61))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1965;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1965:;
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
		  if (integer_zerop (_q21))
		    {
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
					  if (integer_zerop (_q62))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1966;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1966:;
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
			      case EQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case NE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
			      case NE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case EQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
			      case UNORDERED_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case ORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
			      case ORDERED_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
			      case UNLT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
			      case UNLE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
			      case UNGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
			      case UNGE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
			      case UNEQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LTGT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
			      case LTGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNEQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
		  case MINUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      switch (TREE_CODE (_q31))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q31))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_IOR_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if (tree_swap_operands_p (_q70, _q71))
						        std::swap (_q70, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
							    {
							      if (integer_all_onesp (_p1))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
								    if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
							{
							  if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
							    {
							      if (integer_all_onesp (_p1))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
								    if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
		    {
		      tree _q30_pops[1];
		      if (gimple_nop_convert (_q30, _q30_pops, valueize))
		        {
			  tree _q40 = _q30_pops[0];
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q40))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case BIT_AND_EXPR:
				        {
					  tree _q50 = gimple_assign_rhs1 (_a2);
					  _q50 = do_valueize (valueize, _q50);
					  tree _q51 = gimple_assign_rhs2 (_a2);
					  _q51 = do_valueize (valueize, _q51);
					  if (tree_swap_operands_p (_q50, _q51))
					    std::swap (_q50, _q51);
					  {
					    tree _q31_pops[1];
					    if (gimple_nop_convert (_q31, _q31_pops, valueize))
					      {
						tree _q80 = _q31_pops[0];
						switch (TREE_CODE (_q80))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q80))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_IOR_EXPR:
							      {
								tree _q90 = gimple_assign_rhs1 (_a3);
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = gimple_assign_rhs2 (_a3);
								_q91 = do_valueize (valueize, _q91);
								if (tree_swap_operands_p (_q90, _q91))
								  std::swap (_q90, _q91);
								if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								  {
								    if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
								      {
									if (integer_all_onesp (_p1))
									  {
									    {
									      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
									      if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
									        return true;
									    }
									  }
								      }
								  }
								if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
								  {
								    if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
								      {
									if (integer_all_onesp (_p1))
									  {
									    {
									      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
									      if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
				    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
		    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
		  case MINUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      {
			tree _q31_pops[1];
			if (gimple_nop_convert (_q31, _q31_pops, valueize))
			  {
			    tree _q50 = _q31_pops[0];
			    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
				  if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			    if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		      if (CONSTANT_CLASS_P (_q31))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_64 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR))
				  return true;
			      }
			    }
		        }
		      if (CONSTANT_CLASS_P (_q30))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_65 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				  return true;
			      }
			    }
		        }
		      break;
		    }
		  case PLUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      if (tree_swap_operands_p (_q30, _q31))
		        std::swap (_q30, _q31);
		      if (CONSTANT_CLASS_P (_q31))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_64 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR))
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
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree _q31_pops[1];
		    if (gimple_nop_convert (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			      if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
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
{
  tree _p1_pops[1];
  if (gimple_nop_convert (_p1, _p1_pops, valueize))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q30))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case MINUS_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      {
			tree _q41_pops[1];
			if (gimple_nop_convert (_q41, _q41_pops, valueize))
			  {
			    tree _q60 = _q41_pops[0];
			    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
				  if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
			    if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
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
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_64 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR))
			      return true;
			  }
		        }
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q50, _q20 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_67 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
					if (gimple_simplify_67 (res_op, seq, valueize, type, captures))
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_64 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR))
			      return true;
			  }
		        }
		    }
		  if (CONSTANT_CLASS_P (_q20))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_65 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case POINTER_DIFF_EXPR:
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
			      case POINTER_DIFF_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_68 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
					if (gimple_simplify_68 (res_op, seq, valueize, type, captures))
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
			      case PLUS_EXPR:
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
						if (gimple_simplify_69 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
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
						if (gimple_simplify_69 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
		        }
			{
			  switch (TREE_CODE (_p1))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				  if (!TYPE_SATURATING (type)
)
				    {
				      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
					{
					  if (TREE_CODE (TREE_TYPE (captures[1])) == INTEGER_TYPE
 && TREE_CODE (type) == INTEGER_TYPE
 && TYPE_PRECISION (type) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
					    {
					      {
 wi::overflow_type min_ovf = wi::OVF_OVERFLOW,
 max_ovf = wi::OVF_OVERFLOW;
 tree inner_type = TREE_TYPE (captures[1]);
 wide_int w1
 = wide_int::from (wi::to_wide (captures[2]), TYPE_PRECISION (inner_type),
 TYPE_SIGN (inner_type));
 int_range_max vr;
 if (get_global_range_query ()->range_of_expr (vr, captures[1])
 && !vr.varying_p () && !vr.undefined_p ())
 {
 wide_int wmin0 = vr.lower_bound ();
 wide_int wmax0 = vr.upper_bound ();
 wi::add (wmin0, w1, TYPE_SIGN (inner_type), &min_ovf);
 wi::add (wmax0, w1, TYPE_SIGN (inner_type), &max_ovf);
 }
						  if (min_ovf == wi::OVF_NONE && max_ovf == wi::OVF_NONE
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1967;
						      {
							res_op->set_op (NOP_EXPR, type, 1);
							{
							  tree _o1[2], _r1;
							  _o1[0] = captures[1];
							  _o1[1] =  wide_int_to_tree (TREE_TYPE (captures[1]), w1);
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail1967;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail1967:;
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_70 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
						    {
						      {
							tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
							if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
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
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
						    {
						      {
							tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
							if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if (integer_each_onep (_p1))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_72 (res_op, seq, valueize, type, captures))
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
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  if (integer_each_onep (_p1))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_72 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_74 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
			if (gimple_simplify_74 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_75 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_75 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			  return true;
		      }
		    }
		  if (integer_nonzerop (_q20))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      if (gimple_simplify_76 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			    break;
			  }
		        default:;
		        }
		    }
		  if (integer_nonzerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      if (gimple_simplify_76 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			    break;
			  }
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (gimple_zero_one_valued_p (_q21, valueize))
				    {
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
					    if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
		if (gimple_zero_one_valued_p (_q20, valueize))
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q21))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					  if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			      if (gimple_simplify_57 (res_op, seq, valueize, type, captures))
			        return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
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
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case LSHIFT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
						    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && tree_fits_uhwi_p (captures[2])
 && tree_to_uhwi (captures[2]) < element_precision (type)
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) < element_precision (type)
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || optab_handler (smul_optab,
 TYPE_MODE (type)) != CODE_FOR_nothing)
)
						      {
							{
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t)) t = unsigned_type_for (t);
 unsigned int prec = element_precision (type);
 wide_int w = wi::set_bit_in_zero (tree_to_uhwi (captures[2]), prec);
 w += wi::set_bit_in_zero (tree_to_uhwi (captures[4]), prec);
 tree cst = wide_int_to_tree (VECTOR_TYPE_P (t) ? TREE_TYPE (t)
 : t, w);
 cst = build_uniform_cst (t, cst);
							    gimple_seq *lseq = seq;
							    if (lseq
							        && (!single_use (captures[0])
							            || !single_use (captures[3])))
							      lseq = NULL;
							    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1968;
							    {
							      res_op->set_op (NOP_EXPR, type, 1);
							      {
								tree _o1[2], _r1;
								{
								  tree _o2[1], _r2;
								  _o2[0] = captures[1];
								  if (t != TREE_TYPE (_o2[0])
								      && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
								    {
								      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
								      tem_op.resimplify (lseq, valueize);
								      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
								      if (!_r2) goto next_after_fail1968;
								    }
								  else
								    _r2 = _o2[0];
								  _o1[0] = _r2;
								}
								_o1[1] =  cst;
								gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								tem_op.resimplify (lseq, valueize);
								_r1 = maybe_push_res_to_seq (&tem_op, lseq);
								if (!_r1) goto next_after_fail1968;
								res_op->ops[0] = _r1;
							      }
							      res_op->resimplify (lseq, valueize);
							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
							      return true;
							    }
next_after_fail1968:;
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
	      case MIN_EXPR:
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
			      case MAX_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1969;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1969:;
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
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1970;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1970:;
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
	      case MAX_EXPR:
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
			      case MIN_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1971;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1971:;
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
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1972;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1972:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
					    if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
		if (gimple_zero_one_valued_p (_q30, valueize))
		  {
		    switch (TREE_CODE (_q31))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q31))
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
				    if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q30 };
					  if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
			      case TRUNC_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case TRUNC_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
				    }
			          break;
			        }
			      case CEIL_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case CEIL_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
				    }
			          break;
			        }
			      case FLOOR_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case FLOOR_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
				    }
			          break;
			        }
			      case ROUND_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case ROUND_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case TRUNC_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case TRUNC_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
				    }
			          break;
			        }
			      case CEIL_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case CEIL_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
				    }
			          break;
			        }
			      case FLOOR_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case FLOOR_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
				    }
			          break;
			        }
			      case ROUND_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case ROUND_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
	      case TRUNC_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
				      break;
				    default:;
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case TRUNC_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
	      case CEIL_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case CEIL_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
				      break;
				    default:;
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case CEIL_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
	      case FLOOR_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case FLOOR_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
				      break;
				    default:;
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case FLOOR_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
	      case ROUND_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case ROUND_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
				      break;
				    default:;
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case ROUND_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
	    {
	      {
 tree tem = const_unop (NEGATE_EXPR, type, captures[1]);
		  if (!TREE_OVERFLOW (tem) || !flag_trapping_math
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1973;
		      {
			res_op->set_op (MINUS_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  tem;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1025, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1973:;
		    }
	      }
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
	if (SCALAR_FLOAT_TYPE_P (type)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1974;
	    {
	      res_op->set_op (MULT_EXPR, type, 2);
	      res_op->ops[0] = captures[0];
	      res_op->ops[1] =  build_real (type, dconst2);
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1026, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail1974:;
	  }
	else
	  {
	    if (INTEGRAL_TYPE_P (type)
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1975;
		{
		  res_op->set_op (MULT_EXPR, type, 2);
		  res_op->ops[0] = captures[0];
		  res_op->ops[1] =  build_int_cst (type, 2);
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1027, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail1975:;
	      }
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1976;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1976;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1976;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1976:;
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1977;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1977;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1977;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1977:;
		      }
		  }
		  if (integer_each_onep (_q21))
		    {
		      if (integer_zerop (_q22))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21, _q22 };
			    if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1978;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1978;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1978;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1978:;
		      }
		  }
	          break;
	        }
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_COND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      tree _q42 = gimple_assign_rhs3 (_a2);
				      _q42 = do_valueize (valueize, _q42);
				      if (integer_each_onep (_q41))
					{
					  if (integer_zerop (_q42))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
						if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
				  case VEC_COND_EXPR:
				    {
				      tree _q30 = gimple_assign_rhs1 (_a2);
				      _q30 = do_valueize (valueize, _q30);
				      tree _q31 = gimple_assign_rhs2 (_a2);
				      _q31 = do_valueize (valueize, _q31);
				      tree _q32 = gimple_assign_rhs3 (_a2);
				      _q32 = do_valueize (valueize, _q32);
				      if (integer_each_onep (_q31))
					{
					  if (integer_zerop (_q32))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q30, _q31, _q32 };
						if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
		  if (integer_each_onep (_q31))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
			    if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
	      case RDIV_EXPR:
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
			      case RDIV_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_80 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_POPCOUNT:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
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
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
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
						  break;
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTLL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
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
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
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
						  break;
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_POPCOUNT:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
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
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
												    return true;
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
						  break;
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTIMAX:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
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
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
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
						  break;
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
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
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
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
						  break;
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (gimple_vec_same_elem_p (_q31, valueize))
				    {
				      if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if (gimple_vec_same_elem_p (_q30, valueize))
				    {
				      if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1979;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1979;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1979:;
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
		      switch (TREE_CODE (_q22))
		        {
			case VECTOR_CST:
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
						    switch (TREE_CODE (_q62))
						      {
						      case VECTOR_CST:
						        {
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
							    if (gimple_simplify_86 (res_op, seq, valueize, type, captures, PLUS_EXPR))
							      return true;
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
			  }
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LOG:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG))
					  return true;
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
	      case CFN_BUILT_IN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POPCOUNT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
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
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNT:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
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
	      case CFN_BUILT_IN_LOG2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2))
					  return true;
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
	      case CFN_BUILT_IN_LOGF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOGF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF))
					  return true;
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
	      case CFN_BUILT_IN_LOGL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOGL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL))
					  return true;
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
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POPCOUNTLL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
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
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTLL:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
	      case CFN_BUILT_IN_LOG10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F))
					  return true;
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
	      case CFN_BUILT_IN_LOG10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L))
					  return true;
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
	      case CFN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_POPCOUNT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
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
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_POPCOUNT:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
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
	      case CFN_LOG:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_LOG:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_LOG))
					  return true;
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
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POPCOUNTIMAX:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTIMAX:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
	      case CFN_LOG2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_LOG2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_LOG2))
					  return true;
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
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POPCOUNTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
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
				default:;
				}
		          }
		        break;
		      default:;
		      }
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
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTL:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
	      case CFN_LOG10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_LOG10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_LOG10))
					  return true;
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
	      case CFN_BUILT_IN_LOG10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
					  return true;
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
	      case CFN_BUILT_IN_LOG2F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG2F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
					  return true;
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
	      case CFN_BUILT_IN_LOG2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_LOG2L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L))
					  return true;
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
	      case VEC_PERM_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if (gimple_vec_same_elem_p (_q41, valueize))
				    {
				      if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q41, _q32, _p0 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if (gimple_vec_same_elem_p (_q40, valueize))
				    {
				      if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q40, _q32, _p0 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
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
gimple_simplify_BIT_INSERT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
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
	      case BIT_FIELD_REF:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 1);
		      if ((TREE_CODE (_q31) == SSA_NAME
		           || is_gimple_min_invariant (_q31)))
		        {
			  _q31 = do_valueize (valueize, _q31);
			  tree _q32 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 2);
			  if ((TREE_CODE (_q32) == SSA_NAME
			       || is_gimple_min_invariant (_q32)))
			    {
			      _q32 = do_valueize (valueize, _q32);
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2816;
					    {
					      res_op->set_op (VEC_PERM_EXPR, type, 3);
					      res_op->ops[0] = captures[0];
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[2];
						gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2816;
						res_op->ops[1] = _r1;
					      }
					      res_op->ops[2] =  vec_perm_indices_to_tree (build_vector_type (ssizetype, nunits),
 sel);
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1243, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2816:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMA (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
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
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
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
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
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
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
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
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
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
gimple_simplify_CFN_FMA (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_FMA))
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
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_FMA))
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
		    if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_FMA))
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
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_FMA))
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
				    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_FMA))
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
gimple_simplify_CFN_FNMS (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_665 (res_op, seq, valueize, type, captures))
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
				    if (gimple_simplify_666 (res_op, seq, valueize, type, captures))
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
		    if (gimple_simplify_665 (res_op, seq, valueize, type, captures))
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2819;
			{
			  res_op->set_op (CFN_FNMA, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1246, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2819:;
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
				    if (gimple_simplify_666 (res_op, seq, valueize, type, captures))
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
gimple_simplify_CFN_COND_MUL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    if (real_onep (_q40))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _p3 };
			  {
 tree signs = sign_mask_for (type);
			      if (signs
)
				{
				  {
 tree inttype = TREE_TYPE (signs);
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2833;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					{
					  tree _o1[4], _r1;
					  _o1[0] = captures[0];
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[1];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2833;
					    _o1[1] = _r2;
					  }
					  {
					    tree _o2[2], _r2;
					    {
					      tree _o3[1], _r3;
					      _o3[0] = captures[2];
					      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o3[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r3) goto next_after_fail2833;
					      _o2[0] = _r3;
					    }
					    _o2[1] =  signs;
					    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2833;
					    _o1[2] = _r2;
					  }
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2833;
					    _o1[3] = _r2;
					  }
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, inttype, _o1[0], _o1[1], _o1[2], _o1[3]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2833;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1259, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2833:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p2, _q31, _p3 };
			  {
 tree signs = sign_mask_for (type);
			      if (signs
)
				{
				  {
 tree inttype = TREE_TYPE (signs);
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2834;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					{
					  tree _o1[4], _r1;
					  _o1[0] = captures[0];
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[1];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2834;
					    _o1[1] = _r2;
					  }
					  {
					    tree _o2[2], _r2;
					    {
					      tree _o3[1], _r3;
					      _o3[0] = captures[2];
					      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o3[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r3) goto next_after_fail2834;
					      _o2[0] = _r3;
					    }
					    _o2[1] =  signs;
					    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2834;
					    _o1[2] = _r2;
					  }
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2834;
					    _o1[3] = _r2;
					  }
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, inttype, _o1[0], _o1[1], _o1[2], _o1[3]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2834;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1259, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2834:;
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
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2, tree _p3, tree _p4, tree _p5)
{
  switch (code.get_rep())
    {
    case -CFN_COND_LEN_ADD:
      return gimple_simplify_CFN_COND_LEN_ADD (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3, _p4, _p5);
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op*, gimple_seq*,
                 tree (*)(tree), code_helper,
                 const tree, tree, tree, tree, tree, tree, tree, tree)
{
  return false;
}
void
gimple_dump_logs (const char *file1, int line1_id, const char *file2, int line2, bool simplify)
{
  static int dbg_line_numbers[1266] = {
	/* 0 */ 161, 164, 173, 175, 178, 181, 183, 189, 197, 195, 
	/* 10 */ 199, 201, 205, 923, 921, 2060, 2071, 2052, 2058, 2063, 
	/* 20 */ 2068, 2284, 2288, 2290, 2292, 2294, 2296, 2298, 2300, 2327, 
	/* 30 */ 2343, 2351, 2333, 2891, 2893, 2895, 2899, 2909, 2911, 2915, 
	/* 40 */ 3099, 3109, 3120, 3125, 3130, 3163, 3168, 3134, 3138, 3142, 
	/* 50 */ 3146, 3174, 3180, 3186, 3150, 3195, 3199, 3224, 3230, 3252, 
	/* 60 */ 3236, 3265, 3204, 3208, 3218, 3212, 3269, 3285, 3320, 3297, 
	/* 70 */ 3338, 3345, 3387, 3354, 3363, 3378, 3372, 3400, 3409, 3418, 
	/* 80 */ 3427, 3437, 5597, 5837, 5848, 5826, 5855, 5887, 5862, 5874, 
	/* 90 */ 5894, 8787, 8808, 8832, 10928, 10931, 10936, 11151, 11154, 11175, 
	/* 100 */ 11180, 8607, 228, 1286, 1290, 1416, 1431, 1436, 1483, 1484, 
	/* 110 */ 1488, 1489, 1547, 1552, 1645, 1769, 1859, 1779, 1923, 1789, 
	/* 120 */ 1794, 1917, 1802, 1969, 1911, 1930, 1936, 2529, 1943, 1957, 
	/* 130 */ 2003, 2198, 2265, 2276, 2279, 2311, 2406, 2438, 4443, 4456, 
	/* 140 */ 4466, 2968, 2970, 4741, 4480, 4492, 6813, 6815, 6864, 6872, 
	/* 150 */ 10002, 10008, 10404, 10406, 254, 281, 282, 476, 1280, 4407, 
	/* 160 */ 1728, 1733, 1752, 1807, 1870, 3957, 3895, 4000, 4001, 4005, 
	/* 170 */ 4006, 4016, 4020, 4024, 4039, 4042, 4046, 3972, 3975, 3980, 
	/* 180 */ 4113, 4127, 4133, 4139, 4321, 4322, 4348, 4367, 4386, 4729, 
	/* 190 */ 5496, 6744, 8235, 8310, 9857, 9905, 9919, 10955, 11268, 905, 
	/* 200 */ 911, 1396, 1405, 1888, 1879, 1826, 2555, 3908, 3948, 3953, 
	/* 210 */ 3954, 3962, 3963, 3966, 3983, 4058, 4061, 4065, 4147, 4169, 
	/* 220 */ 4207, 4218, 4257, 4272, 4735, 6754, 8315, 9915, 10959, 1382, 
	/* 230 */ 1391, 1421, 1426, 1468, 1453, 1460, 1510, 1965, 1515, 1522, 
	/* 240 */ 1542, 1759, 1669, 1764, 1774, 1784, 1898, 1985, 1995, 1997, 
	/* 250 */ 2217, 2225, 2230, 2235, 2251, 2241, 2242, 2389, 2418, 2420, 
	/* 260 */ 2425, 2427, 2548, 3516, 3531, 3549, 3732, 3733, 3734, 3739, 
	/* 270 */ 3744, 3750, 3756, 3788, 3789, 3794, 3795, 3800, 3805, 3809, 
	/* 280 */ 3858, 3872, 3521, 3540, 3542, 3526, 7401, 9184, 430, 438, 
	/* 290 */ 444, 450, 482, 1225, 1245, 1250, 2044, 2045, 2082, 2564, 
	/* 300 */ 4888, 5482, 5489, 5539, 5542, 5592, 8228, 8642, 8472, 8479, 
	/* 310 */ 8636, 8681, 8686, 312, 868, 2316, 2543, 2582, 2592, 2631, 
	/* 320 */ 2637, 2640, 2645, 2810, 2661, 2663, 2664, 2667, 2669, 2670, 
	/* 330 */ 2672, 2674, 2676, 2678, 2680, 2682, 2696, 2697, 2731, 2816, 
	/* 340 */ 2841, 2757, 2784, 2824, 2829, 2854, 2861, 2927, 3830, 4671, 
	/* 350 */ 4679, 4682, 4688, 4691, 4718, 5026, 5027, 5061, 5065, 5194, 
	/* 360 */ 5034, 5035, 5079, 5082, 5083, 5088, 5091, 5094, 5095, 5047, 
	/* 370 */ 5050, 5239, 5243, 5248, 5507, 5657, 5661, 6824, 6840, 6842, 
	/* 380 */ 6854, 6884, 6890, 6891, 6906, 6907, 6911, 6929, 6934, 6966, 
	/* 390 */ 6974, 6984, 6993, 6997, 7003, 7010, 7026, 7030, 7034, 7041, 
	/* 400 */ 7042, 7047, 7048, 7055, 7056, 7058, 7059, 7075, 7086, 7098, 
	/* 410 */ 7102, 7104, 7109, 7112, 7115, 7123, 7185, 7186, 7190, 7191, 
	/* 420 */ 7198, 7202, 7206, 7209, 7215, 7216, 7220, 7223, 7230, 7250, 
	/* 430 */ 7253, 7256, 7259, 7308, 7311, 7315, 7322, 7328, 7336, 7345, 
	/* 440 */ 7346, 7444, 7454, 7493, 7499, 7515, 7528, 7530, 7532, 7558, 
	/* 450 */ 7600, 7579, 7580, 7587, 7589, 7605, 7611, 7616, 7625, 7631, 
	/* 460 */ 7637, 7642, 7647, 7679, 7661, 7671, 7692, 7756, 7794, 7796, 
	/* 470 */ 7798, 7800, 7802, 7804, 7808, 7810, 7833, 7856, 7968, 7975, 
	/* 480 */ 7976, 7984, 7985, 8148, 9228, 9230, 9318, 9320, 9321, 9327, 
	/* 490 */ 9343, 9345, 9347, 9365, 9366, 9642, 9645, 9659, 9668, 9732, 
	/* 500 */ 9733, 9787, 9789, 9865, 10274, 10276, 10278, 10710, 6820, 6831, 
	/* 510 */ 6833, 6941, 456, 1198, 1202, 1219, 8592, 8597, 8602, 516, 
	/* 520 */ 517, 528, 533, 540, 549, 557, 566, 612, 615, 803, 
	/* 530 */ 956, 973, 980, 990, 995, 1004, 1012, 1037, 1058, 577, 
	/* 540 */ 833, 837, 842, 848, 852, 860, 948, 728, 738, 740, 
	/* 550 */ 742, 8222, 8647, 8669, 8652, 8657, 8662, 8676, 8710, 8715, 
	/* 560 */ 790, 793, 1620, 2605, 2608, 2705, 2717, 2799, 2743, 2770, 
	/* 570 */ 2882, 2885, 4709, 4701, 6778, 8078, 7358, 7361, 7387, 7388, 
	/* 580 */ 7881, 7883, 7885, 7887, 7891, 7893, 7895, 7897, 7901, 7906, 
	/* 590 */ 7913, 7918, 7938, 7940, 7942, 7944, 8091, 8099, 8109, 8117, 
	/* 600 */ 8127, 8249, 8251, 9242, 9261, 9301, 9710, 9712, 9713, 9768, 
	/* 610 */ 9771, 9773, 2621, 6768, 7431, 8323, 8328, 10295, 10297, 10299, 
	/* 620 */ 10301, 10305, 894, 930, 1270, 4875, 4847, 4917, 4920, 4928, 
	/* 630 */ 4942, 4995, 4997, 4998, 4999, 5206, 4898, 4907, 5711, 5714, 
	/* 640 */ 5715, 5723, 10230, 10248, 2209, 3841, 3846, 4613, 8858, 8872, 
	/* 650 */ 8888, 8899, 9067, 9069, 9100, 9135, 11212, 1162, 8540, 8561, 
	/* 660 */ 1171, 8284, 8290, 8442, 8443, 8587, 9014, 1185, 1189, 8582, 
	/* 670 */ 8765, 2089, 2127, 2150, 2151, 2493, 3933, 9585, 1364, 1448, 
	/* 680 */ 1496, 1441, 1473, 1504, 1537, 1578, 1589, 1600, 1612, 2450, 
	/* 690 */ 1684, 1841, 1849, 1854, 1977, 2306, 2570, 3095, 5165, 5183, 
	/* 700 */ 5184, 5682, 5688, 5736, 3486, 3488, 3498, 3500, 3605, 3606, 
	/* 710 */ 3607, 3612, 3617, 3623, 3629, 3661, 3662, 3667, 3668, 3673, 
	/* 720 */ 3678, 3682, 3506, 3511, 3556, 6076, 6085, 6086, 6956, 7404, 
	/* 730 */ 9170, 9172, 9900, 1527, 1532, 2508, 1700, 2513, 5217, 2488, 
	/* 740 */ 2519, 2523, 5231, 4656, 6805, 6807, 3477, 4771, 4814, 4827, 
	/* 750 */ 4747, 4759, 4778, 4785, 4791, 4797, 4803, 6066, 6219, 6221, 
	/* 760 */ 6223, 6323, 6326, 6350, 6351, 6354, 6355, 6359, 6360, 6364, 
	/* 770 */ 6365, 6369, 6370, 6374, 6375, 6472, 6474, 6488, 6492, 6165, 
	/* 780 */ 6166, 6433, 6437, 6445, 6452, 6457, 6525, 6531, 6540, 6541, 
	/* 790 */ 6550, 6556, 6563, 6619, 6624, 6685, 6688, 6632, 6637, 6695, 
	/* 800 */ 6698, 7739, 7741, 6654, 6655, 6656, 6706, 7709, 7710, 7724, 
	/* 810 */ 7725, 6675, 6676, 6677, 6718, 6719, 7770, 7775, 9201, 9202, 
	/* 820 */ 10062, 10070, 10098, 10110, 10137, 10149, 4499, 4503, 4513, 4531, 
	/* 830 */ 4596, 4598, 4600, 4602, 4651, 9192, 4517, 4524, 4509, 4623, 
	/* 840 */ 4632, 4635, 4834, 4967, 4977, 8177, 8180, 8199, 5633, 5645, 
	/* 850 */ 5648, 5652, 5946, 6387, 6396, 10469, 10476, 10504, 10510, 10518, 
	/* 860 */ 10524, 10533, 10539, 10547, 10553, 10599, 10607, 8000, 6949, 6945, 
	/* 870 */ 8158, 8165, 8300, 8305, 8406, 8503, 8520, 8552, 8572, 8577, 
	/* 880 */ 8828, 8805, 8784, 8613, 8617, 8908, 8918, 8925, 8934, 8952, 
	/* 890 */ 8959, 8940, 9207, 9213, 9575, 9581, 9578, 9589, 9595, 9603, 
	/* 900 */ 9609, 9617, 9623, 9677, 9839, 9841, 9843, 9880, 9895, 9958, 
	/* 910 */ 9960, 9962, 10161, 10164, 9969, 9983, 9996, 10051, 10053, 10055, 
	/* 920 */ 10262, 10349, 10351, 10353, 10487, 10494, 10680, 10694, 10785, 10786, 
	/* 930 */ 219, 2009, 2019, 5768, 2028, 1112, 2461, 3076, 5259, 5261, 
	/* 940 */ 5271, 5363, 5374, 5387, 5410, 5420, 5429, 5441, 5467, 5776, 
	/* 950 */ 6173, 1119, 1213, 2098, 2102, 2133, 2139, 3920, 6731, 3928, 
	/* 960 */ 9599, 9613, 9627, 1231, 1238, 8566, 8760, 1697, 1711, 1718, 
	/* 970 */ 1740, 1747, 2321, 2536, 2014, 2023, 2032, 5276, 5285, 5297, 
	/* 980 */ 5307, 5313, 5785, 5454, 5322, 5319, 5605, 5613, 5621, 5624, 
	/* 990 */ 5608, 5616, 5627, 5639, 8399, 8374, 8335, 8339, 8723, 8488, 
	/* 1000 */ 8739, 8727, 8731, 8492, 8743, 8735, 8774, 8965, 8972, 8978, 
	/* 1010 */ 10701, 237, 1653, 1658, 2374, 2501, 3821, 4578, 5803, 5814, 
	/* 1020 */ 5823, 11227, 710, 4098, 4426, 5554, 5560, 5562, 2975, 242, 
	/* 1030 */ 2996, 3000, 3012, 260, 297, 1400, 1706, 1814, 1821, 1831, 
	/* 1040 */ 1836, 2108, 3020, 3032, 3026, 3038, 2119, 2726, 2751, 2778, 
	/* 1050 */ 2762, 2789, 4181, 4153, 4228, 4237, 4280, 4291, 5567, 5578, 
	/* 1060 */ 11193, 11194, 1625, 1630, 1691, 7394, 10658, 10662, 247, 300, 
	/* 1070 */ 2735, 3045, 3052, 3059, 3065, 4190, 3070, 4246, 4294, 4303, 
	/* 1080 */ 5570, 356, 304, 324, 333, 341, 415, 629, 669, 965, 
	/* 1090 */ 1150, 1155, 1253, 1256, 1356, 2364, 5583, 8257, 8263, 8454, 
	/* 1100 */ 8704, 2481, 5980, 5988, 7461, 8032, 8058, 8059, 2471, 8026, 
	/* 1110 */ 1145, 1089, 1094, 592, 595, 5476, 719, 748, 754, 760, 
	/* 1120 */ 768, 773, 778, 821, 825, 8269, 8275, 7950, 879, 1311, 
	/* 1130 */ 4863, 1300, 1303, 1335, 1346, 4840, 4912, 5005, 1126, 8747, 
	/* 1140 */ 8496, 8755, 8751, 8992, 8995, 8998, 9003, 9009, 1132, 8693, 
	/* 1150 */ 1178, 8462, 8699, 9021, 9024, 9027, 1137, 1140, 1370, 1559, 
	/* 1160 */ 1635, 1663, 1677, 2256, 5011, 5012, 7398, 11200, 4538, 4542, 
	/* 1170 */ 4570, 4571, 4644, 4549, 4553, 4561, 4562, 4949, 5602, 8008, 
	/* 1180 */ 8010, 8017, 8019, 6953, 8622, 5754, 5756, 6014, 6019, 6025, 
	/* 1190 */ 6026, 6032, 6037, 6042, 6048, 6050, 6057, 6504, 6507, 6510, 
	/* 1200 */ 6513, 6569, 6572, 6581, 6585, 6590, 6598, 7823, 7824, 5913, 
	/* 1210 */ 5917, 5921, 5925, 5760, 5762, 5953, 5957, 5961, 5965, 5999, 
	/* 1220 */ 6001, 6410, 6424, 10374, 10380, 10434, 10441, 9373, 9379, 9384, 
	/* 1230 */ 9393, 9395, 9415, 9460, 9463, 9464, 9496, 9502, 9504, 9505, 
	/* 1240 */ 9527, 9532, 9537, 9567, 9592, 9606, 9620, 10809, 10811, 10846, 
	/* 1250 */ 10920, 10923, 11008, 10943, 10949, 11077, 11079, 11141, 11143, 466, 
	/* 1260 */ 10568, 10389, 10395, 10451, 10458, 10583
  };

  fprintf (dump_file, "%s %s:%d, %s:%d\n",
	  simplify ? "Applying pattern" : "Matching expression", file1, dbg_line_numbers[line1_id], file2, line2);
}

#pragma GCC diagnostic pop
