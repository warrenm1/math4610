# Matrix Transpose 
This routine computes and returns the transpose of a matrix

**Routine Name:**           m_trans

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_trans.py

**Description/Purpose:** This routine takes a matrix, transforms it into the transpose, and returns the transpose

**Input:** This routine requires a matrix by reference of a numerical data type

**Output:** This routine returns a matrix of a numerical data type that has been made its transpose

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]
	
	C = m_trans(A)

	for i in range(len(C)):
	    print(C[i])

Displays:

	[1, 4, 7]
	[2, 5, 8]
	[3, 6, 9]

**Implementation/Code:** The following is the code for m_trans()

	def m_trans(A):
	    At = []

	    for i in range(len(A)):
	        temp = []
	        for j in range(len(A[i])):
	            temp.append(A[j][i])

	        At.append(temp)

	    return At

**Last Modified:** November/2018
