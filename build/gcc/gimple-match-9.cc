/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_bit_not_with_nop (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case BIT_NOT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    {
		      res_ops[0] = captures[0];
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 2, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  {
				    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
				      {
					{
					  res_ops[0] = captures[0];
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 3, __FILE__, __LINE__, false);
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
gimple_max_value (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (uniform_integer_cst_p (t))
    {
      {
	{
 tree int_cst = uniform_integer_cst_p (t);
 tree itype = TREE_TYPE (int_cst);
	    if ((INTEGRAL_TYPE_P (itype)
 || POINTER_TYPE_P (itype))
 && wi::eq_p (wi::to_wide (int_cst), wi::max_value (itype))
)
	      {
		{
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 41, __FILE__, __LINE__, false);
		  return true;
		}
	      }
	}
      }
    }
  return false;
}

bool
gimple_signed_integer_sat_val (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case BIT_XOR_EXPR:
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
			      case NEGATE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
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
								  if (integer_zerop (_q41))
								    {
								      if (gimple_max_value (_p1, valueize))
									{
									  {
									    tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
									    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
									      {
										{
										  res_ops[0] = captures[0];
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 70, __FILE__, __LINE__, false);
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
		{
		  tree _p0_pops[1];
		  if (gimple_nop_convert (_p0, _p0_pops, valueize))
		    {
		      tree _q20 = _p0_pops[0];
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
				      {
					tree _q30_pops[1];
					if (gimple_nop_convert (_q30, _q30_pops, valueize))
					  {
					    tree _q40 = _q30_pops[0];
					    switch (TREE_CODE (_q40))
					      {
					      case SSA_NAME:
					        if (gimple *_d3 = get_def (valueize, _q40))
					          {
						    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						      switch (gimple_assign_rhs_code (_a3))
							{
							CASE_CONVERT:
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
									case LT_EXPR:
									  {
									    tree _q60 = gimple_assign_rhs1 (_a4);
									    _q60 = do_valueize (valueize, _q60);
									    tree _q61 = gimple_assign_rhs2 (_a4);
									    _q61 = do_valueize (valueize, _q61);
									    if (integer_zerop (_q61))
									      {
										if (gimple_max_value (_p1, valueize))
										  {
										    {
										      tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
										      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											{
											  {
											    res_ops[0] = captures[0];
											    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 70, __FILE__, __LINE__, false);
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
		if (gimple_max_value (_p0, valueize))
		  {
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
						CASE_CONVERT:
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
								case LT_EXPR:
								  {
								    tree _q50 = gimple_assign_rhs1 (_a4);
								    _q50 = do_valueize (valueize, _q50);
								    tree _q51 = gimple_assign_rhs2 (_a4);
								    _q51 = do_valueize (valueize, _q51);
								    if (integer_zerop (_q51))
								      {
									{
									  tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
									  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
									    {
									      {
										res_ops[0] = captures[0];
										if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 70, __FILE__, __LINE__, false);
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
					  tree _q40_pops[1];
					  if (gimple_nop_convert (_q40, _q40_pops, valueize))
					    {
					      tree _q50 = _q40_pops[0];
					      switch (TREE_CODE (_q50))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q50))
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
									  case LT_EXPR:
									    {
									      tree _q70 = gimple_assign_rhs1 (_a4);
									      _q70 = do_valueize (valueize, _q70);
									      tree _q71 = gimple_assign_rhs2 (_a4);
									      _q71 = do_valueize (valueize, _q71);
									      if (integer_zerop (_q71))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
										    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
										      {
											{
											  res_ops[0] = captures[0];
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 70, __FILE__, __LINE__, false);
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
					}
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
  return false;
}

bool
gimple_bitwise_induction_p (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case BIT_IOR_EXPR:
	      case BIT_XOR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree _p0_pops[1];
		    if (gimple_nop_convert (_p0, _p0_pops, valueize))
		      {
			tree _q20 = _p0_pops[0];
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
					switch (TREE_CODE (_q30))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q30))
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
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p1, _q50 };
									      {
										res_ops[0] = captures[0];
										res_ops[1] = captures[1];
										res_ops[2] = captures[2];
										if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
						    case LSHIFT_EXPR:
						      {
							tree _q40 = gimple_assign_rhs1 (_a3);
							_q40 = do_valueize (valueize, _q40);
							tree _q41 = gimple_assign_rhs2 (_a3);
							_q41 = do_valueize (valueize, _q41);
							if (integer_onep (_q40))
							  {
							    {
							      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _p1, _q40 };
							      {
								res_ops[0] = captures[0];
								res_ops[1] = captures[1];
								res_ops[2] = captures[2];
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
				    CASE_CONVERT:
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
						    case LSHIFT_EXPR:
						      {
							tree _q40 = gimple_assign_rhs1 (_a3);
							_q40 = do_valueize (valueize, _q40);
							tree _q41 = gimple_assign_rhs2 (_a3);
							_q41 = do_valueize (valueize, _q41);
							if (integer_onep (_q40))
							  {
							    {
							      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _p1, _q40 };
							      {
								res_ops[0] = captures[0];
								res_ops[1] = captures[1];
								res_ops[2] = captures[2];
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
				    case LSHIFT_EXPR:
				      {
					tree _q30 = gimple_assign_rhs1 (_a2);
					_q30 = do_valueize (valueize, _q30);
					tree _q31 = gimple_assign_rhs2 (_a2);
					_q31 = do_valueize (valueize, _q31);
					if (integer_onep (_q30))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q31, _p1, _q30 };
					      {
						res_ops[0] = captures[0];
						res_ops[1] = captures[1];
						res_ops[2] = captures[2];
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
		  {
		    tree _p1_pops[1];
		    if (gimple_nop_convert (_p1, _p1_pops, valueize))
		      {
			tree _q30 = _p1_pops[0];
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
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
						    CASE_CONVERT:
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
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q61, _p0, _q60 };
									      {
										res_ops[0] = captures[0];
										res_ops[1] = captures[1];
										res_ops[2] = captures[2];
										if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
						    case LSHIFT_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							tree _q51 = gimple_assign_rhs2 (_a3);
							_q51 = do_valueize (valueize, _q51);
							if (integer_onep (_q50))
							  {
							    {
							      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q51, _p0, _q50 };
							      {
								res_ops[0] = captures[0];
								res_ops[1] = captures[1];
								res_ops[2] = captures[2];
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
						    case LSHIFT_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							tree _q51 = gimple_assign_rhs2 (_a3);
							_q51 = do_valueize (valueize, _q51);
							if (integer_onep (_q50))
							  {
							    {
							      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q51, _p0, _q50 };
							      {
								res_ops[0] = captures[0];
								res_ops[1] = captures[1];
								res_ops[2] = captures[2];
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
				    case LSHIFT_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_assign_rhs2 (_a2);
					_q41 = do_valueize (valueize, _q41);
					if (integer_onep (_q40))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q41, _p0, _q40 };
					      {
						res_ops[0] = captures[0];
						res_ops[1] = captures[1];
						res_ops[2] = captures[2];
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
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
							      case LSHIFT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (integer_onep (_q40))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q41, _p1, _q40 };
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  res_ops[2] = captures[2];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
					      case LSHIFT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (integer_onep (_q30))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _p1, _q30 };
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  res_ops[2] = captures[2];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
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
					      CASE_CONVERT:
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
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _p0, _q50 };
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  res_ops[2] = captures[2];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
					      case LSHIFT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (integer_onep (_q40))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _p0, _q40 };
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  res_ops[2] = captures[2];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case LSHIFT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (integer_onep (_q30))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _p1, _q30 };
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  res_ops[2] = captures[2];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _p0, _q40 };
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  res_ops[2] = captures[2];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (integer_onep (_q20))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _p1, _q20 };
					{
					  res_ops[0] = captures[0];
					  res_ops[1] = captures[1];
					  res_ops[2] = captures[2];
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_onep (_q30))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _p0, _q30 };
					{
					  res_ops[0] = captures[0];
					  res_ops[1] = captures[1];
					  res_ops[2] = captures[2];
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 99, __FILE__, __LINE__, false);
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
	      case BIT_NOT_EXPR:
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
			      case BIT_XOR_EXPR:
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
					      CASE_CONVERT:
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
							      case LSHIFT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (integer_onep (_q40))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q41, _q21, _q40 };
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  res_ops[2] = captures[2];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 100, __FILE__, __LINE__, false);
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
					      case LSHIFT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (integer_onep (_q30))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q21, _q30 };
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  res_ops[2] = captures[2];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 100, __FILE__, __LINE__, false);
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
		{
		  tree _p0_pops[1];
		  if (gimple_nop_convert (_p0, _p0_pops, valueize))
		    {
		      tree _q20 = _p0_pops[0];
		      switch (TREE_CODE (_q20))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q20))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_XOR_EXPR:
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
						  CASE_CONVERT:
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
									  {
									    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _q31, _q50 };
									    {
									      res_ops[0] = captures[0];
									      res_ops[1] = captures[1];
									      res_ops[2] = captures[2];
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 100, __FILE__, __LINE__, false);
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
						  case LSHIFT_EXPR:
						    {
						      tree _q40 = gimple_assign_rhs1 (_a3);
						      _q40 = do_valueize (valueize, _q40);
						      tree _q41 = gimple_assign_rhs2 (_a3);
						      _q41 = do_valueize (valueize, _q41);
						      if (integer_onep (_q40))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _q31, _q40 };
							    {
							      res_ops[0] = captures[0];
							      res_ops[1] = captures[1];
							      res_ops[2] = captures[2];
							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 100, __FILE__, __LINE__, false);
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
gimple_simplify_48 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[0]));
      if (ic == icmp
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail557;
	  {
	    res_op->set_op (icmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 146, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail557:;
	}
      else
	{
	  if (ic == ncmp
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail558;
	      {
		res_op->set_op (ncmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 147, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail558:;
	    }
	}
  }
  return false;
}

bool
gimple_simplify_51 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail561;
      {
	res_op->set_op (PARITY, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail561;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 150, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail561:;
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[2])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail562;
	      {
		res_op->set_op (PARITY, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (utype != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail562;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[3];
		    if (utype != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail562;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail562;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 151, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail562:;
	  }
	}
    }
  return false;
}

bool
gimple_simplify_60 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail574;
  {
    res_op->set_op (PLUS_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 163, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail574:;
  return false;
}

bool
gimple_simplify_61 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type) && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[0]))
 && !TYPE_SATURATING (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail575;
      {
	res_op->set_op (BIT_NOT_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[1];
	    _o2[1] = captures[2];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail575;
	    _o1[0] = _r2;
	  }
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail575;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 164, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail575:;
    }
  return false;
}

bool
gimple_simplify_66 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail588;
	  {
	    res_op->set_op (PLUS_EXPR, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 177, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail588:;
	}
    }
  return false;
}

bool
gimple_simplify_67 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail589;
	  {
	    res_op->set_op (MINUS_EXPR, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 178, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail589:;
	}
    }
  return false;
}

bool
gimple_simplify_69 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (TREE_CODE (TREE_TYPE (captures[2])) == INTEGER_TYPE
 && TREE_CODE (type) == INTEGER_TYPE
 && TYPE_PRECISION (type) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail591;
	      {
		res_op->set_op (PLUS_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail591;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[4];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[3];
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail591;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail591;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 180, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail591:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_73 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (plusminus))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (!FLOAT_TYPE_P (type) || flag_associative_math)
)
    {
      if (!ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_WRAPS (type)
 || (INTEGRAL_TYPE_P (type)
 && tree_expr_nonzero_p (captures[1])
 && expr_not_equal_to (captures[1], wi::minus_one (TYPE_PRECISION (type))))
)
	{
	  if (single_use (captures[0]) || single_use (captures[3])
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[3])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail595;
	      {
		res_op->set_op (MULT_EXPR, type, 2);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = captures[4];
		  gimple_match_op tem_op (res_op->cond.any_else (), plusminus, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail595;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 184, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail595:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[3])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail596;
	      {
		res_op->set_op (MULT_EXPR, type, 2);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = captures[4];
		  gimple_match_op tem_op (res_op->cond.any_else (), plusminus, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail596;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (NULL, valueize);
		if (!maybe_push_res_to_seq (res_op, NULL)) goto next_after_fail596;
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 185, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail596:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_78 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail601;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 190, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail601:;
  return false;
}

bool
gimple_simplify_79 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[3])))
 && (TYPE_MODE (TREE_TYPE (type))
 == TYPE_MODE (TREE_TYPE (TREE_TYPE (captures[3]))))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail602;
      {
	res_op->set_op (MINUS_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r3) goto next_after_fail602;
	      _o2[1] = _r3;
	    }
	    _o2[2] = captures[4];
	    gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o2[1]), _o2[0], _o2[1], _o2[2]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail602;
	    _o1[0] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail602;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 191, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail602:;
    }
  return false;
}

bool
gimple_simplify_84 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (log1),
 const enum tree_code ARG_UNUSED (log2),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[1])
          || !single_use (captures[3])
          || !single_use (captures[4])
          || !single_use (captures[6])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail607;
  {
    res_op->set_op (popcount, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[5];
      gimple_match_op tem_op (res_op->cond.any_else (), log2, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail607;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 196, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail607:;
  return false;
}

bool
gimple_simplify_87 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
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
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail610;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail610;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 199, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail610:;
    }
  return false;
}

bool
gimple_simplify_90 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail613;
  {
    res_op->set_op (MINUS_EXPR, type, 2);
    res_op->ops[0] = captures[2];
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail613;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 202, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail613:;
  return false;
}

bool
gimple_simplify_94 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail617;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail617;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail617;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 206, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail617:;
    }
  return false;
}

bool
gimple_simplify_99 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail623;
	      {
		res_op->set_op (NEGATE_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail623;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 211, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail623:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail624;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail624;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 212, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail624:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_104 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail631;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 219, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail631:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_106 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
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
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
)
	    {
	      {
 tree utype = unsigned_type_for (type);
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail634;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (utype != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail634;
			  }
			else
			  _r2 = _o2[0];
			_o1[0] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (utype != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail634;
			  }
			else
			  _r2 = _o2[0];
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail634;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 222, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail634:;
	      }
	    }
	  else
	    {
	      if (((element_precision (type) <= element_precision (TREE_TYPE (captures[1])))
 == (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail635;
		  {
		    res_op->set_op (MINUS_EXPR, type, 2);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail635;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail635;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 223, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail635:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_114 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail643;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 231, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail643:;
  return false;
}

bool
gimple_simplify_115 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail644;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 232, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail644:;
  return false;
}

bool
gimple_simplify_118 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail647;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail647;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 234, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail647:;
  return false;
}

bool
gimple_simplify_122 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail651;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 236, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail651:;
  return false;
}

bool
gimple_simplify_126 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail655;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[3];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 240, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail655:;
  return false;
}

bool
gimple_simplify_131 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail660;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 243, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail660:;
  return false;
}

bool
gimple_simplify_134 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])
          || !single_use (captures[4])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail663;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail663;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 245, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail663:;
  return false;
}

bool
gimple_simplify_138 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail667;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail667;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail667:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail668;
	      {
		res_op->set_op (op, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail668;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[4];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 249, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail668:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_142 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail675;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 250, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail675:;
  return false;
}

bool
gimple_simplify_145 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail678;
  {
    res_op->set_op (bitop, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 253, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail678:;
  return false;
}

bool
gimple_simplify_149 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail682;
  {
    res_op->set_op (bitop, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 253, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail682:;
  return false;
}

bool
gimple_simplify_151 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])
              || !single_use (captures[2])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail685;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o3[0])
	          && !useless_type_conversion_p (TREE_TYPE (_o2[0]), TREE_TYPE (_o3[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail685;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail685;
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail685;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail685;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 254, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail685:;
    }
  return false;
}

bool
gimple_simplify_155 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail692;
  {
    res_op->set_op (BIT_XOR_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      {
	tree _o2[2], _r2;
	_o2[0] = captures[1];
	_o2[1] = captures[4];
	gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	tem_op.resimplify (lseq, valueize);
	_r2 = maybe_push_res_to_seq (&tem_op, lseq);
	if (!_r2) goto next_after_fail692;
	_o1[0] = _r2;
      }
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail692;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 262, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail692:;
  return false;
}

bool
gimple_simplify_160 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail703;
	      {
		tree tem;
		tem = captures[3];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 266, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail703:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail704;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail704:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail705;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail705:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail706;
			  {
			    res_op->set_op (GE_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    res_op->ops[1] = captures[5];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail706:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail707;
			      {
				res_op->set_op (LE_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				res_op->ops[1] = captures[5];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 270, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail707:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail708;
				  {
				    res_op->set_op (GE_EXPR, type, 2);
				    res_op->ops[0] = captures[4];
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail708;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 271, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail708:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail709;
				      {
					res_op->set_op (LE_EXPR, type, 2);
					res_op->ops[0] = captures[4];
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail709;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail709:;
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
gimple_simplify_171 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail739;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 283, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail739:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail740;
	  {
	    tree tem;
	    tem =  constant_boolean_node (true, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 284, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail740:;
	}
    }
  return false;
}

bool
gimple_simplify_173 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail742;
      {
	res_op->set_op (LE_EXPR, type, 2);
	res_op->ops[0] = captures[3];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail742;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 265, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail742:;
    }
  return false;
}

bool
gimple_simplify_177 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail746;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail746;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail746:;
    }
  return false;
}

bool
gimple_simplify_178 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail747;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail747;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail747:;
    }
  return false;
}

bool
gimple_simplify_180 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail749;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail749;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail749:;
    }
  return false;
}

bool
gimple_simplify_183 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail752;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail752;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail752:;
    }
  return false;
}

bool
gimple_simplify_187 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail756;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail756;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail756:;
    }
  return false;
}

bool
gimple_simplify_191 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail760;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail760;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 289, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail760:;
    }
  return false;
}

bool
gimple_simplify_195 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail764;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail764;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 291, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail764:;
    }
  return false;
}

bool
gimple_simplify_200 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail769;
  {
    tree tem;
    tem =  build_zero_cst (type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 295, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail769:;
  return false;
}

bool
gimple_simplify_203 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail773;
	  {
	    res_op->set_op (ABSU_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 296, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail773:;
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail774;
	  {
	    res_op->set_op (ABS_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 297, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail774:;
	}
    }
  return false;
}

bool
gimple_simplify_208 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail779;
  {
    res_op->set_op (NOP_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 301, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail779:;
  return false;
}

bool
gimple_simplify_210 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail781;
		  {
		    res_op->set_op (op, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] =  wide_int_to_tree (type, factor);
		      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail781;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  wide_int_to_tree (type, mul);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 303, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail781:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (type);
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail782;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[0];
			      if (utype != TREE_TYPE (_o3[0])
			          && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r3) goto next_after_fail782;
			        }
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    _o2[1] =  wide_int_to_tree (utype, factor);
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail782;
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[3];
			      if (utype != TREE_TYPE (_o3[0])
			          && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r3) goto next_after_fail782;
			        }
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[2];
			      if (utype != TREE_TYPE (_o3[0])
			          && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r3) goto next_after_fail782;
			        }
			      else
			        _r3 = _o3[0];
			      _o2[1] = _r3;
			    }
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail782;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail782;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 304, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail782:;
		  }
		}
	  }
	}
  }
  return false;
}

bool
gimple_simplify_224 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0]))
 && (TREE_INT_CST_LOW (captures[1]) & 1) != 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail796;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 318, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail796:;
    }
  return false;
}

bool
gimple_simplify_228 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && integer_nonzerop (captures[2])
 && !TREE_OVERFLOW (captures[2])
 && !TREE_OVERFLOW (captures[3])
)
    {
      {
 tree lo, hi; bool neg_overflow;
 enum tree_code code = fold_div_compare (cmp, captures[2], captures[3], &lo, &hi,
 &neg_overflow);
	  if (code == LT_EXPR || code == GE_EXPR
)
	    {
	      if (TREE_OVERFLOW (lo)
)
		{
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail803;
		  {
		    tree tem;
		    tem =  build_int_cst (type, (code == LT_EXPR) ^ neg_overflow);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 324, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail803:;
		}
	      else
		{
		  if (code == LT_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail804;
		      {
			res_op->set_op (LT_EXPR, type, 2);
			res_op->ops[0] = captures[1];
			res_op->ops[1] =  lo;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 325, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail804:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail805;
		      {
			res_op->set_op (GE_EXPR, type, 2);
			res_op->ops[0] = captures[1];
			res_op->ops[1] =  lo;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 326, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail805:;
		    }
		}
	    }
	  else
	    {
	      if (code == LE_EXPR || code == GT_EXPR
)
		{
		  if (TREE_OVERFLOW (hi)
)
		    {
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail806;
		      {
			tree tem;
			tem =  build_int_cst (type, (code == LE_EXPR) ^ neg_overflow);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 327, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail806:;
		    }
		  else
		    {
		      if (code == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail807;
			  {
			    res_op->set_op (LE_EXPR, type, 2);
			    res_op->ops[0] = captures[1];
			    res_op->ops[1] =  hi;
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 328, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail807:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail808;
			  {
			    res_op->set_op (GT_EXPR, type, 2);
			    res_op->ops[0] = captures[1];
			    res_op->ops[1] =  hi;
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 329, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail808:;
			}
		    }
		}
	      else
		{
		  if (!lo && !hi
)
		    {
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail809;
		      {
			tree tem;
			tem =  build_int_cst (type, code == NE_EXPR);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 330, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail809:;
		    }
		  else
		    {
		      if (code == EQ_EXPR && !hi
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail810;
			  {
			    res_op->set_op (GE_EXPR, type, 2);
			    res_op->ops[0] = captures[1];
			    res_op->ops[1] =  lo;
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 331, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail810:;
			}
		      else
			{
			  if (code == EQ_EXPR && !lo
)
			    {
			      gimple_seq *lseq = seq;
			      if (lseq
			          && (!single_use (captures[0])))
			        lseq = NULL;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail811;
			      {
				res_op->set_op (LE_EXPR, type, 2);
				res_op->ops[0] = captures[1];
				res_op->ops[1] =  hi;
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 332, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail811:;
			    }
			  else
			    {
			      if (code == NE_EXPR && !hi
)
				{
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail812;
				  {
				    res_op->set_op (LT_EXPR, type, 2);
				    res_op->ops[0] = captures[1];
				    res_op->ops[1] =  lo;
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 333, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail812:;
				}
			      else
				{
				  if (code == NE_EXPR && !lo
)
				    {
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail813;
				      {
					res_op->set_op (GT_EXPR, type, 2);
					res_op->ops[0] = captures[1];
					res_op->ops[1] =  hi;
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 334, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail813:;
				    }
				  else
				    {
				      if (0
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail814;
					  {
					    tree tem;
					    tem =  build_range_check (UNKNOWN_LOCATION, type, captures[1], code == EQ_EXPR,
 lo, hi);
					    res_op->set_value (tem);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 335, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail814:;
					}
				      else
					{
					  {
 tree etype = range_check_type (TREE_TYPE (captures[1]));
 if (etype)
 {
 hi = fold_convert (etype, hi);
 lo = fold_convert (etype, lo);
 hi = const_binop (MINUS_EXPR, etype, hi, lo);
 }
					      if (etype && hi && !TREE_OVERFLOW (hi)
)
						{
						  if (code == EQ_EXPR
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail815;
						      {
							res_op->set_op (LE_EXPR, type, 2);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (etype != TREE_TYPE (_o2[0])
							        && !useless_type_conversion_p (etype, TREE_TYPE (_o2[0])))
							      {
								gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, etype, _o2[0]);
								tem_op.resimplify (lseq, valueize);
								_r2 = maybe_push_res_to_seq (&tem_op, lseq);
								if (!_r2) goto next_after_fail815;
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail815;
							  res_op->ops[0] = _r1;
							}
							res_op->ops[1] =  hi;
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 336, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail815:;
						    }
						  else
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail816;
						      {
							res_op->set_op (GT_EXPR, type, 2);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (etype != TREE_TYPE (_o2[0])
							        && !useless_type_conversion_p (etype, TREE_TYPE (_o2[0])))
							      {
								gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, etype, _o2[0]);
								tem_op.resimplify (lseq, valueize);
								_r2 = maybe_push_res_to_seq (&tem_op, lseq);
								if (!_r2) goto next_after_fail816;
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail816;
							  res_op->ops[0] = _r1;
							}
							res_op->ops[1] =  hi;
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 337, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail816:;
						    }
						}
					  }
					}
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
gimple_simplify_259 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail860;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 380, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail860:;
    }
  return false;
}

bool
gimple_simplify_262 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && wi::to_wide (captures[1]) != 0
)
    {
      {
 widest_int quot;
	  if (wi::multiple_of_p (wi::to_widest (captures[2]), wi::to_widest (captures[1]),
 TYPE_SIGN (TREE_TYPE (captures[0])), &quot)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail865;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]), quot);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 384, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail865:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail866;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 385, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail866:;
	    }
      }
    }
  else
    {
      if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0]))
 && (wi::bit_and (wi::to_wide (captures[1]), 1) == 1)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail867;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
 tree itype = TREE_TYPE (captures[0]);
 int p = TYPE_PRECISION (itype);
 wide_int m = wi::one (p + 1) << p;
 wide_int a = wide_int::from (wi::to_wide (captures[1]), p + 1, UNSIGNED);
 wide_int i = wide_int::from (wi::mod_inv (a, m),
 p, TYPE_SIGN (itype));	    res_op->ops[1] = 
 wide_int_to_tree (itype, wi::mul (i, wi::to_wide (captures[2])));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 386, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail867:;
	}
    }
  return false;
}

bool
gimple_simplify_269 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      {
 tree tem = const_binop (op == PLUS_EXPR ? MINUS_EXPR : PLUS_EXPR,
 TREE_TYPE (captures[1]), captures[2], captures[1]);
	  if (tem && !TREE_OVERFLOW (tem)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail889;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  tem;
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 407, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail889:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_273 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail911;
		  {
		    tree tem;
		    tem =  constant_boolean_node (cmp == ORDERED_EXPR, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 429, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail911:;
		}
	      else
		{
		  if (TYPE_PRECISION (type1) > TYPE_PRECISION (type2)
 && type1_signed_p >= type2_signed_p
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail912;
		      {
			res_op->set_op (icmp, type, 2);
			res_op->ops[0] = captures[1];
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail912;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 430, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail912:;
		    }
		  else
		    {
		      if (TYPE_PRECISION (type1) < TYPE_PRECISION (type2)
 && type1_signed_p <= type2_signed_p
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail913;
			  {
			    res_op->set_op (icmp, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      if (type2 != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (type2, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type2, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail913;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[0] = _r1;
			    }
			    res_op->ops[1] = captures[2];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 431, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail913:;
			}
		      else
			{
			  if (TYPE_PRECISION (type1) == TYPE_PRECISION (type2)
 && type1_signed_p == type2_signed_p
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail914;
			      {
				res_op->set_op (icmp, type, 2);
				res_op->ops[0] = captures[1];
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[2];
				  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail914;
				    }
				  else
				    _r1 = _o1[0];
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 432, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail914:;
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
gimple_simplify_280 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3])) != 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail939;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 450, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail939:;
    }
  return false;
}

bool
gimple_simplify_282 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail944;
  {
    res_op->set_op (cmp, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 455, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail944:;
  return false;
}

bool
gimple_simplify_283 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail945;
  {
    res_op->set_op (cmp, type, 2);
    res_op->ops[0] = captures[1];
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 456, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail945:;
  return false;
}

bool
gimple_simplify_284 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail946;
  {
    res_op->set_op (cmp, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      {
	tree _o2[1], _r2;
	_o2[0] = captures[1];
	gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	tem_op.resimplify (NULL, valueize);
	_r2 = maybe_push_res_to_seq (&tem_op, NULL);
	if (!_r2) goto next_after_fail946;
	_o1[1] = _r2;
      }
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail946;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 457, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail946:;
  return false;
}

bool
gimple_simplify_287 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail949;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail949;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail949;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 460, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail949:;
    }
  return false;
}

bool
gimple_simplify_290 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail952;
  {
    res_op->set_op (icmp, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 463, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail952:;
  return false;
}

bool
gimple_simplify_292 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail954;
      {
	res_op->set_op (ncmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail954;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 465, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail954:;
    }
  return false;
}

bool
gimple_simplify_296 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[1]))
 && element_precision (captures[0]) >= element_precision (captures[1])
 && wi::only_sign_bit_p (wi::to_wide (captures[2]), element_precision (captures[1]))
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail958;
	  {
	    res_op->set_op (ncmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail958;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (stype);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 467, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail958:;
      }
    }
  return false;
}

bool
gimple_simplify_301 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner),
 const enum tree_code ARG_UNUSED (outer))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool cst1 = integer_onep (captures[1]);
 bool cst0 = integer_zerop (captures[1]);
 bool innereq = inner == EQ_EXPR;
 bool outereq = outer == EQ_EXPR;
      if (innereq ? cst0 : cst1
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail977;
	  {
	    tree tem;
	    tem =  constant_boolean_node (!outereq, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 478, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail977:;
	}
      else
	{
	  if (innereq ? cst1 : cst0
)
	    {
	      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
 tree ucst1 = build_one_cst (utype);
		  if (!outereq
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail978;
		      {
			res_op->set_op (GT_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (utype != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail978;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] =  ucst1;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 479, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail978:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail979;
		      {
			res_op->set_op (LE_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (utype != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail979;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] =  ucst1;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 480, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail979:;
		    }
	      }
	    }
	  else
	    {
	      {
 tree value = build_int_cst (TREE_TYPE (captures[0]), !innereq);
		  if (outereq
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail980;
		      {
			res_op->set_op (EQ_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  value;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 481, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail980:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail981;
		      {
			res_op->set_op (NE_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  value;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 482, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail981:;
		    }
	      }
	    }
	}
  }
  return false;
}

bool
gimple_simplify_309 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rep),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1002;
  {
    res_op->set_op (rep, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 503, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1002:;
  return false;
}

bool
gimple_simplify_312 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1007;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 508, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1007:;
    }
  return false;
}

bool
gimple_simplify_315 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1011;
      {
	res_op->set_op (COPYSIGN_ALL, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1011;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 512, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1011:;
    }
  return false;
}

bool
gimple_simplify_319 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1016;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 517, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1016:;
  return false;
}

bool
gimple_simplify_324 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1023;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 522, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1023:;
    }
  return false;
}

bool
gimple_simplify_327 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1026;
      {
	res_op->set_op (COND_EXPR, type, 3);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_zero_cst (type);
	  gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1026;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_minus_one_cst (type);
	res_op->ops[2] =  build_one_cst (type);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 525, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1026:;
    }
  return false;
}

bool
gimple_simplify_332 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1032;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 531, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1032:;
	}
      else
	{
	  {
int_range_max vr0, vr1;
	      if (INTEGRAL_TYPE_P (type)
 && get_range_query (cfun)->range_of_expr (vr0, captures[0])
 && get_range_query (cfun)->range_of_expr (vr1, captures[1])
 && range_op_handler (MULT_EXPR).overflow_free_p (vr0, vr1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1033;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 532, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1033:;
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_338 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1041;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 540, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1041:;
    }
  return false;
}

bool
gimple_simplify_340 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1043;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 542, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1043:;
    }
  return false;
}

bool
gimple_simplify_346 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (SCALAR_FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
    {
      if (types_match (type, float_type_node)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1049;
	  {
	    res_op->set_op (CFN_BUILT_IN_COPYSIGNF, type, 2);
	    res_op->ops[0] =  build_one_cst (type);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1049;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 548, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1049:;
	}
      else
	{
	  if (types_match (type, double_type_node)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1050;
	      {
		res_op->set_op (CFN_BUILT_IN_COPYSIGN, type, 2);
		res_op->ops[0] =  build_one_cst (type);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1050;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 549, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1050:;
	    }
	  else
	    {
	      if (types_match (type, long_double_type_node)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1051;
		  {
		    res_op->set_op (CFN_BUILT_IN_COPYSIGNL, type, 2);
		    res_op->ops[0] =  build_one_cst (type);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[0];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1051;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 550, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1051:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_360 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1067;
	  {
	    res_op->set_op (op, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1067;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1067;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 566, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1067:;
      }
    }
  return false;
}

bool
gimple_simplify_369 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::gt_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
)
    {
      {
 wi::overflow_type ovf;
 wide_int prod = wi::mul (wi::to_wide (captures[2]), wi::to_wide (captures[1]),
 TYPE_SIGN (TREE_TYPE (captures[1])), &ovf);
	  if (ovf
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1077;
	      {
		tree tem;
		tem =  constant_boolean_node (wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (cmp == LT_EXPR || cmp == LE_EXPR), type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 576, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1077:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1078;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1078:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_375 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1115;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 597, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1115:;
    }
  return false;
}

bool
gimple_simplify_378 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1118;
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
		if (!_r2) goto next_after_fail1118;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1118;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (t);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1118:;
      }
    }
  return false;
}

bool
gimple_simplify_382 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1127;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == EQ_EXPR ? true : false, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 609, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1127:;
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
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1128;
		  {
		    tree tem;
		    tem =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 610, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1128:;
		}
	    }
	  else
	    {
	      if (ok && (zero_val < 0 || zero_val >= prec)
)
		{
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1129;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (val, false, prec));
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1129;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  build_zero_cst (type0);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 611, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1129:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_390 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs),
 const combined_fn ARG_UNUSED (exps),
 const enum tree_code ARG_UNUSED (cmp))
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1137;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[1];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      gimple_match_op tem_op (res_op->cond.any_else (), exps, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1137;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 615, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1137:;
	}
    }
  return false;
}

bool
gimple_simplify_394 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[3]) && tree_int_cst_sgn (captures[3]) > 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1145;
      {
	res_op->set_op (shift, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[2];
	    _o2[1] =  build_int_cst (TREE_TYPE (captures[2]),
 1);
	    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail1145;
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1145;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 623, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1145:;
    }
  return false;
}

bool
gimple_simplify_399 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1150;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 628, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1150:;
  return false;
}

bool
gimple_simplify_403 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 unsigned int prec = element_precision (type);
      if (wi::ge_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
 && wi::lt_p (wi::to_wide (captures[1]), prec, TYPE_SIGN (TREE_TYPE (captures[1])))
 && wi::ge_p (wi::to_wide (captures[2]), 0, TYPE_SIGN (TREE_TYPE (captures[2])))
 && wi::lt_p (wi::to_wide (captures[2]), prec, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	{
	  {
 unsigned int low = (tree_to_uhwi (captures[1])
 + tree_to_uhwi (captures[2]));
	      if (low >= prec
)
		{
		  if (op == LROTATE_EXPR || op == RROTATE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1154;
		      {
			res_op->set_op (op, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), low % prec);
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 631, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1154:;
		    }
		  else
		    {
		      if (TYPE_UNSIGNED (type) || op == LSHIFT_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1155;
			  {
			    tree tem;
			    tem =  build_zero_cst (type);
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 632, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1155:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1156;
			  {
			    res_op->set_op (op, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), prec - 1);
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 633, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1156:;
			}
		    }
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1157;
		  {
		    res_op->set_op (op, type, 2);
		    res_op->ops[0] = captures[0];
		    res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), low);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 634, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1157:;
		}
	  }
	}
  }
  return false;
}

bool
gimple_simplify_413 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize
 && !HONOR_SNANS (captures[0])
 && types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[2]))
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (IFN_COPYSIGN,
 type, OPTIMIZE_FOR_BOTH)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1173;
      {
	res_op->set_op (CFN_COPYSIGN, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 649, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1173:;
    }
  return false;
}

bool
gimple_simplify_418 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1184;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[2];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1184;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 652, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1184:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1185;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (utype != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1185;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[4];
		    if (utype != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1185;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1185;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 653, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1185:;
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
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1186;
			  {
			    res_op->set_op (op, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (newtype != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1186;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[4];
			      if (newtype != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1186;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1186:;
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
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1187;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    {
				      tree _o1[2], _r1;
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[2];
					if (newtype != TREE_TYPE (_o2[0])
					    && !useless_type_conversion_p (newtype, TREE_TYPE (_o2[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail1187;
					  }
					else
					  _r2 = _o2[0];
					_o1[0] = _r2;
				      }
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[4];
					if (newtype != TREE_TYPE (_o2[0])
					    && !useless_type_conversion_p (newtype, TREE_TYPE (_o2[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail1187;
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1187;
				      res_op->ops[0] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1187:;
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
gimple_simplify_439 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (!HONOR_SIGN_DEPENDENT_ROUNDING (type) && single_use (captures[0])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1213;
	  {
	    res_op->set_op (CFN_FNMS, type, 3);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] = captures[2];
	    res_op->ops[2] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 677, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1213:;
	}
    }
  return false;
}

bool
gimple_simplify_445 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1219;
	  {
	    res_op->set_op (BIT_AND_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 683, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1219:;
	}
  }
  return false;
}

bool
gimple_simplify_451 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1225;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1225;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1225;
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[4];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1225;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1225;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 688, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1225:;
	}
  }
  return false;
}

bool
gimple_simplify_459 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1233;
	  {
	    res_op->set_op (COND_EXPR, type, 3);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[3];
	    res_op->ops[2] =  build_zero_cst (type);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 696, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1233:;
	}
    }
  return false;
}

bool
gimple_simplify_466 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1245;
      {
	tree tem;
	tem =  constant_boolean_node (false, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 704, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1245:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1246;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1246:;
	}
    }
  return false;
}

bool
gimple_simplify_469 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1256;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 708, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1256:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1257;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 709, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1257:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1258;
		      {
			tree tem;
			tem = captures[3];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 710, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1258:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1259;
			  {
			    res_op->set_op (GT_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1259;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 711, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1259:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1260;
			      {
				res_op->set_op (LT_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[2];
				  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1260;
				    }
				  else
				    _r1 = _o1[0];
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 712, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1260:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1261;
				  {
				    res_op->set_op (GT_EXPR, type, 2);
				    res_op->ops[0] = captures[4];
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1261;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1261:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1262;
				      {
					res_op->set_op (LT_EXPR, type, 2);
					res_op->ops[0] = captures[4];
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail1262;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1262:;
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
gimple_simplify_487 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 729, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1306:;
  return false;
}

bool
gimple_simplify_490 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
  {
    res_op->set_op (PARITY, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 732, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1310:;
  return false;
}

bool
gimple_simplify_492 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1312;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[1];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1312;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 734, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1312:;
  return false;
}

bool
gimple_simplify_494 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1314;
  {
    res_op->set_op (MINUS_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 736, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1314:;
  return false;
}

bool
gimple_simplify_498 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1318;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail1318;
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1318;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 740, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1318:;
    }
  return false;
}

bool
gimple_simplify_504 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1)
)
    {
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[0]));
	  if (ic == icmp
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1324;
	      {
		res_op->set_op (icmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1324:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1325;
		  {
		    res_op->set_op (ncmp, type, 2);
		    res_op->ops[0] = captures[0];
		    res_op->ops[1] = captures[1];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1325:;
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_510 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1331;
      {
	res_op->set_op (MAX_EXPR, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 750, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1331:;
    }
  return false;
}

bool
gimple_simplify_515 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1336;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 755, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1336:;
  return false;
}

bool
gimple_simplify_521 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1356;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 763, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1356:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1357;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 764, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1357:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1358;
		  {
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 765, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1358:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1359;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 766, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1359:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1360;
			  {
			    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1360;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 767, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1360:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1361;
			  {
			    res_op->set_op (NOP_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1361;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 768, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1361:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1362;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1362;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 769, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1362:;
			    }
			  else
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1363;
			      {
				res_op->set_op (NOP_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1363;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1363:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1364;
				  {
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 771, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1364:;
				}
			      else
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1365;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1365:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1366;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 773, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1366:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1367;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1367:;
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
gimple_simplify_539 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::eq_p (wi::bit_not (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1410;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1410:;
    }
  return false;
}

bool
gimple_simplify_545 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1418;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1418:;
    }
  return false;
}

bool
gimple_simplify_549 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1422;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1422:;
    }
  return false;
}

bool
gimple_simplify_556 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!POINTER_TYPE_P (type) && integer_pow2p (captures[2])
)
    {
      {
 int shift = (wi::exact_log2 (wi::to_wide (captures[2]))
 - wi::exact_log2 (wi::to_wide (captures[1])));
	  if (shift > 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1429;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
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
			if (!_r2) goto next_after_fail1429;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] =  build_int_cst (integer_type_node, shift);
		  gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1429;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 801, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1429:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1430;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] =  build_int_cst (integer_type_node, -shift);
		    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1430;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1430;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 802, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1430:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_569 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1455;
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
			if (!_r2) goto next_after_fail1455;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1455;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 811, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1455:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1456;
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
			      if (!_r3) goto next_after_fail1456;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1456;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1456;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1456:;
		}
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1457;
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
		if (!_r2) goto next_after_fail1457;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1457;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 813, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1457:;
	}
    }
  return false;
}

bool
gimple_simplify_584 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1480;
	  {
	    res_op->set_op (CFN_CTZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 824, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1480:;
	}
  }
  return false;
}

bool
gimple_simplify_598 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1506;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1506:;
  return false;
}

bool
gimple_simplify_599 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1507;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1507:;
    }
  return false;
}

bool
gimple_simplify_604 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1512;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 842, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1512:;
  return false;
}

bool
gimple_simplify_609 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1520;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 850, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1520:;
  return false;
}

bool
gimple_simplify_616 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1527;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 783, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1527:;
  return false;
}

bool
gimple_simplify_622 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[5]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1533;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[4], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1533;
		_o1[3] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1533;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 858, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1533:;
	}
  }
  return false;
}

bool
gimple_simplify_629 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1540;
  {
    res_op->set_op (cond_op, type, 4);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[0];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1540;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[3];
    res_op->ops[2] = captures[4];
    res_op->ops[3] = captures[5];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 865, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1540:;
  return false;
}

bool
gimple_simplify_638 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs),
 const combined_fn ARG_UNUSED (pows))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1549;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), logs, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1549;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1549:;
    }
  return false;
}

bool
gimple_simplify_647 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1558;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1558:;
  return false;
}

bool
gimple_simplify_651 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (floors))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1562;
      {
	res_op->set_op (FIX_TRUNC_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 887, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1562:;
    }
  return false;
}

bool
gimple_simplify_658 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1569;
      {
	res_op->set_op (CFN_FNMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 894, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1569:;
    }
  return false;
}

bool
gimple_simplify_665 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1576;
      {
	res_op->set_op (CFN_FMS, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 901, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1576:;
    }
  return false;
}

bool
gimple_simplify_674 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 combined_fn cfn = CFN_LAST;
 tree type0 = TREE_TYPE (captures[1]);
 if (TREE_CODE (type0) == BITINT_TYPE)
 {
 if (TYPE_PRECISION (type0) > MAX_FIXED_MODE_SIZE)
 cfn = CFN_POPCOUNT;
 else
 type0
 = build_nonstandard_integer_type (TYPE_PRECISION (type0),
 1);
 }
 if (cfn == CFN_LAST
 && direct_internal_fn_supported_p (IFN_POPCOUNT, type0,
 OPTIMIZE_FOR_BOTH))
 cfn = CFN_POPCOUNT;
 if (cfn == CFN_LAST
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > BITS_PER_WORD
 && !direct_internal_fn_supported_p (IFN_POPCOUNT,
 TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_BOTH))
 {
 if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (unsigned_type_node))
 cfn = CFN_BUILT_IN_POPCOUNT;
 else if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (long_long_unsigned_type_node))
 cfn = CFN_BUILT_IN_POPCOUNTLL;
 }
	  if (cfn == CFN_POPCOUNT
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1587;
	      {
		res_op->set_op (CFN_POPCOUNT, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1587;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 909, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1587:;
	    }
	  else
	    {
	      if (cfn == CFN_BUILT_IN_POPCOUNT
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1588;
		  {
		    res_op->set_op (CFN_BUILT_IN_POPCOUNT, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type0 != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1588;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 910, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1588:;
		}
	      else
		{
		  if (cfn == CFN_BUILT_IN_POPCOUNTLL
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1589;
		      {
			res_op->set_op (CFN_BUILT_IN_POPCOUNTLL, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (type0 != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1589;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 911, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1589:;
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_CONVERT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				    if (INTEGRAL_TYPE_P (type)
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TREE_CODE (type) != BOOLEAN_TYPE
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[1])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1617;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (type != TREE_TYPE (_o1[0])
					        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					      {
						gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail1617;
					      }
					    else
					      _r1 = _o1[0];
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1617:;
				      }
				  }
			          break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree _q20_pops[1];
		    if (gimple_nop_convert (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21 };
			  if (gimple_simplify_409 (res_op, seq, valueize, type, captures, BIT_AND_EXPR))
			    return true;
			}
		      }
		  }
		  {
		    tree _q21_pops[1];
		    if (gimple_nop_convert (_q21, _q21_pops, valueize))
		      {
			tree _q40 = _q21_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20 };
			  if (gimple_simplify_409 (res_op, seq, valueize, type, captures, BIT_AND_EXPR))
			    return true;
			}
		      }
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
		  {
		    tree _q20_pops[1];
		    if (gimple_nop_convert (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21 };
			  if (gimple_simplify_409 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR))
			    return true;
			}
		      }
		  }
		  {
		    tree _q21_pops[1];
		    if (gimple_nop_convert (_q21, _q21_pops, valueize))
		      {
			tree _q40 = _q21_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20 };
			  if (gimple_simplify_409 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR))
			    return true;
			}
		      }
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
		  {
		    tree _q20_pops[1];
		    if (gimple_nop_convert (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21 };
			  if (gimple_simplify_409 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			    return true;
			}
		      }
		  }
		  {
		    tree _q21_pops[1];
		    if (gimple_nop_convert (_q21, _q21_pops, valueize))
		      {
			tree _q40 = _q21_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20 };
			  if (gimple_simplify_409 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			    return true;
			}
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
		  if (gimple_zero_one_valued_p (_q20, valueize))
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
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1618;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[1];
				      if (type != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1618;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[0] = _r1;
				    }
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (type != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1618;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 936, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1618:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (POINTER_TYPE_P (type)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1619;
			      {
				tree tem;
				tem =  build_fold_addr_expr_with_type
 (build2 (MEM_REF, char_type_node, captures[0],
 wide_int_to_tree (ptr_type_node, wi::neg (wi::to_wide (captures[1])))),
 type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 937, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1619:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (gimple_zero_one_valued_p (_q20, valueize))
		    {
		      switch (TREE_CODE (_q21))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (gimple_simplify_410 (res_op, seq, valueize, type, captures, EQ_EXPR))
			        return true;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (gimple_zero_one_valued_p (_q20, valueize))
		    {
		      switch (TREE_CODE (_q21))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (gimple_simplify_410 (res_op, seq, valueize, type, captures, NE_EXPR))
			        return true;
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
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
					  if (gimple_simplify_411 (res_op, seq, valueize, type, captures, MIN_EXPR))
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
	      case MAX_EXPR:
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
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
					  if (gimple_simplify_411 (res_op, seq, valueize, type, captures, MAX_EXPR))
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
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1620;
				  {
				    res_op->set_op (LSHIFT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[1];
				      if (type != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1620;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 938, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1620:;
				}
			      else
				{
				  if (wi::ltu_p (wi::to_wide (captures[2]), TYPE_PRECISION (TREE_TYPE (captures[0])))
)
				    {
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1621;
				      {
					tree tem;
					tem =  build_zero_cst (type);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 939, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1621:;
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
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
1
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
0
 && type == TREE_TYPE (captures[0]))
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1622;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1622:;
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
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
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1623;
			    {
			      res_op->set_op (NOP_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1623:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1624;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 942, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1624:;
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1625;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 943, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1625:;
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
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1626;
					{
					  res_op->set_op (NOP_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 944, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1626:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1627;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 945, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1627:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1628;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail1628;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 946, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1628:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1629;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1629:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
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
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1630;
			    {
			      res_op->set_op (NOP_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1630:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1631;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 942, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1631:;
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1632;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 943, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1632:;
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
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1633;
					{
					  res_op->set_op (NOP_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 944, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1633:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1634;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 945, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1634:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1635;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail1635;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 946, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1635:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1636;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1636:;
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
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
 && operand_equal_p (captures[1], build_low_bits_mask (TREE_TYPE (captures[1]),
 TYPE_PRECISION (type)), 0)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1637;
			      {
				res_op->set_op (NOP_EXPR, type, 1);
				res_op->ops[0] = captures[0];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 948, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1637:;
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
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		    if (VECTOR_TYPE_P (type)
 && types_match (TREE_TYPE (captures[1]), truth_type_for (type))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1638;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[2];
			    if (type != TREE_TYPE (_o1[0])
			        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
				tem_op.resimplify (NULL, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, NULL);
				if (!_r1) goto next_after_fail1638;
			      }
			    else
			      _r1 = _o1[0];
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[3];
			    if (type != TREE_TYPE (_o1[0])
			        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
				tem_op.resimplify (NULL, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, NULL);
				if (!_r1) goto next_after_fail1638;
			      }
			    else
			      _r1 = _o1[0];
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1638:;
		      }
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1639;
				    {
				      res_op->set_op (COND_EXPR, type, 3);
				      res_op->ops[0] = captures[1];
				      res_op->ops[0] = unshare_expr (res_op->ops[0]);
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[2];
					if (type != TREE_TYPE (_o1[0])
					    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail1639;
					  }
					else
					  _r1 = _o1[0];
					res_op->ops[1] = _r1;
				      }
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[3];
					if (type != TREE_TYPE (_o1[0])
					    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail1639;
					  }
					else
					  _r1 = _o1[0];
					res_op->ops[2] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1639:;
				  }
			      }
			      break;
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						    if (gimple_simplify_415 (res_op, seq, valueize, type, captures, MAX_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						    if (gimple_simplify_415 (res_op, seq, valueize, type, captures, MIN_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
						    if (gimple_simplify_416 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
				    if (gimple_simplify_417 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
				    if (gimple_simplify_418 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
		    if (gimple_simplify_419 (res_op, seq, valueize, type, captures, PLUS_EXPR))
		      return true;
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
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
						    if (gimple_simplify_416 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
				    if (gimple_simplify_417 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
				    if (gimple_simplify_418 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
		    if (gimple_simplify_419 (res_op, seq, valueize, type, captures, MINUS_EXPR))
		      return true;
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
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
						    if (gimple_simplify_416 (res_op, seq, valueize, type, captures, MULT_EXPR))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
				    if (gimple_simplify_417 (res_op, seq, valueize, type, captures, MULT_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
				    if (gimple_simplify_418 (res_op, seq, valueize, type, captures, MULT_EXPR))
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
		    if (gimple_simplify_419 (res_op, seq, valueize, type, captures, MULT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case RDIV_EXPR:
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
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50 };
						    if (gimple_simplify_416 (res_op, seq, valueize, type, captures, RDIV_EXPR))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q21 };
				    if (gimple_simplify_417 (res_op, seq, valueize, type, captures, RDIV_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q40 };
				    if (gimple_simplify_418 (res_op, seq, valueize, type, captures, RDIV_EXPR))
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q20, _q21, _q21 };
		    if (gimple_simplify_419 (res_op, seq, valueize, type, captures, RDIV_EXPR))
		      return true;
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_420 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_RINTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF, CFN_RINT))
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
	      case CFN_BUILT_IN_RINTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL, CFN_RINT))
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
	      case CFN_BUILT_IN_ROUND:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUND, CFN_ROUND))
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
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, CFN_SQRT))
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
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, CFN_SQRT))
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
	      case CFN_BUILT_IN_TRUNC:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNC, CFN_TRUNC))
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
	      case CFN_BUILT_IN_FMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    tree _q22 = gimple_call_arg (_c1, 2);
		    _q22 = do_valueize (valueize, _q22);
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
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    switch (TREE_CODE (_q22))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q22))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								CASE_CONVERT:
								  {
								    tree _q70 = gimple_assign_rhs1 (_a4);
								    _q70 = do_valueize (valueize, _q70);
								    {
								      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q50, _q70 };
								      if (gimple_simplify_414 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA, CFN_FMA))
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
	      case CFN_BUILT_IN_ROUNDF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF, CFN_ROUND))
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
	      case CFN_BUILT_IN_ROUNDL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL, CFN_ROUND))
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
	      case CFN_BUILT_IN_CEIL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEIL, CFN_CEIL))
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
	      case CFN_BUILT_IN_FMAF:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    tree _q22 = gimple_call_arg (_c1, 2);
		    _q22 = do_valueize (valueize, _q22);
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
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    switch (TREE_CODE (_q22))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q22))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								CASE_CONVERT:
								  {
								    tree _q70 = gimple_assign_rhs1 (_a4);
								    _q70 = do_valueize (valueize, _q70);
								    {
								      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q50, _q70 };
								      if (gimple_simplify_414 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAF, CFN_FMA))
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
	      case CFN_BUILT_IN_FMAL:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    tree _q22 = gimple_call_arg (_c1, 2);
		    _q22 = do_valueize (valueize, _q22);
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
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    switch (TREE_CODE (_q22))
						      {
						      case SSA_NAME:
						        if (gimple *_d4 = get_def (valueize, _q22))
						          {
							    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							      switch (gimple_assign_rhs_code (_a4))
								{
								CASE_CONVERT:
								  {
								    tree _q70 = gimple_assign_rhs1 (_a4);
								    _q70 = do_valueize (valueize, _q70);
								    {
								      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q50, _q70 };
								      if (gimple_simplify_414 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL, CFN_FMA))
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
	      case CFN_BUILT_IN_RINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT, CFN_RINT))
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
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, CFN_SQRT))
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
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
	          }
	        break;
	      case CFN_BUILT_IN_FLOORF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF, CFN_FLOOR))
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
	      case CFN_BUILT_IN_FLOORL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_FLOOR))
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
	      case CFN_BUILT_IN_NEARBYINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINT, CFN_NEARBYINT))
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
	      case CFN_BUILT_IN_NEARBYINTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF, CFN_NEARBYINT))
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
	      case CFN_BUILT_IN_NEARBYINTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTL, CFN_NEARBYINT))
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
	      case CFN_BUILT_IN_ROUNDEVEN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDEVEN, CFN_ROUNDEVEN))
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
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
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
	          }
	        break;
	      case CFN_BUILT_IN_ROUNDEVENF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDEVENF, CFN_ROUNDEVEN))
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
	      case CFN_BUILT_IN_ROUNDEVENL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDEVENL, CFN_ROUNDEVEN))
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
	      case CFN_BUILT_IN_TRUNCF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF, CFN_TRUNC))
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
	      case CFN_BUILT_IN_TRUNCL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCL, CFN_TRUNC))
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
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
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
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
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
	          }
	        break;
	      case CFN_BUILT_IN_CEILF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF, CFN_CEIL))
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
	      case CFN_BUILT_IN_CEILL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL, CFN_CEIL))
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
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						CASE_CONVERT:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q50 };
						      if (gimple_simplify_413 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
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
	          }
	        break;
	      case CFN_BUILT_IN_FLOOR:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    if (gimple_float16_value_p (_q30, valueize))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					  if (gimple_simplify_412 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOOR, CFN_FLOOR))
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
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_POINTER_DIFF_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2062;
	{
	  res_op->set_op (NOP_EXPR, type, 1);
	  res_op->ops[0] = captures[0];
	  res_op->resimplify (lseq, valueize);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1068, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2062:;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _p0, 0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2063;
	{
	  tree tem;
	  tem =  build_zero_cst (type);
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2063:;
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
	      case POINTER_PLUS_EXPR:
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2064;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[2];
						gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2064;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2064:;
					  }
				      }
				    }
			          break;
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
			      case ADDR_EXPR:
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
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
						    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
						      {
							{
 poly_int64 diff;
							    if (ptr_difference_const (captures[1], captures[3], &diff)
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2065;
								{
								  tree tem;
								  tem =  build_int_cst_type (type, diff);
								  res_op->set_value (tem);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2065:;
							      }
							}
						      }
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
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
				    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
				      {
					{
 poly_int64 diff;
					    if (ptr_difference_const (captures[1], captures[3], &diff)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2066;
						{
						  tree tem;
						  tem =  build_int_cst_type (type, diff);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2066:;
					      }
					}
				      }
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
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
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
					    {
					      {
 poly_int64 diff;
						  if (ptr_difference_const (captures[1], captures[3], &diff)
)
						    {
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2067;
						      {
							tree tem;
							tem =  build_int_cst_type (type, diff);
							res_op->set_value (tem);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2067:;
						    }
					      }
					    }
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
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
			  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
			    {
			      {
 poly_int64 diff;
				  if (ptr_difference_const (captures[1], captures[3], &diff)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2068;
				      {
					tree tem;
					tem =  build_int_cst_type (type, diff);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2068:;
				    }
			      }
			    }
			}
		        break;
		      }
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
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
						    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
						      {
							{
 poly_int64 diff;
							    if (ptr_difference_const (captures[1], captures[3], &diff)
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2069;
								{
								  tree tem;
								  tem =  build_int_cst_type (type, diff);
								  res_op->set_value (tem);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2069:;
							      }
							}
						      }
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
					    {
					      {
 poly_int64 diff;
						  if (ptr_difference_const (captures[1], captures[3], &diff)
)
						    {
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2070;
						      {
							tree tem;
							tem =  build_int_cst_type (type, diff);
							res_op->set_value (tem);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2070:;
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
			      case ADDR_EXPR:
			        {
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
				    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
				      {
					{
 poly_int64 diff;
					    if (ptr_difference_const (captures[1], captures[3], &diff)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2071;
						{
						  tree tem;
						  tem =  build_int_cst_type (type, diff);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2071:;
					      }
					}
				      }
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
			  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
			    {
			      {
 poly_int64 diff;
				  if (ptr_difference_const (captures[1], captures[3], &diff)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2072;
				      {
					tree tem;
					tem =  build_int_cst_type (type, diff);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2072:;
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
	      case ADDR_EXPR:
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
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
				    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
				      {
					{
 poly_int64 diff;
					    if (ptr_difference_const (captures[1], captures[3], &diff)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2073;
						{
						  tree tem;
						  tem =  build_int_cst_type (type, diff);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2073:;
					      }
					}
				      }
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
		    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
		      {
			{
 poly_int64 diff;
			    if (ptr_difference_const (captures[1], captures[3], &diff)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2074;
				{
				  tree tem;
				  tem =  build_int_cst_type (type, diff);
				  res_op->set_value (tem);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2074:;
			      }
			}
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
      {
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
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
			  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
			    {
			      {
 poly_int64 diff;
				  if (ptr_difference_const (captures[1], captures[3], &diff)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2075;
				      {
					tree tem;
					tem =  build_int_cst_type (type, diff);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2075:;
				    }
			      }
			    }
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
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
	  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
	    {
	      {
 poly_int64 diff;
		  if (ptr_difference_const (captures[1], captures[3], &diff)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2076;
		      {
			tree tem;
			tem =  build_int_cst_type (type, diff);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2076:;
		    }
	      }
	    }
	}
        break;
      }
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
			      case ADDR_EXPR:
			        {
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
				    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
				      {
					{
 poly_int64 diff;
					    if (ptr_difference_const (captures[1], captures[3], &diff)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2077;
						{
						  tree tem;
						  tem =  build_int_cst_type (type, diff);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2077:;
					      }
					}
				      }
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
			  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
			    {
			      {
 poly_int64 diff;
				  if (ptr_difference_const (captures[1], captures[3], &diff)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2078;
				      {
					tree tem;
					tem =  build_int_cst_type (type, diff);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2078:;
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
	      case ADDR_EXPR:
	        {
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
		    if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
		      {
			{
 poly_int64 diff;
			    if (ptr_difference_const (captures[1], captures[3], &diff)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2079;
				{
				  tree tem;
				  tem =  build_int_cst_type (type, diff);
				  res_op->set_value (tem);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2079:;
			      }
			}
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
      {
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
	  if (tree_nop_conversion_p (TREE_TYPE(captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE(captures[2]), TREE_TYPE (captures[3]))
)
	    {
	      {
 poly_int64 diff;
		  if (ptr_difference_const (captures[1], captures[3], &diff)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2080;
		      {
			tree tem;
			tem =  build_int_cst_type (type, diff);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2080:;
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
	      case POINTER_PLUS_EXPR:
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
			      case ADDR_EXPR:
			        {
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case POINTER_PLUS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
								    {
 poly_int64 diff;
									if (ptr_difference_const (captures[0], captures[2], &diff)
)
									  {
									    gimple_seq *lseq = seq;
									    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2081;
									    {
									      res_op->set_op (PLUS_EXPR, type, 2);
									      res_op->ops[0] =  build_int_cst_type (type, diff);
									      {
										tree _o1[1], _r1;
										{
										  tree _o2[2], _r2;
										  _o2[0] = captures[1];
										  _o2[1] = captures[3];
										  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
										  tem_op.resimplify (lseq, valueize);
										  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
										  if (!_r2) goto next_after_fail2081;
										  _o1[0] = _r2;
										}
										if (type != TREE_TYPE (_o1[0])
										    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
										  {
										    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
										    tem_op.resimplify (lseq, valueize);
										    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
										    if (!_r1) goto next_after_fail2081;
										  }
										else
										  _r1 = _o1[0];
										res_op->ops[1] = _r1;
									      }
									      res_op->resimplify (lseq, valueize);
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
									      return true;
									    }
next_after_fail2081:;
									  }
								    }
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
							  {
 poly_int64 diff;
							      if (ptr_difference_const (captures[0], captures[2], &diff)
)
								{
								  gimple_seq *lseq = seq;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2082;
								  {
								    res_op->set_op (PLUS_EXPR, type, 2);
								    res_op->ops[0] =  build_int_cst_type (type, diff);
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] = captures[1];
									_o2[1] = captures[3];
									gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
									tem_op.resimplify (lseq, valueize);
									_r2 = maybe_push_res_to_seq (&tem_op, lseq);
									if (!_r2) goto next_after_fail2082;
									_o1[0] = _r2;
								      }
								      if (type != TREE_TYPE (_o1[0])
								          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
									{
									  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
									  tem_op.resimplify (lseq, valueize);
									  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									  if (!_r1) goto next_after_fail2082;
								        }
								      else
								        _r1 = _o1[0];
								      res_op->ops[1] = _r1;
								    }
								    res_op->resimplify (lseq, valueize);
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
								    return true;
								  }
next_after_fail2082:;
								}
							  }
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
		    case ADDR_EXPR:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case POINTER_PLUS_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
							  {
 poly_int64 diff;
							      if (ptr_difference_const (captures[0], captures[2], &diff)
)
								{
								  gimple_seq *lseq = seq;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2083;
								  {
								    res_op->set_op (PLUS_EXPR, type, 2);
								    res_op->ops[0] =  build_int_cst_type (type, diff);
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] = captures[1];
									_o2[1] = captures[3];
									gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
									tem_op.resimplify (lseq, valueize);
									_r2 = maybe_push_res_to_seq (&tem_op, lseq);
									if (!_r2) goto next_after_fail2083;
									_o1[0] = _r2;
								      }
								      if (type != TREE_TYPE (_o1[0])
								          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
									{
									  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
									  tem_op.resimplify (lseq, valueize);
									  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									  if (!_r1) goto next_after_fail2083;
								        }
								      else
								        _r1 = _o1[0];
								      res_op->ops[1] = _r1;
								    }
								    res_op->resimplify (lseq, valueize);
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
								    return true;
								  }
next_after_fail2083:;
								}
							  }
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
						{
 poly_int64 diff;
						    if (ptr_difference_const (captures[0], captures[2], &diff)
)
						      {
							gimple_seq *lseq = seq;
							if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2084;
							{
							  res_op->set_op (PLUS_EXPR, type, 2);
							  res_op->ops[0] =  build_int_cst_type (type, diff);
							  {
							    tree _o1[1], _r1;
							    {
							      tree _o2[2], _r2;
							      _o2[0] = captures[1];
							      _o2[1] = captures[3];
							      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							      tem_op.resimplify (lseq, valueize);
							      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r2) goto next_after_fail2084;
							      _o1[0] = _r2;
							    }
							    if (type != TREE_TYPE (_o1[0])
							        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
							      {
								gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
								tem_op.resimplify (lseq, valueize);
								_r1 = maybe_push_res_to_seq (&tem_op, lseq);
								if (!_r1) goto next_after_fail2084;
							      }
							    else
							      _r1 = _o1[0];
							    res_op->ops[1] = _r1;
							  }
							  res_op->resimplify (lseq, valueize);
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
							  return true;
							}
next_after_fail2084:;
						      }
						}
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case ADDR_EXPR:
			        {
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				    {
 poly_int64 diff;
					if (ptr_difference_const (captures[0], captures[2], &diff)
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2085;
					    {
					      res_op->set_op (PLUS_EXPR, type, 2);
					      res_op->ops[0] =  build_int_cst_type (type, diff);
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[1];
						if (type != TREE_TYPE (_o1[0])
						    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						  {
						    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2085;
						  }
						else
						  _r1 = _o1[0];
						res_op->ops[1] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2085:;
					  }
				    }
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[2], &diff)
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2086;
				  {
				    res_op->set_op (PLUS_EXPR, type, 2);
				    res_op->ops[0] =  build_int_cst_type (type, diff);
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[1];
				      if (type != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2086;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2086:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q20 };
			if (!TYPE_SATURATING (type)
)
			  {
			    if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2087;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[1];
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, stype, _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2087;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1075, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2087:;
				}
			      }
			  }
		      }
		    }
	          break;
	        }
	      case ADDR_EXPR:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				    {
 poly_int64 diff;
					if (ptr_difference_const (captures[0], captures[1], &diff)
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2088;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] =  build_int_cst_type (type, diff);
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[2];
						if (type != TREE_TYPE (_o1[0])
						    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						  {
						    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2088;
						  }
						else
						  _r1 = _o1[0];
						res_op->ops[1] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1076, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2088:;
					  }
				    }
				  }
			          break;
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case POINTER_PLUS_EXPR:
		      {
			tree _q30 = gimple_assign_rhs1 (_a1);
			_q30 = do_valueize (valueize, _q30);
			tree _q31 = gimple_assign_rhs2 (_a1);
			_q31 = do_valueize (valueize, _q31);
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2089;
				  {
				    res_op->set_op (MINUS_EXPR, type, 2);
				    res_op->ops[0] =  build_int_cst_type (type, diff);
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (type != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2089;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1076, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2089:;
				}
			  }
			}
		        break;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case POINTER_PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			if (!TYPE_SATURATING (type)
)
			  {
			    if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2090;
				    {
				      res_op->set_op (NEGATE_EXPR, type, 1);
				      {
					tree _o1[1], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[1];
					  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, stype, _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail2090;
					  _o1[0] = _r2;
					}
					if (type != TREE_TYPE (_o1[0])
					    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2090;
					  }
					else
					  _r1 = _o1[0];
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1077, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2090:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case POINTER_PLUS_EXPR:
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (!TYPE_SATURATING (type)
)
					  {
					    if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2091;
						{
						  res_op->set_op (POINTER_DIFF_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1078, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2091:;
					      }
					  }
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
					if (!TYPE_SATURATING (type)
)
					  {
					    if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
					      {
						{
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2092;
						    {
						      res_op->set_op (MINUS_EXPR, type, 2);
						      {
							tree _o1[1], _r1;
							{
							  tree _o2[1], _r2;
							  _o2[0] = captures[1];
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, stype, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail2092;
							  _o1[0] = _r2;
							}
							if (type != TREE_TYPE (_o1[0])
							    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2092;
							  }
							else
							  _r1 = _o1[0];
							res_op->ops[0] = _r1;
						      }
						      {
							tree _o1[1], _r1;
							{
							  tree _o2[1], _r2;
							  _o2[0] = captures[2];
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, stype, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail2092;
							  _o1[0] = _r2;
							}
							if (type != TREE_TYPE (_o1[0])
							    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2092;
							  }
							else
							  _r1 = _o1[0];
							res_op->ops[1] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1079, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2092:;
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
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2093;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail2093;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail2093:;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF64 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF64;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2271;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2271:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF64;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2272;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2272:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
	    return true;
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
	  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_317 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_318 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_319 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_320 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF32X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF32X;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2275;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2275:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF32X;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2276;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2276:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
	    return true;
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
	  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_317 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_318 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_319 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_320 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF128X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF128X;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2279;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2279:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF128X;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2280;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2280:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
	    return true;
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
	  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_317 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_318 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_319 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_320 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_TRUNC_DIV_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_197 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      CASE_CONVERT:
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
					      case LSHIFT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (integer_onep (_q50))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q50, _q51 };
							if (gimple_simplify_321 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (integer_onep (_q40))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q41 };
					if (gimple_simplify_321 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (integer_onep (_q40))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q40, _q41 };
					if (gimple_simplify_322 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (integer_onep (_q30))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q31 };
			if (gimple_simplify_322 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_323 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_325 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_324 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
        return true;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_326 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_327 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_327 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_328 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_328 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
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
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_329 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_330 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_330 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_331 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_332 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_332 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
			  return true;
		      }
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
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
						    if (gimple_simplify_334 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_333 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
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
				  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q41 };
					if (gimple_simplify_335 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
					  return true;
				      }
				    }
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q41, _q40 };
					if (gimple_simplify_335 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q30, _q31 };
					if (gimple_simplify_335 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
					  return true;
				      }
				    }
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q31, _q30 };
					if (gimple_simplify_335 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				{
 wide_int c = wi::to_wide (captures[2]);
 wide_int n = wi::to_wide (captures[3]);
 bool shift = TRUNC_DIV_EXPR == RSHIFT_EXPR;
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2283;
					    {
					      res_op->set_op (PLUS_EXPR, type, 2);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2283;
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
next_after_fail2283:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2284;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2284;
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
next_after_fail2284:;
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
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
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
				  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q41 };
					if (gimple_simplify_336 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
					  return true;
				      }
				    }
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q41, _q40 };
					if (gimple_simplify_336 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR))
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
 && (TREE_CODE_CLASS (TRUNC_DIV_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2285;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2285;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2285;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2285:;
					  }
				      }
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
 && (TREE_CODE_CLASS (TRUNC_DIV_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2286;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2286;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2286;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2286:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) > 1
 && !integer_zerop (captures[1])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[1]))
)
	{
	  if (TYPE_UNSIGNED (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2287;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[1];
		  _o1[1] =  build_one_cst (type);
		  gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail2287;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1113, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2287:;
	    }
	  else
	    {
	      if (!canonicalize_math_p ()
)
		{
		  {
 tree utype = unsigned_type_for (type);
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2288;
		      {
			res_op->set_op (COND_EXPR, type, 3);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[1];
			      if (utype != TREE_TYPE (_o3[0])
			          && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r3) goto next_after_fail2288;
			        }
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    _o2[1] =  build_one_cst (utype);
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail2288;
			    _o1[0] = _r2;
			  }
			  _o1[1] =  build_int_cst (utype, 2);
			  gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, boolean_type_node, _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2288;
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] = captures[1];
			res_op->ops[2] =  build_zero_cst (type);
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1114, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2288:;
		  }
		}
	    }
	}
    }
  }
if (gimple_with_possible_nonzero_bits (_p0, valueize))
  {
    if (integer_pow2p (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
 && !TYPE_UNSIGNED (type)
 && wi::multiple_of_p (get_nonzero_bits (captures[0]), wi::to_wide (captures[1]), SIGNED)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2289;
	      {
		res_op->set_op (EXACT_DIV_EXPR, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1115, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2289:;
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
 && (TREE_CODE_CLASS (TRUNC_DIV_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2290;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2290;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2290;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2290:;
		      }
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
gimple_simplify_ROUND_DIV_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_197 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_323 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_325 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_324 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
        return true;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_326 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_327 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_327 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_328 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_328 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_330 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_330 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_332 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_332 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
			  return true;
		      }
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
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
						    if (gimple_simplify_334 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_333 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR))
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
 && (TREE_CODE_CLASS (ROUND_DIV_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2297;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2297;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2297;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2297:;
					  }
				      }
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
 && (TREE_CODE_CLASS (ROUND_DIV_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2298;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2298;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2298;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2298:;
		      }
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
 && (TREE_CODE_CLASS (ROUND_DIV_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2299;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2299;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2299;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2299:;
		      }
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
gimple_simplify_FLOOR_MOD_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_337 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR, TRUNC_MOD_EXPR))
      return true;
  }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_338 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
	  return true;
      }
    }
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_339 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
	  return true;
      }
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_340 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
	  return true;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_341 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
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
	      case FLOOR_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_342 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
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
				if (gimple_simplify_343 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
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
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree _q30_pops[1];
		    if (gimple_power_of_two_cand (_q30, _q30_pops, valueize))
		      {
			tree _q40 = _q30_pops[0];
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q40 };
			  if (gimple_simplify_344 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
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
{
  tree _p1_pops[1];
  if (gimple_power_of_two_cand (_p1, _p1_pops, valueize))
    {
      tree _q30 = _p1_pops[0];
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	if (gimple_simplify_344 (res_op, seq, valueize, type, captures, FLOOR_MOD_EXPR))
	  return true;
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
 && (TREE_CODE_CLASS (FLOOR_MOD_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2305;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2305;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2305;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2305:;
					  }
				      }
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
 && (TREE_CODE_CLASS (FLOOR_MOD_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2306;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2306;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2306;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2306:;
		      }
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
 && (TREE_CODE_CLASS (FLOOR_MOD_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2307;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2307;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2307;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2307:;
		      }
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
gimple_simplify_RDIV_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2308;
	    {
	      tree tem;
	      tem =  build_one_cst (type);
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1116, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2308:;
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_345 (res_op, seq, valueize, type, captures))
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_345 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      CASE_CONVERT:
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
					      case ABS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
						    {
						      {
							tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
							if (gimple_simplify_346 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case ABS_EXPR:
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
							if (gimple_simplify_346 (res_op, seq, valueize, type, captures))
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
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures))
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
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures))
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
  if (real_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2309;
	    {
	      tree tem;
	      tem = captures[0];
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1117, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2309:;
	  }
      }
    }
  if (real_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2310;
	    {
	      res_op->set_op (NEGATE_EXPR, type, 1);
	      res_op->ops[0] = captures[0];
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1118, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2310:;
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
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		    if (flag_reciprocal_math
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2311;
			{
			  res_op->set_op (RDIV_EXPR, type, 2);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r1) goto next_after_fail2311;
			    res_op->ops[1] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1119, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2311:;
		      }
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
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
			  if (flag_reciprocal_math
)
			    {
			      {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[3]);
				  if (tem
)
				    {
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2312;
				      {
					res_op->set_op (RDIV_EXPR, type, 2);
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[0];
					  _o1[1] =  tem;
					  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2312;
					  res_op->ops[0] = _r1;
					}
					res_op->ops[1] = captures[2];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1120, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2312:;
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
	      case RDIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		    if (flag_reciprocal_math
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2313;
			{
			  res_op->set_op (MULT_EXPR, type, 2);
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[2];
			    gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r1) goto next_after_fail2313;
			    res_op->ops[0] = _r1;
			  }
			  res_op->ops[1] = captures[3];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1121, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2313:;
		      }
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2314;
		    {
		      res_op->set_op (RDIV_EXPR, type, 2);
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail2314;
			res_op->ops[0] = _r1;
		      }
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1122, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2314:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (optimize
)
	    {
	      if (flag_reciprocal_math
 && !real_zerop (captures[1])
)
		{
		  {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
		      if (tem
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2315;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  tem;
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2315:;
			}
		  }
		}
	      else
		{
		  if (REAL_CST != COMPLEX_CST
)
		    {
		      {
 tree inverse = exact_inverse (type, captures[1]);
			  if (inverse
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2316;
			      {
				res_op->set_op (MULT_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  inverse;
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2316:;
			    }
		      }
		    }
		}
	    }
	}
        break;
      }
    case COMPLEX_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (optimize
)
	    {
	      if (flag_reciprocal_math
 && !real_zerop (captures[1])
)
		{
		  {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
		      if (tem
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2317;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  tem;
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2317:;
			}
		  }
		}
	      else
		{
		  if (COMPLEX_CST != COMPLEX_CST
)
		    {
		      {
 tree inverse = exact_inverse (type, captures[1]);
			  if (inverse
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2318;
			      {
				res_op->set_op (MULT_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  inverse;
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2318:;
			    }
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
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (optimize
)
	    {
	      if (flag_reciprocal_math
 && !real_zerop (captures[1])
)
		{
		  {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
		      if (tem
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2319;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  tem;
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2319:;
			}
		  }
		}
	      else
		{
		  if (VECTOR_CST != COMPLEX_CST
)
		    {
		      {
 tree inverse = exact_inverse (type, captures[1]);
			  if (inverse
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2320;
			      {
				res_op->set_op (MULT_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  inverse;
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2320:;
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
 && (TREE_CODE_CLASS (RDIV_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2321;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2321;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2321;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2321:;
					  }
				      }
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
 && (TREE_CODE_CLASS (RDIV_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2322;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2322;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2322;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2322:;
		      }
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
 && (TREE_CODE_CLASS (RDIV_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2323;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2323;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2323;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2323:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			  if (gimple_simplify_347 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF))
			    return true;
			}
		      }
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2324;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2324;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_SQRTF, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2324;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2324:;
					}
				    }
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
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			  if (gimple_simplify_347 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL))
			    return true;
			}
		      }
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2325;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2325;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_SQRTL, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2325;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2325:;
					}
				    }
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
	      case CFN_BUILT_IN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2326;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2326;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2326;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2326:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2327;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2327;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP10F, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2327;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2327:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2328;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2328;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP10L, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2328;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2328:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2329;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2329;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_CBRT, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2329;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2329:;
					}
				    }
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
	      case CFN_BUILT_IN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2330;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2330;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP2, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2330;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2330:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2331;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2331;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXPF, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2331;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2331:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2332;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2332;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXPL, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2332;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2332:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			  if (gimple_simplify_347 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT))
			    return true;
			}
		      }
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2333;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2333;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_SQRT, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2333;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2333:;
					}
				    }
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
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2334;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2334;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_EXP, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2334;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2334:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2335;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2335;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_POW10F, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2335;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2335:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2336;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2336;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_POW10L, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2336;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2336:;
			}
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2337;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2337;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_EXP2, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2337;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2337:;
			}
		    }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			  if (gimple_simplify_347 (res_op, seq, valueize, type, captures, CFN_SQRT))
			    return true;
			}
		      }
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2338;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2338;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_SQRT, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2338;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2338:;
					}
				    }
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
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2339;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2339;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_EXP10, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2339;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2339:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2340;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2340;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_CBRTF, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2340;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2340:;
					}
				    }
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
	      case CFN_BUILT_IN_CBRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case RDIV_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
				      if (flag_unsafe_math_optimizations
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[1])
					          || !single_use (captures[2])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2341;
					  {
					    res_op->set_op (MULT_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						_o2[0] = captures[4];
						_o2[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail2341;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_CBRTL, TREE_TYPE (_o1[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail2341;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail2341:;
					}
				    }
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
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2342;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2342;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP10, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2342;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2342:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2343;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2343;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP2F, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2343;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2343:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2344;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2344;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP2L, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2344;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2344:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2345;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail2345;
				_o1[0] = _r2;
			      }
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_POW10, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2345;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2345:;
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
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SINHF:
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
				case CFN_BUILT_IN_COSHF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_350 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINHF, CFN_BUILT_IN_COSHF, CFN_BUILT_IN_TANHF))
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
	      case CFN_BUILT_IN_SINHL:
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
				case CFN_BUILT_IN_COSHL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_350 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINHL, CFN_BUILT_IN_COSHL, CFN_BUILT_IN_TANHL))
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
	      case CFN_BUILT_IN_TANHF:
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
				case CFN_BUILT_IN_SINHF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_351 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANHF, CFN_BUILT_IN_SINHF, CFN_BUILT_IN_COSHF))
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
	      case CFN_BUILT_IN_TANHL:
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
				case CFN_BUILT_IN_SINHL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_351 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANHL, CFN_BUILT_IN_SINHL, CFN_BUILT_IN_COSHL))
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
	      case CFN_BUILT_IN_COS:
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
				case CFN_BUILT_IN_SIN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_352 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN, CFN_BUILT_IN_TAN))
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
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
				if (gimple_simplify_354 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SIN:
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
				case CFN_BUILT_IN_COS:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_348 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SIN, CFN_BUILT_IN_COS, CFN_BUILT_IN_TAN))
					      return true;
					  }
				        }
				    }
				  break;
				case CFN_BUILT_IN_TAN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_349 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SIN, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS))
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
	      case CFN_BUILT_IN_TAN:
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
				case CFN_BUILT_IN_SIN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_353 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_SIN, CFN_BUILT_IN_COS))
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
	      case CFN_BUILT_IN_COSF:
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
				case CFN_BUILT_IN_SINF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_352 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF, CFN_BUILT_IN_TANF))
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
	      case CFN_BUILT_IN_COSL:
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
				case CFN_BUILT_IN_SINL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_352 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL, CFN_BUILT_IN_TANL))
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
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
				if (gimple_simplify_354 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
				if (gimple_simplify_354 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SINF:
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
				case CFN_BUILT_IN_COSF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_348 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_TANF))
					      return true;
					  }
				        }
				    }
				  break;
				case CFN_BUILT_IN_TANF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_349 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF))
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
	      case CFN_BUILT_IN_SINH:
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
				case CFN_BUILT_IN_COSH:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_350 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINH, CFN_BUILT_IN_COSH, CFN_BUILT_IN_TANH))
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
	      case CFN_BUILT_IN_SINL:
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
				case CFN_BUILT_IN_COSL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_348 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_TANL))
					      return true;
					  }
				        }
				    }
				  break;
				case CFN_BUILT_IN_TANL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_349 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINL, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL))
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
	      case CFN_BUILT_IN_TANF:
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
				case CFN_BUILT_IN_SINF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_353 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_SINF, CFN_BUILT_IN_COSF))
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
	      case CFN_BUILT_IN_TANH:
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
				case CFN_BUILT_IN_SINH:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_351 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANH, CFN_BUILT_IN_SINH, CFN_BUILT_IN_COSH))
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
	      case CFN_BUILT_IN_TANL:
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
				case CFN_BUILT_IN_SINL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_353 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_SINL, CFN_BUILT_IN_COSL))
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
	      case CFN_COS:
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
				case CFN_SIN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_352 (res_op, seq, valueize, type, captures, CFN_COS, CFN_SIN, CFN_TAN))
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
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
				if (gimple_simplify_354 (res_op, seq, valueize, type, captures, CFN_POW))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_SIN:
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
				case CFN_COS:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_348 (res_op, seq, valueize, type, captures, CFN_SIN, CFN_COS, CFN_TAN))
					      return true;
					  }
				        }
				    }
				  break;
				case CFN_TAN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_349 (res_op, seq, valueize, type, captures, CFN_SIN, CFN_TAN, CFN_COS))
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
	      case CFN_TAN:
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
				case CFN_SIN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_353 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_SIN, CFN_COS))
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
	      case CFN_SINH:
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
				case CFN_COSH:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_350 (res_op, seq, valueize, type, captures, CFN_SINH, CFN_COSH, CFN_TANH))
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
	      case CFN_TANH:
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
				case CFN_SINH:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_351 (res_op, seq, valueize, type, captures, CFN_TANH, CFN_SINH, CFN_COSH))
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
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		      if (gimple_simplify_355 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		      if (gimple_simplify_355 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		      if (gimple_simplify_355 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
		        return true;
		    }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		      if (gimple_simplify_355 (res_op, seq, valueize, type, captures, CFN_POW))
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
gimple_simplify_GT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
			if (real_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_356 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_357 (res_op, seq, valueize, type, captures, LT_EXPR))
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
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_358 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_358 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_358 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_358 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_minus_onep (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_383 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR))
			        return true;
			    }
			    break;
			  }
		        default:;
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
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_359 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_359 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_359 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_359 (res_op, seq, valueize, type, captures, GT_EXPR))
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
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					      if (gimple_simplify_360 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_361 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_361 (res_op, seq, valueize, type, captures, GT_EXPR))
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
			      case EXACT_DIV_EXPR:
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
								    case EXACT_DIV_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									  {
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
									      if (gimple_simplify_225 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	      case EXACT_DIV_EXPR:
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
				    case EXACT_DIV_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					      if (gimple_simplify_225 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	          break;
	        }
	      case TRUNC_DIV_EXPR:
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
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_228 (res_op, seq, valueize, type, captures, GT_EXPR))
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
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_362 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_363 (res_op, seq, valueize, type, captures, GT_EXPR))
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
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					if (gimple_simplify_232 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
					if (gimple_simplify_233 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			if (gimple_simplify_361 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_361 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_231 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			if (gimple_simplify_231 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
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
		  if (tree_expr_nonnegative_p (_q20))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_364 (res_op, seq, valueize, type, captures, GT_EXPR, BIT_AND_EXPR))
			      return true;
			  }
		        }
		    }
		  if (tree_expr_nonnegative_p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			    if (gimple_simplify_364 (res_op, seq, valueize, type, captures, GT_EXPR, BIT_AND_EXPR))
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
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (tree_expr_nonnegative_p (_q30))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (gimple_simplify_364 (res_op, seq, valueize, type, captures, LT_EXPR, BIT_IOR_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      if (tree_expr_nonnegative_p (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			    if (gimple_simplify_364 (res_op, seq, valueize, type, captures, LT_EXPR, BIT_IOR_EXPR))
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
	      case MAX_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_241 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_241 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR, LT_EXPR))
			  return true;
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
				if (gimple_simplify_365 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR, BIT_IOR_EXPR))
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
	      case MIN_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_241 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_241 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR, GT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MAX_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_366 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_366 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
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
	      case MIN_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_366 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_366 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
			  return true;
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
				if (gimple_simplify_365 (res_op, seq, valueize, type, captures, MIN_EXPR, GT_EXPR, BIT_AND_EXPR))
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
 && (TREE_CODE_CLASS (GT_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2353;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2353;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2353;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2353:;
					  }
				      }
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
 && (TREE_CODE_CLASS (GT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2354;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2354;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2354;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2354:;
		      }
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
 && (TREE_CODE_CLASS (GT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2355;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2355;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2355;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2355:;
		      }
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
      if (gimple_simplify_384 (res_op, seq, valueize, type, captures, GT_EXPR, GE_EXPR))
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
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      if (gimple_simplify_261 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_314 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	      case BIT_NOT_EXPR:
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_267 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		  tree _p1_pops[1];
		  if (gimple_nop_convert (_p1, _p1_pops, valueize))
		    {
		      tree _q40 = _p1_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
					if (gimple_simplify_267 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      if (gimple_simplify_266 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
		  case BIT_NOT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
					if (gimple_simplify_265 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		      tree _p1_pops[1];
		      if (gimple_nop_convert (_p1, _p1_pops, valueize))
		        {
			  tree _q50 = _p1_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case BIT_NOT_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
					    if (gimple_simplify_265 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		    if (CONSTANT_CLASS_P (_p1))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			  if (gimple_simplify_266 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_268 (res_op, seq, valueize, type, captures, GT_EXPR))
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_269 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR))
				  return true;
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
			      if (gimple_simplify_368 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR))
			        return true;
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_269 (res_op, seq, valueize, type, captures, MINUS_EXPR, GT_EXPR))
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
				if (gimple_simplify_270 (res_op, seq, valueize, type, captures, GT_EXPR))
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
				    if (gimple_simplify_273 (res_op, seq, valueize, type, captures, GT_EXPR, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_274 (res_op, seq, valueize, type, captures, GT_EXPR, GE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
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
				if (gimple_simplify_369 (res_op, seq, valueize, type, captures, GT_EXPR))
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
			      case EXACT_DIV_EXPR:
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
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_370 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_278 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		    if (gimple_simplify_279 (res_op, seq, valueize, type, captures, GT_EXPR))
		      return true;
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
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_385 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR))
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
				    if (gimple_simplify_276 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
		      if (gimple_simplify_277 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
		        return true;
		    }
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
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, GT_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTF:
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
				case CFN_BUILT_IN_SQRTF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, GT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_271 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, GT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTL:
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
				case CFN_BUILT_IN_SQRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, GT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_271 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, GT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
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
				case CFN_BUILT_IN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, GT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_271 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, GT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_SQRT:
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
				case CFN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_SQRT, GT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_271 (res_op, seq, valueize, type, captures, CFN_SQRT, GT_EXPR))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q32, _p0 };
		    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, LT_EXPR))
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
			      case ADDR_EXPR:
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
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
								    if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
							    return true;
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
						    if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					  if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		    case ADDR_EXPR:
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
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
						if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
						  return true;
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
					  if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GT_EXPR))
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
		  if (uniform_integer_cst_p (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			if (gimple_simplify_371 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case ADDR_EXPR:
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
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
						    if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
					    return true;
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
				    if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
			  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
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
    case ADDR_EXPR:
      {
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
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
				if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
				  return true;
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
			  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	      }
	    break;
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		if (gimple_simplify_298 (res_op, seq, valueize, type, captures, GT_EXPR))
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
  if (uniform_integer_cst_p (_p1))
    {
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
	if (gimple_simplify_372 (res_op, seq, valueize, type, captures, GT_EXPR))
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
			      case NE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q31))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					    if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2356;
						{
						  tree tem;
						  tem =  constant_boolean_node (false, type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1127, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2356:;
					      }
					  }
				        }
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
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q31))
						    {
						    case INTEGER_CST:
						      {
							if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
							      if (gimple_simplify_373 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR))
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
			          break;
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
			      case PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      switch (TREE_CODE (_q41))
						        {
							case INTEGER_CST:
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0, _q41 };
							      if (gimple_simplify_373 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
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
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0, _q31 };
			      if (gimple_simplify_368 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
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
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_374 (res_op, seq, valueize, type, captures, GT_EXPR))
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
	      case PLUS_EXPR:
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
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_minus_onep (_q31))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
					    if (gimple_simplify_386 (res_op, seq, valueize, type, captures, LT_EXPR))
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case REALPART_EXPR:
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
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_SUB_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q30 = gimple_call_arg (_c2, 0);
					_q30 = do_valueize (valueize, _q30);
					tree _q31 = gimple_call_arg (_c2, 1);
					_q31 = do_valueize (valueize, _q31);
					if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
					      if (gimple_simplify_387 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case REALPART_EXPR:
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
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_ADD_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
					      if (gimple_simplify_388 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
					        return true;
					    }
					  }
					if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q40 };
					      if (gimple_simplify_388 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
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
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (integer_all_onesp (_q30))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_389 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
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
				if (gimple_simplify_379 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
				if (gimple_simplify_380 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, GT_EXPR, LT_EXPR))
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
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_380 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, GT_EXPR, LT_EXPR))
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
				if (gimple_simplify_304 (res_op, seq, valueize, type, captures, GT_EXPR, LT_EXPR))
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CTZ:
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
			    if (gimple_simplify_381 (res_op, seq, valueize, type, captures, GT_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFS:
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
			    if (gimple_simplify_392 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, EQ_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_FFS))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSIMAX:
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
			    if (gimple_simplify_392 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, EQ_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_FFSIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_309 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNT))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZL:
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
			    if (gimple_simplify_381 (res_op, seq, valueize, type, captures, GT_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSL:
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
			    if (gimple_simplify_392 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, EQ_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_FFSL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_309 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTLL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZIMAX:
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
			    if (gimple_simplify_381 (res_op, seq, valueize, type, captures, GT_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_309 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, CFN_POPCOUNT))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_CTZ:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			    if (gimple_simplify_382 (res_op, seq, valueize, type, captures, GT_EXPR, EQ_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
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
			    if (gimple_simplify_381 (res_op, seq, valueize, type, captures, GT_EXPR, EQ_EXPR, CFN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_FFS:
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
			    if (gimple_simplify_392 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, EQ_EXPR, BIT_AND_EXPR, CFN_FFS))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_309 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_309 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZLL:
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
			    if (gimple_simplify_381 (res_op, seq, valueize, type, captures, GT_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZLL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSLL:
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
			    if (gimple_simplify_392 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR, EQ_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_FFSLL))
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POW (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_BUILT_IN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2405;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1138, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2405:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_BUILT_IN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2406;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1138, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2406:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (gimple_simplify_425 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2407;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2407;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1140, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2407:;
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
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2408;
			      {
				res_op->set_op (CFN_BUILT_IN_POW, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2408;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1141, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2408:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CBRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2409;
			      {
				res_op->set_op (CFN_BUILT_IN_POW, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] =  build_real_truncate (type, dconst_third ());
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2409;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1142, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2409:;
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2410;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2410;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1140, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2410:;
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2411;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2411;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1139, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2411:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_424 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_424 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_424 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2412;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2412;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1140, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2412:;
			}
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_424 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2413;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2413;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1140, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2413:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_427 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW, CFN_BUILT_IN_EXP, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP2, CFN_BUILT_IN_LOG2))
	    return true;
	}
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
        return true;
    }
  }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_428 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
        return true;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
 const REAL_VALUE_TYPE *value = TREE_REAL_CST_PTR (captures[1]);
 REAL_VALUE_TYPE tmp;
	      if (real_equal (value, &dconst0)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2414;
		  {
		    tree tem;
		    tem =  build_real (type, dconst1);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1143, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2414:;
		}
	      else
		{
		  if (real_equal (value, &dconst1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2415;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1144, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2415:;
		    }
		  else
		    {
		      if (real_equal (value, &dconstm1)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2416;
			  {
			    res_op->set_op (RDIV_EXPR, type, 2);
			    res_op->ops[0] =  build_real (type, dconst1);
			    res_op->ops[1] = captures[0];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1145, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2416:;
			}
		      else
			{
			  if (flag_unsafe_math_optimizations
 && canonicalize_math_p ()
 && real_equal (value, &dconsthalf)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2417;
			      {
				res_op->set_op (CFN_BUILT_IN_SQRT, type, 1);
				res_op->ops[0] = captures[0];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1146, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2417:;
			    }
			  else
			    {
			      if (flag_unsafe_math_optimizations
 && canonicalize_math_p ()
 && (tmp = real_value_truncate (TYPE_MODE (type), dconst_third ()),
 real_equal (value, &tmp))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2418;
				  {
				    res_op->set_op (CFN_BUILT_IN_CBRT, type, 1);
				    res_op->ops[0] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1147, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2418:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWI (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2452;
			      {
				res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1148, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2452:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2453;
			      {
				res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1148, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2453:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			  {
			    if (! HONOR_INFINITIES (type) && ! flag_trapping_math
)
			      {
				if (single_use (captures[0])
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2454;
				    {
				      res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				      res_op->ops[0] = captures[2];
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[3];
					gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2454;
					res_op->ops[1] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1149, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2454:;
				  }
			      }
			  }
		      }
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2455;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1150, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2455:;
			      }
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2456;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1150, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2456:;
			      }
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNL;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2457;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1150, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2457:;
			      }
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2458;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1150, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2458:;
			      }
			  }
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (flag_unsafe_math_optimizations
)
	    {
	      {
 HOST_WIDE_INT tmp = 0;
		  if (real_isinteger (&TREE_REAL_CST (captures[0]), &tmp)
 && tmp > 0 && pow2p_hwi (tmp)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2459;
		      {
			res_op->set_op (CFN_BUILT_IN_LDEXP, type, 2);
			res_op->ops[0] =  build_one_cst (type);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  _o1[1] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
			  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2459;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1151, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2459:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
	{
	  if (! HONOR_INFINITIES (type) && ! flag_trapping_math
)
	    {
	      if (! HONOR_NANS (type) && ! HONOR_SIGNED_ZEROS (type)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2460;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2460:;
		}
	    }
	}
    }
  }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_429 (res_op, seq, valueize, type, captures))
        return true;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (wi::to_wide (captures[1]) == 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2461;
	      {
		tree tem;
		tem =  build_real (type, dconst1);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2461:;
	    }
	  else
	    {
	      if (wi::to_wide (captures[1]) == 1
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2462;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1154, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2462:;
		}
	      else
		{
		  if (wi::to_wide (captures[1]) == -1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2463;
		      {
			res_op->set_op (RDIV_EXPR, type, 2);
			res_op->ops[0] =  build_real (type, dconst1);
			res_op->ops[1] = captures[0];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1155, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2463:;
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
gimple_simplify_CFN_HYPOT (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2488;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1156, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2488:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2489;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1156, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2489:;
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2490;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1157, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2490:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2491;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1157, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2491:;
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
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_430 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_HYPOT))
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_430 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_HYPOT))
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_430 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_HYPOT))
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_430 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_HYPOT))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_431 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_HYPOT))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_431 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_HYPOT))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_431 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_HYPOT))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_431 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_HYPOT))
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
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_432 (res_op, seq, valueize, type, captures, CFN_HYPOT))
        return true;
    }
  }
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	if (gimple_simplify_432 (res_op, seq, valueize, type, captures, CFN_HYPOT))
	  return true;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_433 (res_op, seq, valueize, type, captures, CFN_HYPOT))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2540;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAX, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2540;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2540:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMINF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2542;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF16, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2542;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2542:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMINF64 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2544;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF64, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2544;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2544:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMINF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2546;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF32X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2546;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2546:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMINF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2548;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF128X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2548;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2548:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMAXF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2550;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2550;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2550:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMAXL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2552;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINL, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2552;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2552:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_BUILT_IN_FMAXF64 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2555;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF64, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2555;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2555:;
				      }
				  }
			          break;
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
gimple_simplify_CFN_FMAX (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_FMAX))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_FMAX))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_FMAX))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_FMAX))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2560;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_FMIN, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2560;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2560:;
				      }
				  }
			          break;
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
gimple_simplify_UNLT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2573;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2573;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2573;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2573:;
					  }
				      }
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2574;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2574;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2574;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2574:;
		      }
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2575;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2575;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2575;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2575:;
		      }
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
	if (gimple_simplify_632 (res_op, seq, valueize, type, captures, UNLT_EXPR))
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
				    if (gimple_simplify_273 (res_op, seq, valueize, type, captures, UNLT_EXPR, LT_EXPR))
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
				    if (gimple_simplify_276 (res_op, seq, valueize, type, captures, UNLT_EXPR, UNGT_EXPR))
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
		      if (gimple_simplify_277 (res_op, seq, valueize, type, captures, UNLT_EXPR, UNGT_EXPR))
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
	  if (gimple_simplify_631 (res_op, seq, valueize, type, captures, UNLT_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_ADD_OVERFLOW (gimple_match_op *res_op, gimple_seq *seq,
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		    if (gimple_simplify_634 (res_op, seq, valueize, type, captures, CFN_ADD_OVERFLOW))
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
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		    if (gimple_simplify_635 (res_op, seq, valueize, type, captures, CFN_ADD_OVERFLOW))
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWF32 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (gimple_simplify_425 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF32))
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
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LDEXPF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_647 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_648 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2592;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1184, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2592:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBNL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_647 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_648 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2598;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1184, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2598:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1)
{
  switch (code.get_rep())
    {
    case BIT_XOR_EXPR:
      return gimple_simplify_BIT_XOR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case PLUS_EXPR:
      return gimple_simplify_PLUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case POINTER_PLUS_EXPR:
      return gimple_simplify_POINTER_PLUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MINUS_EXPR:
      return gimple_simplify_MINUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case BIT_IOR_EXPR:
      return gimple_simplify_BIT_IOR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case POINTER_DIFF_EXPR:
      return gimple_simplify_POINTER_DIFF_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MULT_EXPR:
      return gimple_simplify_MULT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case EQ_EXPR:
      return gimple_simplify_EQ_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case NE_EXPR:
      return gimple_simplify_NE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGN:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNL:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF16:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF32:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF64:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF128:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF32X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF64X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF128X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_COPYSIGN:
      return gimple_simplify_CFN_COPYSIGN (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUNC_DIV_EXPR:
      return gimple_simplify_TRUNC_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case CEIL_DIV_EXPR:
      return gimple_simplify_CEIL_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case FLOOR_DIV_EXPR:
      return gimple_simplify_FLOOR_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ROUND_DIV_EXPR:
      return gimple_simplify_ROUND_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case EXACT_DIV_EXPR:
      return gimple_simplify_EXACT_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case FLOOR_MOD_EXPR:
      return gimple_simplify_FLOOR_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RDIV_EXPR:
      return gimple_simplify_RDIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LT_EXPR:
      return gimple_simplify_LT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LE_EXPR:
      return gimple_simplify_LE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case GT_EXPR:
      return gimple_simplify_GT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case GE_EXPR:
      return gimple_simplify_GE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case CEIL_MOD_EXPR:
      return gimple_simplify_CEIL_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ROUND_MOD_EXPR:
      return gimple_simplify_ROUND_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUNC_MOD_EXPR:
      return gimple_simplify_TRUNC_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LSHIFT_EXPR:
      return gimple_simplify_LSHIFT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RSHIFT_EXPR:
      return gimple_simplify_RSHIFT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF:
      return gimple_simplify_CFN_BUILT_IN_POWF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POW:
      return gimple_simplify_CFN_BUILT_IN_POW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWL:
      return gimple_simplify_CFN_BUILT_IN_POWL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_POW:
      return gimple_simplify_CFN_POW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWIF:
      return gimple_simplify_CFN_BUILT_IN_POWIF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWI:
      return gimple_simplify_CFN_BUILT_IN_POWI (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWIL:
      return gimple_simplify_CFN_BUILT_IN_POWIL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOTF:
      return gimple_simplify_CFN_BUILT_IN_HYPOTF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOT:
      return gimple_simplify_CFN_BUILT_IN_HYPOT (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOTL:
      return gimple_simplify_CFN_BUILT_IN_HYPOTL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_HYPOT:
      return gimple_simplify_CFN_HYPOT (res_op, seq, valueize, code, type, _p0, _p1);
    case BIT_AND_EXPR:
      return gimple_simplify_BIT_AND_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MIN_EXPR:
      return gimple_simplify_MIN_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MAX_EXPR:
      return gimple_simplify_MAX_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF:
      return gimple_simplify_CFN_BUILT_IN_FMINF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMIN:
      return gimple_simplify_CFN_BUILT_IN_FMIN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINL:
      return gimple_simplify_CFN_BUILT_IN_FMINL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF16:
      return gimple_simplify_CFN_BUILT_IN_FMINF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF32:
      return gimple_simplify_CFN_BUILT_IN_FMINF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF64:
      return gimple_simplify_CFN_BUILT_IN_FMINF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF128:
      return gimple_simplify_CFN_BUILT_IN_FMINF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF32X:
      return gimple_simplify_CFN_BUILT_IN_FMINF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF64X:
      return gimple_simplify_CFN_BUILT_IN_FMINF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF128X:
      return gimple_simplify_CFN_BUILT_IN_FMINF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_FMIN:
      return gimple_simplify_CFN_FMIN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF:
      return gimple_simplify_CFN_BUILT_IN_FMAXF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAX:
      return gimple_simplify_CFN_BUILT_IN_FMAX (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXL:
      return gimple_simplify_CFN_BUILT_IN_FMAXL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF16:
      return gimple_simplify_CFN_BUILT_IN_FMAXF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF32:
      return gimple_simplify_CFN_BUILT_IN_FMAXF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF64:
      return gimple_simplify_CFN_BUILT_IN_FMAXF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF128:
      return gimple_simplify_CFN_BUILT_IN_FMAXF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF32X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF64X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF128X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_FMAX:
      return gimple_simplify_CFN_FMAX (res_op, seq, valueize, code, type, _p0, _p1);
    case LROTATE_EXPR:
      return gimple_simplify_LROTATE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RROTATE_EXPR:
      return gimple_simplify_RROTATE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case COMPLEX_EXPR:
      return gimple_simplify_COMPLEX_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNORDERED_EXPR:
      return gimple_simplify_UNORDERED_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ORDERED_EXPR:
      return gimple_simplify_ORDERED_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNLT_EXPR:
      return gimple_simplify_UNLT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNLE_EXPR:
      return gimple_simplify_UNLE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNGT_EXPR:
      return gimple_simplify_UNGT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNGE_EXPR:
      return gimple_simplify_UNGE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNEQ_EXPR:
      return gimple_simplify_UNEQ_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LTGT_EXPR:
      return gimple_simplify_LTGT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_ADD_OVERFLOW:
      return gimple_simplify_CFN_ADD_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_SUB_OVERFLOW:
      return gimple_simplify_CFN_SUB_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_MUL_OVERFLOW:
      return gimple_simplify_CFN_MUL_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF16:
      return gimple_simplify_CFN_BUILT_IN_POWF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF32:
      return gimple_simplify_CFN_BUILT_IN_POWF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF64:
      return gimple_simplify_CFN_BUILT_IN_POWF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF128:
      return gimple_simplify_CFN_BUILT_IN_POWF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF32X:
      return gimple_simplify_CFN_BUILT_IN_POWF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF64X:
      return gimple_simplify_CFN_BUILT_IN_POWF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF128X:
      return gimple_simplify_CFN_BUILT_IN_POWF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXPF:
      return gimple_simplify_CFN_BUILT_IN_LDEXPF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXP:
      return gimple_simplify_CFN_BUILT_IN_LDEXP (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXPL:
      return gimple_simplify_CFN_BUILT_IN_LDEXPL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_LDEXP:
      return gimple_simplify_CFN_LDEXP (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBNF:
      return gimple_simplify_CFN_BUILT_IN_SCALBNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBN:
      return gimple_simplify_CFN_BUILT_IN_SCALBN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBNL:
      return gimple_simplify_CFN_BUILT_IN_SCALBNL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLNF:
      return gimple_simplify_CFN_BUILT_IN_SCALBLNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLN:
      return gimple_simplify_CFN_BUILT_IN_SCALBLN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLNL:
      return gimple_simplify_CFN_BUILT_IN_SCALBLNL (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUTH_ORIF_EXPR:
      return gimple_simplify_TRUTH_ORIF_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUTH_OR_EXPR:
      return gimple_simplify_TRUTH_OR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FNMA (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_663 (res_op, seq, valueize, type, captures))
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
				    if (gimple_simplify_664 (res_op, seq, valueize, type, captures))
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
		    if (gimple_simplify_663 (res_op, seq, valueize, type, captures))
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2818;
			{
			  res_op->set_op (CFN_FNMS, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1245, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2818:;
		      }
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
				    if (gimple_simplify_664 (res_op, seq, valueize, type, captures))
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
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2)
{
  switch (code.get_rep())
    {
    case COND_EXPR:
      return gimple_simplify_COND_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case VEC_COND_EXPR:
      return gimple_simplify_VEC_COND_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case BIT_FIELD_REF:
      return gimple_simplify_BIT_FIELD_REF (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case BIT_INSERT_EXPR:
      return gimple_simplify_BIT_INSERT_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_BUILT_IN_FMAF:
      return gimple_simplify_CFN_BUILT_IN_FMAF (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_BUILT_IN_FMA:
      return gimple_simplify_CFN_BUILT_IN_FMA (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_BUILT_IN_FMAL:
      return gimple_simplify_CFN_BUILT_IN_FMAL (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FMA:
      return gimple_simplify_CFN_FMA (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FMS:
      return gimple_simplify_CFN_FMS (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FNMA:
      return gimple_simplify_CFN_FNMA (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FNMS:
      return gimple_simplify_CFN_FNMS (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_VCOND_MASK_LEN:
      return gimple_simplify_CFN_VCOND_MASK_LEN (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case VEC_PERM_EXPR:
      return gimple_simplify_VEC_PERM_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_COND_ADD (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  tree _q42 = gimple_assign_rhs3 (_a1);
		  _q42 = do_valueize (valueize, _q42);
		  if (zerop (_q42))
		    {
		      if ((_p3 == _p1 && ! TREE_SIDE_EFFECTS (_p3)) || (operand_equal_p (_p3, _p1, 0) && types_match (_p3, _p1)))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
			    if (ANY_INTEGRAL_TYPE_P (type)
 || (FLOAT_TYPE_P (type)
 && fold_real_zero_addition_p (type, NULL_TREE, captures[4], 0))
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2835;
				{
				  res_op->set_op (CFN_COND_ADD, type, 4);
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail2835;
				    res_op->ops[0] = _r1;
				  }
				  res_op->ops[1] = captures[1];
				  res_op->ops[2] = captures[3];
				  res_op->ops[3] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1260, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2835:;
			      }
			  }
		        }
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
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2, tree _p3)
{
  switch (code.get_rep())
    {
    case -CFN_COND_MUL:
      return gimple_simplify_CFN_COND_MUL (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3);
    case -CFN_COND_ADD:
      return gimple_simplify_CFN_COND_ADD (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_VCOND_MASK_LEN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4)
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
				  case NEGATE_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2836;
						{
						  res_op->set_op (CFN_COND_LEN_NEG, type, 5);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2836;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2836:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2837;
						{
						  res_op->set_op (CFN_COND_LEN_NOT, type, 5);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2837;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2837:;
					      }
					}
				      }
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2838;
			    {
			      res_op->set_op (CFN_COND_LEN_NEG, type, 5);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2838;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2838:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2839;
			    {
			      res_op->set_op (CFN_COND_LEN_NOT, type, 5);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2839;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2839:;
			  }
		    }
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
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2840;
						{
						  res_op->set_op (CFN_COND_LEN_NEG, type, 5);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2840;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2840;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2840:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2841;
						{
						  res_op->set_op (CFN_COND_LEN_NOT, type, 5);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2841;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2841;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2841:;
					      }
					}
				      }
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
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2842;
			    {
			      res_op->set_op (CFN_COND_LEN_NEG, type, 5);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2842;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2842;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2842:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2843;
			    {
			      res_op->set_op (CFN_COND_LEN_NOT, type, 5);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2843;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2843;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2843:;
			  }
		    }
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
				  case PLUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2844;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2844;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2844;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2844:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2845;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2845;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2845;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2845:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2846;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2846;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2846;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2846:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2847;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2847;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2847;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2847:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2848;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2848;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2848;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2848:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2849;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2849;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2849;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2849:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2850;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2850;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2850;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2850:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2851;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2851;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2851;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2851:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2852;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2852;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2852;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2852:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2853;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2853;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2853;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2853:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2854;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2854;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2854;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2854:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2855;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2855;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2855;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2855:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2856;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2856;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2856;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2856:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2857;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2857;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2857;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2857:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2858;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2858;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2858;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2858:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2859;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2859;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2859;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2859:;
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
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2860;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2860;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2860;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2860:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2861;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2861;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2861;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2861:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2862;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2862;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2862;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2862:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2863;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2863;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2863;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2863:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2864;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2864;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2864;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2864:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2865;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2865;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2865;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2865:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2866;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2866;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2866;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2866:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2867;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2867;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2867;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2867:;
			  }
		    }
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
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2868;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2868;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2868;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2868:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2869;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2869;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2869;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2869:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2870;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2870;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2870;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2870:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2871;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2871;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2871;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2871:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2872;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2872;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2872;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2872:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2873;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2873;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2873;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2873:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2874;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2874;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2874;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2874:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2875;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2875;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2875;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2875:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
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
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2876;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2876;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2876;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2876;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2876:;
					      }
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
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2877;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2877;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2877;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2877;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2877:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2878;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2878;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2878;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2878;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2878:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2879;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2879;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2879;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2879;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2879:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2880;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2880;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2880;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2880;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2880:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2881;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2881;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2881;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2881;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2881:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2882;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2882;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2882;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2882;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2882:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2883;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2883;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2883;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2883;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2883:;
					      }
					}
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
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2884;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2884;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2884;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2884;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2884:;
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
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2885;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2885;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2885;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2885;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2885:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2886;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2886;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2886;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2886;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2886:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2887;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2887;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2887;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2887;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2887:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2888;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2888;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2888;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2888;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2888:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2889;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2889;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2889;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2889;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2889:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2890;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2890;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2890;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2890;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2890:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2891;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2891;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2891;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2891;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2891:;
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
	      case PLUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2892;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2892;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2892;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2892;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2892:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2893;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2893;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2893;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2893;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2893:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2894;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2894;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2894;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2894;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2894:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2895;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2895;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2895;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2895;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2895:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2896;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2896;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2896;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2896;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2896:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2897;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2897;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2897;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2897;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2897:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2898;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2898;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2898;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2898;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2898:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2899;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2899;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2899;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2899;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2899:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2900;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2900;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2900;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2900;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2900:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2901;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2901;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2901;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2901;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2901:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2902;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2902;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2902;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2902;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2902:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2903;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2903;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2903;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2903;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2903:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2904;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2904;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2904;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2904;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2904:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2905;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2905;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2905;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2905;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2905:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2906;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2906;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2906;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2906;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2906:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2907;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2907;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2907;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2907;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2907:;
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
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
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
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
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
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
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
#pragma GCC diagnostic pop
