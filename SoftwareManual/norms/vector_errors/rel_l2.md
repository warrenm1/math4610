# Relative Error of l2 Vector Norm 
This routine computes the relative error of two l2 Vector Norms

**Routine Name:**           relErr_v_l2

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python rel_l2_v.py

**Description/Purpose:** This routine computes the relative error in the approximation of an "exact" vector and a vector used to approximate the exact vector.

**Input:** This routine takes two vectors, an "exact" vector and a vector used to approximate the exact vector.

**Output:** This routine returns a single value representing the relative error of the l2 vector norms

**Usage/Example:**

	v = [1,2,3,4,5,6,7,8,-23]
	u = [1.0003,2.001,3.000001,3.999999999,5.00000000000126,6,7.0000000000006959,8.0,-23.00000009]

	print(relErr_v_l2(v,u))

Displays:

	3.1454398166187466e-06

**Implementation/Code:** The following is the code for relErr_v_l2

	def relErr_v_l2(v,u):
	    return rel_error(v_l2_norm(v),v_l2_norm(u))

	def v_l2_norm(v):
	    sum = 0

	    for i in range(len(v)):
	        sum += (v[i])**2

	    return sum**(1/2)

	def rel_error(x,y):
	    return abs(x-y)/x

**Last Modified:** November/2018
