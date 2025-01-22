/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_maybe_cmp (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
    case LE_EXPR:
    case EQ_EXPR:
    case NE_EXPR:
    case GE_EXPR:
    case GT_EXPR:
    case UNORDERED_EXPR:
    case ORDERED_EXPR:
    case UNLT_EXPR:
    case UNLE_EXPR:
    case UNGT_EXPR:
    case UNGE_EXPR:
    case UNEQ_EXPR:
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 5, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	switch (TREE_CODE (_p0))
	  {
	  case LT_EXPR:
	  case LE_EXPR:
	  case EQ_EXPR:
	  case NE_EXPR:
	  case GE_EXPR:
	  case GT_EXPR:
	  case UNORDERED_EXPR:
	  case ORDERED_EXPR:
	  case UNLT_EXPR:
	  case UNLE_EXPR:
	  case UNGT_EXPR:
	  case UNGE_EXPR:
	  case UNEQ_EXPR:
	  case LTGT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
		  {
		    {
		      res_ops[0] = captures[0];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 6, __FILE__, __LINE__, false);
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
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
)
	    {
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 7, __FILE__, __LINE__, false);
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
tree_unsigned_integer_sat_sub (tree t, tree *res_ops)
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
	  case GT_EXPR:
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
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    if (integer_zerop (_p2))
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
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 56, __FILE__, __LINE__, false);
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
	  case GE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  switch (TREE_CODE (_q60))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				  {
				    switch (TREE_CODE (_q61))
				      {
				      CASE_CONVERT:
				        {
					  tree _q90 = TREE_OPERAND (_q61, 0);
					  if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
					    {
					      if (integer_zerop (_p2))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						      {
							if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
							  {
							    {
							      res_ops[0] = captures[0];
							      res_ops[1] = captures[1];
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					  {
					    if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
					      {
						{
						  res_ops[0] = captures[0];
						  res_ops[1] = captures[1];
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
		case MINUS_EXPR:
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
			      switch (TREE_CODE (_q51))
			        {
				CASE_CONVERT:
				  {
				    tree _q80 = TREE_OPERAND (_q51, 0);
				    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				      {
					if (integer_zerop (_p2))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						{
						  if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
						    {
						      {
							res_ops[0] = captures[0];
							res_ops[1] = captures[1];
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
			  case CFN_SUB_OVERFLOW:
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
					      if (integer_zerop (_p2))
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
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 58, __FILE__, __LINE__, false);
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
			  case CFN_SUB_OVERFLOW:
			    if (call_expr_nargs (_q30) == 2)
    {
				tree _q40 = CALL_EXPR_ARG (_q30, 0);
				tree _q41 = CALL_EXPR_ARG (_q30, 1);
				if (integer_zerop (_q21))
				  {
				    if (integer_zerop (_p1))
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
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 59, __FILE__, __LINE__, false);
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
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_p1, 0);
			  tree _q51 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q50))
			    {
			    case INTEGER_CST:
			      {
				if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				  {
				    if (integer_zerop (_p2))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q20, _q21 };
					  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					    {
					      if (types_match (type, captures[1])
)
						{
						  {
 unsigned precision = TYPE_PRECISION (type);
 wide_int max = wi::mask (precision, false, precision);
 wide_int c0 = wi::to_wide (captures[0]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int c0_add_1 = wi::add (c0, wi::uhwi (1, precision));
						      if (wi::eq_p (c2, max) && wi::eq_p (c0_add_1, max)
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 60, __FILE__, __LINE__, false);
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
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_p1, 0);
			  tree _q51 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q50))
			    {
			    case INTEGER_CST:
			      {
				if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				  {
				    if (integer_zerop (_p2))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q20, _q21 };
					  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					    {
					      if (types_match (type, captures[1]) && int_fits_type_p (captures[0], type)
)
						{
						  {
 unsigned precision = TYPE_PRECISION (type);
 wide_int max = wi::mask (precision, false, precision);
 wide_int c0 = wi::to_wide (captures[0]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int c2_add_1 = wi::add (c2, wi::uhwi (1, precision));
 bool equal_p = wi::eq_p (c0, c2);
 bool less_than_1_p = !wi::eq_p (c2, max) && wi::eq_p (c2_add_1, c0);
						      if (equal_p || less_than_1_p
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 61, __FILE__, __LINE__, false);
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
	    if (integer_onep (_q21))
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
			      if (integer_onep (_q51))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					  {
					    if (types_match (type, captures[1])
)
					      {
						{
						  res_ops[0] = captures[0];
						  res_ops[1] = captures[1];
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 62, __FILE__, __LINE__, false);
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
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case GT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
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
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 63, __FILE__, __LINE__, false);
					      return true;
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
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
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
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 64, __FILE__, __LINE__, false);
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
	  CASE_CONVERT:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case GT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				      {
					if (types_match (type, captures[0], captures[1])
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 63, __FILE__, __LINE__, false);
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
		case GE_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				      {
					if (types_match (type, captures[0], captures[1])
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 64, __FILE__, __LINE__, false);
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
			  switch (TREE_CODE (_p1))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_p1, 0);
				tree _q61 = TREE_OPERAND (_p1, 1);
				switch (TREE_CODE (_q60))
				  {
				  case IMAGPART_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
					{
					  if (integer_onep (_q61))
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
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 65, __FILE__, __LINE__, false);
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
		  break;
	        default:;
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    if (integer_onep (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REALPART_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  switch (TREE_CODE (_q60))
				    {
				    case CALL_EXPR:
				      switch (get_call_combined_fn (_q60))
				        {
					case CFN_SUB_OVERFLOW:
					  if (call_expr_nargs (_q60) == 2)
    {
					      tree _q80 = CALL_EXPR_ARG (_q60, 0);
					      tree _q81 = CALL_EXPR_ARG (_q60, 1);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q80, _q81, _q30 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 65, __FILE__, __LINE__, false);
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
    case BIT_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
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
			  switch (TREE_CODE (_p1))
			    {
			    case PLUS_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_p1, 0);
				tree _q61 = TREE_OPERAND (_p1, 1);
				switch (TREE_CODE (_q60))
				  {
				  case IMAGPART_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
					{
					  if (integer_minus_onep (_q61))
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
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 66, __FILE__, __LINE__, false);
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
		  break;
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
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    if (integer_minus_onep (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REALPART_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  switch (TREE_CODE (_q60))
				    {
				    case CALL_EXPR:
				      switch (get_call_combined_fn (_q60))
				        {
					case CFN_SUB_OVERFLOW:
					  if (call_expr_nargs (_q60) == 2)
    {
					      tree _q80 = CALL_EXPR_ARG (_q60, 0);
					      tree _q81 = CALL_EXPR_ARG (_q60, 1);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q80, _q81, _q30 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 66, __FILE__, __LINE__, false);
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
    case PLUS_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
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
			    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
			      {
				if (types_match (type, captures[1]) && int_fits_type_p (captures[1], type)
)
				  {
				    {
 unsigned precision = TYPE_PRECISION (type);
 wide_int c1 = wi::to_wide (captures[1]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int sum = wi::add (c1, c2);
					if (wi::eq_p (sum, wi::uhwi (0, precision))
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 67, __FILE__, __LINE__, false);
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
generic_simplify_69 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail288;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 176, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail288:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_78 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail301;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail301;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 184, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail301:;
  return NULL_TREE;
}

tree
generic_simplify_84 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail307;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail307;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 185, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail307:;
  return NULL_TREE;
}

tree
generic_simplify_90 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail313;
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
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 192, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail313:;
  return NULL_TREE;
}

tree
generic_simplify_98 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail322;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail322;
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
next_after_fail322:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail323;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail323;
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
next_after_fail323:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_108 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail335;
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
next_after_fail335:;
    }
  return NULL_TREE;
}

tree
generic_simplify_119 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && invert_tree_comparison (cmp, HONOR_NANS (captures[1])) == icmp
 && canonicalize_math_after_vectorization_p ()
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail349;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail349;
      {
	tree res_op0;
	{
	  tree _o1[3], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[3];
	  _o1[2] = captures[5];
	  _r1 = fold_build3_loc (loc, COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_one_cst (type);
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 214, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail349:;
    }
  return NULL_TREE;
}

tree
generic_simplify_127 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail367;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail367;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail367;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 225, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail367:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail368;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail368;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail368;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 226, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail368:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail369;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail369;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail369;
		      {
			tree _r;
			_r = captures[0];
			if (TREE_SIDE_EFFECTS (captures[4]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 227, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail369:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail370;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail370;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail370;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
			    tree res_op1;
			    res_op1 = captures[5];
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 228, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail370:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail371;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail371;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail371;
			      {
				tree res_op0;
				res_op0 = captures[4];
				tree res_op1;
				res_op1 = captures[5];
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 229, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail371:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail372;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail372;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail372;
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
				    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 230, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail372:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail373;
				      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail373;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail373;
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
					_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 231, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail373:;
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
generic_simplify_160 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail426;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 260, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail426:;
  return NULL_TREE;
}

tree
generic_simplify_166 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail432;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 263, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail432:;
    }
  return NULL_TREE;
}

tree
generic_simplify_174 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail442;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail442;
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
next_after_fail442:;
    }
  return NULL_TREE;
}

tree
generic_simplify_182 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail451;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail451;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail451:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail452;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail452;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail452:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_193 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (LDEXP))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (real_equal (TREE_REAL_CST_PTR (captures[1]), &dconst1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail464;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, LDEXP, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail464;
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 291, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail464:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_201 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && tree_expr_nonzero_p (captures[1])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail472;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 299, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail472:;
    }
  return NULL_TREE;
}

tree
generic_simplify_208 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && (CONSTANT_CLASS_P (captures[3]) || (single_use (captures[1]) && single_use (captures[0])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail495;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[3]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 321, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail495:;
    }
  return NULL_TREE;
}

tree
generic_simplify_214 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[1]);
      if (ptr_difference_const (captures[0], captures[2], &diff)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail501;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_int_cst_type (inner_type, diff);
	      _o1[1] = captures[1];
	      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, neeq, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 326, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail501:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_225 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail516;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail516;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail516;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  wide_int_to_tree (TREE_TYPE (captures[0]),
 wi::exact_log2 (wi::to_wide (captures[1])));
	tree _r;
	_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 341, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail516:;
    }
  return NULL_TREE;
}

tree
generic_simplify_228 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail526;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail526;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail526;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 351, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail526:;
	}
      else
	{
	  if (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) == wi::to_wide (captures[2])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail527;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail527;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail527;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_int_cst (TREE_TYPE (captures[1]), cand);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 352, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail527:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_239 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail539;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[3];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 363, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail539:;
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail540;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 364, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail540:;
	    }
	  else
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail541;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 365, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail541:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_250 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sq),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && ! flag_errno_math
)
    {
      if (! HONOR_NANS (captures[0])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail587;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 410, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail587:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_254 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (cmp == EQ_EXPR
 || cmp == NE_EXPR
 || TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail600;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 423, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail600:;
    }
  return NULL_TREE;
}

tree
generic_simplify_256 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail602;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail602;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  force_fit_type (TREE_TYPE (captures[1]),
 wide_int::from (wi::to_wide (captures[2]),
 MAX (TYPE_PRECISION (TREE_TYPE (captures[2])),
 TYPE_PRECISION (TREE_TYPE (captures[1]))),
 TYPE_SIGN (TREE_TYPE (captures[2]))),
 0, TREE_OVERFLOW (captures[2]));
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 425, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail602:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail603;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail603;
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
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 426, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail603:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail604;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
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
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 427, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail604:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail605;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (TREE_SIDE_EFFECTS (captures[3]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 428, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail605:;
				}
			      else
				{
				  if (cmp == LT_EXPR || cmp == LE_EXPR
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail606;
				      {
					tree _r;
					_r =  constant_boolean_node (above ? true : false, type);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (TREE_SIDE_EFFECTS (captures[3]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 429, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail606:;
				    }
				  else
				    {
				      if (cmp == GT_EXPR || cmp == GE_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail607;
					  {
					    tree _r;
					    _r =  constant_boolean_node (above ? false : true, type);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 430, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail607:;
					}
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail608;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
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
		      _o1[0] = captures[3];
		      if (TREE_TYPE (_o1[0]) != newtype)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 431, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail608:;
		}
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_282 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (clz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!sanitize_flags_p (SANITIZE_BUILTIN)
 || (cfun && (cfun->curr_properties & PROP_ssa) != 0)
)
    {
      if (integer_zerop (captures[2]) && single_use (captures[0])
)
	{
	  {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail670;
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
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 476, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail670:;
	  }
	}
      else
	{
	  if (wi::to_wide (captures[2]) == TYPE_PRECISION (TREE_TYPE (captures[1])) - 1
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail671;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_one_cst (TREE_TYPE (captures[1]));
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 477, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail671:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_289 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail683;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail683;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 489, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail683:;
    }
  return NULL_TREE;
}

tree
generic_simplify_295 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail690;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 496, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail690:;
  return NULL_TREE;
}

tree
generic_simplify_297 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail692;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 498, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail692:;
  return NULL_TREE;
}

tree
generic_simplify_304 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail701;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_zero_cst (type);
	  _r1 = fold_build2_loc (loc, LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_minus_one_cst (type);
	tree res_op2;
	res_op2 =  build_one_cst (type);
	tree _r;
	_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 505, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail701:;
    }
  return NULL_TREE;
}

tree
generic_simplify_311 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (floor_divmod),
 const enum tree_code ARG_UNUSED (trunc_divmod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail709;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, trunc_divmod, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 513, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail709:;
    }
  return NULL_TREE;
}

tree
generic_simplify_317 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && wi::multiple_of_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail715;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 519, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail715:;
    }
  return NULL_TREE;
}

tree
generic_simplify_326 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (TAN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail726;
      {
	tree res_op0;
	res_op0 =  build_one_cst (type);
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  _r1 = maybe_build_call_expr_loc (loc, TAN, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail726;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 530, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail726:;
    }
  return NULL_TREE;
}

tree
generic_simplify_334 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail736;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (TREE_TYPE (_o1[0]) != stype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != stype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 540, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail736:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_345 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail750;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 554, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail750:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail751;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail751;
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
next_after_fail751:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail752;
			  {
			    tree _r;
			    _r =  constant_boolean_node (true, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 556, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail752:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail753;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail753;
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
next_after_fail753:;
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail754;
		      {
			tree _r;
			_r =  constant_boolean_node (false, type);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 558, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail754:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail755;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail755;
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
next_after_fail755:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail756;
			      {
				tree _r;
				_r =  constant_boolean_node (true, type);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 560, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail756:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail757;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail757;
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
next_after_fail757:;
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
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail758;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail758;
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
next_after_fail758:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail759;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail759;
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
next_after_fail759:;
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
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail760;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail760;
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
next_after_fail760:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail761;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail761;
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
next_after_fail761:;
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail762;
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
next_after_fail762:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail763;
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
next_after_fail763:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail764;
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
next_after_fail764:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail765;
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
next_after_fail765:;
						    }
						}
					    }
					}
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
generic_simplify_401 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail867;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 636, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail867:;
    }
  return NULL_TREE;
}

tree
generic_simplify_406 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail872;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail872;
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
next_after_fail872:;
  return NULL_TREE;
}

tree
generic_simplify_414 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail880;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 648, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail880:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_421 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail887;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail887;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail887;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail887;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail887;
	      {
		tree _r;
		_r =  build_int_cst (type, 0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail887:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail888;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail888;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail888;
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
next_after_fail888:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail889;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail889;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail889;
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
next_after_fail889:;
					}
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
generic_simplify_443 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail952;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail952;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 682, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail952:;
  return NULL_TREE;
}

tree
generic_simplify_446 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail956;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail956;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
    if (!_r)
      goto next_after_fail956;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 685, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail956:;
  return NULL_TREE;
}

tree
generic_simplify_449 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail959;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail959;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 688, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail959:;
    }
  return NULL_TREE;
}

tree
generic_simplify_452 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail962;
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
next_after_fail962:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_460 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail970;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 697, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail970:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail971;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 = captures[1];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail971:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_473 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail987;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail987;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail987;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail987:;
  return NULL_TREE;
}

tree
generic_simplify_476 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree_code code = minmax_from_comparison (cmp, captures[0], captures[3], captures[0], captures[1]);
      if (code == MIN_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail990;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail990;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail990;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail990;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail990;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 716, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail990:;
	}
      else
	{
	  if (code == MAX_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail991;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail991;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail991;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail991;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail991;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 717, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail991:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_496 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1016;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1016;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1016:;
  return NULL_TREE;
}

tree
generic_simplify_502 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1028;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1028;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1028;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1028:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1029;
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1029;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1029;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1029:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1030;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1030;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1030;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1030:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1031;
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1031;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1031;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1031:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_521 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1056;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1056;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1056:;
  return NULL_TREE;
}

tree
generic_simplify_528 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1063;
	  {
	    tree res_op0;
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[6];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[4];
	      _o1[5] = captures[5];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 6, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      if (!_r1)
	        goto next_after_fail1063;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1063:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_536 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1071;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 778, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1071:;
  return NULL_TREE;
}

tree
generic_simplify_543 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sins),
 const combined_fn ARG_UNUSED (atans),
 const combined_fn ARG_UNUSED (sqrts),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 REAL_VALUE_TYPE r_cst;
 build_sinatan_real (&r_cst, type);
 tree t_cst = build_real (type, r_cst);
 tree t_one = build_one_cst (type);
      if (SCALAR_FLOAT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1078;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail1078;
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = unshare_expr (captures[1]);
		_r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		_o1[0] = _r2;
	      }
	      _o1[1] =  t_cst;
	      _r1 = fold_build2_loc (loc, LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = unshare_expr (captures[1]);
	      {
		tree _o2[1], _r2;
		{
		  tree _o3[2], _r3;
		  {
		    tree _o4[2], _r4;
		    _o4[0] = unshare_expr (captures[1]);
		    _o4[1] = unshare_expr (captures[1]);
		    _r4 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o4[0]), _o4[0], _o4[1]);
		    _o3[0] = _r4;
		  }
		  _o3[1] =  t_one;
		  _r3 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[0] = _r3;
		}
		_r2 = maybe_build_call_expr_loc (loc, sqrts, TREE_TYPE (_o2[0]), 1, _o2[0]);
		if (!_r2)
		  goto next_after_fail1078;
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  t_one;
	      _o1[1] = captures[1];
	      _r1 = maybe_build_call_expr_loc (loc, copysigns, TREE_TYPE (_o1[0]), 2, _o1[0], _o1[1]);
	      if (!_r1)
	        goto next_after_fail1078;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 785, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1078:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_570 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1105;
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
	  goto next_after_fail1105;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1105:;
  }
  return NULL_TREE;
}

tree
generic_simplify_580 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1116;
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
	      goto next_after_fail1116;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 818, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1116:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_ABSU_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ABSU_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1160;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1160;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 852, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1160:;
		  }
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
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1161;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 853, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1161:;
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1162;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1162;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1162;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1162:;
	}
        break;
      }
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1163;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1163:;
    }
  }
  return NULL_TREE;
}

tree
generic_simplify_IMAGPART_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case COMPLEX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1228;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 877, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1228:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CONJ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1229;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1229:;
	      }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = PLUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1230;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1230:;
	      }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = MINUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1231;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1231:;
	      }
	      break;
	    }
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_CEXPIF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1232;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1232;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1232:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPIL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1233;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1233;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1233:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPI:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1234;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1234;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1234:;
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
    case CONJ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1235;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1235:;
	}
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = PLUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1236;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1236:;
	}
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = MINUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1237;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1237:;
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_MUL_OVERFLOW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (integer_nonzerop (_q21))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_514 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	      if (integer_nonzerop (_q20))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    tree res = generic_simplify_514 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1238;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1238;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1238:;
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1239;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1239;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1239:;
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPI:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1240;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1240;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1240:;
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
generic_simplify_MULT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1400;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, itype, _o2[0]);
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[1];
			    _o2[1] =  build_zero_cst (type);
			    _r2 = fold_build2_loc (loc, NE_EXPR, itype, _o2[0], _o2[1]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, itype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1400:;
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1401;
      {
	tree _r;
	_r = captures[1];
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1401:;
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1402;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1402:;
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1403;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1403;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 952, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1403:;
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1404;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1404;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 953, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1404:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1405;
						    {
						      tree res_op0;
						      {
							tree _o1[3], _r1;
							{
							  tree _o2[2], _r2;
							  {
							    tree _o3[1], _r3;
							    _o3[0] = captures[0];
							    _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, vec_cmp_type, _o3[0]);
							    _o2[0] = _r3;
							  }
							  _o2[1] =  zeros;
							  _r2 = fold_build2_loc (loc, LT_EXPR, vec_truth_type, _o2[0], _o2[1]);
							  _o1[0] = _r2;
							}
							_o1[1] =  ones;
							_o1[2] =  zeros;
							_r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
							res_op0 = _r1;
						      }
						      tree _r;
						      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						      if (TREE_SIDE_EFFECTS (captures[1]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						      if (TREE_SIDE_EFFECTS (captures[2]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						      if (TREE_SIDE_EFFECTS (captures[3]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
						      return _r;
						    }
next_after_fail1405:;
						  }
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
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1406;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1406;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1406:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1407;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1407;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1407:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1408;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1408;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1408:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1409;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1409;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1409:;
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
  switch (TREE_CODE (_p0))
    {
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1410;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1410;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1410:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1411;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1411;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1411:;
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
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1412;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1412;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1412:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1413;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1413;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1413:;
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
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1414;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1414;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1414:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1415;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1415;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1415:;
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
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1416;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1416;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1416:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1417;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1417;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1417:;
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
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1418;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1418;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1418:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1419;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1419;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1419:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1420;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1420;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1420:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1421;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1421;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1421:;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
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
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
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
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
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
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
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
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
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
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
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
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
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
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
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
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
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
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
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
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
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
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
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
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
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
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
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
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
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
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
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
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
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
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
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
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
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
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
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
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
	default:;
        }
      break;
    default:;
    }
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, MULT_EXPR);
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
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1422;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1422;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1422;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  wide_int_to_tree (type, mul);
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 957, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1422:;
			    }
		      }
		    }
		    break;
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
	  case MULT_EXPR:
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
 wi::overflow_type ovf1, ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::mul (wi::to_wide (captures[4]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 }
 else
 overflowed = false;
				      if (!overflowed
)
					{
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1423;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1423;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1423;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1423;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[2];
					      _o1[1] =  wide_int_to_tree (type, mul);
					      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  wide_int_to_tree (type, add);
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 958, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1423:;
					}
				  }
				}
			        break;
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
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1424;
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
			_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 959, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1424:;
		    }
		}
	      }
	  }
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1425;
	      {
		if (! tree_invariant_p (captures[1])) goto next_after_fail1425;
		tree res_op0;
		res_op0 = unshare_expr (captures[1]);
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 960, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1425:;
	    }
	  }
        break;
      }
    case ABSU_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1426;
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
		  captures[2] = _r1;
		}
		res_op0 = unshare_expr (captures[2]);
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1426:;
	    }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_onep (_q30))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _q31 };
		    tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			tree res = generic_simplify_179 (loc, type, _p0, _p1, captures);
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
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_onep (_q30))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
	      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
	      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_180 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (integer_zerop (_q31))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  tree res = generic_simplify_180 (loc, type, _p0, _p1, captures);
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
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		  tree res = generic_simplify_179 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1427;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1427;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1427:;
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
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q22))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1428;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1428;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1428:;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q21))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1429;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1429;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1429:;
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
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1430;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1430;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1430:;
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
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1431;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1431;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1431;
				  {
				    tree res_op0;
				    res_op0 =  tem;
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1431:;
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      switch (TREE_CODE (_q50))
		        {
			CASE_CONVERT:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    switch (TREE_CODE (_q60))
			      {
			      case LT_EXPR:
			        {
				  tree _q70 = TREE_OPERAND (_q60, 0);
				  tree _q71 = TREE_OPERAND (_q60, 1);
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree _p1_pops[1];
					    if (tree_nop_convert (_p1, _p1_pops))
					      {
						tree _q110 = _p1_pops[0];
						if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
						  {
						    {
						      tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						      if (res) return res;
						    }
						  }
					      }
					  }
					  if ((_p1 == _q70 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q70, 0) && types_match (_p1, _q70)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    tree _q61 = TREE_OPERAND (_q50, 1);
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree _p1_pops[1];
				      if (tree_nop_convert (_p1, _p1_pops))
				        {
					  tree _q100 = _p1_pops[0];
					  if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
				    if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
	  }
	    break;
	  }
        default:;
        }
      switch (TREE_CODE (_p1))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_p1, 0);
	    tree _q41 = TREE_OPERAND (_p1, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q41))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	    case BIT_IOR_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q40, 0);
		tree _q51 = TREE_OPERAND (_q40, 1);
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q51))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q51))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		tree _q50_pops[1];
		if (tree_nop_convert (_q50, _q50_pops))
		  {
		    tree _q60 = _q50_pops[0];
		    switch (TREE_CODE (_q60))
		      {
		      case NEGATE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  switch (TREE_CODE (_q70))
			    {
			    CASE_CONVERT:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				switch (TREE_CODE (_q80))
				  {
				  case LT_EXPR:
				    {
				      tree _q90 = TREE_OPERAND (_q80, 0);
				      tree _q91 = TREE_OPERAND (_q80, 1);
				      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
					{
					  if (integer_zerop (_q91))
					    {
					      if (integer_onep (_q51))
						{
						  {
						    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
			    case LT_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if (integer_zerop (_q81))
				      {
					if (integer_onep (_q51))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	      }
	        break;
	      }
	    default:;
	    }
        }
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case LT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				  {
				    if (integer_zerop (_q71))
				      {
					if (integer_onep (_q41))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	        default:;
	        }
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  CASE_CONVERT:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      switch (TREE_CODE (_q70))
			        {
				case LT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    if ((_q80 == _p0 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _p0, 0) && types_match (_q80, _p0)))
				      {
					if (integer_zerop (_q81))
					  {
					    if (integer_onep (_q41))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
						  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_zerop (_q51))
			    {
			      if (integer_onep (_q21))
				{
				  {
				    tree _p1_pops[1];
				    if (tree_nop_convert (_p1, _p1_pops))
				      {
					tree _q90 = _p1_pops[0];
					if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
				  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_zerop (_q41))
		      {
			if (integer_onep (_q21))
			  {
			    {
			      tree _p1_pops[1];
			      if (tree_nop_convert (_p1, _p1_pops))
			        {
				  tree _q80 = _p1_pops[0];
				  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				    }
			        }
			    }
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
				  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q21))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q21))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case LT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if (tree_negate_expr_p (_q50))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
			  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_negate_expr_p (_p1))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, LTGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_q20))
	{
	  switch (TREE_CODE (_p1))
	    {
	    CASE_CONVERT:
	      {
		tree _q40 = TREE_OPERAND (_p1, 0);
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
			tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
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
		tree _q40 = TREE_OPERAND (_p1, 0);
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		  if (res) return res;
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      if (tree_negate_expr_p (_q40))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		    tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
if (tree_negate_expr_p (_p0))
  {
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
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
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
	    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	    tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
          break;
        }
      default:;
      }
  }
if (tree_zero_one_valued_p (_p0))
  {
    if (tree_zero_one_valued_p (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1432;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 965, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1432:;
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
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, LTGT_EXPR);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1433;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1433:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1434;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1434:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1435;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1435:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1436;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1436:;
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
	  case EXACT_DIV_EXPR:
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
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
			  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
		    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
			  tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
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
					  tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case MINUS_EXPR:
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
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
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
					  tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
		    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
	      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
		    tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			      tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
    case MINUS_EXPR:
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			      tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1437;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1437;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1437:;
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
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures);
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
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q31))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures);
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1438;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1438;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1438;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1438:;
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1439;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1439;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1439;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1439;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1439:;
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1440;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1440;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1440;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1440;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1440:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_p1))
	      {
	      case CFN_BUILT_IN_LDEXPF:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LDEXP:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXP:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1441;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1441;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1441:;
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
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1442;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1442;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1442:;
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
	case CFN_BUILT_IN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1443;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1443;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1443:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1444;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1444;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1444;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1444:;
					}
				    }
				}
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
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
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
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1445;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1445;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1445;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1445:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1446;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1446;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1446;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1446:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1447;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1447;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1447;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1447:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1448;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1448;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1448;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1448:;
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1449;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1449;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1449:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1450;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1450;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1450;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1450:;
					}
				    }
				}
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
	case CFN_BUILT_IN_EXP10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1451;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1451;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1451:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1452;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1452;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1452;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1452:;
					}
				    }
				}
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
	case CFN_BUILT_IN_CBRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1453;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1453;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1453:;
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
	case CFN_BUILT_IN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1454;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1454;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1454;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1454:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1455;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1455;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1455:;
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
	case CFN_BUILT_IN_EXPF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1456;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1456;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1456:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1457;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1457;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1457;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1457:;
					}
				    }
				}
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
	case CFN_BUILT_IN_EXPL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1458;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1458;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1458:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1459;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1459;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1459;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1459:;
					}
				    }
				}
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
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1460;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1460;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1460;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1460:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPF:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1461;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1461;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1461;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1461:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1462;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1462;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1462;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1462:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1463;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1463;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1463;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1463:;
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1464;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1464;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1464;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1464:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1465;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1465;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1465;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1465:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1466;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1466;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1466;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1466:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1467;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1467;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1467;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1467:;
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1468;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1468;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1468:;
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
	case CFN_BUILT_IN_LDEXPF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXPL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1469;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1469;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1469:;
			      }
			  }
		        }
		      break;
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1470;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1470;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1470;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1470:;
					}
				    }
				}
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
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1471;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1471;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1471;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1471:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1472;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1472;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1472;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1472:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1473;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1473;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1473;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1473:;
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1474;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1474;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1474;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1474:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1475;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1475;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1475:;
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
	case CFN_BUILT_IN_POW10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1476;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1476;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1476;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1476:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1477;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1477;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1477:;
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
	case CFN_BUILT_IN_SQRTF128X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128X);
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1478;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1478;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1478;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1478:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1479;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1479;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1479:;
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
	case CFN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1480;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1480;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1480:;
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
	case CFN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1481;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1481;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1481;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1481:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1482;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1482;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1482:;
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
	case CFN_BUILT_IN_CBRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1483;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1483;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1483:;
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
	case CFN_BUILT_IN_CBRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1484;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1484;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1484:;
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
	case CFN_LDEXP:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_LDEXP);
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
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1485;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1485;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1485;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1485:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1486;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1486;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1486:;
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
	case CFN_BUILT_IN_EXP2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1487;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1487;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1487;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1487:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1488;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1488;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1488:;
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
	case CFN_BUILT_IN_EXP2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1489;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1489;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1489;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1489:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1490;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1490;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1490:;
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
	case CFN_BUILT_IN_LDEXP:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1491;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1491;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1491;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1491:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1492;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1492;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1492:;
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
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_LDEXPF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXPL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_LDEXP:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXP:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
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
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
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
	case CFN_BUILT_IN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
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
	case CFN_BUILT_IN_COSF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
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
	case CFN_BUILT_IN_COSL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
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
	case CFN_BUILT_IN_TANF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
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
	case CFN_BUILT_IN_TANL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
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
	case CFN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
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
	case CFN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
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
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1493;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1493:;
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
					tree res = generic_simplify_37 (loc, type, _p0, _p1, captures, MULT_EXPR);
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
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
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
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
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
	case CFN_BUILT_IN_POWI:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWI:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1494;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWI, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1494;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1494:;
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
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
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
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_POW);
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
	case CFN_BUILT_IN_POWIF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1495;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIF, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1495;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1495:;
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
	case CFN_BUILT_IN_POWIL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1496;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIL, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1496;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1496:;
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
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop
