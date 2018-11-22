# Vector Scalar Multiplication 
This routine takes a vector and multiplies each element by a scalar

**Routine Name:**           v_scal_mult

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python v_scal_mult.py

**Description/Purpose:** This routine takes a vector and a scalar, and multiplies the scalar into each element of the vector

**Input:** This routine takes a vector by referene and a scalar.

**Output:** This routine returns a single vector that is the same size as the inputed vector

**Usage/Example:**

	v1 = [10,20,30]
	s = 12

	v = v_scal_mult(v1,s)
	
	print(v)

Displays:

	[120, 240, 360]

**Implementation/Code:** The following is the code for v_scal_mult()

	def v_scal_mult(v,s):
	    for i in range(len(v)):
	        v[i] = v[i] * s

	    return v

**Last Modified:** November/2018
