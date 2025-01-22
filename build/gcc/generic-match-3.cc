/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_truth_valued_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 20, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case ORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNEQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ANDIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_OR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ORIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
tree_bitwise_induction_p (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case BIT_AND_EXPR:
    case BIT_IOR_EXPR:
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
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
		    switch (TREE_CODE (_q30))
		      {
		      CASE_CONVERT:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				tree _q51 = TREE_OPERAND (_q40, 1);
				if (integer_onep (_q50))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p1, _q50 };
				      {
					res_ops[0] = captures[0];
					res_ops[1] = captures[1];
					res_ops[2] = captures[2];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _p1, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		CASE_CONVERT:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _p1, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q31, _p1, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
			    return true;
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
	  tree _p1_pops[1];
	  if (tree_nop_convert (_p1, _p1_pops))
	    {
	      tree _q30 = _p1_pops[0];
	      switch (TREE_CODE (_q30))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      CASE_CONVERT:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  switch (TREE_CODE (_q50))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_q50, 0);
				tree _q61 = TREE_OPERAND (_q50, 1);
				if (integer_onep (_q60))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q61, _p0, _q60 };
				      {
					res_ops[0] = captures[0];
					res_ops[1] = captures[1];
					res_ops[2] = captures[2];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		      case LSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_onep (_q50))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q51, _p0, _q50 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_onep (_q50))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q51, _p0, _q50 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q40))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q41, _p0, _q40 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
			    return true;
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		CASE_CONVERT:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q41, _p1, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _p1, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_onep (_q50))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _p0, _q50 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q40))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _p0, _q40 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
	switch (TREE_CODE (_p0))
	  {
	  CASE_CONVERT:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _p1, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _p0, _q40 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
	switch (TREE_CODE (_p0))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      if (integer_onep (_q20))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _p1, _q20 };
		    {
		      res_ops[0] = captures[0];
		      res_ops[1] = captures[1];
		      res_ops[2] = captures[2];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
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
	      if (integer_onep (_q30))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _p0, _q30 };
		    {
		      res_ops[0] = captures[0];
		      res_ops[1] = captures[1];
		      res_ops[2] = captures[2];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
    case BIT_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	switch (TREE_CODE (_p0))
	  {
	  case BIT_XOR_EXPR:
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
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q41, _q21, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q21, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
      {
	tree _p0_pops[1];
	if (tree_nop_convert (_p0, _p0_pops))
	  {
	    tree _q20 = _p0_pops[0];
	    switch (TREE_CODE (_q20))
	      {
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (_q20, 0);
		  tree _q31 = TREE_OPERAND (_q20, 1);
		  switch (TREE_CODE (_q30))
		    {
		    CASE_CONVERT:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			switch (TREE_CODE (_q40))
			  {
			  case LSHIFT_EXPR:
			    {
			      tree _q50 = TREE_OPERAND (_q40, 0);
			      tree _q51 = TREE_OPERAND (_q40, 1);
			      if (integer_onep (_q50))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _q31, _q50 };
				    {
				      res_ops[0] = captures[0];
				      res_ops[1] = captures[1];
				      res_ops[2] = captures[2];
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
		    case LSHIFT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			tree _q41 = TREE_OPERAND (_q30, 1);
			if (integer_onep (_q40))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _q31, _q40 };
			      {
				res_ops[0] = captures[0];
				res_ops[1] = captures[1];
				res_ops[2] = captures[2];
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
      }
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_37 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_FLOAT_TYPE_P (type)
 && TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
    {
      {
 tree perm_cst = captures[1];
 vec_perm_builder builder;
 bool full_perm_p = false;
 if (tree_to_vec_perm_builder (&builder, perm_cst))
 {
 unsigned HOST_WIDE_INT nelts;
 nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_indices sel (builder, 1, nelts);
 if (sel.encoding ().encoded_full_vector_p ())
 {
 auto_sbitmap seen (nelts);
 bitmap_clear (seen);
 unsigned HOST_WIDE_INT count = 0, i;
 for (i = 0; i < nelts; i++)
 {
 if (!bitmap_set_bit (seen, sel[i].to_constant ()))
 break;
 count++;
 }
 full_perm_p = count == nelts;
 }
 }
	  if (full_perm_p
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail250;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail250;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[2];
		  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  captures[3] = _r1;
		}
		res_op0 = unshare_expr (captures[3]);
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[1];
		tree _r;
		_r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 139, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail250:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_46 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail259;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[0];
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 147, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail259:;
    }
  return NULL_TREE;
}

tree
generic_simplify_51 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail266;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 154, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail266:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_54 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
 && TREE_CODE (type) != COMPLEX_TYPE
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail271;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail271;
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
		tree _r;
		_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 159, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail271:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_59 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[3])))
 && (TYPE_MODE (TREE_TYPE (type))
 == TYPE_MODE (TREE_TYPE (TREE_TYPE (captures[3]))))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail278;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      _r3 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      _o2[1] = _r3;
	    }
	    _o2[2] = captures[4];
	    _r2 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o2[1]), _o2[0], _o2[1], _o2[2]);
	    _o1[0] = _r2;
	  }
	  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 166, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail278:;
    }
  return NULL_TREE;
}

tree
generic_simplify_62 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[1]) == SSA_NAME && num_imm_uses (captures[1]) == 2
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail281;
      {
	if (! tree_invariant_p (captures[2])) goto next_after_fail281;
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = unshare_expr (captures[2]);
	    _o2[1] = captures[2];
	    _o2[2] = captures[4];
	    _r2 = fold_build3_loc (loc, VEC_PERM_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1], _o2[2]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[5];
	tree _r;
	_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 169, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail281:;
    }
  return NULL_TREE;
}

tree
generic_simplify_68 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail287;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail287;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 175, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail287:;
  return NULL_TREE;
}

tree
generic_simplify_72 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail291;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_one_cst (type);
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 178, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail291:;
    }
  return NULL_TREE;
}

tree
generic_simplify_79 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail302;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail302;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 183, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail302:;
  return NULL_TREE;
}

tree
generic_simplify_86 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail309;
	  {
	    tree res_op0;
	    res_op0 =  wascmp
 ? constant_boolean_node (true, type)
 : build_all_ones_cst (TREE_TYPE (captures[0]));
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 188, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail309:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_97 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail320;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail320;
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
next_after_fail320:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail321;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail321;
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
next_after_fail321:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_107 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail334;
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
next_after_fail334:;
    }
  return NULL_TREE;
}

tree
generic_simplify_118 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail348;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 213, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail348:;
  return NULL_TREE;
}

tree
generic_simplify_124 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail358;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail358;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 223, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail358:;
  return NULL_TREE;
}

tree
generic_simplify_130 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail382;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail382;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, cmp, type, _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[3];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 240, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail382:;
  return NULL_TREE;
}

tree
generic_simplify_134 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail386;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail386;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail386;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 242, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail386:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail387;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail387;
	  {
	    tree _r;
	    _r =  constant_boolean_node (true, type);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 243, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail387:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_141 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail407;
	  if (TREE_SIDE_EFFECTS (captures[7])) goto next_after_fail407;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail407;
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
	    if (TREE_SIDE_EFFECTS (captures[6]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[6]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 207, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail407:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_145 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[2]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[1])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (t));
 wide_int c = wi::add (wi::lshift (wone, wi::to_wide (captures[2])), wone);
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail411;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail411;
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
	      _o1[1] =  wide_int_to_tree (t, c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 246, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail411:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_152 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail418;
  {
    if (! tree_invariant_p (captures[3])) goto next_after_fail418;
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = unshare_expr (captures[3]);
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[4];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      if (EXPR_P (_r1))
        goto next_after_fail418;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 252, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail418:;
  return NULL_TREE;
}

tree
generic_simplify_162 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail428;
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
	  _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 262, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail428:;
    }
  return NULL_TREE;
}

tree
generic_simplify_169 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail436;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail436;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail436;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail436:;
    }
  return NULL_TREE;
}

tree
generic_simplify_179 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail447;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail447;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 278, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail447:;
  return NULL_TREE;
}

tree
generic_simplify_185 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail455;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail455;
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
next_after_fail455:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_194 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TAN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (SIN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail465;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, SIN, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail465;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 292, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail465:;
    }
  return NULL_TREE;
}

tree
generic_simplify_199 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail470;
  {
    tree _r;
    _r =  constant_boolean_node (op == NE_EXPR ? true : false, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 297, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail470:;
  return NULL_TREE;
}

tree
generic_simplify_206 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail480;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail480;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail480;
		  {
		    tree _r;
		    _r =  build_int_cst (type, (code == LT_EXPR) ^ neg_overflow);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 306, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail480:;
		}
	      else
		{
		  if (code == LT_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail481;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail481;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail481;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  lo;
			tree _r;
			_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 307, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail481:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail482;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail482;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail482;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  lo;
			tree _r;
			_r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 308, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail482:;
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
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail483;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail483;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail483;
		      {
			tree _r;
			_r =  build_int_cst (type, (code == LE_EXPR) ^ neg_overflow);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 309, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail483:;
		    }
		  else
		    {
		      if (code == LE_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail484;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail484;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail484;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  hi;
			    tree _r;
			    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 310, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail484:;
			}
		      else
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail485;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail485;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail485;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  hi;
			    tree _r;
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 311, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail485:;
			}
		    }
		}
	      else
		{
		  if (!lo && !hi
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail486;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail486;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail486;
		      {
			tree _r;
			_r =  build_int_cst (type, code == NE_EXPR);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 312, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail486:;
		    }
		  else
		    {
		      if (code == EQ_EXPR && !hi
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail487;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail487;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail487;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  lo;
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 313, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail487:;
			}
		      else
			{
			  if (code == EQ_EXPR && !lo
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail488;
			      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail488;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail488;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree res_op1;
				res_op1 =  hi;
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 314, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail488:;
			    }
			  else
			    {
			      if (code == NE_EXPR && !hi
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail489;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail489;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail489;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree res_op1;
				    res_op1 =  lo;
				    tree _r;
				    _r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 315, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail489:;
				}
			      else
				{
				  if (code == NE_EXPR && !lo
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail490;
				      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail490;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail490;
				      {
					tree res_op0;
					res_op0 = captures[1];
					tree res_op1;
					res_op1 =  hi;
					tree _r;
					_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 316, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail490:;
				    }
				  else
				    {
				      if (1
)
					{
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail491;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail491;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail491;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail491;
					  {
					    tree _r;
					    _r =  build_range_check (UNKNOWN_LOCATION, type, captures[1], code == EQ_EXPR,
 lo, hi);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 317, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail491:;
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
						      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail492;
						      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail492;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail492;
						      {
							tree res_op0;
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (TREE_TYPE (_o2[0]) != etype)
							      {
								_r2 = fold_build1_loc (loc, NOP_EXPR, etype, _o2[0]);
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  hi;
							tree _r;
							_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 318, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail492:;
						    }
						  else
						    {
						      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail493;
						      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail493;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail493;
						      {
							tree res_op0;
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (TREE_TYPE (_o2[0]) != etype)
							      {
								_r2 = fold_build1_loc (loc, NOP_EXPR, etype, _o2[0]);
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  hi;
							tree _r;
							_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 319, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail493:;
						    }
						}
					  }
					}
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
generic_simplify_259 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off; tree base;
 tree addr = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
      if (SSA_NAME_IS_DEFAULT_DEF (captures[1])
 && TREE_CODE (SSA_NAME_VAR (captures[1])) == PARM_DECL
 && (base = get_base_address (TREE_OPERAND (addr, 0)))
 && TREE_CODE (base) == VAR_DECL
 && auto_var_in_fn_p (base, current_function_decl)
)
	{
	  if (cmp == NE_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail617;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail617;
	      {
		tree _r;
		_r =  constant_boolean_node (true, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 433, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail617:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail618;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail618;
	      {
		tree _r;
		_r =  constant_boolean_node (false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 434, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail618:;
	    }
	}
      else
	{
	  if ((base = get_addr_base_and_unit_offset (TREE_OPERAND (addr, 0), &off))
 && TREE_CODE (base) == MEM_REF
 && TREE_OPERAND (base, 0) == captures[1]
)
	    {
	      {
 off += mem_ref_offset (base).force_shwi ();
		  if (known_ne (off, 0)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail619;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail619;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 435, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail619:;
		    }
		  else
		    {
		      if (known_eq (off, 0)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail620;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail620;
			  {
			    tree _r;
			    _r =  constant_boolean_node (cmp == EQ_EXPR, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 436, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail620:;
			}
		    }
	      }
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_269 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail630;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail630;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (TREE_TYPE (_o1[0]) != stype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (stype);
	    tree _r;
	    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 446, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail630:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_275 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[2], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (cmp == EQ_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail643;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail643;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail643;
	      {
		tree _r;
		_r =  constant_boolean_node (known_eq (off0, off1), type);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 449, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail643:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail644;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail644;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail644;
		  {
		    tree _r;
		    _r =  constant_boolean_node (known_ne (off0, off1), type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 450, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail644:;
		}
	      else
		{
		  if (cmp == LT_EXPR && (known_lt (off0, off1) || known_ge (off0, off1))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail645;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail645;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail645;
		      {
			tree _r;
			_r =  constant_boolean_node (known_lt (off0, off1), type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 451, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail645:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR && (known_le (off0, off1) || known_gt (off0, off1))
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail646;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail646;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail646;
			  {
			    tree _r;
			    _r =  constant_boolean_node (known_le (off0, off1), type);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 452, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail646:;
			}
		      else
			{
			  if (cmp == GE_EXPR && (known_ge (off0, off1) || known_lt (off0, off1))
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail647;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail647;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail647;
			      {
				tree _r;
				_r =  constant_boolean_node (known_ge (off0, off1), type);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 453, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail647:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR && (known_gt (off0, off1) || known_le (off0, off1))
)
				{
				  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail648;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail648;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail648;
				  {
				    tree _r;
				    _r =  constant_boolean_node (known_gt (off0, off1), type);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 454, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail648:;
				}
			    }
			}
		    }
		}
	    }
	}
      else
	{
	  if (equal == 0
)
	    {
	      if (cmp == EQ_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail649;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail649;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail649;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 455, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail649:;
		}
	      else
		{
		  if (cmp == NE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail650;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail650;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail650;
		      {
			tree _r;
			_r =  constant_boolean_node (true, type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 456, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail650:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_288 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (captures[0])))
 && can_compare_p (cmp == EQ_EXPR ? EQ : NE, TYPE_MODE (TREE_TYPE (captures[0])),
 ccp_jump)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail682;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail682;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 488, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail682:;
    }
  return NULL_TREE;
}

tree
generic_simplify_293 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail688;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 494, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail688:;
    }
  return NULL_TREE;
}

tree
generic_simplify_298 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_vector)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_scalar))
 && (useless_type_conversion_p (type, TREE_TYPE (captures[2]))
 || (element_precision (type) >= element_precision (TREE_TYPE (captures[2]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 || (element_precision (type)
 == element_precision (TREE_TYPE (captures[2])))
 || (INTEGRAL_TYPE_P (type)
 && (tree_nonzero_bits (captures[0])
 & wi::mask (element_precision (TREE_TYPE (captures[2])) - 1,
 true,
 element_precision (type))) == 0))))
)
    {
      if (!VECTOR_TYPE_P (type)
 && useless_type_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && element_precision (TREE_TYPE (captures[1])) < element_precision (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail693;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 499, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail693:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail694;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail694;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 500, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail694:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_315 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail713;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 517, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail713:;
    }
  return NULL_TREE;
}

tree
generic_simplify_323 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (TAN),
 const combined_fn ARG_UNUSED (COS))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (! HONOR_NANS (captures[1])
 && ! HONOR_INFINITIES (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail723;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, COS, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail723;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 527, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail723:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_331 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail732;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == LT_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 536, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail732:;
    }
  return NULL_TREE;
}

tree
generic_simplify_337 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail739;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 543, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail739:;
    }
  return NULL_TREE;
}

tree
generic_simplify_343 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail746;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail746;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail746;
	      {
		tree _r;
		_r =  constant_boolean_node (wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (cmp == LT_EXPR || cmp == LE_EXPR), type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 550, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail746:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail747;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail747;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail747;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 551, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail747:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_354 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[2]) && !TREE_OVERFLOW (captures[3])
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (rop, captures[3], captures[2]);
	  if (TREE_OVERFLOW (res)
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail790;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail790;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail790;
	      {
		tree _r;
 fold_overflow_warning (("assuming signed overflow does not occur "
 "when simplifying conditional to constant"),
 WARN_STRICT_OVERFLOW_CONDITIONAL);
 bool less = cmp == LE_EXPR || cmp == LT_EXPR;
 bool ovf_high = wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (op == MINUS_EXPR);		_r = 
 constant_boolean_node (less == ovf_high, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail790:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  {
 fold_overflow_warning (("assuming signed overflow does not occur "
 "when changing X +- C1 cmp C2 to "
 "X cmp C2 -+ C1"),
 WARN_STRICT_OVERFLOW_COMPARISON);
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail791;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail791;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail791;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  res;
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 578, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail791:;
		  }
		}
	    }
      }
    }
  else
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
	{
	  {
 wide_int max = wi::max_value (TREE_TYPE (captures[1]));
 wide_int min = wi::min_value (TREE_TYPE (captures[1]));
 wide_int c2 = rop == PLUS_EXPR
 ? wi::add (wi::to_wide (captures[3]), wi::to_wide (captures[2]))
 : wi::sub (wi::to_wide (captures[3]), wi::to_wide (captures[2]));
	      if (((cmp == LE_EXPR || cmp == GT_EXPR) && wi::eq_p (c2, max))
 || ((cmp == LT_EXPR || cmp == GE_EXPR) && wi::eq_p (c2, min))
)
		{
		  {
 wide_int c1 = rop == PLUS_EXPR
 ? wi::add (wi::bit_not (c2), wi::to_wide (captures[2]))
 : wi::sub (wi::bit_not (c2), wi::to_wide (captures[2]));
 tree c1_cst = wide_int_to_tree (TREE_TYPE (captures[1]), c1);
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail792;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail792;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail792;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  c1_cst;
			tree _r;
			_r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 579, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail792:;
		  }
		}
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_369 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((
0
 || !sanitize_flags_p (SANITIZE_SHIFT_EXPONENT))
 && (TYPE_UNSIGNED (type)
 || shift == LSHIFT_EXPR
 || tree_expr_nonnegative_p (captures[0]))
 && wi::ges_p (wi::to_wide (uniform_integer_cst_p (captures[1])),
 element_precision (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail815;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 598, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail815:;
    }
  return NULL_TREE;
}

tree
generic_simplify_376 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail825;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail825;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail825;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o2[0]) != type)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, shift, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  mask;
		tree _r;
		_r = fold_build2_loc (loc, bit_op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 607, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail825:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_382 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && types_match (captures[1], type) && int_fits_type_p (captures[2], type)
 && TYPE_SIGN (TREE_TYPE (captures[0])) == TYPE_SIGN (type)
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail836;
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
	tree _r;
	_r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 617, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail836:;
    }
  return NULL_TREE;
}

tree
generic_simplify_387 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail853;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 622, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail853:;
    }
  return NULL_TREE;
}

tree
generic_simplify_390 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail856;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail856;
	    tree res_op0;
	    res_op0 =  t_one;
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
	        goto next_after_fail856;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 625, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail856:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_394 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail860;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 629, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail860:;
  return NULL_TREE;
}

tree
generic_simplify_395 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail861;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 630, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail861:;
  return NULL_TREE;
}

tree
generic_simplify_400 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail866;
	  {
	    tree _r;
	    _r =  wascmp ? constant_boolean_node (false, type) : build_zero_cst (type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 635, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail866:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_407 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail873;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail873;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[5];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 641, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail873:;
  return NULL_TREE;
}

tree
generic_simplify_415 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail881;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 649, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail881:;
  return NULL_TREE;
}

tree
generic_simplify_419 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail885;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail885;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  build_zero_cst (type);
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 652, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail885:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_429 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail914;
		  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail914;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail914;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 671, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail914:;
		}
	      else
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail915;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail915;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail915;
		  {
		    tree _r;
		    _r = captures[3];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 672, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail915:;
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
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail916;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail916;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail916;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 673, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail916:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail917;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail917;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail917;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 674, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail917:;
		    }
		}
	      else
		{
		  if (cmp == 0
 && ((code1 == LE_EXPR && code2 == GE_EXPR)
 || (code1 == GE_EXPR && code2 == LE_EXPR))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail918;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail918;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail918;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 = captures[2];
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 675, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail918:;
		    }
		  else
		    {
		      if (cmp <= 0
 && (code1 == LT_EXPR || code1 == LE_EXPR)
 && (code2 == GT_EXPR || code2 == GE_EXPR)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail919;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail919;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail919;
			  {
			    tree _r;
			    _r =  constant_boolean_node (false, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 676, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail919:;
			}
		      else
			{
			  if (cmp >= 0
 && (code1 == GT_EXPR || code1 == GE_EXPR)
 && (code2 == LT_EXPR || code2 == LE_EXPR)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail920;
			      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail920;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail920;
			      {
				tree _r;
				_r =  constant_boolean_node (false, type);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 677, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail920:;
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
generic_simplify_447 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail957;
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
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 686, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail957:;
  return NULL_TREE;
}

tree
generic_simplify_450 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail960;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 689, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail960:;
  return NULL_TREE;
}

tree
generic_simplify_453 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail963;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_each_one_cst (TREE_TYPE (captures[0]));
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 692, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail963:;
    }
  return NULL_TREE;
}

tree
generic_simplify_457 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail967;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != rotate_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, rotate_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, rotate, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 695, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail967:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_467 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 tree itype = TREE_TYPE (captures[2]);
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail979;
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail979;
	  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail979;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail979;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (TREE_TYPE (_o2[0]) != itype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, itype, _o2[0]);
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 706, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail979:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_480 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) > 1
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail997;
      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail997;
      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail997;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail997;
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
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 723, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail997:;
    }
  return NULL_TREE;
}

tree
generic_simplify_490 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1008;
  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1008;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1008;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 734, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1008:;
  return NULL_TREE;
}

tree
generic_simplify_498 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1018;
  {
    tree _r;
    _r = captures[1];
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1018:;
  return NULL_TREE;
}

tree
generic_simplify_504 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1036;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, maxmin, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 748, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1036:;
  return NULL_TREE;
}

tree
generic_simplify_507 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1039;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 751, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1039:;
    }
  return NULL_TREE;
}

tree
generic_simplify_513 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (orotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 auto prec = element_precision (TREE_TYPE (captures[0]));
      if (prec == wi::to_wide (captures[2])
)
	{
	  if (expr_not_equal_to (captures[3], wi::uhwi (prec,
 TYPE_PRECISION (TREE_TYPE (captures[3]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1045;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, orotate, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 757, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1045:;
	    }
	  else
	    {
	      if (single_use (captures[1])
 && pow2p_hwi (prec)
 && cfun
 && ((cfun->curr_properties & PROP_last_full_fold) != 0
 || !flag_tree_vrp
 || optimize_debug)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1046;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[3];
		      _o1[1] =  build_int_cst (TREE_TYPE (captures[3]), prec - 1);
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, orotate, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 758, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1046:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_532 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1067;
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
    tree _r;
    _r = maybe_build_call_expr_loc (loc, cond_op, type, 4, res_op0, res_op1, res_op2, res_op3);
    if (!_r)
      goto next_after_fail1067;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1067:;
  return NULL_TREE;
}

tree
generic_simplify_540 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1075;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      _r1 = maybe_build_call_expr_loc (loc, logs, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail1075;
	      if (EXPR_P (_r1))
	        goto next_after_fail1075;
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = maybe_build_call_expr_loc (loc, logs, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail1075;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 782, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1075:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_554 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (floors))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1089;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 796, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1089:;
    }
  return NULL_TREE;
}

tree
generic_simplify_563 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1098;
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
	  goto next_after_fail1098;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 805, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1098:;
    }
  return NULL_TREE;
}

tree
generic_simplify_573 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1108;
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
	  goto next_after_fail1108;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1108:;
  }
  return NULL_TREE;
}

tree
generic_simplify_583 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
 || !TREE_SIDE_EFFECTS (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1119;
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
	    _r = maybe_build_call_expr_loc (loc, parity, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1119;
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 819, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1119:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_VIEW_CONVERT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1176;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1176:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1177;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 865, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1177:;
	}
        break;
      }
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((INTEGRAL_TYPE_P (type) || POINTER_TYPE_P (type))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1178;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 866, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1178:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1179;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree _r;
		_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 867, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1179:;
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
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1180;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1180;
		  {
		    tree _r;
		    _r =  build_zero_cst (type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 868, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1180:;
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
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1181;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1181;
		      {
			tree res_op0;
			res_op0 =  CONSTRUCTOR_ELT (ctor, 0)->value;
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 869, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1181:;
		    }
		}
	  }
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
	  if (VECTOR_TYPE_P (type) && VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (type), TREE_TYPE (TREE_TYPE (captures[2])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1182;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1182;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1182;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 870, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1182:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, const tree type ATTRIBUTE_UNUSED, tree _p0)
{
  switch (code)
    {
    case ABS_EXPR:
      return generic_simplify_ABS_EXPR (loc, code, type, _p0);
    CASE_CONVERT:
      return generic_simplify_CONVERT_EXPR (loc, code, type, _p0);
    case BIT_NOT_EXPR:
      return generic_simplify_BIT_NOT_EXPR (loc, code, type, _p0);
    case ABSU_EXPR:
      return generic_simplify_ABSU_EXPR (loc, code, type, _p0);
    case NEGATE_EXPR:
      return generic_simplify_NEGATE_EXPR (loc, code, type, _p0);
    case VIEW_CONVERT_EXPR:
      return generic_simplify_VIEW_CONVERT_EXPR (loc, code, type, _p0);
    case FLOAT_EXPR:
      return generic_simplify_FLOAT_EXPR (loc, code, type, _p0);
    case FIX_TRUNC_EXPR:
      return generic_simplify_FIX_TRUNC_EXPR (loc, code, type, _p0);
    case PAREN_EXPR:
      return generic_simplify_PAREN_EXPR (loc, code, type, _p0);
    case REALPART_EXPR:
      return generic_simplify_REALPART_EXPR (loc, code, type, _p0);
    case IMAGPART_EXPR:
      return generic_simplify_IMAGPART_EXPR (loc, code, type, _p0);
    case CONJ_EXPR:
      return generic_simplify_CONJ_EXPR (loc, code, type, _p0);
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_PLUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1243;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1243;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 881, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1243:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_2 (loc, type, _p0, _p1, captures);
	if (res) return res;
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
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, PLUS_EXPR, PLUS_EXPR);
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
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR);
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
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  switch (TREE_CODE (_q50))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_zerop (_q51))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				  tree res = generic_simplify_4 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_zerop (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case MAX_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			  {
			    if (integer_zerop (_q61))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				  tree res = generic_simplify_4 (loc, type, _p0, _p1, captures);
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
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
 }
 else
 overflowed = false;
				      if (!overflowed
)
					{
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1244;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1244;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1244;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1244;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[2];
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  wide_int_to_tree (type, add);
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 882, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1244:;
					}
				  }
				}
			        break;
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
		    tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	if (integer_onep (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
		  tree res = generic_simplify_7 (loc, type, _p0, _p1, captures);
		  if (res) return res;
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
      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
      tree res = generic_simplify_2 (loc, type, _p0, _p1, captures);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (integer_onep (_q31))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
		  tree res = generic_simplify_7 (loc, type, _p0, _p1, captures);
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, PLUS_EXPR);
			if (res) return res;
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_9 (loc, type, _p0, _p1, captures);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  switch (TREE_CODE (_q61))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q60, _q61 };
				  tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q51))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			    tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_9 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q21))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q21, 0);
		    tree _q61 = TREE_OPERAND (_q21, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    if (integer_all_onesp (_p1))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				  tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
				  if (res) return res;
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
				  tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
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
		  {
		    tree _q21_pops[1];
		    if (tree_nop_convert (_q21, _q21_pops))
		      {
			tree _q70 = _q21_pops[0];
			switch (TREE_CODE (_q70))
			  {
			  case BIT_IOR_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q70, 0);
			      tree _q81 = TREE_OPERAND (_q70, 1);
			      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
				{
				  if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				    {
				      if (integer_all_onesp (_p1))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					    tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
					    if (res) return res;
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
					    tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
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
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		    tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
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
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case BIT_AND_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				switch (TREE_CODE (_q71))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q60, _q70, _q71 };
					tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		      case BIT_AND_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q61))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1, _q60, _q61 };
				  tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q30 };
		tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	      break;
	    }
          default:;
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
			    const enum tree_code op = PLUS_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1245;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1245;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1245;
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
next_after_fail1245:;
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
			    const enum tree_code op = PLUS_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1246;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1246;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1246;
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
next_after_fail1246:;
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, LT_EXPR, GE_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, LE_EXPR, GT_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, GE_EXPR, LT_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, GT_EXPR, LE_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR);
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
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR);
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
			    const enum tree_code op = PLUS_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1247;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1247;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1247;
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
next_after_fail1247:;
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
			    const enum tree_code op = PLUS_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1248;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1248;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1248;
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
next_after_fail1248:;
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, LT_EXPR, GE_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, LE_EXPR, GT_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, GE_EXPR, LT_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, GT_EXPR, LE_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR);
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
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR);
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
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  switch (TREE_CODE (_q31))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q31, 0);
			tree _q71 = TREE_OPERAND (_q31, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			      {
				if (integer_all_onesp (_p1))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				      tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
				      if (res) return res;
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
				      tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
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
		      {
			tree _q31_pops[1];
			if (tree_nop_convert (_q31, _q31_pops))
			  {
			    tree _q80 = _q31_pops[0];
			    switch (TREE_CODE (_q80))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q90 = TREE_OPERAND (_q80, 0);
				  tree _q91 = TREE_OPERAND (_q80, 1);
				  if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				    {
				      if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
					{
					  if (integer_all_onesp (_p1))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
						tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
						if (res) return res;
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
						tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
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
		tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
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
	  tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
	  if (res) return res;
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
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	  tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
	  if (res) return res;
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
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q31_pops[1];
	      if (tree_nop_convert (_q31, _q31_pops))
	        {
		  tree _q50 = _q31_pops[0];
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
			tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR);
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
		      tree res = generic_simplify_17 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    break;
	  }
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
		      tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
		    tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
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
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
			tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		  tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
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
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_18 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_18 (loc, type, _p0, _p1, captures);
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
		  tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
		    tree res = generic_simplify_18 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q50, _q20 };
		    tree res = generic_simplify_18 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_19 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
		    tree res = generic_simplify_19 (loc, type, _p0, _p1, captures);
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
		  tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR);
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
		  tree res = generic_simplify_17 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		  if (res) return res;
		}
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
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_20 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
		    tree res = generic_simplify_20 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_21 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
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
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			  tree res = generic_simplify_22 (loc, type, _p0, _p1, captures);
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
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  tree res = generic_simplify_22 (loc, type, _p0, _p1, captures);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_22 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if (integer_each_onep (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_23 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_22 (loc, type, _p0, _p1, captures);
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_each_onep (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_23 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
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
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	      tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
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
		    tree res = generic_simplify_27 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
		    tree res = generic_simplify_27 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
	      if (tree_zero_one_valued_p (_q21))
		{
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
			tree res = generic_simplify_28 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      if (tree_zero_one_valued_p (_q20))
	{
	  switch (TREE_CODE (_q21))
	    {
	    case MINUS_EXPR:
	      {
		tree _q40 = TREE_OPERAND (_q21, 0);
		tree _q41 = TREE_OPERAND (_q21, 1);
		if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
		      tree res = generic_simplify_28 (loc, type, _p0, _p1, captures);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1249;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1249:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1250;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1250:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1251;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1251:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1252;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1252:;
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
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  if (tree_zero_one_valued_p (_q31))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
			tree res = generic_simplify_28 (loc, type, _p0, _p1, captures);
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
		if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q30 };
		      tree res = generic_simplify_28 (loc, type, _p0, _p1, captures);
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
		  switch (TREE_CODE (_p1))
		    {
		    case TRUNC_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
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
	  case CEIL_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case CEIL_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
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
	  case FLOOR_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case FLOOR_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
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
	  case ROUND_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case ROUND_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case TRUNC_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
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
	  case CEIL_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case CEIL_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
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
	  case FLOOR_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case FLOOR_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
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
	  case ROUND_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case ROUND_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
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
        break;
      }
    case TRUNC_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
				  if (res) return res;
				}
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
		    case TRUNC_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
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
        break;
      }
    case CEIL_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case CEIL_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
				  if (res) return res;
				}
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
		    case CEIL_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
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
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case FLOOR_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
				  if (res) return res;
				}
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
		    case FLOOR_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
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
        break;
      }
    case ROUND_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case ROUND_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
				  if (res) return res;
				}
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
		    case ROUND_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
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
	  if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
	    {
	      {
 tree tem = const_unop (NEGATE_EXPR, type, captures[1]);
		  if (!TREE_OVERFLOW (tem) || !flag_trapping_math
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1253;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1253;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  tem;
			tree _r;
			_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 885, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1253:;
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
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1254;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree res_op1;
	      res_op1 =  build_real (type, dconst2);
	      tree _r;
	      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 886, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1254:;
	  }
	else
	  {
	    if (INTEGRAL_TYPE_P (type)
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1255;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 =  build_int_cst (type, 2);
		  tree _r;
		  _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 887, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1255:;
	      }
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1256;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1256;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1256;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1256:;
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1257;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1257;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1257;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1257;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1257:;
	    }
	}
	if (integer_each_onep (_q21))
	  {
	    if (integer_zerop (_q22))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21, _q22 };
		  tree res = generic_simplify_30 (loc, type, _p0, _p1, captures);
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
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1258;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1258;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1258;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1258;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1258:;
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
			tree res = generic_simplify_30 (loc, type, _p0, _p1, captures);
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
	      if (integer_each_onep (_q31))
		{
		  if (integer_zerop (_q32))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q30, _q31, _q32 };
			tree res = generic_simplify_30 (loc, type, _p0, _p1, captures);
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
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	if (integer_each_onep (_q31))
	  {
	    if (integer_zerop (_q32))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		  tree res = generic_simplify_30 (loc, type, _p0, _p1, captures);
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
		    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				        }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				        }
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
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				        }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				        }
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
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
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
				        }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
				        }
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
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				        }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				        }
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
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				        }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				        }
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				        }
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
			tree res = generic_simplify_36 (loc, type, _p0, _p1, captures);
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
			tree res = generic_simplify_36 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1259;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1259:;
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
					tree res = generic_simplify_37 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG);
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
	case CFN_BUILT_IN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
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
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNT:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
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
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL);
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
	case CFN_BUILT_IN_POPCOUNTLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNTLL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
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
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNTLL:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
		    break;
		  }
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L);
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
	case CFN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POPCOUNT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
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
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_POPCOUNT:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
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
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_LOG);
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
	case CFN_BUILT_IN_POPCOUNTIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNTIMAX:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
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
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNTIMAX:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_LOG2);
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
	case CFN_BUILT_IN_POPCOUNTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
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
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNTL:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_LOG10);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F);
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
			    tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L);
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
    case VEC_PERM_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case MULT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (tree_vec_same_elem_p (_q41))
		{
		  if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q41, _q32, _p0 };
			tree res = generic_simplify_36 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if (tree_vec_same_elem_p (_q40))
		{
		  if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q40, _q32, _p0 };
			tree res = generic_simplify_36 (loc, type, _p0, _p1, captures);
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
  return NULL_TREE;
}

tree
generic_simplify_UNGT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
 && (TREE_CODE_CLASS (UNGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1748;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNGT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1748;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNGT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1748;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1748:;
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
 && (TREE_CODE_CLASS (UNGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1749;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1749;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1749;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1749;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1749:;
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
 && (TREE_CODE_CLASS (UNGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1750;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1750;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1750;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1750;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1750:;
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
	tree res = generic_simplify_535 (loc, type, _p0, _p1, captures, UNGT_EXPR);
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNGT_EXPR, GT_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNGT_EXPR, UNLT_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNGT_EXPR, UNLT_EXPR);
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
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNGT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, const tree type ATTRIBUTE_UNUSED, tree _p0, tree _p1)
{
  switch (code)
    {
    case PLUS_EXPR:
      return generic_simplify_PLUS_EXPR (loc, code, type, _p0, _p1);
    case POINTER_PLUS_EXPR:
      return generic_simplify_POINTER_PLUS_EXPR (loc, code, type, _p0, _p1);
    case MINUS_EXPR:
      return generic_simplify_MINUS_EXPR (loc, code, type, _p0, _p1);
    case BIT_IOR_EXPR:
      return generic_simplify_BIT_IOR_EXPR (loc, code, type, _p0, _p1);
    case BIT_XOR_EXPR:
      return generic_simplify_BIT_XOR_EXPR (loc, code, type, _p0, _p1);
    case POINTER_DIFF_EXPR:
      return generic_simplify_POINTER_DIFF_EXPR (loc, code, type, _p0, _p1);
    case MULT_EXPR:
      return generic_simplify_MULT_EXPR (loc, code, type, _p0, _p1);
    case EQ_EXPR:
      return generic_simplify_EQ_EXPR (loc, code, type, _p0, _p1);
    case NE_EXPR:
      return generic_simplify_NE_EXPR (loc, code, type, _p0, _p1);
    case TRUNC_DIV_EXPR:
      return generic_simplify_TRUNC_DIV_EXPR (loc, code, type, _p0, _p1);
    case CEIL_DIV_EXPR:
      return generic_simplify_CEIL_DIV_EXPR (loc, code, type, _p0, _p1);
    case FLOOR_DIV_EXPR:
      return generic_simplify_FLOOR_DIV_EXPR (loc, code, type, _p0, _p1);
    case ROUND_DIV_EXPR:
      return generic_simplify_ROUND_DIV_EXPR (loc, code, type, _p0, _p1);
    case EXACT_DIV_EXPR:
      return generic_simplify_EXACT_DIV_EXPR (loc, code, type, _p0, _p1);
    case FLOOR_MOD_EXPR:
      return generic_simplify_FLOOR_MOD_EXPR (loc, code, type, _p0, _p1);
    case RDIV_EXPR:
      return generic_simplify_RDIV_EXPR (loc, code, type, _p0, _p1);
    case LT_EXPR:
      return generic_simplify_LT_EXPR (loc, code, type, _p0, _p1);
    case LE_EXPR:
      return generic_simplify_LE_EXPR (loc, code, type, _p0, _p1);
    case GT_EXPR:
      return generic_simplify_GT_EXPR (loc, code, type, _p0, _p1);
    case GE_EXPR:
      return generic_simplify_GE_EXPR (loc, code, type, _p0, _p1);
    case CEIL_MOD_EXPR:
      return generic_simplify_CEIL_MOD_EXPR (loc, code, type, _p0, _p1);
    case ROUND_MOD_EXPR:
      return generic_simplify_ROUND_MOD_EXPR (loc, code, type, _p0, _p1);
    case TRUNC_MOD_EXPR:
      return generic_simplify_TRUNC_MOD_EXPR (loc, code, type, _p0, _p1);
    case LSHIFT_EXPR:
      return generic_simplify_LSHIFT_EXPR (loc, code, type, _p0, _p1);
    case RSHIFT_EXPR:
      return generic_simplify_RSHIFT_EXPR (loc, code, type, _p0, _p1);
    case BIT_AND_EXPR:
      return generic_simplify_BIT_AND_EXPR (loc, code, type, _p0, _p1);
    case MIN_EXPR:
      return generic_simplify_MIN_EXPR (loc, code, type, _p0, _p1);
    case MAX_EXPR:
      return generic_simplify_MAX_EXPR (loc, code, type, _p0, _p1);
    case LROTATE_EXPR:
      return generic_simplify_LROTATE_EXPR (loc, code, type, _p0, _p1);
    case RROTATE_EXPR:
      return generic_simplify_RROTATE_EXPR (loc, code, type, _p0, _p1);
    case COMPLEX_EXPR:
      return generic_simplify_COMPLEX_EXPR (loc, code, type, _p0, _p1);
    case UNORDERED_EXPR:
      return generic_simplify_UNORDERED_EXPR (loc, code, type, _p0, _p1);
    case ORDERED_EXPR:
      return generic_simplify_ORDERED_EXPR (loc, code, type, _p0, _p1);
    case UNLT_EXPR:
      return generic_simplify_UNLT_EXPR (loc, code, type, _p0, _p1);
    case UNLE_EXPR:
      return generic_simplify_UNLE_EXPR (loc, code, type, _p0, _p1);
    case UNGT_EXPR:
      return generic_simplify_UNGT_EXPR (loc, code, type, _p0, _p1);
    case UNGE_EXPR:
      return generic_simplify_UNGE_EXPR (loc, code, type, _p0, _p1);
    case UNEQ_EXPR:
      return generic_simplify_UNEQ_EXPR (loc, code, type, _p0, _p1);
    case LTGT_EXPR:
      return generic_simplify_LTGT_EXPR (loc, code, type, _p0, _p1);
    case TRUTH_ORIF_EXPR:
      return generic_simplify_TRUTH_ORIF_EXPR (loc, code, type, _p0, _p1);
    case TRUTH_OR_EXPR:
      return generic_simplify_TRUTH_OR_EXPR (loc, code, type, _p0, _p1);
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_BIT_FIELD_REF (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case BIT_FIELD_REF:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1, _p2 };
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1923;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1923;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1923;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  const_binop (PLUS_EXPR, bitsizetype, captures[2], captures[4]);
	    tree _r;
	    _r = fold_build3_loc (loc, BIT_FIELD_REF, type, res_op0, res_op1, res_op2);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1068, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1923:;
	}
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	  if (! INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || type_has_mode_precision_p (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1924;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[2];
		tree _r;
		_r = fold_build3_loc (loc, BIT_FIELD_REF, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1924:;
	    }
	}
        break;
      }
    default:;
    }
  if (integer_zerop (_p2))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (tree_int_cst_equal (captures[1], TYPE_SIZE (TREE_TYPE (captures[0])))
)
	  {
	    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1925;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1925;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1925:;
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
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1926;
	    {
	      tree res_op0;
	      {
		tree _o1[1], _r1;
		_o1[0] = captures[0];
		_r1 = fold_build1_loc (loc, REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
		res_op0 = _r1;
	      }
	      tree _r;
	      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (TREE_SIDE_EFFECTS (captures[2]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1926:;
	  }
	else
	  {
	    if (tree_int_cst_equal (captures[2], TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))))
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1927;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[0];
		    _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		  if (TREE_SIDE_EFFECTS (captures[1]))
		    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		  if (TREE_SIDE_EFFECTS (captures[2]))
		    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1927:;
	      }
	  }
      }
    else
      {
	if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (type)
 && (!
0
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
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1928;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (TREE_SIDE_EFFECTS (captures[2]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1928:;
	  }
      }
  }
  switch (TREE_CODE (_p0))
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
				  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1929;
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1929;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1929;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1929;
				  {
				    tree _r;
				    _r =  build_zero_cst (type);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1929:;
				}
			      else
				{
				  if (count == 1
)
				    {
				      if (elt < CONSTRUCTOR_NELTS (ctor)
)
					{
					  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1930;
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1930;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1930;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1930;
					  {
					    tree res_op0;
					    res_op0 =  CONSTRUCTOR_ELT (ctor, elt)->value;
					    tree _r;
					    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1075, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1930:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1931;
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1931;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1931;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1931;
					  {
					    tree _r;
					    _r =  build_zero_cst (type);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1076, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1931:;
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
0
 ? NULL_TREE : build_constructor (evtype, vals)));
					      if (res
)
						{
						  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1932;
						  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1932;
						  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1932;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1932;
						  {
						    tree res_op0;
						    res_op0 =  res;
						    tree _r;
						    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1077, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1932:;
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
				      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1933;
				      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1933;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1933;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1933;
				      {
					tree _r;
					_r =  build_zero_cst (type);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1078, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1933:;
				    }
				  else
				    {
				      if (n == const_k
)
					{
					  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1934;
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1934;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1934;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1934;
					  {
					    tree res_op0;
					    res_op0 =  CONSTRUCTOR_ELT (ctor, idx / const_k)->value;
					    tree _r;
					    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1079, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1934:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1935;
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1935;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1935;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1935;
					  {
					    tree res_op0;
					    res_op0 =  CONSTRUCTOR_ELT (ctor, idx / const_k)->value;
					    tree res_op1;
					    res_op1 = captures[1];
					    tree res_op2;
					    res_op2 =  bitsize_int ((idx % const_k) * width);
					    tree _r;
					    _r = fold_build3_loc (loc, BIT_FIELD_REF, type, res_op0, res_op1, res_op2);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1935:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
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
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1936;
		  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1936;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1936;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[3];
		    tree res_op2;
		    res_op2 =  wide_int_to_tree (bitsizetype,
 wi::to_wide (captures[4])
 - wi::to_wide (captures[2]));
		    tree _r;
		    _r = fold_build3_loc (loc, BIT_FIELD_REF, type, res_op0, res_op1, res_op2);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1081, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1936:;
		}
	      else
		{
		  if (wi::eq_p (wi::to_wide (captures[2]), wi::to_wide (captures[4]))
 && compare_tree_int (captures[3], isize) == 0
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1937;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (TREE_SIDE_EFFECTS (captures[3]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
			if (TREE_SIDE_EFFECTS (captures[4]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1082, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1937:;
		    }
		  else
		    {
		      if (wi::geu_p (wi::to_wide (captures[2]),
 wi::to_wide (captures[4]) + wi::to_wide (captures[3]))
 || wi::geu_p (wi::to_wide (captures[4]),
 wi::to_wide (captures[2]) + isize)
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1938;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[3];
			    tree res_op2;
			    res_op2 = captures[4];
			    tree _r;
			    _r = fold_build3_loc (loc, BIT_FIELD_REF, type, res_op0, res_op1, res_op2);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1083, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1938:;
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
#pragma GCC diagnostic pop
