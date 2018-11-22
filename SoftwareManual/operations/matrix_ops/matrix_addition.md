# Matrix Addition 
This routine returns the sum of two matrices

**Routine Name:**           m_add

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_add.py

**Description/Purpose:** This routine takes two matrices and adds them together, element by element, and returns the result.

**Input:** This routine takes two matrices of the same size and of the same numerical data type

**Output:** This routine returns a single matrix of the same numerical data type as those passed in

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]
	B = [[4,5,6],[7,8,9],[1,2,3]]

	C = m_add(A,B)

	for i in range(len(C)):
	    print(C[i])

Displays:

	[5, 7, 9]
	[11, 13, 15]
	[8, 10, 12]

**Implementation/Code:** The following is the code for m_add

	def m_add(A,B):
	    C = []

	    for i in range(len(A)):
	        temp = []
	        for j in range(len(A[i])):
	            temp.append(A[i][j] + B[i][j])
	        C.append(temp)

	    return C

**Last Modified:** November/2018
