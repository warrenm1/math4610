# Matrix Scalar Multiplication 
This routine multiplies a scalar value to each element of a matrix

**Routine Name:**           m_scalar

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_scal_mult.py

**Description/Purpose:** This routine takes a matrix and a scalar value and multiplies it through

**Input:** This routine takes a matrix by reference and a scalar value, both of the same numerical data type

**Output:** This routine adjusts the matrix by reference, so it does not have an output

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]
	s = 24

	C = m_scal_mult(A,s)

	for i in range(len(C)):
	    print(C[i])

Displays:

	[24, 48, 72]
	[96, 120, 144]
	[168, 192, 216]

**Implementation/Code:** The following is the code for m_scal_mult()

	def m_scal_mult(A,s):
	    for i in range(len(A)):
	        for j in range(len(A[i])):
	            A[i][j] = A[i][j] * s

	    return A

**Last Modified:** November/2018
