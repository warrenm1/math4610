# Relative Error for l1 Vector Norm 
This routine evaluates the relative error of two l1 vector norms

**Routine Name:**           relErr_v_l1

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python rel_l1_v.py

**Description/Purpose:** This routine computes the Relative Error in the approximation of an "exact" vector and a vector used to approximate the exact vector.

**Input:** This routine takes two vectors, an "exact" vector and a vector used to approximate the exact vector.

**Output:** This routine returns a single value representing the relative error of the two l1 vector norms.

**Usage/Example:**

	v = [1,2,3,4,5,6,7,8,-23]
	u = [1.0003,2.001,3.000001,3.999999999,5.00000000000126,6,7.0000000000006959,8.0,-23.00000009]

	print(relErr_v_l1(v,u))

Displays:

	2.2052355965352573e-05

**Implementation/Code:** The following is the code for relErr_v_l1

	def relErr_v_l1(v,u):
	    return rel_error(v_l1_norm(v),v_l1_norm(u))

	def v_l1_norm(a):
	    sum = 0

	    for i in range(len(a)):
	        sum += abs(a[i])

	    return sum

	def rel_error(x,y):
	    return abs(x-y)/x

**Last Modified:** November/2018
