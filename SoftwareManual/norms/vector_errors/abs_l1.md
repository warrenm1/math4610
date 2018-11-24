# Absolute Error for l1 Vector Norm 
Calculates the l1 vector norm of two vectors and evaluates the absolute error of the norms.

**Routine Name:**           absErr_v_l1

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python abs_l1_v.py

**Description/Purpose:** This routine combines the v_l1_norm and the abs_error routines to find the absolute error in the l1 vector norms of an "exact" vector and a vector used to approximate the exact error.

**Input:** This routine takes two vectors, an "exact" vector and the approximation of the exact vector.

**Output:** This routine returns a single value representing the absolute error.

**Usage/Example:**

	v = [1,2,3,4,5,6,7,8,-23]
	u = [1.0003,2.001,3.000001,3.999999999,5.00000000000126,6,7.0000000000006959,8.0,-23.00000009]

	print(absErr_v_l1(v,u))

Displays:

	0.001301089001955802

**Implementation/Code:** The following is the code for absErr_v_l1

	def absErr_v_l1(v,u):
	    return abs_error(v_l1_norm(v),v_l1_norm(u))

	def v_l1_norm(a):
	    sum = 0

	    for i in range(len(a)):
	        sum += abs(a[i])

	    return sum

	def abs_error(x,y):
	    return abs(x-y)

**Last Modified:** November/2018
