# Matrix - Vector Multiplication 
Multiplication of a Matrix into a Vector

**Routine Name:**           m_v_mult

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_v_mult.py

**Description/Purpose:** This routine takes a matrix and a vector, multiplies them together, and returns the resulting vector. Ax = b.

**Input:** This routine takes a matrix and a vector of a numerical data type, both by reference

**Output:** This routine returns a sized vector of the same numerical data type as those passed in

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]
	x = [10,11,12]

	b = m_v_mult(A,x)

	print(b)

Displays:

	[120, 165, 216]

**Implementation/Code:** The following is the code for m_v_mult

	def m_v_mult(A,x):
	    b = []
	    for i in range(len(x)):
	        b.append(0)

	    for i in range(len(A)):
	        for j in range(len(x)):
	            b[j] = b[j] + (A[i][j] * x[j])

	    return b

**Last Modified:** November/2018
