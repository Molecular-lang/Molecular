/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_truth_valued_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
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
	      case LT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNORDERED_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case ORDERED_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNEQ_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case LTGT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_AND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_ANDIF_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_OR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_ORIF_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_XOR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_NOT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 23, __FILE__, __LINE__, false);
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
gimple_ctz_table_index (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case RSHIFT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
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
							      case NEGATE_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
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
										    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q21, _p1 };
										    {
										      res_ops[0] = captures[0];
										      res_ops[1] = captures[1];
										      res_ops[2] = captures[2];
										      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 97, __FILE__, __LINE__, false);
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
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
						  switch (TREE_CODE (_q31))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q31))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case NEGATE_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
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
										    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p1 };
										    {
										      res_ops[0] = captures[0];
										      res_ops[1] = captures[1];
										      res_ops[2] = captures[2];
										      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 97, __FILE__, __LINE__, false);
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
							        }
							      default:;
							      }
						        }
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
  return false;
}

bool
gimple_simplify_1 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail503;
  {
    res_op->set_op (ABS_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 101, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail503:;
  return false;
}

bool
gimple_simplify_2 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && wi::to_widest (captures[2]) == element_precision (TREE_TYPE (captures[0])) - 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail504;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 102, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail504:;
    }
  return false;
}

bool
gimple_simplify_3 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail505;
      {
	res_op->set_op (LSHIFT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail505;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 103, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail505:;
    }
  return false;
}

bool
gimple_simplify_5 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp0, wascmp1;
      if (bitwise_inverted_equal_p (captures[1], captures[3], wascmp0)
 && bitwise_inverted_equal_p (captures[0], captures[2], wascmp1)
 && ((!wascmp0 && !wascmp1)
 || element_precision (type) == 1)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail507;
	  {
	    res_op->set_op (BIT_XOR_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 105, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail507:;
	}
  }
  return false;
}

bool
gimple_simplify_6 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail508;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail508;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 106, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail508:;
  return false;
}

bool
gimple_simplify_9 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail512;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 108, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail512:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail513;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 109, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail513:;
    }
  return false;
}

bool
gimple_simplify_11 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail516;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 110, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail516:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail517;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 111, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail517:;
    }
  return false;
}

bool
gimple_simplify_13 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail519;
  {
    res_op->set_op (BIT_XOR_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail519;
      res_op->ops[0] = _r1;
    }
    {
      tree _o1[2], _r1;
      _o1[0] = captures[4];
      _o1[1] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (NULL, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
      if (!_r1) goto next_after_fail519;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 113, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail519:;
  return false;
}

bool
gimple_simplify_14 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail520;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->ops[0] =  wascmp
 ? constant_boolean_node (true, type)
 : build_all_ones_cst (TREE_TYPE (captures[0]));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 114, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail520:;
	}
  }
  return false;
}

bool
gimple_simplify_17 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail523;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[1];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail523;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 117, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail523:;
  return false;
}

bool
gimple_simplify_20 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail526;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 120, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail526:;
  return false;
}

bool
gimple_simplify_22 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail528;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 122, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail528:;
  return false;
}

bool
gimple_simplify_24 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[4]))
 && (wi::to_wide (captures[2]) & wi::to_wide (captures[5])) == 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail530;
      {
	res_op->set_op (BIT_IOR_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail530;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
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
	      if (!_r1) goto next_after_fail530;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 124, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail530:;
    }
  return false;
}

bool
gimple_simplify_27 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail533;
      {
	res_op->set_op (BIT_NOT_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail533;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail533;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 127, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail533:;
    }
  return false;
}

bool
gimple_simplify_31 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
1
)
 && (
 TYPE_PRECISION (TREE_TYPE (captures[1])) < TYPE_PRECISION (type)
 || (
1
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (type))
 || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT
 || !type_has_mode_precision_p (type)
 || (
1
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && single_use (captures[0])
 && single_use (captures[2])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail537;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail537;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail537;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 131, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail537:;
    }
  return false;
}

bool
gimple_simplify_34 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail542;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 135, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail542:;
  return false;
}

bool
gimple_simplify_35 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && invert_tree_comparison (cmp, HONOR_NANS (captures[1])) == icmp
 && canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail543;
      {
	res_op->set_op (COND_EXPR, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[0] = unshare_expr (res_op->ops[0]);
	res_op->ops[1] = captures[3];
	res_op->ops[2] = captures[5];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 136, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail543:;
    }
  return false;
}

bool
gimple_simplify_38 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && operand_equal_p (captures[2], captures[6], 0)
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[4])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int c = wi::add (wi::to_wide (captures[3]), wi::to_wide (captures[7]));
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])
	          || !single_use (captures[4])
	          || !single_use (captures[5])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail546;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail546;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail546;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 138, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail546:;
      }
    }
  return false;
}

bool
gimple_simplify_41 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail549;
	  {
	    res_op->set_op (outer_op, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] =  wide_int_to_tree (type, cst_emit);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 141, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail549:;
	}
      else
	{
	  if (!fail && (wi::to_wide (captures[3]) & zero_mask_not) == 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail550;
	      {
		res_op->set_op (inner_op, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  wide_int_to_tree (type, cst_emit);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 142, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail550:;
	    }
	}
  }
  return false;
}

bool
gimple_simplify_44 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail553;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail553;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail553;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 140, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail553:;
      }
    }
  return false;
}

bool
gimple_simplify_49 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail559;
      {
	res_op->set_op (LT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail559;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 148, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail559:;
    }
  return false;
}

bool
gimple_simplify_52 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
 && vectorized_internal_fn_supported_p (IFN_COND_NOT, type)
 && is_truth_type_for (type, TREE_TYPE (captures[0]))
)
    {
      if (integer_all_onesp (captures[1]) && integer_zerop (captures[2])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail563;
	  {
	    res_op->set_op (CFN_COND_NOT, type, 3);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[3];
	    res_op->ops[2] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 152, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail563:;
	}
    }
  else
    {
      if (integer_all_onesp (captures[2]) && integer_zerop (captures[1])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail564;
	  {
	    res_op->set_op (CFN_COND_NOT, type, 3);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail564;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[3];
	    res_op->ops[2] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 153, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail564:;
	}
    }
  return false;
}

bool
gimple_simplify_57 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && tree_fits_uhwi_p (captures[2])
 && tree_to_uhwi (captures[2]) < element_precision (type)
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || optab_handler (smul_optab,
 TYPE_MODE (type)) != CODE_FOR_nothing)
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t)) t = unsigned_type_for (t);
 wide_int w = wi::set_bit_in_zero (tree_to_uhwi (captures[2]),
 element_precision (type));
 w += 1;
 tree cst = wide_int_to_tree (VECTOR_TYPE_P (t) ? TREE_TYPE (t)
 : t, w);
 cst = build_uniform_cst (t, cst);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail570;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail570;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  cst;
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail570;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 159, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail570:;
      }
    }
  return false;
}

bool
gimple_simplify_62 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail576;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 165, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail576:;
	}
    }
  return false;
}

bool
gimple_simplify_65 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type) || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      if (!CONSTANT_CLASS_P (captures[1])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail585;
		  {
		    res_op->set_op (MINUS_EXPR, type, 2);
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail585;
			_o1[0] = _r2;
		      }
		      _o1[1] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), outer_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (NULL, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
		      if (!_r1) goto next_after_fail585;
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail585;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 174, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail585:;
		}
	    }
	  else
	    {
	      if (!ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail586;
		  {
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r3) goto next_after_fail586;
			  _o2[1] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), outer_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			tem_op.resimplify (NULL, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r2) goto next_after_fail586;
			_o1[0] = _r2;
		      }
		      _o1[1] = captures[1];
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail586;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 175, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail586:;
		}
	      else
		{
		  if (types_match (type, captures[1]) && !TYPE_OVERFLOW_SANITIZED (type)
)
		    {
		      {
 tree cst = const_binop (outer_op, type, captures[0], captures[2]);
			  if (cst && !TREE_OVERFLOW (cst)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail587;
			      {
				res_op->set_op (MINUS_EXPR, type, 2);
				res_op->ops[0] =  cst;
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 176, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail587:;
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
gimple_simplify_71 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (!TYPE_OVERFLOW_TRAPS (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail593;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] =  build_all_ones_cst (TREE_TYPE (captures[0]));
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 182, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail593:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_74 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail597;
	      {
		res_op->set_op (MULT_EXPR, type, 2);
		{
		  tree _o1[2], _r1;
		  _o1[0] =  build_one_cst (type);
		  _o1[1] = captures[2];
		  gimple_match_op tem_op (res_op->cond.any_else (), plusminus, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail597;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[0];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 186, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail597:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_76 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (!FLOAT_TYPE_P (type) || flag_associative_math)
)
    {
      if (!ALL_FRACT_MODE_P (TYPE_MODE (type))
)
	{
	  if (TREE_CODE (type) == INTEGER_TYPE
 && wi::neg_p (wi::to_wide (captures[3]))
 && wi::to_wide (captures[3]) != wi::min_value (TYPE_PRECISION (type), SIGNED)
)
	    {
	      {
 wide_int c0 = wi::to_wide (captures[1]);
 wide_int c2 = wi::to_wide (captures[3]);
 wide_int c2_abs = wi::abs (c2);
		  if (wi::multiple_of_p (c2_abs, c0, TYPE_SIGN (type))
)
		    {
		      {
 wide_int div_res = wi::sdiv_trunc (c2, c0);
 tree div_cst = wide_int_to_tree (type, div_res);
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail599;
			  {
			    res_op->set_op (MULT_EXPR, type, 2);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[2];
			      _o1[1] =  div_cst;
			      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail599;
			      res_op->ops[0] = _r1;
			    }
			    res_op->ops[1] = captures[1];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 188, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail599:;
		      }
		    }
	      }
	    }
	}
    }
  return false;
}

bool
gimple_simplify_81 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[2])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail604;
	  {
	    res_op->set_op (logs, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail604;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 193, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail604:;
	}
    }
  return false;
}

bool
gimple_simplify_85 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[1]) == SSA_NAME && num_imm_uses (captures[1]) == 2
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail608;
      {
	res_op->set_op (PLUS_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    _o2[1] = captures[2];
	    _o2[2] = captures[4];
	    gimple_match_op tem_op (res_op->cond.any_else (), VEC_PERM_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1], _o2[2]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail608;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail608;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[5];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 197, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail608:;
    }
  return false;
}

bool
gimple_simplify_89 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail612;
  {
    res_op->set_op (MINUS_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail612;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 201, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail612:;
  return false;
}

bool
gimple_simplify_91 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type) && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[2]))
 && !TYPE_SATURATING (TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail614;
      {
	res_op->set_op (BIT_NOT_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[0];
	    _o2[1] = captures[1];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail614;
	    _o1[0] = _r2;
	  }
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail614;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 203, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail614:;
    }
  return false;
}

bool
gimple_simplify_96 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  {
 tree t1 = type;
 if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type) != TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
 t1 = TYPE_OVERFLOW_WRAPS (type) ? type : TREE_TYPE (captures[1]);
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail619;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (t1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (t1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail619;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (t1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (t1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail619;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail619;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 207, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail619:;
	  }
	}
    }
  return false;
}

bool
gimple_simplify_102 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (!ANY_INTEGRAL_TYPE_P (type) || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      if (!CONSTANT_CLASS_P (captures[2])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail627;
		  {
		    res_op->set_op (PLUS_EXPR, type, 2);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail627;
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail627;
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (NULL, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
		      if (!_r1) goto next_after_fail627;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 215, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail627:;
		}
	    }
	  else
	    {
	      if (!ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2]))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail628;
		  {
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[2];
		      {
			tree _o2[2], _r2;
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[0];
			  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, TREE_TYPE (_o1[0]), _o3[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r3) goto next_after_fail628;
			  _o2[0] = _r3;
			}
			_o2[1] = captures[1];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			tem_op.resimplify (NULL, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r2) goto next_after_fail628;
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail628;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 216, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail628:;
		}
	      else
		{
		  if (types_match (type, captures[2]) && !TYPE_OVERFLOW_SANITIZED (type)
)
		    {
		      {
 tree cst = const_binop (MINUS_EXPR, type, captures[0], captures[1]);
			  if (cst && !TREE_OVERFLOW (cst)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail629;
			      {
				res_op->set_op (PLUS_EXPR, type, 2);
				res_op->ops[0] =  cst;
				res_op->ops[1] = captures[2];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 217, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail629:;
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
gimple_simplify_110 (gimple_match_op *res_op, gimple_seq *seq,
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
          || !single_use (captures[5])
          || !single_use (captures[6])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail639;
  {
    res_op->set_op (popcount, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[4];
      gimple_match_op tem_op (res_op->cond.any_else (), log2, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail639;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 227, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail639:;
  return false;
}

bool
gimple_simplify_113 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail642;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail642;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail642;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 230, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail642:;
    }
  return false;
}

bool
gimple_simplify_119 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail648;
      {
	res_op->set_op (BIT_IOR_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_one_cst (type);
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail648;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 235, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail648:;
    }
  return false;
}

bool
gimple_simplify_124 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail653;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 239, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail653:;
    }
  return false;
}

bool
gimple_simplify_129 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail658;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 239, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail658:;
    }
  return false;
}

bool
gimple_simplify_132 (gimple_match_op *res_op, gimple_seq *seq,
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
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail661;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail661;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 244, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail661:;
  return false;
}

bool
gimple_simplify_137 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if ((bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 || bitwise_inverted_equal_p (captures[1], captures[2], wascmp))
 && (!wascmp || element_precision (type) == 1)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail666;
	  {
	    tree tem;
	    tem =  build_all_ones_cst (TREE_TYPE (captures[0]));
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 247, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail666:;
	}
  }
  return false;
}

bool
gimple_simplify_140 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail671;
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
		  if (!_r1) goto next_after_fail671;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail671:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail672;
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
		      if (!_r1) goto next_after_fail672;
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
next_after_fail672:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_144 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail677;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 252, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail677:;
  return false;
}

bool
gimple_simplify_148 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail681;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 252, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail681:;
  return false;
}

bool
gimple_simplify_150 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitop == BIT_AND_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail683;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 255, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail683:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail684;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 256, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail684:;
    }
  return false;
}

bool
gimple_simplify_152 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail686;
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
		  if (!_r3) goto next_after_fail686;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail686;
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
		if (!_r2) goto next_after_fail686;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail686;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 254, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail686:;
    }
  return false;
}

bool
gimple_simplify_158 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail695;
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
	  if (!_r1) goto next_after_fail695;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 265, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail695:;
    }
  return false;
}

bool
gimple_simplify_161 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail710;
		  {
		    tree tem;
		    tem = captures[3];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 273, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail710:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail711;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 274, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail711:;
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
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail712;
		      {
			tree tem;
			tem = captures[3];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 275, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail712:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail713;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 276, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail713:;
		    }
		}
	      else
		{
		  if (cmp == 0
 && ((code1 == LT_EXPR && code2 == GT_EXPR)
 || (code1 == GT_EXPR && code2 == LT_EXPR))
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail714;
		      {
			res_op->set_op (NE_EXPR, type, 2);
			res_op->ops[0] = captures[1];
			res_op->ops[1] = captures[4];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 277, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail714:;
		    }
		  else
		    {
		      if (cmp >= 0
 && (code1 == LT_EXPR || code1 == LE_EXPR)
 && (code2 == GT_EXPR || code2 == GE_EXPR)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail715;
			  {
			    tree tem;
			    tem =  constant_boolean_node (true, type);
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 278, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail715:;
			}
		      else
			{
			  if (cmp <= 0
 && (code1 == GT_EXPR || code1 == GE_EXPR)
 && (code2 == LT_EXPR || code2 == LE_EXPR)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail716;
			      {
				tree tem;
				tem =  constant_boolean_node (true, type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail716:;
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
gimple_simplify_167 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail722;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 283, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail722:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail723;
	  {
	    tree tem;
	    tem =  constant_boolean_node (true, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 284, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail723:;
	}
    }
  return false;
}

bool
gimple_simplify_170 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail738;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 282, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail738:;
  return false;
}

bool
gimple_simplify_172 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail741;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 285, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail741:;
  return false;
}

bool
gimple_simplify_174 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail743;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 286, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail743:;
  return false;
}

bool
gimple_simplify_175 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail744;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 286, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail744:;
  return false;
}

bool
gimple_simplify_176 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (logic),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (ext))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (captures[1]) != INTEGER_CST
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail745;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), ext, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail745;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 287, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail745:;
    }
  return false;
}

bool
gimple_simplify_179 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail748;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail748;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail748:;
    }
  return false;
}

bool
gimple_simplify_181 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail750;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail750;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail750:;
    }
  return false;
}

bool
gimple_simplify_184 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail753;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail753;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 289, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail753:;
    }
  return false;
}

bool
gimple_simplify_188 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail757;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail757;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 289, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail757:;
    }
  return false;
}

bool
gimple_simplify_192 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail761;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail761;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 289, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail761:;
    }
  return false;
}

bool
gimple_simplify_197 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail766;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 292, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail766:;
  return false;
}

bool
gimple_simplify_199 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! FLOAT_TYPE_P (type)
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail768;
      {
	res_op->set_op (LSHIFT_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 294, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail768:;
    }
  return false;
}

bool
gimple_simplify_204 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail775;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail775;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail775;
	    _o1[0] = _r2;
	  }
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail775;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 298, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail775:;
    }
  return false;
}

bool
gimple_simplify_211 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[3]) != INTEGER_CST
 && single_use (captures[0])
 && !integer_zerop (captures[2]) && !integer_minus_onep (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail783;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail783;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 305, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail783:;
    }
  return false;
}

bool
gimple_simplify_214 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (LDEXP))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail786;
	      {
		res_op->set_op (LDEXP, type, 2);
		res_op->ops[0] = captures[1];
		{
		  tree _o1[2], _r1;
		  _o1[0] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
		  _o1[1] = captures[2];
		  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail786;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 308, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail786:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_218 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail790;
      {
	res_op->set_op (POW, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail790;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 312, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail790:;
    }
  return false;
}

bool
gimple_simplify_221 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail793;
  {
    tree tem;
    tem =  constant_boolean_node (op == NE_EXPR ? true : false, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 315, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail793:;
  return false;
}

bool
gimple_simplify_223 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && tree_expr_nonzero_p (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail795;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 317, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail795:;
    }
  return false;
}

bool
gimple_simplify_226 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail801;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[2]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 323, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail801:;
    }
  return false;
}

bool
gimple_simplify_230 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && (CONSTANT_CLASS_P (captures[3]) || (single_use (captures[1]) && single_use (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail818;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[3];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[3]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 339, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail818:;
    }
  return false;
}

bool
gimple_simplify_233 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail821;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[3];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 342, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail821:;
    }
  return false;
}

bool
gimple_simplify_236 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[1]);
      if (ptr_difference_const (captures[0], captures[2], &diff)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail824;
	  {
	    res_op->set_op (neeq, type, 2);
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_int_cst_type (inner_type, diff);
	      _o1[1] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail824;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 344, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail824:;
	}
  }
  return false;
}

bool
gimple_simplify_240 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp1),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail828;
      {
	res_op->set_op (rcmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 348, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail828:;
    }
  return false;
}

bool
gimple_simplify_244 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail834;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail834;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail834;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail834;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (utype);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 354, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail834:;
      }
    }
  return false;
}

bool
gimple_simplify_250 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int cand = wi::ctz (wi::to_wide (captures[2])) - wi::ctz (wi::to_wide (captures[0]));
      if (cand < 0
 || (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) != wi::to_wide (captures[2]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail849;
	  {
	    tree tem;
	    tem =  constant_boolean_node (cmp == NE_EXPR, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 369, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail849:;
	}
      else
	{
	  if (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) == wi::to_wide (captures[2])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail850;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), cand);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 370, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail850:;
	    }
	}
  }
  return false;
}

bool
gimple_simplify_253 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (invrot),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2]) || integer_all_onesp (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail853;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 373, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail853:;
    }
  return false;
}

bool
gimple_simplify_256 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[1]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail856;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (ctype != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail856;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), bswap, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (NULL, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	  if (!_r1) goto next_after_fail856;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 376, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail856:;
  }
  return false;
}

bool
gimple_simplify_261 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail862;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] = captures[3];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 381, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail862:;
    }
  else
    {
      if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && single_use (captures[0])
)
	{
	  if (tree_int_cst_sgn (captures[2]) < 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail863;
	      {
		res_op->set_op (scmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[3];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 382, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail863:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail864;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[3];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 383, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail864:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_266 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail872;
	  {
	    res_op->set_op (scmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (otype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (otype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, otype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail872;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail872;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 391, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail872:;
      }
    }
  return false;
}

bool
gimple_simplify_270 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_associative_math
)
    {
      {
 tree tem = const_binop (MINUS_EXPR, TREE_TYPE (captures[1]), captures[0], captures[2]);
	  if (tem && !TREE_OVERFLOW (tem)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail890;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] =  tem;
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 408, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail890:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_275 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      if (wi::to_wide (captures[2]) == 0
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail920;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 438, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail920:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail921;
		      {
			tree tem;
			tem =  constant_boolean_node (cmp == NE_EXPR, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 439, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail921:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail922;
		      {
			res_op->set_op (cmp, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 440, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail922:;
		    }
	      }
	    }
	}
    }
  return false;
}

bool
gimple_simplify_278 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !(targetm.have_canonicalize_funcptr_for_compare ()
 && ((POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[1]))))
 || (POINTER_TYPE_P (TREE_TYPE (captures[3]))
 && FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[3]))))))
 && single_use (captures[0])
)
    {
      if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[0]))
 && (TREE_CODE (captures[3]) == INTEGER_CST
 || captures[2] != captures[3])
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1])) == TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 || cmp == NE_EXPR
 || cmp == EQ_EXPR)
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && (TREE_CODE (TREE_TYPE (captures[1])) != BOOLEAN_TYPE
 || TREE_CODE (TREE_TYPE (captures[3])) == BOOLEAN_TYPE)
)
	{
	  if (TREE_CODE (captures[2]) == INTEGER_CST
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail925;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  force_fit_type (TREE_TYPE (captures[1]),
 wide_int::from (wi::to_wide (captures[2]),
 MAX (TYPE_PRECISION (TREE_TYPE (captures[2])),
 TYPE_PRECISION (TREE_TYPE (captures[1]))),
 TYPE_SIGN (TREE_TYPE (captures[2]))),
 0, TREE_OVERFLOW (captures[2]));
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 443, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail925:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail926;
	      {
		res_op->set_op (cmp, type, 2);
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
		      if (!_r1) goto next_after_fail926;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 444, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail926:;
	    }
	}
      else
	{
	  if (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
	    {
	      if ((cmp == EQ_EXPR || cmp == NE_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0])) == TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))))
 && (types_match (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]))
 || ((TYPE_PRECISION (TREE_TYPE (captures[1]))
 >= TYPE_PRECISION (TREE_TYPE (captures[3])))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 == TYPE_UNSIGNED (TREE_TYPE (captures[3]))))
 || (TREE_CODE (captures[2]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail927;
		  {
		    res_op->set_op (cmp, type, 2);
		    res_op->ops[0] = captures[1];
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail927;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 445, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail927:;
		}
	      else
		{
		  if (TREE_CODE (captures[2]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
		    {
		      {
 tree min = lower_bound_in_type (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]));
 tree max = upper_bound_in_type (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]));
 bool above = integer_nonzerop (const_binop (LT_EXPR, type, max, captures[2]));
 bool below = integer_nonzerop (const_binop (LT_EXPR, type, captures[2], min));
			  if (above || below
)
			    {
			      if (cmp == EQ_EXPR || cmp == NE_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail928;
				  {
				    tree tem;
				    tem =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 446, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail928:;
				}
			      else
				{
				  if (cmp == LT_EXPR || cmp == LE_EXPR
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail929;
				      {
					tree tem;
					tem =  constant_boolean_node (above ? true : false, type);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 447, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail929:;
				    }
				  else
				    {
				      if (cmp == GT_EXPR || cmp == GE_EXPR
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail930;
					  {
					    tree tem;
					    tem =  constant_boolean_node (above ? false : true, type);
					    res_op->set_value (tem);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 448, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail930:;
					}
				    }
				}
			    }
		      }
		    }
		}
	    }
	}
    }
  else
    {
      if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 && (DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[1])))
 && (DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[3])))
)
	{
	  {
 tree type1 = TREE_TYPE (captures[3]);
 if (TREE_CODE (captures[3]) == REAL_CST && !DECIMAL_FLOAT_TYPE_P (type1))
 {
 REAL_VALUE_TYPE orig = TREE_REAL_CST (captures[3]);
 if (TYPE_PRECISION (type1) > TYPE_PRECISION (float_type_node)
 && exact_real_truncate (TYPE_MODE (float_type_node), &orig))
 type1 = float_type_node;
 if (TYPE_PRECISION (type1) > TYPE_PRECISION (double_type_node)
 && exact_real_truncate (TYPE_MODE (double_type_node), &orig))
 type1 = double_type_node;
 }
 tree newtype
 = (element_precision (TREE_TYPE (captures[1])) > element_precision (type1)
 ? TREE_TYPE (captures[1]) : type1);
	      if (element_precision (TREE_TYPE (captures[0])) > element_precision (newtype)
 && (!VECTOR_TYPE_P (type) || is_truth_type_for (newtype, type))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail931;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (newtype != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail931;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (newtype != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail931;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 449, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail931:;
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_295 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail957;
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
		  if (!_r1) goto next_after_fail957;
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
next_after_fail957:;
      }
    }
  return false;
}

bool
gimple_simplify_300 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && !FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[0])))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !(
0
 && TREE_CODE (TREE_TYPE (captures[0])) == REFERENCE_TYPE
 && (flag_sanitize & (SANITIZE_NULL | SANITIZE_ALIGNMENT))))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[1])))))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail976;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail976;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 477, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail976:;
    }
  return false;
}

bool
gimple_simplify_304 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[0]) && !TREE_OVERFLOW (captures[2])
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (MINUS_EXPR, captures[0], captures[2]);
	  if (TREE_OVERFLOW (res)
)
	    {
	      if (cmp == NE_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail985;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 486, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail985:;
		}
	      else
		{
		  if (cmp == EQ_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail986;
		      {
			tree tem;
			tem =  constant_boolean_node (false, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 487, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail986:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail987;
		      {
			tree tem;
 bool less = cmp == LE_EXPR || cmp == LT_EXPR;
 bool ovf_high = wi::lt_p (wi::to_wide (captures[0]), 0,
 TYPE_SIGN (TREE_TYPE (captures[0])));			tem = 
 constant_boolean_node (less == ovf_high, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 488, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail987:;
		    }
		}
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail988;
	      {
		res_op->set_op (rcmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  res;
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 489, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail988:;
	    }
      }
    }
  else
    {
      if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
	{
	  if (cmp == EQ_EXPR || cmp == NE_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail989;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[2];
		  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail989;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail989:;
	    }
	  else
	    {
	      if (cmp == LE_EXPR || cmp == GT_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail990;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[2];
			_o2[1] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail990;
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail990;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] = captures[2];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 491, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail990:;
		}
	      else
		{
		  if (cmp == LT_EXPR || cmp == GE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail991;
		      {
			res_op->set_op (cmp, type, 2);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[2];
			    {
			      tree _o3[2], _r3;
			      _o3[0] = captures[0];
			      _o3[1] =  build_one_cst (TREE_TYPE (captures[1]));
			      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail991;
			      _o2[1] = _r3;
			    }
			    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail991;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail991;
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] = captures[2];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 492, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail991:;
		    }
		}
	    }
	}
      else
	{
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
	    {
	      if (cmp == EQ_EXPR || cmp == NE_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail992;
		  {
		    res_op->set_op (cmp, type, 2);
		    res_op->ops[0] = captures[1];
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail992;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 493, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail992:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail993;
		  {
		    res_op->set_op (rcmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			_o2[1] =  build_one_cst (TREE_TYPE (captures[1]));
			gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail993;
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail993;
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail993;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 494, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail993:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_334 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1036;
	  {
	    res_op->set_op (div, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 535, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1036:;
	}
      else
	{
	  {
int_range_max vr0, vr1, vr2;
	      if (get_range_query (cfun)->range_of_expr (vr0, captures[0])
 && get_range_query (cfun)->range_of_expr (vr1, captures[1])
 && get_range_query (cfun)->range_of_expr (vr2, captures[2])
 && range_op_handler (MULT_EXPR).overflow_free_p (vr0, vr1)
 && range_op_handler (MULT_EXPR).overflow_free_p (vr0, vr2)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1037;
		  {
		    res_op->set_op (div, type, 2);
		    res_op->ops[0] = captures[1];
		    res_op->ops[1] = captures[2];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 536, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1037:;
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_341 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1044;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 543, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1044:;
    }
  return false;
}

bool
gimple_simplify_347 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SQRT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1052;
      {
	res_op->set_op (SQRT, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 551, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1052:;
    }
  return false;
}

bool
gimple_simplify_351 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TANH),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1056;
      {
	res_op->set_op (RDIV_EXPR, type, 2);
	res_op->ops[0] = build_one_cst (type);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), COSH, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1056;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 555, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1056:;
    }
  return false;
}

bool
gimple_simplify_355 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1060;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail1060;
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), POW, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1060;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 559, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1060:;
    }
  return false;
}

bool
gimple_simplify_362 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1069;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 568, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1069:;
    }
  return false;
}

bool
gimple_simplify_367 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (acmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree cst = uniform_integer_cst_p (captures[1]);
      if (tree_int_cst_sgn (cst) == 1
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1075;
	  {
	    res_op->set_op (acmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[1]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst) - 1));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 574, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1075:;
	}
  }
  return false;
}

bool
gimple_simplify_372 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1097;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 580, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1097:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1098;
		      {
			res_op->set_op (EQ_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] = captures[2];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 581, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1098:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1099;
			  {
			    tree tem;
			    tem =  constant_boolean_node (true, type);
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 582, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1099:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1100;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[2];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 583, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1100:;
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
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1101;
		      {
			tree tem;
			tem =  constant_boolean_node (false, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1101:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1102;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] = captures[2];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 585, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1102:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1103;
			      {
				tree tem;
				tem =  constant_boolean_node (true, type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 586, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1103:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1104;
				  {
				    res_op->set_op (NE_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 587, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1104:;
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1105;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 588, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1105:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1106;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 589, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1106:;
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
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1107;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 590, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1107:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1108;
				  {
				    res_op->set_op (EQ_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 591, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1108:;
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
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1109;
					  {
					    res_op->set_op (GE_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (st != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1109;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  build_zero_cst (st);
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 592, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1109:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1110;
					      {
						res_op->set_op (LT_EXPR, type, 2);
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (st != TREE_TYPE (_o1[0])
						      && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail1110;
						    }
						  else
						    _r1 = _o1[0];
						  res_op->ops[0] = _r1;
						}
						res_op->ops[1] =  build_zero_cst (st);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 593, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail1110:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1111;
						  {
						    res_op->set_op (GE_EXPR, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, st, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail1111;
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  build_zero_cst (st);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 594, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail1111:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1112;
						      {
							res_op->set_op (LT_EXPR, type, 2);
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, st, _o1[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail1112;
							  res_op->ops[0] = _r1;
							}
							res_op->ops[1] =  build_zero_cst (st);
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 595, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail1112:;
						    }
						}
					    }
					}
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
gimple_simplify_409 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (1
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && types_match (type, captures[2])
 && !POINTER_TYPE_P (TREE_TYPE (captures[2]))
 && TREE_CODE (TREE_TYPE (captures[2])) != OFFSET_TYPE
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1168;
      {
	res_op->set_op (bitop, type, 2);
	res_op->ops[0] = captures[2];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[3];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1168;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 644, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1168:;
    }
  return false;
}

bool
gimple_simplify_412 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize
 && types_match (type, TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (as_internal_fn (tos),
 type, OPTIMIZE_FOR_BOTH)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1172;
      {
	res_op->set_op (tos, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 648, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1172:;
    }
  return false;
}

bool
gimple_simplify_415 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize
 && FLOAT_TYPE_P (type)
 && FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 && types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[2]))
 && element_precision (type) < element_precision (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1175;
      {
	res_op->set_op (maxmin, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 651, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1175:;
    }
  return false;
}

bool
gimple_simplify_419 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1188;
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
		  if (!_r1) goto next_after_fail1188;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 652, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1188:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1189;
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
			if (!_r2) goto next_after_fail1189;
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
			if (!_r2) goto next_after_fail1189;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1189;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 653, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1189:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1190;
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
				  if (!_r1) goto next_after_fail1190;
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
				  if (!_r1) goto next_after_fail1190;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1190:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1191;
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
					    if (!_r2) goto next_after_fail1191;
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
					    if (!_r2) goto next_after_fail1191;
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1191;
				      res_op->ops[0] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1191:;
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
gimple_simplify_442 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1216;
      {
	res_op->set_op (BIT_AND_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 680, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1216:;
    }
  return false;
}

bool
gimple_simplify_450 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1224;
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
		      if (!_r3) goto next_after_fail1224;
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
		      if (!_r3) goto next_after_fail1224;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1224;
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
		    if (!_r2) goto next_after_fail1224;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1224;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 687, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1224:;
	}
  }
  return false;
}

bool
gimple_simplify_463 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1239;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1239:;
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1240;
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
						      if (!_r3) goto next_after_fail1240;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1240;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1240;
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
next_after_fail1240:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1241;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1241:;
					}
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
gimple_simplify_478 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1291;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 722, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1291:;
  return false;
}

bool
gimple_simplify_480 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1293;
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
	  if (!_r1) goto next_after_fail1293;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 724, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1293:;
    }
  return false;
}

bool
gimple_simplify_483 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1298;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1298:;
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1299;
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
						      if (!_r3) goto next_after_fail1299;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1299;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1299;
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
next_after_fail1299:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1300;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1300:;
					}
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
gimple_simplify_500 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1320;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (shift_type != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (shift_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1320;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1320;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 738, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1320:;
      }
    }
  return false;
}

bool
gimple_simplify_508 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[2])
 && tree_expr_nonzero_p (captures[3])
 && expr_no_side_effects_p (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1329;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 748, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1329:;
    }
  return false;
}

bool
gimple_simplify_513 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1334;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 753, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1334:;
  return false;
}

bool
gimple_simplify_518 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1339;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1339;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1339;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 758, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1339:;
	}
      else
	{
	  if (code == MIN_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1340;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1340;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1340;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 759, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1340:;
	    }
	  else
	    {
	      if (code == EQ_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1341;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[3], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[1];
			  if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o3[0])
			      && !useless_type_conversion_p (TREE_TYPE (_o2[0]), TREE_TYPE (_o3[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail1341;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[1] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, boolean_type_node, _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1341;
			_o1[0] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (from_type != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (from_type, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, from_type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail1341;
			  }
			else
			  _r2 = _o2[0];
			_o1[1] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (from_type != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (from_type, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, from_type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail1341;
			  }
			else
			  _r2 = _o2[0];
			_o1[2] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1341;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 760, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1341:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_530 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1401;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1401:;
    }
  return false;
}

bool
gimple_simplify_532 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1403;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1403:;
    }
  return false;
}

bool
gimple_simplify_534 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1405;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 785, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1405:;
    }
  return false;
}

bool
gimple_simplify_538 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (TYPE_OVERFLOW_WRAPS (type)
 || !wi::only_sign_bit_p (wi::to_wide (captures[1])))
 && wi::eq_p (wi::neg (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1409;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1409:;
    }
  return false;
}

bool
gimple_simplify_546 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1419;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1419:;
    }
  return false;
}

bool
gimple_simplify_550 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1423;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1423:;
    }
  return false;
}

bool
gimple_simplify_557 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1431;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 797, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1431:;
    }
  return false;
}

bool
gimple_simplify_563 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (type)
)
    {
      {
 tree shifter = build_int_cst (integer_type_node, TYPE_PRECISION (type) - 1);
	  if (cmp == LT_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1441;
	      {
		res_op->set_op (BIT_XOR_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] = shifter;
		    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1441;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1441;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 807, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1441:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1442;
	      {
		res_op->set_op (BIT_NOT_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    {
		      tree _o3[2], _r3;
		      _o3[0] = captures[0];
		      _o3[1] = shifter;
		      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1442;
		      _o2[0] = _r3;
		    }
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1442;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1442;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 808, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1442:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_574 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[1])
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 int shift = element_precision (captures[0]) - wi::exact_log2 (wi::to_wide (captures[1])) - 1;
	  if (shift >= 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1468;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] =  build_int_cst (integer_type_node, shift);
		    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1468;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1468;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1468:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1469;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1469;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 817, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1469:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_582 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 ifn = IFN_CLZ;
 else if (direct_internal_fn_supported_p (IFN_CLZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH))
 ifn = IFN_CLZ;
      if (ifn == IFN_CLZ
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1478;
	  {
	    res_op->set_op (CFN_CLZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 823, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1478:;
	}
  }
  return false;
}

bool
gimple_simplify_588 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1484;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1484:;
  return false;
}

bool
gimple_simplify_594 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1496;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 830, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1496:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1497;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 831, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1497:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1498;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1498:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1499;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1499:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_612 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (MINMAX))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_INTEGER_TYPE_P (type)
 && target_supports_op_p (type, MINMAX, optab_vector)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1523;
      {
	res_op->set_op (minmax, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 853, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1523:;
    }
  return false;
}

bool
gimple_simplify_617 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1528;
  {
    tree tem;
    tem = captures[3];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 796, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1528:;
  return false;
}

bool
gimple_simplify_624 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1535;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[5], _r1;
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
		if (!_r2) goto next_after_fail1535;
		_o1[4] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1535;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1535:;
	}
  }
  return false;
}

bool
gimple_simplify_632 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1543;
  {
    res_op->set_op (UNORDERED_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 868, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1543:;
  return false;
}

bool
gimple_simplify_636 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1547;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      gimple_match_op tem_op (res_op->cond.any_else (), logs, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1547;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1547:;
	}
    }
  return false;
}

bool
gimple_simplify_648 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1559;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1559:;
  return false;
}

bool
gimple_simplify_652 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1563;
      {
	res_op->set_op (FIX_TRUNC_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1563:;
    }
  return false;
}

bool
gimple_simplify_659 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1570;
      {
	res_op->set_op (CFN_FNMS, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 895, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1570:;
    }
  return false;
}

bool
gimple_simplify_666 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1577;
      {
	res_op->set_op (CFN_FMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 902, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1577:;
    }
  return false;
}

bool
gimple_simplify_675 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1590;
	      {
		res_op->set_op (popcount, type, 1);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (type1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1590;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1590;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 907, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1590:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_683 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
1
 || !TREE_SIDE_EFFECTS (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1601;
	  {
	    res_op->set_op (parity, type, 1);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (type0 != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1601;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 916, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1601:;
      }
    }
  return false;
}

bool
gimple_simplify_690 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1610;
					  {
					    res_op->set_op (PLUS_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[3];
						  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, ntype, _o3[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r3) goto next_after_fail1610;
						  _o2[0] = _r3;
						}
						gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1610;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail1610;
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] = captures[2];
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 928, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1610:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1611;
					  {
					    res_op->set_op (MINUS_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, ntype, _o3[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r3) goto next_after_fail1611;
						  _o2[0] = _r3;
						}
						gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1611;
						_o1[0] = _r2;
					      }
					      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail1611;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 929, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1611:;
					}
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
gimple_simplify_CFN_BUILT_IN_COSHL (gimple_match_op *res_op, gimple_seq *seq,
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
		    const combined_fn coss = CFN_BUILT_IN_COSHL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1652;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1652:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_BUILT_IN_COSHL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1653;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1653:;
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
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_COSHL))
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
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_COSHL))
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
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_COSHL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_ATANHL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSHL, CFN_BUILT_IN_ATANHL, CFN_BUILT_IN_SQRTL))
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
		      if (gimple_simplify_421 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_COSHL))
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
gimple_simplify_VIEW_CONVERT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1702;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1702:;
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
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1703;
			{
			  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 977, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1703:;
		      }
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
    if ((INTEGRAL_TYPE_P (type) || POINTER_TYPE_P (type))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[0]))
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1704;
	{
	  res_op->set_op (NOP_EXPR, type, 1);
	  res_op->ops[0] = captures[0];
	  res_op->resimplify (lseq, valueize);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 978, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1704:;
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
		    if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) || POINTER_TYPE_P (TREE_TYPE (captures[1])))
 && TYPE_SIZE (TREE_TYPE (captures[0])) == TYPE_SIZE (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))
 || (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1705;
			{
			  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			  res_op->ops[0] = captures[1];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 979, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1705:;
		      }
		  }
	          break;
	        }
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    {
 tree ctor = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
			if (CONSTRUCTOR_NELTS (ctor) == 0
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1706;
			    {
			      tree tem;
			      tem =  build_zero_cst (type);
			      res_op->set_value (tem);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 980, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1706:;
			  }
			else
			  {
			    if (CONSTRUCTOR_NELTS (ctor) == 1
 && VECTOR_TYPE_P (TREE_TYPE (ctor))
 && operand_equal_p (TYPE_SIZE (type),
 TYPE_SIZE (TREE_TYPE
 (CONSTRUCTOR_ELT (ctor, 0)->value)))
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1707;
				{
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, 0)->value;
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 981, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1707:;
			      }
			  }
		    }
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
		    if (VECTOR_TYPE_P (type) && VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (type), TREE_TYPE (TREE_TYPE (captures[2])))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1708;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[2];
			    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1708;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1708;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1708:;
		      }
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
gimple_simplify_CFN_BUILT_IN_BSWAP16 (gimple_match_op *res_op, gimple_seq *seq,
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				      if (gimple_simplify_609 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP16))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP16))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP16))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP16))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP16))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP16))
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
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_608 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16))
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
gimple_simplify_CFN_BUILT_IN_BSWAP64 (gimple_match_op *res_op, gimple_seq *seq,
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				      if (gimple_simplify_609 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP64))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP64))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP64))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP64))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP64))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP64))
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
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_608 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64))
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
gimple_simplify_CFN_BUILT_IN_LOG2F (gimple_match_op *res_op, gimple_seq *seq,
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
			  if (gimple_simplify_637 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
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
		      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
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
	      case CFN_BUILT_IN_SQRTF:
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
 switch (CFN_BUILT_IN_SQRTF)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1792;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1792;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1792:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
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
 switch (CFN_BUILT_IN_EXP10F)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1793;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1793;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1793:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
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
 switch (CFN_BUILT_IN_EXPF)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1794;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1794;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1794:;
			      }
			    }
			}
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
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_POWF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
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
 switch (CFN_BUILT_IN_POW10F)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1795;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1795;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1795:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTF:
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
 switch (CFN_BUILT_IN_CBRTF)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1796;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1796;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1796:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1797;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1797:;
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
gimple_simplify_CFN_LOG10 (gimple_match_op *res_op, gimple_seq *seq,
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
			  if (gimple_simplify_637 (res_op, seq, valueize, type, captures, CFN_LOG10))
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
		      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_LOG10))
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
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_EXP)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1832;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1832;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1832:;
			      }
			    }
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
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_POW))
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1833;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1833;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1833:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1834;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1834;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1834:;
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1835;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1835:;
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
gimple_simplify_CFN_BUILT_IN_CBRTL (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_SQRTL:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1891;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real_truncate (type, dconst_sixth ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1891:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1892;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1892;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1892:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1893;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1893;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1893:;
			}
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
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1894;
			      {
				res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] =  build_real_truncate (type, dconst_third ());
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1894;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1004, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1894:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1895;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1895;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1895:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1896;
			      {
				res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_real_truncate (type, dconst_ninth ());
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1005, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1896:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1897;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1897;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1897:;
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
gimple_simplify_CFN_BUILT_IN_TRUNCF32 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_TRUNCF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_TRUNC (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_TRUNC:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_TRUNC))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_TRUNC))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF128 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_FLOORF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128, CFN_BUILT_IN_TRUNCF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF16 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_CEILF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF16))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF128X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_CEILF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF128X))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF32X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ROUNDF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF32X))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF16 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_NEARBYINTF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF16))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF128X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_NEARBYINTF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF128X))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTF128 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_RINTF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF128))
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
      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEXPL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (gimple_compositional_complex (_p0, valueize))
    {
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0 };
	if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
	  {
	    if (targetm.libc_has_function (function_c99_math_complex, TREE_TYPE (captures[0]))
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1900;
		{
		  res_op->set_op (COMPLEX_EXPR, type, 2);
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      {
			tree _o3[1], _r3;
			_o3[0] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o3[0])), _o3[0]);
			tem_op.resimplify (lseq, valueize);
			_r3 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r3) goto next_after_fail1900;
			_o2[0] = _r3;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXPL, TREE_TYPE (_o2[0]), _o2[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r2) goto next_after_fail1900;
		      captures[1] = _r2;
		    }
		    _o1[0] = captures[1];
		    {
		      tree _o2[1], _r2;
		      {
			tree _o3[1], _r3;
			{
			  tree _o4[1], _r4;
			  _o4[0] = captures[0];
			  gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o4[0])), _o4[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r4 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r4) goto next_after_fail1900;
			  _o3[0] = _r4;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_CEXPIL, type, _o3[0]);
			tem_op.resimplify (lseq, valueize);
			_r3 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r3) goto next_after_fail1900;
			captures[2] = _r3;
		      }
		      _o2[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r2) goto next_after_fail1900;
		      _o1[1] = _r2;
		    }
		    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r1) goto next_after_fail1900;
		    res_op->ops[0] = _r1;
		  }
		  {
		    tree _o1[2], _r1;
		    _o1[0] = captures[1];
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r2) goto next_after_fail1900;
		      _o1[1] = _r2;
		    }
		    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r1) goto next_after_fail1900;
		    res_op->ops[1] = _r1;
		  }
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1006, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail1900:;
	      }
	  }
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IFLOOR (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_650 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOOR, CFN_BUILT_IN_IFLOORF))
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
      if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOOR))
        return true;
    }
  }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOOR))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOOR, CFN_BUILT_IN_LFLOOR, CFN_BUILT_IN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LRINT (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_650 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LRINT, CFN_BUILT_IN_LRINTF))
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
      if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LRINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_LLFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_LLFLOOR))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_LLFLOOR))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_IFLOOR, CFN_LFLOOR, CFN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLROUNDF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF, CFN_BUILT_IN_LROUNDF, CFN_BUILT_IN_LLROUNDF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CPROJ (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (!HONOR_INFINITIES (type)
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1904;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1007, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1904:;
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
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			if (tree_expr_nonnegative_p (_q21))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (real_isinf (TREE_REAL_CST_PTR (captures[0]))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1905;
				  {
				    tree tem;
				    tem =  build_complex_inf (type, false);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1008, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1905:;
				}
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (real_isinf (TREE_REAL_CST_PTR (captures[1]))
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1906;
			      {
				tree tem;
				tem =  build_complex_inf (type, TREE_REAL_CST_PTR (captures[1])->sign);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1009, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1906:;
			    }
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
gimple_simplify_CFN_BUILT_IN_POPCOUNTL (gimple_match_op *res_op, gimple_seq *seq,
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
				    if (gimple_simplify_673 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
				    if (gimple_simplify_673 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTL))
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
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTL))
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
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTL))
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
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTL))
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
		    if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
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
		    if (gimple_simplify_676 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
		    if (gimple_simplify_676 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
		      if (gimple_simplify_675 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTL))
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
		      if (gimple_simplify_675 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTL))
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
		      if (gimple_simplify_675 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTL))
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
		      if (gimple_simplify_675 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTL))
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
    if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_PARITY (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, CFN_PARITY))
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
				    if (gimple_simplify_680 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_PARITY))
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
				    if (gimple_simplify_680 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_PARITY))
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
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_PARITY))
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
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_PARITY))
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
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_PARITY))
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
				      if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_PARITY))
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
		    if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_PARITY))
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
		    if (gimple_simplify_683 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_PARITY))
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
		    if (gimple_simplify_683 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_PARITY))
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
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_PARITY))
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
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_PARITY))
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
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_PARITY))
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
		      if (gimple_simplify_682 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_PARITY))
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
    if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_PARITY))
      return true;
  }
  return false;
}

bool
gimple_simplify_MULT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (initializer_each_zero_or_onep (captures[1])
 && !HONOR_SNANS (type)
 && !HONOR_SIGNED_ZEROS (type)
)
	    {
	      {
 tree itype = FLOAT_TYPE_P (type) ? unsigned_type_for (type) : type;
		  if (itype
 && (!VECTOR_MODE_P (TYPE_MODE (type))
 || (VECTOR_MODE_P (TYPE_MODE (itype))
 && optab_handler (and_optab,
 TYPE_MODE (itype)) != CODE_FOR_nothing))
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2094;
		      {
			res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, itype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail2094;
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[1];
			    _o2[1] =  build_zero_cst (type);
			    gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, itype, _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail2094;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, itype, _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2094;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1081, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2094:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2095;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1082, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail2095:;
    }
  }
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (!tree_expr_maybe_nan_p (captures[0])
 && (!HONOR_NANS (type) || !tree_expr_maybe_infinite_p (captures[0]))
 && (!HONOR_SIGNED_ZEROS (type) || tree_expr_nonnegative_p (captures[0]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2096;
	  {
	    tree tem;
	    tem = captures[1];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1083, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2096:;
	}
    }
  }
if (real_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2097;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1084, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2097:;
	}
    }
  }
if (real_minus_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2098;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1085, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2098:;
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
	      case BIT_AND_EXPR:
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
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (uniform_integer_cst_p (_q31))
				    {
				      if (uniform_integer_cst_p (_q21))
					{
					  if (uniform_integer_cst_p (_p1))
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
						{
 tree rshift_cst = uniform_integer_cst_p (captures[1]);
 tree bit_and_cst = uniform_integer_cst_p (captures[2]);
 tree mult_cst = uniform_integer_cst_p (captures[3]);
						    if (VECTOR_TYPE_P (type)
 && tree_fits_uhwi_p (rshift_cst)
 && tree_fits_uhwi_p (mult_cst)
 && tree_fits_uhwi_p (bit_and_cst)
)
						      {
							{
 HOST_WIDE_INT vec_elem_bits = vector_element_bits (type);
 poly_int64 vec_nelts = TYPE_VECTOR_SUBPARTS (type);
 poly_int64 vec_bits = vec_elem_bits * vec_nelts;
 unsigned HOST_WIDE_INT cmp_bits_i, bit_and_i, mult_i;
 unsigned HOST_WIDE_INT target_mult_i, target_bit_and_i;
 cmp_bits_i = tree_to_uhwi (rshift_cst) + 1;
 mult_i = tree_to_uhwi (mult_cst);
 target_mult_i = (HOST_WIDE_INT_1U << cmp_bits_i) - 1;
 bit_and_i = tree_to_uhwi (bit_and_cst);
 target_bit_and_i = 0;
 for (unsigned i = 0; i < vec_elem_bits / cmp_bits_i; i++)
 target_bit_and_i = (target_bit_and_i << cmp_bits_i) | 1U;
							    if ((exact_log2 (cmp_bits_i)) >= 0
 && cmp_bits_i < HOST_BITS_PER_WIDE_INT
 && multiple_p (vec_bits, cmp_bits_i)
 && vec_elem_bits <= HOST_BITS_PER_WIDE_INT
 && target_mult_i == mult_i
 && target_bit_and_i == bit_and_i
)
							      {
								{
 tree cmp_type = build_nonstandard_integer_type (cmp_bits_i, 0);
 poly_int64 vector_type_nelts = exact_div (vec_bits, cmp_bits_i);
 tree vec_cmp_type = build_vector_type (cmp_type, vector_type_nelts);
 tree vec_truth_type = truth_type_for (vec_cmp_type);
 tree zeros = build_zero_cst (vec_cmp_type);
 tree ones = build_all_ones_cst (vec_cmp_type);
								    if (expand_vec_cmp_expr_p (vec_cmp_type, vec_truth_type, LT_EXPR)
 && expand_vec_cond_expr_p (vec_cmp_type, vec_truth_type)
)
								      {
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2099;
									{
									  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
									  {
									    tree _o1[3], _r1;
									    {
									      tree _o2[2], _r2;
									      {
										tree _o3[1], _r3;
										_o3[0] = captures[0];
										gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, vec_cmp_type, _o3[0]);
										tem_op.resimplify (lseq, valueize);
										_r3 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r3) goto next_after_fail2099;
										_o2[0] = _r3;
									      }
									      _o2[1] =  zeros;
									      gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, vec_truth_type, _o2[0], _o2[1]);
									      tem_op.resimplify (lseq, valueize);
									      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
									      if (!_r2) goto next_after_fail2099;
									      _o1[0] = _r2;
									    }
									    _o1[1] =  ones;
									    _o1[2] =  zeros;
									    gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
									    tem_op.resimplify (lseq, valueize);
									    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									    if (!_r1) goto next_after_fail2099;
									    res_op->ops[0] = _r1;
									  }
									  res_op->resimplify (lseq, valueize);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1086, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2099:;
								      }
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_177 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_178 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_179 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_180 (res_op, seq, valueize, type, captures))
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
		    case GT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_177 (res_op, seq, valueize, type, captures))
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
		    case GE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_178 (res_op, seq, valueize, type, captures))
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
		    case LT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_179 (res_op, seq, valueize, type, captures))
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
		    case LE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_180 (res_op, seq, valueize, type, captures))
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
	      case COND_EXPR:
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
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_181 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_182 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
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
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_183 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_184 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_185 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_186 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
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
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_187 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_188 (res_op, seq, valueize, type, captures))
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
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_181 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_182 (res_op, seq, valueize, type, captures))
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
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_183 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_184 (res_op, seq, valueize, type, captures))
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
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_185 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_186 (res_op, seq, valueize, type, captures))
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
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_187 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_188 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_189 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_190 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_191 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_192 (res_op, seq, valueize, type, captures))
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
		    case GT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_189 (res_op, seq, valueize, type, captures))
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
		    case GE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_190 (res_op, seq, valueize, type, captures))
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
		    case LT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_191 (res_op, seq, valueize, type, captures))
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
		    case LE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_192 (res_op, seq, valueize, type, captures))
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			        return true;
			    }
			  }
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
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			        return true;
			    }
			  }
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
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			        return true;
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
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_193 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
			        return true;
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
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
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
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_194 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_195 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
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
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
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
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
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
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
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
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, MULT_EXPR))
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
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				{
 wi::overflow_type overflow;
 wide_int mul = wi::mul (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type), &overflow);
				    if (!overflow || TYPE_OVERFLOW_WRAPS (type)
)
				      {
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2100;
					{
					  res_op->set_op (MULT_EXPR, type, 2);
					  res_op->ops[0] = captures[0];
					  res_op->ops[1] =  wide_int_to_tree (type, mul);
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1087, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2100:;
				      }
				}
			      }
			      break;
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
 wi::overflow_type ovf1, ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::mul (wi::to_wide (captures[4]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 int_range_max vr0;
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE
 && get_global_range_query ()->range_of_expr (vr0, captures[1])
 && !vr0.varying_p () && !vr0.undefined_p ())
 {
 wide_int wmin0 = vr0.lower_bound ();
 wide_int wmax0 = vr0.upper_bound ();
 wmin0 = wi::mul (wmin0, wi::to_wide (captures[5]), TYPE_SIGN (type), &ovf1);
 wmax0 = wi::mul (wmax0, wi::to_wide (captures[5]), TYPE_SIGN (type), &ovf2);
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE)
 {
 wi::add (wmin0, add, TYPE_SIGN (type), &ovf1);
 wi::add (wmax0, add, TYPE_SIGN (type), &ovf2);
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
							      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2101;
							      {
								res_op->set_op (PLUS_EXPR, type, 2);
								{
								  tree _o1[2], _r1;
								  _o1[0] = captures[2];
								  _o1[1] =  wide_int_to_tree (type, mul);
								  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								  tem_op.resimplify (lseq, valueize);
								  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								  if (!_r1) goto next_after_fail2101;
								  res_op->ops[0] = _r1;
								}
								res_op->ops[1] =  wide_int_to_tree (type, add);
								res_op->resimplify (lseq, valueize);
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1088, __FILE__, __LINE__, true);
								return true;
							      }
next_after_fail2101:;
							    }
						      }
						    }
						    break;
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
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2102;
				{
				  res_op->set_op (BIT_AND_EXPR, type, 2);
				  res_op->ops[0] = captures[0];
				  {
				    tree _o1[1], _r1;
				    _o1[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail2102;
				    res_op->ops[1] = _r1;
				  }
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1089, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2102:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2103;
			{
			  res_op->set_op (MULT_EXPR, type, 2);
			  res_op->ops[0] = captures[1];
			  res_op->ops[1] = captures[1];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1090, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2103:;
		      }
		    }
	          break;
	        }
	      case ABSU_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2104;
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
				if (!_r1) goto next_after_fail2104;
			      }
			    else
			      _r1 = _o1[0];
			    captures[2] = _r1;
			  }
			  res_op->ops[0] = captures[2];
			  res_op->ops[1] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1091, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2104:;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			    return true;
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			    return true;
			}
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			    return true;
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
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
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					if (gimple_simplify_199 (res_op, seq, valueize, type, captures))
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
			      case LSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_onep (_q30))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _q31 };
					if (gimple_simplify_199 (res_op, seq, valueize, type, captures))
					  return true;
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
				  if (integer_zerop (_q31))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					    if (gimple_simplify_200 (res_op, seq, valueize, type, captures))
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
		  if (integer_onep (_q30))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			if (gimple_simplify_199 (res_op, seq, valueize, type, captures))
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
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_onep (_q20))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			if (gimple_simplify_199 (res_op, seq, valueize, type, captures))
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
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    if (gimple_simplify_201 (res_op, seq, valueize, type, captures))
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
	      case EQ_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (integer_zerop (_q31))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			    if (gimple_simplify_201 (res_op, seq, valueize, type, captures))
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
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_zerop (_q21))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			    if (gimple_simplify_200 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  if (integer_zerop (_q32))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2105;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1092, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2105:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
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
	      case VEC_COND_EXPR:
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
			      case EQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q31))
				    {
				      if (integer_zerop (_q22))
					{
					  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2106;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1092, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2106:;
					      }
					    }
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
				  if (integer_zerop (_q31))
				    {
				      if (integer_zerop (_q21))
					{
					  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2107;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1093, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2107:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
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
	      case VEC_COND_EXPR:
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
			      case NE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  if (integer_zerop (_q31))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2108;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1093, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2108:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
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
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (flag_associative_math
 && single_use (captures[0])
)
				  {
				    {
 tree tem = const_binop (MULT_EXPR, type, captures[1], captures[3]);
					if (tem
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2109;
					    {
					      res_op->set_op (RDIV_EXPR, type, 2);
					      res_op->ops[0] =  tem;
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1094, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2109:;
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
		  case BIT_IOR_EXPR:
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
				  case NEGATE_EXPR:
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
								  case LT_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (integer_zerop (_q61))
									{
									  if (integer_onep (_q31))
									    {
									      {
										tree _p1_pops[1];
										if (gimple_nop_convert (_p1, _p1_pops, valueize))
										  {
										    tree _q100 = _p1_pops[0];
										    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
										      {
											{
											  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
											  if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
											    return true;
											}
										      }
										  }
									      }
									      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
										    if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
						  case LT_EXPR:
						    {
						      tree _q50 = gimple_assign_rhs1 (_a3);
						      _q50 = do_valueize (valueize, _q50);
						      tree _q51 = gimple_assign_rhs2 (_a3);
						      _q51 = do_valueize (valueize, _q51);
						      if (integer_zerop (_q51))
							{
							  if (integer_onep (_q31))
							    {
							      {
								tree _p1_pops[1];
								if (gimple_nop_convert (_p1, _p1_pops, valueize))
								  {
								    tree _q90 = _p1_pops[0];
								    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								      {
									{
									  tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
									  if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
									    return true;
									}
								      }
								  }
							      }
							      if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
								    if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
				      case NEGATE_EXPR:
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
									      if (integer_onep (_q31))
										{
										  {
										    tree _p1_pops[1];
										    if (gimple_nop_convert (_p1, _p1_pops, valueize))
										      {
											tree _q110 = _p1_pops[0];
											if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
											  {
											    {
											      tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
											      if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
											        return true;
											    }
											  }
										      }
										  }
										  if ((_p1 == _q70 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q70, 0) && types_match (_p1, _q70)))
										    {
										      {
											tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
											if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
						      case LT_EXPR:
						        {
							  tree _q60 = gimple_assign_rhs1 (_a3);
							  _q60 = do_valueize (valueize, _q60);
							  tree _q61 = gimple_assign_rhs2 (_a3);
							  _q61 = do_valueize (valueize, _q61);
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q31))
								{
								  {
								    tree _p1_pops[1];
								    if (gimple_nop_convert (_p1, _p1_pops, valueize))
								      {
									tree _q100 = _p1_pops[0];
									if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
									  {
									    {
									      tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
									      if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
									        return true;
									    }
									  }
								      }
								  }
								  if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
									if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
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
								      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									{
									  if (integer_zerop (_q71))
									    {
									      if (integer_onep (_q41))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
										    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
						  case LT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							{
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q41))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
								    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
		      tree _q40_pops[1];
		      if (gimple_nop_convert (_q40, _q40_pops, valueize))
		        {
			  tree _q50 = _q40_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  switch (TREE_CODE (_q60))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q60))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      CASE_CONVERT:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  switch (TREE_CODE (_q70))
							    {
							    case SSA_NAME:
							      if (gimple *_d4 = get_def (valueize, _q70))
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
									  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									    {
									      if (integer_zerop (_q81))
										{
										  if (integer_onep (_q41))
										    {
										      {
											tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
											if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
						      case LT_EXPR:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  tree _q71 = gimple_assign_rhs2 (_a3);
							  _q71 = do_valueize (valueize, _q71);
							  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							    {
							      if (integer_zerop (_q71))
								{
								  if (integer_onep (_q41))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
									if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
    {
      tree _p1_pops[1];
      if (gimple_nop_convert (_p1, _p1_pops, valueize))
        {
	  tree _q40 = _p1_pops[0];
	  switch (TREE_CODE (_q40))
	    {
	    case SSA_NAME:
	      if (gimple *_d1 = get_def (valueize, _q40))
	        {
		  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		    switch (gimple_assign_rhs_code (_a1))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q50 = gimple_assign_rhs1 (_a1);
			  _q50 = do_valueize (valueize, _q50);
			  tree _q51 = gimple_assign_rhs2 (_a1);
			  _q51 = do_valueize (valueize, _q51);
			  if (tree_swap_operands_p (_q50, _q51))
			    std::swap (_q50, _q51);
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  switch (TREE_CODE (_q60))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q60))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      CASE_CONVERT:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  switch (TREE_CODE (_q70))
							    {
							    case SSA_NAME:
							      if (gimple *_d4 = get_def (valueize, _q70))
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
									  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									    {
									      if (integer_zerop (_q81))
										{
										  if (integer_onep (_q51))
										    {
										      {
											tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
											if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
						      case LT_EXPR:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  tree _q71 = gimple_assign_rhs2 (_a3);
							  _q71 = do_valueize (valueize, _q71);
							  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							    {
							      if (integer_zerop (_q71))
								{
								  if (integer_onep (_q51))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
									if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
			  tree _q50_pops[1];
			  if (gimple_nop_convert (_q50, _q50_pops, valueize))
			    {
			      tree _q60 = _q50_pops[0];
			      switch (TREE_CODE (_q60))
			        {
				case SSA_NAME:
				  if (gimple *_d2 = get_def (valueize, _q60))
				    {
				      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				        switch (gimple_assign_rhs_code (_a2))
					  {
					  case NEGATE_EXPR:
					    {
					      tree _q70 = gimple_assign_rhs1 (_a2);
					      _q70 = do_valueize (valueize, _q70);
					      switch (TREE_CODE (_q70))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q70))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  CASE_CONVERT:
							    {
							      tree _q80 = gimple_assign_rhs1 (_a3);
							      _q80 = do_valueize (valueize, _q80);
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
									      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
										{
										  if (integer_zerop (_q91))
										    {
										      if (integer_onep (_q51))
											{
											  {
											    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
											    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
							  case LT_EXPR:
							    {
							      tree _q80 = gimple_assign_rhs1 (_a3);
							      _q80 = do_valueize (valueize, _q80);
							      tree _q81 = gimple_assign_rhs2 (_a3);
							      _q81 = do_valueize (valueize, _q81);
							      if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
								{
								  if (integer_zerop (_q81))
								    {
								      if (integer_onep (_q51))
									{
									  {
									    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
									    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
		    case BIT_IOR_EXPR:
		      {
			tree _q40 = gimple_assign_rhs1 (_a1);
			_q40 = do_valueize (valueize, _q40);
			tree _q41 = gimple_assign_rhs2 (_a1);
			_q41 = do_valueize (valueize, _q41);
			if (tree_swap_operands_p (_q40, _q41))
			  std::swap (_q40, _q41);
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
									if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
									  {
									    if (integer_zerop (_q71))
									      {
										if (integer_onep (_q41))
										  {
										    {
										      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
										      if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
			tree _q40_pops[1];
			if (gimple_nop_convert (_q40, _q40_pops, valueize))
			  {
			    tree _q50 = _q40_pops[0];
			    switch (TREE_CODE (_q50))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _q50))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case NEGATE_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    switch (TREE_CODE (_q60))
					      {
					      case SSA_NAME:
					        if (gimple *_d3 = get_def (valueize, _q60))
					          {
						    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						      switch (gimple_assign_rhs_code (_a3))
							{
							CASE_CONVERT:
							  {
							    tree _q70 = gimple_assign_rhs1 (_a3);
							    _q70 = do_valueize (valueize, _q70);
							    switch (TREE_CODE (_q70))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q70))
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
									    if ((_q80 == _p0 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _p0, 0) && types_match (_q80, _p0)))
									      {
										if (integer_zerop (_q81))
										  {
										    if (integer_onep (_q41))
										      {
											{
											  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
											  if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
			  }
		      }
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
	      case BIT_IOR_EXPR:
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
								      if (integer_onep (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (gimple_nop_convert (_p1, _p1_pops, valueize))
									      {
										tree _q90 = _p1_pops[0];
										if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
										  {
										    {
										      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
										      if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
										        return true;
										    }
										  }
									      }
									  }
									  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
									    {
									      {
										tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
										if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
					      case LT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (integer_zerop (_q41))
						    {
						      if (integer_onep (_q21))
							{
							  {
							    tree _p1_pops[1];
							    if (gimple_nop_convert (_p1, _p1_pops, valueize))
							      {
								tree _q80 = _p1_pops[0];
								if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
								  {
								    {
								      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
								      if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
								        return true;
								    }
								  }
							      }
							  }
							  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
								if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
				  case NEGATE_EXPR:
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
								  case LT_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (integer_zerop (_q61))
									{
									  if (integer_onep (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (gimple_nop_convert (_p1, _p1_pops, valueize))
										  {
										    tree _q100 = _p1_pops[0];
										    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
										      {
											{
											  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
											  if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
											    return true;
											}
										      }
										  }
									      }
									      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
										    if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
						  case LT_EXPR:
						    {
						      tree _q50 = gimple_assign_rhs1 (_a3);
						      _q50 = do_valueize (valueize, _q50);
						      tree _q51 = gimple_assign_rhs2 (_a3);
						      _q51 = do_valueize (valueize, _q51);
						      if (integer_zerop (_q51))
							{
							  if (integer_onep (_q21))
							    {
							      {
								tree _p1_pops[1];
								if (gimple_nop_convert (_p1, _p1_pops, valueize))
								  {
								    tree _q90 = _p1_pops[0];
								    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								      {
									{
									  tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
									  if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
									    return true;
									}
								      }
								  }
							      }
							      if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
								    if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
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
								  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
								    {
								      if (integer_zerop (_q61))
									{
									  if (integer_onep (_q31))
									    {
									      {
										tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
										if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
					      case LT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      if (integer_zerop (_q51))
							{
							  if (integer_onep (_q31))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
								if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
				  case NEGATE_EXPR:
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
								      if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
									{
									  if (integer_zerop (_q71))
									    {
									      if (integer_onep (_q31))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
										    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
						  case LT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							{
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q31))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
								    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
		  case BIT_IOR_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
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
				      switch (TREE_CODE (_q50))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q50))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case LT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							{
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q41))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
								    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
		      tree _q40_pops[1];
		      if (gimple_nop_convert (_q40, _q40_pops, valueize))
		        {
			  tree _q50 = _q40_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  switch (TREE_CODE (_q60))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q60))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case LT_EXPR:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  tree _q71 = gimple_assign_rhs2 (_a3);
							  _q71 = do_valueize (valueize, _q71);
							  if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
							    {
							      if (integer_zerop (_q71))
								{
								  if (integer_onep (_q41))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
									if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
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
			      case NEGATE_EXPR:
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
						  if (gimple_negate_expr_p (_q50, valueize))
						    {
						      {
							tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
							if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
				if (gimple_negate_expr_p (_p1, valueize))
				  {
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
				      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
				        return true;
				    }
				  }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, LE_EXPR))
				      return true;
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, EQ_EXPR))
				      return true;
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, GT_EXPR))
				      return true;
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, UNORDERED_EXPR))
				      return true;
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, ORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, UNLT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, UNLE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, UNGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, UNGE_EXPR))
				      return true;
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
				      return true;
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_205 (res_op, seq, valueize, type, captures, LTGT_EXPR))
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
		if (gimple_negate_expr_p (_q20, valueize))
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
						case NEGATE_EXPR:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
						      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if (gimple_negate_expr_p (_q40, valueize))
				    {
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
		if (gimple_negate_expr_p (_p1, valueize))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
if (gimple_negate_expr_p (_p0, valueize))
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
				case NEGATE_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
				      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
		      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
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
if (gimple_zero_one_valued_p (_p0, valueize))
  {
    if (gimple_zero_one_valued_p (_p1, valueize))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2110;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1095, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2110:;
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
			      case LT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, LE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, EQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNORDERED_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case ORDERED_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, ORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNLT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNLE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNGE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNEQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LTGT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, LTGT_EXPR))
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2111;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2111:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2112;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2112:;
					      }
					  }
				        }
				    }
			          break;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2113;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2113:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2114;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2114:;
					      }
					  }
				        }
				    }
			          break;
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
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (gimple_with_possible_nonzero_bits (_q30, valueize))
				    {
				      switch (TREE_CODE (_q31))
				        {
					case INTEGER_CST:
					  {
					    if (poly_int_tree_p (_p1))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						  if (gimple_simplify_207 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					    break;
					  }
				        default:;
				        }
				    }
			          break;
			        }
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
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
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
							if (gimple_simplify_208 (res_op, seq, valueize, type, captures))
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
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
					if (gimple_simplify_208 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if (poly_int_tree_p (_p1))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					      if (gimple_simplify_209 (res_op, seq, valueize, type, captures))
					        return true;
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
							      case EXACT_DIV_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  switch (TREE_CODE (_q51))
								    {
								    case INTEGER_CST:
								      {
									if (poly_int_tree_p (_q31))
									  {
									    if (poly_int_tree_p (_p1))
									      {
										{
										  tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
										  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, PLUS_EXPR))
										    return true;
										}
									      }
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
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q31))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _p1 };
								  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, PLUS_EXPR))
								    return true;
								}
							      }
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
							      case EXACT_DIV_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  switch (TREE_CODE (_q51))
								    {
								    case INTEGER_CST:
								      {
									if (poly_int_tree_p (_q31))
									  {
									    if (poly_int_tree_p (_p1))
									      {
										{
										  tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
										  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, MINUS_EXPR))
										    return true;
										}
									      }
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
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q31))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _p1 };
								  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, MINUS_EXPR))
								    return true;
								}
							      }
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
	      case RSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (gimple_with_possible_nonzero_bits (_q20, valueize))
		    {
		      switch (TREE_CODE (_q21))
		        {
			case INTEGER_CST:
			  {
			    if (poly_int_tree_p (_p1))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  if (gimple_simplify_207 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			    break;
			  }
		        default:;
		        }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
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
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
					if (gimple_simplify_208 (res_op, seq, valueize, type, captures))
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
			if (gimple_simplify_208 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if (poly_int_tree_p (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_209 (res_op, seq, valueize, type, captures))
			        return true;
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
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case EXACT_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q21))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _p1 };
								  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, PLUS_EXPR))
								    return true;
								}
							      }
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
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if (poly_int_tree_p (_q21))
					  {
					    if (poly_int_tree_p (_p1))
					      {
						{
						  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
						  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, PLUS_EXPR))
						    return true;
						}
					      }
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
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case EXACT_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q21))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _p1 };
								  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, MINUS_EXPR))
								    return true;
								}
							      }
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
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if (poly_int_tree_p (_q21))
					  {
					    if (poly_int_tree_p (_p1))
					      {
						{
						  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
						  if (gimple_simplify_210 (res_op, seq, valueize, type, captures, MINUS_EXPR))
						    return true;
						}
					      }
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
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2115;
	{
	  res_op->set_op (NEGATE_EXPR, type, 1);
	  res_op->ops[0] = captures[0];
	  res_op->resimplify (lseq, valueize);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2115:;
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
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			  if (gimple_simplify_211 (res_op, seq, valueize, type, captures))
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
		    case INTEGER_CST:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
			  if (gimple_simplify_211 (res_op, seq, valueize, type, captures))
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2116;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2116;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2116;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2116:;
					  }
				      }
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2117;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2117;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2117;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2117:;
		      }
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2118;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2118;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2118;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2118:;
		      }
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
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF))
			    return true;
			}
		      }
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
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2119;
					    {
					      res_op->set_op (CFN_BUILT_IN_SQRTF, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2119;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2119:;
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
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL))
			    return true;
			}
		      }
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
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2120;
					    {
					      res_op->set_op (CFN_BUILT_IN_SQRTL, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2120;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2120:;
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
	      case CFN_BUILT_IN_EXP:
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
				case CFN_BUILT_IN_EXP:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2121;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2121;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2121:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2122;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2122;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2122;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2122;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2122:;
						    }
						}
					    }
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
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_BUILT_IN_EXP:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2123;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2123;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2123;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2123;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2123:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP2:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2124;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2124;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2124;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2124;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2124:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP10:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2125;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2125;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2125;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2125;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2125:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_POW10:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2126;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2126;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2126;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2126;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2126:;
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
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
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
				case CFN_BUILT_IN_EXP10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2127;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2127;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2127:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2128;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2128;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2128;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2128;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2128:;
						    }
						}
					    }
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
	      case CFN_BUILT_IN_EXP10L:
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
				case CFN_BUILT_IN_EXP10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2129;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2129;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2129:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2130;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2130;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2130;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2130;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2130:;
						    }
						}
					    }
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
	      case CFN_BUILT_IN_CBRT:
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
				case CFN_BUILT_IN_CBRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2131;
					    {
					      res_op->set_op (CFN_BUILT_IN_CBRT, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2131;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2131:;
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
	      case CFN_BUILT_IN_EXP2:
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
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2132;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2132;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2132;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2132;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2132:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2133;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2133;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2133:;
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
	      case CFN_BUILT_IN_EXPF:
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
				case CFN_BUILT_IN_EXPF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2134;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2134;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2134:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2135;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2135;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2135;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2135;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2135:;
						    }
						}
					    }
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
	      case CFN_BUILT_IN_EXPL:
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
				case CFN_BUILT_IN_EXPL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2136;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2136;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2136:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2137;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2137;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2137;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2137;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2137:;
						    }
						}
					    }
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
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_BUILT_IN_EXP10F:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2138;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2138;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2138;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2138;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2138:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXPF:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2139;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2139;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2139;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2139;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2139:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_POW10F:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2140;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2140;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2140;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2140;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2140:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP2F:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2141;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2141;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2141;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2141;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2141:;
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
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
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
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_BUILT_IN_EXP10L:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2142;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2142;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2142;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2142;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2142:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXPL:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2143;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2143;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2143;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2143;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2143:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_POW10L:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2144;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2144;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2144;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2144;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2144:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP2L:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2145;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2145;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2145;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2145;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2145:;
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
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
				  return true;
			      }
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
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT))
			    return true;
			}
		      }
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
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2146;
					    {
					      res_op->set_op (CFN_BUILT_IN_SQRT, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2146;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2146:;
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
	      case CFN_BUILT_IN_LDEXPF:
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF128))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF32X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF64X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF64X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF16))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF32))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF64))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_EXP:
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
				case CFN_EXP:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2147;
					    {
					      res_op->set_op (CFN_EXP, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2147;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2147:;
					  }
				      }
				    }
				  break;
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2148;
						      {
							res_op->set_op (CFN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2148;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2148;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2148;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2148:;
						    }
						}
					    }
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
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_EXP:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2149;
						      {
							res_op->set_op (CFN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2149;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2149;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2149;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2149:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_EXP2:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2150;
						      {
							res_op->set_op (CFN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2150;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2150;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2150;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2150:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_EXP10:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2151;
						      {
							res_op->set_op (CFN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2151;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2151;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2151;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2151:;
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
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_POW))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
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
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2152;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2152;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2152;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2152;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2152:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_POW10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2153;
					    {
					      res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2153;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2153:;
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
	      case CFN_BUILT_IN_POW10L:
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
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2154;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2154;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2154;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2154;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2154:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_POW10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2155;
					    {
					      res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2155;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2155:;
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
	      case CFN_BUILT_IN_SQRTF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF128X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_EXP2:
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
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2156;
						      {
							res_op->set_op (CFN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2156;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2156;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2156;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2156:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_EXP2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2157;
					    {
					      res_op->set_op (CFN_EXP2, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2157;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2157:;
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
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures, CFN_SQRT))
			    return true;
			}
		      }
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
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2158;
					    {
					      res_op->set_op (CFN_SQRT, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2158;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2158:;
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
	      case CFN_EXP10:
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
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2159;
						      {
							res_op->set_op (CFN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2159;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2159;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2159;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2159:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_EXP10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2160;
					    {
					      res_op->set_op (CFN_EXP10, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2160;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2160:;
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
	      case CFN_BUILT_IN_CBRTF:
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
				case CFN_BUILT_IN_CBRTF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2161;
					    {
					      res_op->set_op (CFN_BUILT_IN_CBRTF, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2161;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2161:;
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
	      case CFN_BUILT_IN_CBRTL:
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
				case CFN_BUILT_IN_CBRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2162;
					    {
					      res_op->set_op (CFN_BUILT_IN_CBRTL, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2162;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2162:;
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
	      case CFN_LDEXP:
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_LDEXP))
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
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2163;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2163;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2163;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2163;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2163:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2164;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2164;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2164:;
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
	      case CFN_BUILT_IN_EXP2F:
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
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2165;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2165;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2165;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2165;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2165:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP2F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2166;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2166;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2166:;
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
	      case CFN_BUILT_IN_EXP2L:
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
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2167;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2167;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2167;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2167;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2167:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP2L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2168;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2168;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2168:;
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
	      case CFN_BUILT_IN_LDEXP:
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
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
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2169;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2169;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2169;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2169;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2169:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_POW10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2170;
					    {
					      res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2170;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2170:;
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
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gcall *_c1 = dyn_cast <gcall *> (_d1))
		  switch (gimple_call_combined_fn (_c1))
		    {
		    case CFN_BUILT_IN_LDEXPF:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LDEXPL:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		        }
		      break;
		    case CFN_LDEXP:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LDEXP:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
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
        break;
      }
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
	      case CFN_BUILT_IN_LDEXPF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_LDEXP:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXP:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
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
				case CFN_BUILT_IN_TAN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN))
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
				case CFN_BUILT_IN_COS:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN))
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
				case CFN_BUILT_IN_TANF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF))
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
				case CFN_BUILT_IN_TANL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL))
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
				case CFN_BUILT_IN_COSF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF))
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
				case CFN_BUILT_IN_COSL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL))
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
				case CFN_TAN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_COS, CFN_SIN))
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
				case CFN_COS:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_COS, CFN_SIN))
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
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
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
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
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
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
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
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_POW))
				  return true;
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2171;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2171;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2171:;
						  }
					      }
					    }
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
							    if (gimple_simplify_86 (res_op, seq, valueize, type, captures, MULT_EXPR))
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
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
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
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
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
	      case CFN_BUILT_IN_POWI:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWI:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
					      {
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2172;
						{
						  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[4];
						    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2172;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2172:;
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
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
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
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_POW))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_POW))
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
	      case CFN_BUILT_IN_POWIF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWIF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
					      {
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2173;
						{
						  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[4];
						    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2173;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2173:;
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
	      case CFN_BUILT_IN_POWIL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWIL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
					      {
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2174;
						{
						  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[4];
						    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2174;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2174:;
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
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF128 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128))
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
	  if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2556;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF128, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2556;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2556:;
				      }
				  }
			          break;
			        }
			      default:;
			      }
		        }
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
gimple_simplify_RROTATE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_all_onesp (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_604 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_398 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_399 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
		    if (gimple_simplify_401 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
			  if (gimple_simplify_605 (res_op, seq, valueize, type, captures, RROTATE_EXPR, LROTATE_EXPR))
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
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_400 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
	      case RROTATE_EXPR:
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
				if (gimple_simplify_403 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
  return false;
}

bool
gimple_simplify_UNGE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
 && (TREE_CODE_CLASS (UNGE_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2582;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNGE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2582;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNGE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2582;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2582:;
					  }
				      }
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
 && (TREE_CODE_CLASS (UNGE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2583;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2583;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2583;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2583:;
		      }
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
 && (TREE_CODE_CLASS (UNGE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2584;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2584;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2584;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2584:;
		      }
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
	if (gimple_simplify_633 (res_op, seq, valueize, type, captures, UNGE_EXPR))
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
				    if (gimple_simplify_273 (res_op, seq, valueize, type, captures, UNGE_EXPR, GE_EXPR))
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
				    if (gimple_simplify_276 (res_op, seq, valueize, type, captures, UNGE_EXPR, UNLE_EXPR))
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
		      if (gimple_simplify_277 (res_op, seq, valueize, type, captures, UNGE_EXPR, UNLE_EXPR))
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
	  if (gimple_simplify_631 (res_op, seq, valueize, type, captures, UNGE_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWF32X (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_425 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF32X))
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
      if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_LDEXP (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2595;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1184, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2595:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBLNL (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2601;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1184, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2601:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_BIT_FIELD_REF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case BIT_FIELD_REF:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      tree _q21 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 1);
		      if ((TREE_CODE (_q21) == SSA_NAME
		           || is_gimple_min_invariant (_q21)))
		        {
			  _q21 = do_valueize (valueize, _q21);
			  tree _q22 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 2);
			  if ((TREE_CODE (_q22) == SSA_NAME
			       || is_gimple_min_invariant (_q22)))
			    {
			      _q22 = do_valueize (valueize, _q22);
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1, _p2 };
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2800;
				{
				  res_op->set_op (BIT_FIELD_REF, type, 3);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[3];
				  res_op->ops[2] =  const_binop (PLUS_EXPR, bitsizetype, captures[2], captures[4]);
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1227, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2800:;
			      }
			    }
		        }
		    }
	          break;
	        }
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			if (! INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || type_has_mode_precision_p (TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2801;
			    {
			      res_op->set_op (BIT_FIELD_REF, type, 3);
			      res_op->ops[0] = captures[0];
			      res_op->ops[1] = captures[1];
			      res_op->ops[2] = captures[2];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1228, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2801:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  if (integer_zerop (_p2))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (tree_int_cst_equal (captures[1], TYPE_SIZE (TREE_TYPE (captures[0])))
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2802;
	    {
	      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	      res_op->ops[0] = captures[0];
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1229, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2802:;
	  }
      }
    }
  {
    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
    if (TREE_CODE (TREE_TYPE (captures[0])) == COMPLEX_TYPE
 && tree_int_cst_equal (captures[1], TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))))
)
      {
	if (integer_zerop (captures[2])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2803;
	    {
	      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	      {
		tree _o1[1], _r1;
		_o1[0] = captures[0];
		gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
		tem_op.resimplify (lseq, valueize);
		_r1 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r1) goto next_after_fail2803;
		res_op->ops[0] = _r1;
	      }
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1230, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2803:;
	  }
	else
	  {
	    if (tree_int_cst_equal (captures[2], TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))))
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2804;
		{
		  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[0];
		    gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r1) goto next_after_fail2804;
		    res_op->ops[0] = _r1;
		  }
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1231, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail2804:;
	      }
	  }
      }
    else
      {
	if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (type)
 && (!
1
 || is_gimple_reg (captures[0]))
 && ((compare_tree_int (captures[1], TYPE_PRECISION (TREE_TYPE (captures[0]))) == 0
 && integer_zerop (captures[2]))
 || (BYTES_BIG_ENDIAN == WORDS_BIG_ENDIAN
 && canonicalize_math_after_vectorization_p ()
 && TYPE_PRECISION (TREE_TYPE (captures[0])) % BITS_PER_UNIT == 0
 && TYPE_PRECISION (type) % BITS_PER_UNIT == 0
 && compare_tree_int (captures[2], (BYTES_BIG_ENDIAN
 ? (TYPE_PRECISION (TREE_TYPE (captures[0]))
 - TYPE_PRECISION (type))
 : 0)) == 0))
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2805;
	    {
	      res_op->set_op (NOP_EXPR, type, 1);
	      res_op->ops[0] = captures[0];
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1232, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2805:;
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
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
		    if (VECTOR_TYPE_P (TREE_TYPE (captures[0]))
 && tree_fits_uhwi_p (TYPE_SIZE (type))
 && ((tree_to_uhwi (TYPE_SIZE (type))
 == tree_to_uhwi (TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))))
 || (VECTOR_TYPE_P (type)
 && (tree_to_uhwi (TYPE_SIZE (TREE_TYPE (type)))
 == tree_to_uhwi (TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))))))
)
		      {
			{
 tree ctor = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
 tree eltype = TREE_TYPE (TREE_TYPE (ctor));
 unsigned HOST_WIDE_INT width = tree_to_uhwi (TYPE_SIZE (eltype));
 unsigned HOST_WIDE_INT n = tree_to_uhwi (captures[1]);
 unsigned HOST_WIDE_INT idx = tree_to_uhwi (captures[2]);
			    if (n != 0
 && (idx % width) == 0
 && (n % width) == 0
 && known_le ((idx + n) / width,
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (ctor)))
)
			      {
				{
 idx = idx / width;
 n = n / width;
 poly_uint64 k = 1;
 if (CONSTRUCTOR_NELTS (ctor) != 0)
 {
 tree cons_elem = TREE_TYPE (CONSTRUCTOR_ELT (ctor, 0)->value);
 if (TREE_CODE (cons_elem) == VECTOR_TYPE)
 k = TYPE_VECTOR_SUBPARTS (cons_elem);
 }
 unsigned HOST_WIDE_INT elt, count, const_k;
				    if (multiple_p (idx, k, &elt) && multiple_p (n, k, &count)
)
				      {
					if (CONSTRUCTOR_NELTS (ctor) == 0
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2806;
					    {
					      tree tem;
					      tem =  build_zero_cst (type);
					      res_op->set_value (tem);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1233, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2806:;
					  }
					else
					  {
					    if (count == 1
)
					      {
						if (elt < CONSTRUCTOR_NELTS (ctor)
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2807;
						    {
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, elt)->value;
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2807:;
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2808;
						    {
						      tree tem;
						      tem =  build_zero_cst (type);
						      res_op->set_value (tem);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1235, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2808:;
						  }
					      }
					    else
					      {
						if (single_use (captures[0])
)
						  {
						    {
 vec<constructor_elt, va_gc> *vals;
 vec_alloc (vals, count);
 bool constant_p = true;
 tree res;
 for (unsigned i = 0;
 i < count && elt + i < CONSTRUCTOR_NELTS (ctor); ++i)
 {
 tree e = CONSTRUCTOR_ELT (ctor, elt + i)->value;
 CONSTRUCTOR_APPEND_ELT (vals, NULL_TREE, e);
 if (!CONSTANT_CLASS_P (e))
 constant_p = false;
 }
 tree evtype = (types_match (TREE_TYPE (type),
 TREE_TYPE (TREE_TYPE (ctor)))
 ? type
 : build_vector_type (TREE_TYPE (TREE_TYPE (ctor)),
 count * k));
 res = (constant_p ? build_vector_from_ctor (evtype, vals)
 : (
1
 ? NULL_TREE : build_constructor (evtype, vals)));
							if (res
)
							  {
							    gimple_seq *lseq = seq;
							    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2809;
							    {
							      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							      res_op->ops[0] =  res;
							      res_op->resimplify (lseq, valueize);
							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
							      return true;
							    }
next_after_fail2809:;
							  }
						    }
						  }
					      }
					  }
				      }
				    else
				      {
					if (k.is_constant (&const_k)
 && idx + n <= (idx / const_k + 1) * const_k
)
					  {
					    if (CONSTRUCTOR_NELTS (ctor) <= idx / const_k
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2810;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1237, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2810:;
					      }
					    else
					      {
						if (n == const_k
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2811;
						    {
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, idx / const_k)->value;
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1238, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2811:;
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2812;
						    {
						      res_op->set_op (BIT_FIELD_REF, type, 3);
						      res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, idx / const_k)->value;
						      res_op->ops[1] = captures[1];
						      res_op->ops[2] =  bitsize_int ((idx % const_k) * width);
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1239, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2812:;
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
	      case BIT_INSERT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1, _p2 };
		    {
 unsigned HOST_WIDE_INT isize;
 if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])))
 isize = TYPE_PRECISION (TREE_TYPE (captures[1]));
 else
 isize = tree_to_uhwi (TYPE_SIZE (TREE_TYPE (captures[1])));
			if ((!INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || type_has_mode_precision_p (TREE_TYPE (captures[1])))
 && wi::leu_p (wi::to_wide (captures[2]), wi::to_wide (captures[4]))
 && wi::leu_p (wi::to_wide (captures[4]) + wi::to_wide (captures[3]),
 wi::to_wide (captures[2]) + isize)
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2813;
			    {
			      res_op->set_op (BIT_FIELD_REF, type, 3);
			      res_op->ops[0] = captures[1];
			      res_op->ops[1] = captures[3];
			      res_op->ops[2] =  wide_int_to_tree (bitsizetype,
 wi::to_wide (captures[4])
 - wi::to_wide (captures[2]));
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1240, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2813:;
			  }
			else
			  {
			    if (wi::eq_p (wi::to_wide (captures[2]), wi::to_wide (captures[4]))
 && compare_tree_int (captures[3], isize) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2814;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1241, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2814:;
			      }
			    else
			      {
				if (wi::geu_p (wi::to_wide (captures[2]),
 wi::to_wide (captures[4]) + wi::to_wide (captures[3]))
 || wi::geu_p (wi::to_wide (captures[4]),
 wi::to_wide (captures[2]) + isize)
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2815;
				    {
				      res_op->set_op (BIT_FIELD_REF, type, 3);
				      res_op->ops[0] = captures[0];
				      res_op->ops[1] = captures[3];
				      res_op->ops[2] = captures[4];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1242, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2815:;
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
gimple_simplify_CFN_VCOND_MASK_LEN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
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
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
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
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
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
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2, tree _p3, tree _p4)
{
  switch (code.get_rep())
    {
    case -CFN_VCOND_MASK_LEN:
      return gimple_simplify_CFN_VCOND_MASK_LEN (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3, _p4);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_COND_LEN_ADD (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4, tree _p5)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_truep (_p0))
    {
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
				tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _q42, _p4, _p5 };
				if (ANY_INTEGRAL_TYPE_P (type)
 || (FLOAT_TYPE_P (type)
 && fold_real_zero_addition_p (type, NULL_TREE, captures[3], 0))
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2908;
				    {
				      res_op->set_op (CFN_COND_LEN_ADD, type, 6);
				      res_op->ops[0] = captures[1];
				      res_op->ops[1] = captures[0];
				      res_op->ops[2] = captures[2];
				      res_op->ops[3] = captures[0];
				      res_op->ops[4] = captures[4];
				      res_op->ops[5] = captures[5];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1265, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2908:;
				  }
			      }
			    }
		        }
		      break;
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
    }
  return false;
}
#pragma GCC diagnostic pop
