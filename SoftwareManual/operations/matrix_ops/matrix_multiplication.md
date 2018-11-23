# Matrix Multiplication 
Using a series of Vector Dot Products, this routine multiplies two vectors together. 

**Routine Name:**           m_mult

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python m_mult.py

**Description/Purpose:** This routine multiplies an mXn matrix with an nXp matric, and returns an mXp matrix

**Input:** This routine needs two matrices. The number of columns in the first must be the same as the number of rows in the second.

**Output:** This routine returns a matrix with the same number of rows as the first inputed matrix, and the same number of columns as the second matrix.

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]
	B = [[4,5,6],[7,8,9],[1,2,3]]

	C = m_mult(A,B)

	for i in range(len(C)):
	    print(C[i])

Displays:

	[21, 27, 33]
	[57, 72, 87]
	[93, 117, 141]

**Implementation/Code:** The following is the code for m_mult

	import sys

	def m_mult(A,B):
	    if len(A[0]) != len(B):
	        print("Make sure the matrices are of size: A = mXn, B = nXp")
	        sys.exit(1)

	    C = []

	    for row in range(len(A)):
	        temp = []
	        for col in range(len(B[row])):
	            temp.append(v_dot(A[row],[i[col] for i in B]))

	        C.append(temp)

	    return C

	def v_dot(v,u): #taken from Vector Dot Product routine in the Software Manual
	    prod = 0

	    for i in range(len(v)):
	        prod += v[i]*u[i]

	    return prod

**Last Modified:** November/2018
