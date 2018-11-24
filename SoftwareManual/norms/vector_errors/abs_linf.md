# Absolute Error of l-infinity Vector Norm 
This routine calculates the absolute error of two l-infinity vector norms.

**Routine Name:**           absErr_v_linf

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python abs_linf_v.py

**Description/Purpose:** This routine computes the absolute error in approximating of an "exact" vector and a vector used to approximate the exact vector.

**Input:** This routine takes two vector, an "exact" vector and a vector used to approximate the exact vector.

**Output:** This routine returns a value that represents the absolute error for the two l-infinity vector norms.

**Usage/Example:**

	v = [1,2,3,4,5,6,7,8,-23]
	u = [1.0003,2.001,3.000001,3.999999999,5.00000000000126,6,7.0000000000006959,8.0,-23.00000009]

	print(absErr_v_linf(v,u))

Displays:

	9.000000034120603e-08

**Implementation/Code:** The following is the code for absErr_v_linf

	def absErr_v_linf(v,u):
	    return abs_error(v_linf_norm(v),v_linf_norm(u))

	def v_linf_norm(v):
	    max = v[0]

	    for i in range(len(v)):
	        if max < abs(v[i]):
	            max = abs(v[i])

	    return max

	def abs_error(x,y):
	    return abs(x-y)

**Last Modified:** November/2018
