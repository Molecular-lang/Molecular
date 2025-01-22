/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_nop_convert (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 0, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  if (VECTOR_TYPE_P (type) && VECTOR_TYPE_P (TREE_TYPE (captures[0]))
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[0])))
 && tree_nop_conversion_p (TREE_TYPE (type), TREE_TYPE (TREE_TYPE (captures[0])))
)
	    {
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1, __FILE__, __LINE__, false);
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
tree_with_known_nonzero_bits (tree t)
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
	if (tree_with_known_nonzero_bits_1 (_p0))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 39, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
	if (tree_with_known_nonzero_bits_1 (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 39, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    default:;
    }
if (tree_with_known_nonzero_bits_1 (t))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      {
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 40, __FILE__, __LINE__, false);
	return true;
      }
    }
  }
  return false;
}

bool
tree_signed_integer_sat_trunc (tree t, tree *res_ops)
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
				switch (TREE_CODE (_q21))
				  {
				  case INTEGER_CST:
				    {
				      switch (TREE_CODE (_p1))
				        {
					case BIT_XOR_EXPR:
					  {
					    tree _q80 = TREE_OPERAND (_p1, 0);
					    tree _q81 = TREE_OPERAND (_p1, 1);
					    switch (TREE_CODE (_q80))
					      {
					      case INTEGER_CST:
					        {
						  switch (TREE_CODE (_q81))
						    {
						    case NEGATE_EXPR:
						      {
							tree _q100 = TREE_OPERAND (_q81, 0);
							switch (TREE_CODE (_q100))
							  {
							  CASE_CONVERT:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      switch (TREE_CODE (_q110))
							        {
								case LT_EXPR:
								  {
								    tree _q120 = TREE_OPERAND (_q110, 0);
								    tree _q121 = TREE_OPERAND (_q110, 1);
								    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
								      {
									if (integer_zerop (_q121))
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
									  }
								      }
								    break;
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
						  tree _q81_pops[1];
						  if (tree_nop_convert (_q81, _q81_pops))
						    {
						      tree _q100 = _q81_pops[0];
						      switch (TREE_CODE (_q100))
						        {
							case NEGATE_EXPR:
							  {
							    tree _q110 = TREE_OPERAND (_q100, 0);
							    {
							      tree _q110_pops[1];
							      if (tree_nop_convert (_q110, _q110_pops))
							        {
								  tree _q120 = _q110_pops[0];
								  switch (TREE_CODE (_q120))
								    {
								    CASE_CONVERT:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									switch (TREE_CODE (_q130))
									  {
									  case LT_EXPR:
									    {
									      tree _q140 = TREE_OPERAND (_q130, 0);
									      tree _q141 = TREE_OPERAND (_q130, 1);
									      if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
										{
										  if (integer_zerop (_q141))
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
										    }
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
					          break;
					        }
					      case NEGATE_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  switch (TREE_CODE (_q90))
						    {
						    CASE_CONVERT:
						      {
							tree _q100 = TREE_OPERAND (_q90, 0);
							switch (TREE_CODE (_q100))
							  {
							  case LT_EXPR:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      tree _q111 = TREE_OPERAND (_q100, 1);
							      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
								{
								  if (integer_zerop (_q111))
								    {
								      switch (TREE_CODE (_q81))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
							        }
							      break;
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
					    tree _q80_pops[1];
					    if (tree_nop_convert (_q80, _q80_pops))
					      {
						tree _q90 = _q80_pops[0];
						switch (TREE_CODE (_q90))
						  {
						  case NEGATE_EXPR:
						    {
						      tree _q100 = TREE_OPERAND (_q90, 0);
						      {
							tree _q100_pops[1];
							if (tree_nop_convert (_q100, _q100_pops))
							  {
							    tree _q110 = _q100_pops[0];
							    switch (TREE_CODE (_q110))
							      {
							      CASE_CONVERT:
							        {
								  tree _q120 = TREE_OPERAND (_q110, 0);
								  switch (TREE_CODE (_q120))
								    {
								    case LT_EXPR:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									tree _q131 = TREE_OPERAND (_q120, 1);
									if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
									  {
									    if (integer_zerop (_q131))
									      {
										switch (TREE_CODE (_q81))
										  {
										  case INTEGER_CST:
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
					    break;
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
			  switch (TREE_CODE (_q31))
			    {
			    CASE_CONVERT:
			      {
				tree _q50 = TREE_OPERAND (_q31, 0);
				switch (TREE_CODE (_q21))
				  {
				  case INTEGER_CST:
				    {
				      switch (TREE_CODE (_p1))
				        {
					case BIT_XOR_EXPR:
					  {
					    tree _q80 = TREE_OPERAND (_p1, 0);
					    tree _q81 = TREE_OPERAND (_p1, 1);
					    switch (TREE_CODE (_q80))
					      {
					      case INTEGER_CST:
					        {
						  switch (TREE_CODE (_q81))
						    {
						    case NEGATE_EXPR:
						      {
							tree _q100 = TREE_OPERAND (_q81, 0);
							switch (TREE_CODE (_q100))
							  {
							  CASE_CONVERT:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      switch (TREE_CODE (_q110))
							        {
								case LT_EXPR:
								  {
								    tree _q120 = TREE_OPERAND (_q110, 0);
								    tree _q121 = TREE_OPERAND (_q110, 1);
								    if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
								      {
									if (integer_zerop (_q121))
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
									  }
								      }
								    break;
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
						  tree _q81_pops[1];
						  if (tree_nop_convert (_q81, _q81_pops))
						    {
						      tree _q100 = _q81_pops[0];
						      switch (TREE_CODE (_q100))
						        {
							case NEGATE_EXPR:
							  {
							    tree _q110 = TREE_OPERAND (_q100, 0);
							    {
							      tree _q110_pops[1];
							      if (tree_nop_convert (_q110, _q110_pops))
							        {
								  tree _q120 = _q110_pops[0];
								  switch (TREE_CODE (_q120))
								    {
								    CASE_CONVERT:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									switch (TREE_CODE (_q130))
									  {
									  case LT_EXPR:
									    {
									      tree _q140 = TREE_OPERAND (_q130, 0);
									      tree _q141 = TREE_OPERAND (_q130, 1);
									      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
										{
										  if (integer_zerop (_q141))
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
										    }
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
					          break;
					        }
					      case NEGATE_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  switch (TREE_CODE (_q90))
						    {
						    CASE_CONVERT:
						      {
							tree _q100 = TREE_OPERAND (_q90, 0);
							switch (TREE_CODE (_q100))
							  {
							  case LT_EXPR:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      tree _q111 = TREE_OPERAND (_q100, 1);
							      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
								{
								  if (integer_zerop (_q111))
								    {
								      switch (TREE_CODE (_q81))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
							        }
							      break;
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
					    tree _q80_pops[1];
					    if (tree_nop_convert (_q80, _q80_pops))
					      {
						tree _q90 = _q80_pops[0];
						switch (TREE_CODE (_q90))
						  {
						  case NEGATE_EXPR:
						    {
						      tree _q100 = TREE_OPERAND (_q90, 0);
						      {
							tree _q100_pops[1];
							if (tree_nop_convert (_q100, _q100_pops))
							  {
							    tree _q110 = _q100_pops[0];
							    switch (TREE_CODE (_q110))
							      {
							      CASE_CONVERT:
							        {
								  tree _q120 = TREE_OPERAND (_q110, 0);
								  switch (TREE_CODE (_q120))
								    {
								    case LT_EXPR:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									tree _q131 = TREE_OPERAND (_q120, 1);
									if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
									  {
									    if (integer_zerop (_q131))
									      {
										switch (TREE_CODE (_q81))
										  {
										  case INTEGER_CST:
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
					    break;
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
  return false;
}

tree
generic_simplify_94 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail317;
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
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, rop, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 195, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail317:;
    }
  return NULL_TREE;
}

tree
generic_simplify_104 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[2], captures[0], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail331;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 201, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail331:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_112 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail340;
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
next_after_fail340:;
    }
  return NULL_TREE;
}

tree
generic_simplify_121 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail354;
  {
    if (! tree_invariant_p (captures[1])) goto next_after_fail354;
    tree res_op0;
    {
      tree _o1[2], _r1;
      {
	tree _o2[2], _r2;
	_o2[0] = unshare_expr (captures[1]);
	_o2[1] = captures[4];
	_r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	_o1[0] = _r2;
      }
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 219, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail354:;
  return NULL_TREE;
}

tree
generic_simplify_129 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail381;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail381;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, cmp, type, _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[4];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 239, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail381:;
  return NULL_TREE;
}

tree
generic_simplify_135 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail388;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail388;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail388;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 225, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail388:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail389;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail389;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail389;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 226, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail389:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail390;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail390;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail390;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 227, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail390:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail391;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail391;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail391;
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
next_after_fail391:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail392;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail392;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail392;
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
next_after_fail392:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail393;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail393;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail393;
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
next_after_fail393:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail394;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail394;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail394;
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
next_after_fail394:;
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
generic_simplify_168 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail434;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail434;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail434:;
	}
      else
	{
	  if (ic == ncmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail435;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail435;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail435:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_181 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail449;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail449;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail449:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail450;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail450;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail450:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_192 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail463;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
		  _o1[1] = captures[2];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, LDEXP, type, 2, res_op0, res_op1);
		if (!_r)
		  goto next_after_fail463;
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 290, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail463:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_203 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (captures[0]) >= element_precision (captures[1])
 && types_match (captures[1], captures[3])
)
    {
      if (wi::lt_p (wi::to_wide (captures[2]), 0, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	{
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail474;
	      {
		tree res_op0;
		res_op0 = captures[3];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 301, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail474:;
	    }
	  else
	    {
	      if (tree_expr_nonzero_p (captures[1]) && tree_expr_nonzero_p (captures[3])
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail475;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
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
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
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
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 302, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail475:;
		  }
		}
	    }
	}
      else
	{
	  if (wi::gt_p (wi::to_wide (captures[2]), 1, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	    {
	      if (TYPE_UNSIGNED (TREE_TYPE (captures[1])) || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail476;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[3];
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 303, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail476:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail477;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
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
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
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
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 304, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail477:;
		  }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_227 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_fits_shwi_p (captures[3])
 && tree_to_shwi (captures[3]) > 0
 && tree_to_shwi (captures[3]) < TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      {
 tree t0 = TREE_TYPE (captures[2]);
 unsigned int prec = TYPE_PRECISION (t0);
 wide_int c1 = wi::to_wide (captures[3]);
 wide_int c2 = wi::to_wide (captures[4]);
 wide_int c3 = wi::to_wide (captures[5]);
 wide_int sb = wi::set_bit_in_zero (prec - 1, prec);
	  if ((c2 & c3) != c3
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail519;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail519;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail519;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail519;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 344, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail519:;
	    }
	  else
	    {
	      if (TYPE_UNSIGNED (t0)
)
		{
		  if ((c3 & wi::arshift (sb, c1 - 1)) != 0
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail520;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail520;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail520;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail520;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 345, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail520:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail521;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail521;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail521;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail521;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  wide_int_to_tree (t0, c3 << c1);
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 346, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail521:;
		    }
		}
	      else
		{
		  {
 wide_int smask = wi::arshift (sb, c1);
		      if ((c2 & smask) == 0
)
			{
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail522;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail522;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail522;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail522;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[2];
			      _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 =  wide_int_to_tree (t0, c3 << c1);
			    tree _r;
			    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 347, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail522:;
			}
		      else
			{
			  if ((c3 & smask) == 0
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail523;
			      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail523;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail523;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail523;
			      {
				tree res_op0;
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[2];
				  _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  res_op0 = _r1;
				}
				tree res_op1;
				res_op1 =  wide_int_to_tree (t0, c3 << c1);
				tree _r;
				_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 348, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail523:;
			    }
			  else
			    {
			      if ((c2 & smask) != (c3 & smask)
)
				{
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail524;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail524;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail524;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail524;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == NE_EXPR, type);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 349, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail524:;
				}
			      else
				{
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail525;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail525;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail525;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail525;
				  {
				    tree res_op0;
				    {
				      tree _o1[2], _r1;
				      _o1[0] = captures[2];
				      _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      res_op0 = _r1;
				    }
				    tree res_op1;
				    res_op1 =  wide_int_to_tree (t0, (c3 << c1) | sb);
				    tree _r;
				    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 350, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail525:;
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
generic_simplify_258 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3])) != 0
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail616;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (TREE_SIDE_EFFECTS (captures[3]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 432, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail616:;
    }
  return NULL_TREE;
}

tree
generic_simplify_261 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail622;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 438, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail622:;
  return NULL_TREE;
}

tree
generic_simplify_264 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail625;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      {
	tree _o2[1], _r2;
	_o2[0] = captures[1];
	_r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	if (EXPR_P (_r2))
	  goto next_after_fail625;
	_o1[1] = _r2;
      }
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 441, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail625:;
  return NULL_TREE;
}

tree
generic_simplify_267 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail628;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      {
	tree _o2[2], _r2;
	_o2[0] = captures[1];
	_o2[1] = captures[4];
	_r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	_o1[0] = _r2;
      }
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 444, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail628:;
  return NULL_TREE;
}

tree
generic_simplify_273 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail634;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail634;
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
next_after_fail634:;
    }
  return NULL_TREE;
}

tree
generic_simplify_278 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail653;
	  {
	    tree _r;
	    _r =  constant_boolean_node (!outereq, type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 459, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail653:;
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail654;
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
			res_op1 =  ucst1;
			tree _r;
			_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 460, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail654:;
		    }
		  else
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail655;
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
			res_op1 =  ucst1;
			tree _r;
			_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 461, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail655:;
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail656;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  value;
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 462, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail656:;
		    }
		  else
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail657;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  value;
			tree _r;
			_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 463, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail657:;
		    }
	      }
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_286 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rep),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail678;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail678;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
    tree _r;
    _r = fold_build2_loc (loc, rep, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 484, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail678:;
  return NULL_TREE;
}

tree
generic_simplify_290 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail684;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail684;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail684:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail685;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail685;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 491, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail685:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_299 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail695;
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
next_after_fail695:;
	}
      else
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail696;
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
next_after_fail696:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_313 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail711;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail711;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 515, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail711:;
  return NULL_TREE;
}

tree
generic_simplify_322 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (TAN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail722;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TAN, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail722;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 526, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail722:;
    }
  return NULL_TREE;
}

tree
generic_simplify_329 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail729;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[1] = _r2;
	  }
	  _r1 = maybe_build_call_expr_loc (loc, POW, TREE_TYPE (_o1[0]), 2, _o1[0], _o1[1]);
	  if (!_r1)
	    goto next_after_fail729;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 533, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail729:;
    }
  return NULL_TREE;
}

tree
generic_simplify_338 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (bitop == BIT_AND_EXPR || tree_expr_nonnegative_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail740;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == GE_EXPR || cmp == LE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 544, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail740:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST && wi::neg_p (wi::to_wide (captures[1]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail741;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == LT_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 545, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail741:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_349 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail784;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail784;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[0];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail784:;
    }
  return NULL_TREE;
}

tree
generic_simplify_353 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (neg_cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      {
 tree tem = const_binop (RDIV_EXPR, type, captures[2], captures[1]);
	  if (tem
 && !(REAL_VALUE_ISINF (TREE_REAL_CST (tem))
 || (real_zerop (tem) && !real_zerop (captures[1])))
)
	    {
	      if (real_less (&dconst0, TREE_REAL_CST_PTR (captures[1]))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail788;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail788;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail788;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 =  tem;
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 575, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail788:;
		}
	      else
		{
		  if (real_less (TREE_REAL_CST_PTR (captures[1]), &dconst0)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail789;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail789;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail789;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  tem;
			tree _r;
			_r = fold_build2_loc (loc, neg_cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 576, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail789:;
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_360 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail802;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail802;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[0];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail802:;
    }
  return NULL_TREE;
}

tree
generic_simplify_364 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail806;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = maybe_build_call_expr_loc (loc, exps, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail806;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 589, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail806:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_370 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::ltu_p (wi::to_wide (captures[1]), element_precision (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail816;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] =  build_minus_one_cst (type);
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 599, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail816:;
    }
  return NULL_TREE;
}

tree
generic_simplify_378 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::ltu_p (wi::to_wide (captures[1]), element_precision (type))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail827;
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
	      tree _o1[2], _r1;
	      _o1[0] =  build_minus_one_cst (type);
	      _o1[1] = captures[1];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 608, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail827:;
	}
      else
	{
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      {
 int width = element_precision (type) - tree_to_uhwi (captures[1]);
 tree stype = NULL_TREE;
 if (width <= MAX_FIXED_MODE_SIZE)
 stype = build_nonstandard_integer_type (width, 0);
		  if (stype && (width == 1 || type_has_mode_precision_p (stype))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail828;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail828;
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
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 609, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail828:;
		    }
	      }
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_386 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail849;
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
next_after_fail849:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail850;
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
next_after_fail850:;
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
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail851;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail851;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail851;
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
next_after_fail851:;
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
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail852;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail852;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail852;
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
next_after_fail852:;
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
generic_simplify_417 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail883;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 651, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail883:;
  return NULL_TREE;
}

tree
generic_simplify_422 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail890;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail890;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail890;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail890;
	      {
		tree _r;
		_r =  build_int_cst (type, 0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail890:;
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
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail891;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail891;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail891;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail891;
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
next_after_fail891:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail892;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail892;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail892;
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
next_after_fail892:;
					}
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
generic_simplify_444 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail953;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail953;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 682, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail953:;
  return NULL_TREE;
}

tree
generic_simplify_448 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail958;
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
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 687, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail958:;
  return NULL_TREE;
}

tree
generic_simplify_451 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail961;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail961;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 690, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail961:;
    }
  return NULL_TREE;
}

tree
generic_simplify_454 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail964;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 693, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail964:;
    }
  return NULL_TREE;
}

tree
generic_simplify_459 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail969;
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
next_after_fail969:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_471 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[3])
 && expr_no_side_effects_p (captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail983;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail983;
      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail983;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail983;
      {
	tree _r;
	_r = captures[1];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 709, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail983:;
    }
  return NULL_TREE;
}

tree
generic_simplify_479 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail996;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail996;
      {
	tree _r;
	_r = captures[2];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 722, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail996:;
    }
  return NULL_TREE;
}

tree
generic_simplify_487 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1004;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1004;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1004;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1004;
  {
    tree _r;
    _r = captures[3];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1004:;
  return NULL_TREE;
}

tree
generic_simplify_493 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1011;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1011;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1011;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] = shifter;
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
		_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 736, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1011:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1012;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1012;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1012;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    {
		      tree _o3[2], _r3;
		      _o3[0] = captures[0];
		      _o3[1] = shifter;
		      _r3 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		      _o2[0] = _r3;
		    }
		    if (TREE_TYPE (_o2[0]) != type)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 737, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1012:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_510 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (FMIN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_finite_math_only
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1042;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 754, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1042:;
    }
  return NULL_TREE;
}

tree
generic_simplify_517 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1052;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 764, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1052:;
  return NULL_TREE;
}

tree
generic_simplify_525 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[5]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1060;
	  {
	    tree res_op0;
	    {
	      tree _o1[4], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[3] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, cond_op, TREE_TYPE (_o1[1]), 4, _o1[0], _o1[1], _o1[2], _o1[3]);
	      if (!_r1)
	        goto next_after_fail1060;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[5]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 767, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1060:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_534 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && (cmp != LTGT_EXPR || ! flag_trapping_math)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1069;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == ORDERED_EXPR || cmp == LTGT_EXPR
 ? false : true, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 776, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1069:;
    }
  return NULL_TREE;
}

tree
generic_simplify_545 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1080;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, fns, type, 1, res_op0);
    if (!_r)
      goto next_after_fail1080;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1080:;
  return NULL_TREE;
}

tree
generic_simplify_550 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1085;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 792, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1085:;
  return NULL_TREE;
}

tree
generic_simplify_558 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (rints))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (!flag_errno_math
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1093;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 800, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1093:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_566 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1101;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMA, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1101;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 808, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1101:;
    }
  return NULL_TREE;
}

tree
generic_simplify_576 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1111;
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
		_r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
		if (!_r)
		  goto next_after_fail1111;
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 813, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1111:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_ABS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && element_precision (type) > element_precision (TREE_TYPE (captures[0]))
)
	    {
	      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1124;
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
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 824, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1124:;
	      }
	    }
	}
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1125;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1125;
	  {
	    tree _r;
	    _r = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 825, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1125:;
	}
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1126;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 826, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1126:;
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1127;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1127;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1127;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1127:;
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
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF16);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF32);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF64);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF128X);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF128);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF32X);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF64X);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNF);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_BUILT_IN_COPYSIGNL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_1 (loc, type, _p0, captures, CFN_COPYSIGN);
		if (res) return res;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1128;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 828, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1128:;
    }
  }
  return NULL_TREE;
}

tree
generic_simplify_POINTER_PLUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1260;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1260;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 881, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1260:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case POINTER_PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1261;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, POINTER_PLUS_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1261:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1262;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    _o1[0] = captures[2];
		    {
		      tree _o2[2], _r2;
		      _o2[0] = captures[3];
		      _o2[1] = captures[4];
		      _r2 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1262:;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1263;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1263;
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
	_r = non_lvalue_loc (loc, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 894, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1263:;
    }
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
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q41))
		      {
		      CASE_CONVERT:
		        {
			  tree _q70 = TREE_OPERAND (_q41, 0);
			  if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q50 };
				if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[3])))
 || (
1
 && type == TREE_TYPE (captures[3])))
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1264;
				    {
				      tree _r;
				      _r = captures[3];
				      if (TREE_SIDE_EFFECTS (captures[0]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 895, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1264:;
				  }
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case POINTER_DIFF_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
		    if (TYPE_PRECISION (TREE_TYPE (captures[1])) >= TYPE_PRECISION (TREE_TYPE (captures[2]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1265;
			{
			  tree res_op0;
			  res_op0 = captures[3];
			  tree _r;
			  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			  if (TREE_SIDE_EFFECTS (captures[4]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 896, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1265:;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
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
		    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _p1, _q40 };
			  if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[3])))
 || (
1
 && type == TREE_TYPE (captures[3])))
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1266;
			      {
				tree _r;
				_r = captures[3];
				if (TREE_SIDE_EFFECTS (captures[0]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 895, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1266:;
			    }
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
	      if (TYPE_PRECISION (TREE_TYPE (captures[1])) >= TYPE_PRECISION (TREE_TYPE (captures[2]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1267;
		  {
		    tree res_op0;
		    res_op0 = captures[3];
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 896, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1267:;
		}
	    }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
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
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
				{
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), ~wi::to_wide (captures[1]));
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1268;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1268;
				    {
				      tree res_op0;
				      res_op0 = captures[0];
				      tree res_op1;
				      res_op1 =  algn;
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 897, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1268:;
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
  return NULL_TREE;
}

tree
generic_simplify_NE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
	      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, NE_EXPR, CEIL_MOD_EXPR);
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
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, NE_EXPR, FLOOR_MOD_EXPR);
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
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, NE_EXPR, ROUND_MOD_EXPR);
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
		  tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, NE_EXPR, TRUNC_MOD_EXPR);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1530;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree _r;
			      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 978, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1530:;
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
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_202 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				      tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_206 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1531;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1531:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1532;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1532:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1533;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1533:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1534;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1534:;
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
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1535;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 913, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1535:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1536;
			{
			  tree res_op0;
			  res_op0 = captures[2];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[0]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 914, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1536:;
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
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_210 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    tree res = generic_simplify_211 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
		}
	      }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			      tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    {
      tree _p1_pops[1];
      if (tree_logical_inverted_value (_p1, _p1_pops))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
	      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
		}
	      }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			      tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			    tree res = generic_simplify_214 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_215 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
				      tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				      tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1537;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1537:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1538;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1538:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1539;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1539:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1540;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1540:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1541;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1541:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1542;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1542:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1543;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1543:;
			  }
		      }
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1544;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1544:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1545;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1545:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1546;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1546:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1547;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1547:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1548;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1548:;
			  }
		      }
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1549;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1549:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1550;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1550:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1551;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1551:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1552;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1552:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1553;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1553:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1554;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1554:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1555;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1555:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1556;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1556:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1557;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1557:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1558;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1558:;
			  }
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
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1559;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1559:;
			  }
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
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1560;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1560:;
			  }
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1561;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1561:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1562;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1562:;
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
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1563;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1563:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1564;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1564:;
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
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
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
	  tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	  tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
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
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
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
		      tree res = generic_simplify_220 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_222 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			    tree res = generic_simplify_223 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
				  tree res = generic_simplify_224 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			    tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
			    tree res = generic_simplify_226 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
				  tree res = generic_simplify_227 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
		      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_229 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_230 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR);
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
		tree res = generic_simplify_231 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR);
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
		    tree res = generic_simplify_229 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_230 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR);
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
		tree res = generic_simplify_231 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR);
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1565;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1565;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1565;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1565:;
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1566;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1566;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1566;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1566;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1566:;
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
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP128);
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
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP128);
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
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP16);
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
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP16);
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
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP32);
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
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP32);
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
		      tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP64);
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
			    tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP64);
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1567;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1567;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1567;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1567;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1567:;
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
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1568;
			    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1568;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1568;
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
next_after_fail1568:;
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
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1569;
			    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1569;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1569;
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
next_after_fail1569:;
			  }
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
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1570;
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
next_after_fail1570:;
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
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1571;
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
next_after_fail1571:;
			  }
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
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case ORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNLT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNLE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNGE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
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
	      tree res = generic_simplify_237 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_238 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_240 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	tree res = generic_simplify_291 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	  tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	    tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	  tree res = generic_simplify_246 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, PLUS_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, MINUS_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_248 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case REAL_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_252 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
		tree res = generic_simplify_253 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	      const enum tree_code eqne = NE_EXPR;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1572;
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
next_after_fail1572:;
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
	      const enum tree_code eqne = NE_EXPR;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1573;
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
next_after_fail1573:;
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
		tree res = generic_simplify_256 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_257 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			    tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_259 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_260 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, NE_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, NE_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, NE_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, NE_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, NE_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, NE_EXPR);
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
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_SQRT, NE_EXPR);
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
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_SQRT, NE_EXPR);
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
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				      tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, NE_EXPR);
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
				      tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			    tree res = generic_simplify_265 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_265 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	    tree res = generic_simplify_266 (loc, type, _p0, _p1, captures, NE_EXPR);
	    if (res) return res;
	  }
        }
    }
}
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_266 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree res = generic_simplify_268 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
			tree res = generic_simplify_269 (loc, type, _p0, _p1, captures, NE_EXPR, LT_EXPR);
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
		  tree res = generic_simplify_270 (loc, type, _p0, _p1, captures, NE_EXPR, LT_EXPR);
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
			tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR, LT_EXPR);
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
			tree res = generic_simplify_272 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
			tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR, LT_EXPR);
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
			tree res = generic_simplify_273 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
			    tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    tree res = generic_simplify_276 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_277 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
			  tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
if (integer_zerop (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (TREE_CODE (TREE_TYPE (captures[0])) == BOOLEAN_TYPE
 && types_match (type, TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1574;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1574;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 979, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1574:;
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
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
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
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1575;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1575;
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
next_after_fail1575:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1576;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1576;
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
next_after_fail1576:;
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
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
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
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1577;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1577;
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
next_after_fail1577:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1578;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1578;
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
next_after_fail1578:;
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
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
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
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1579;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1579;
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
next_after_fail1579:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1580;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1580;
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
next_after_fail1580:;
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
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
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
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1581;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1581;
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
next_after_fail1581:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1582;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1582;
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
next_after_fail1582:;
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
				      tree res = generic_simplify_279 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_280 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_280 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_281 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZ);
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZ);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFS);
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
		    tree res = generic_simplify_288 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFSIMAX);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNT);
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
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZL);
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZL);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFSL);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZIMAX);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_POPCOUNT);
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
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_CLZ);
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
		      tree res = generic_simplify_283 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_CTZ);
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
		      tree res = generic_simplify_285 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_FFS);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZIMAX);
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
		    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
		      tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZLL);
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
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZLL);
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
		      tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFSLL);
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
generic_simplify_UNGE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
 && (TREE_CODE_CLASS (UNGE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1751;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNGE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1751;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNGE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1751;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1751:;
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
 && (TREE_CODE_CLASS (UNGE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1752;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1752;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNGE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1752;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNGE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1752;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1752:;
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
 && (TREE_CODE_CLASS (UNGE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1753;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1753;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNGE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1753;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNGE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1753;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1753:;
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
	tree res = generic_simplify_536 (loc, type, _p0, _p1, captures, UNGE_EXPR);
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNGE_EXPR, GE_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNGE_EXPR, UNLE_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNGE_EXPR, UNLE_EXPR);
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
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNGE_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_VEC_COND_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  if (integer_all_onesp (captures[0])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1863;
	      {
		tree _r;
		_r = captures[1];
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1064, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1863:;
	    }
	  else
	    {
	      if (integer_zerop (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1864;
		  {
		    tree _r;
		    _r = captures[2];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1864:;
		}
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	switch (TREE_CODE (_p2))
	  {
	  case VECTOR_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
		if (VECTOR_BOOLEAN_TYPE_P (type)
 && types_match (type, TREE_TYPE (captures[0]))
)
		  {
		    if (integer_zerop (captures[1]) && integer_all_onesp (captures[2])
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1865;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree _r;
			  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (TREE_SIDE_EFFECTS (captures[2]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1066, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1865:;
		      }
		    else
		      {
			if (integer_all_onesp (captures[1]) && integer_zerop (captures[2])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1866;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1067, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1866:;
			  }
		      }
		  }
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
    case NE_EXPR:
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_519 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_519 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_520 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_520 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
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
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_521 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1867;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1867;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1867:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1868;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1868;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1868:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1869;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1869;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1869:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1870;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1870;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1870:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1871;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1871;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1871:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1872;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1872;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1872:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1873;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1873;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1873:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1874;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1874;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1874:;
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
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _p2 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1875;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1875:;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VEC_COND_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	tree _q41 = TREE_OPERAND (_p2, 1);
	tree _q42 = TREE_OPERAND (_p2, 2);
	if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _q42 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1876;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1876:;
	    }
	  }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
	  if (inverse_conditions_p (captures[0], captures[2])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1877;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (TREE_SIDE_EFFECTS (captures[4]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1041, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1877:;
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
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32, _p2 };
	  if (inverse_conditions_p (captures[0], captures[1])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1878;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[4];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1042, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1878:;
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1879;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1043, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1879:;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1880;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1880;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1880;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1880:;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1881;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1881;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1881;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1881;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1881:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1882;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1882;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1882;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1882:;
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
				      tree res = generic_simplify_522 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1883;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1883;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1883;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1883:;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1884;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1884;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1884;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1884;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1884:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1885;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1885;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1885;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1885:;
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
				      tree res = generic_simplify_522 (loc, type, _p0, _p1, _p2, captures, UNEQ_EXPR);
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1886;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1886;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1886:;
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
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1887;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1887;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1887;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1887:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1888;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1888;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1888;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1888:;
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
			    tree res = generic_simplify_523 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1889;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1889;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1889:;
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
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1890;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1890;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1890;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1890:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1891;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1891;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1891;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1891:;
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
			    tree res = generic_simplify_523 (loc, type, _p0, _p1, _p2, captures, LTGT_EXPR);
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1892;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1892;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1892:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1893;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1893;
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
next_after_fail1893:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1894;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1894;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1894:;
				    }
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1895;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1895;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1895:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1896;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1896;
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
next_after_fail1896:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1897;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1897;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1897:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1898;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1898;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1898;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1898:;
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1899;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1899;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1899:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1900;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1900;
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
next_after_fail1900:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1901;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1901;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1901:;
				    }
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1902;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1902;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1902:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1903;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1903;
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
next_after_fail1903:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1904;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1904;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1904:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1905;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1905;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1905;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1905:;
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1906;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1906;
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
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1906:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1907;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1907;
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
next_after_fail1907:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1908;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1908;
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
next_after_fail1908:;
				    }
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1909;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1909;
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
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1909:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1910;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1910;
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
next_after_fail1910:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1911;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1911;
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
next_after_fail1911:;
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
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1912;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1912;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1912;
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
next_after_fail1912:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1913;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1913;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1913;
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
next_after_fail1913:;
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1914;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1914;
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
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1914:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1915;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1915;
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
next_after_fail1915:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1916;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1916;
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
next_after_fail1916:;
				    }
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1917;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1917;
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
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1917:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1918;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1918;
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
next_after_fail1918:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1919;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1919;
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
next_after_fail1919:;
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
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1920;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1920;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1920;
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
next_after_fail1920:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1921;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1921;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1921;
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
next_after_fail1921:;
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
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if (tree_truth_valued_p (_q20))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	    if (VEC_COND_EXPR == VEC_COND_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1922;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 = captures[2];
		  tree res_op2;
		  res_op2 = captures[1];
		  tree _r;
		  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1922:;
	      }
	  }
        }
    }
}
  switch (TREE_CODE (_p1))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_ADD:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_AND:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_524 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_ADD:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_AND:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_525 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		if (res) return res;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_FMA:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_526 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_FMA:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
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
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_527 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		if (res) return res;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_LEN_ADD:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_LEN_ADD:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_AND:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_DIV:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_IOR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MAX:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MIN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MOD:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MUL:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SHL:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SHR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SUB:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_XOR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMAX:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMIN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_RDIV:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_528 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_LEN_ADD:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
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
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_LEN_ADD:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_AND:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_DIV:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_IOR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MAX:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MIN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MOD:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MUL:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SHL:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SHR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SUB:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_XOR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMAX:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMIN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_RDIV:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_COPYSIGN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
		if (res) return res;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_LEN_FMA:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_LEN_FMA:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMS:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FNMA:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FNMS:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_530 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_LEN_FMA:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
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
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_LEN_FMA:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMS:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FNMA:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FNMS:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_531 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
		if (res) return res;
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
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_533 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_533 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_533 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_533 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_532 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
  return NULL_TREE;
}
#pragma GCC diagnostic pop
