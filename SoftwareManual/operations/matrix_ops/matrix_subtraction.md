# Matrix Subtaction 
This routine calculates and returns the difference between two matrices

**Routine Name:**           m_sub

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_sub.py

**Description/Purpose:** This routine takes two matrices of the same size, calculates the difference between them, and returns the result

**Input:** This routine takes two matrices of the same numerical data type and same size

**Output:** This routine returns an matrix of the same numerical data type as those matrices passed in

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]
	B = [[4,5,6],[7,8,9],[1,2,3]]

	C = m_sub(A,B)

	for i in range(len(C)):
	    print(C[i])

Results in:

	[-3, -3, -3]
	[-3, -3, -3]
	[6, 6, 6]

**Implementation/Code:** The following is the code for m_sub

	def m_sub(A,B):
	    C = []

	    for i in range(len(A)):
	        temp = []
	        for j in range(len(A[i])):
	            temp.append(A[i][j] - B[i][j])
	        C.append(temp)

	    return C

**Last Modified:** November/2018
