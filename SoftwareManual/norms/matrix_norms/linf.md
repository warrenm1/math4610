# l-infinity Matrix Norm 
This routine evaluates a matrix for the max absolute row sum

**Routine Name:**           m_linf_norm

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_linf.py

**Description/Purpose:** This routine evaluates each row of the matrix, and stores the max absolute sum.

**Input:** This routine takes a matrix.

**Output:** This routine returns the max absolute row sum.

**Usage/Example:**

	A = [[1,2,1,4],[2,4,7,8],[6,3,6,5],[9,8,7,6]]

	print(m_linf_norm(A))

Displays:

	30

**Implementation/Code:** The following is the code for m_linf_norm

	def m_linf_norm(A):
	    max = 0
	    for i in range(len(A)):
	        sum = 0
	        for j in range(len(A[i])):
	            sum += abs(A[i][j])

	        if sum > max:
	            max = sum

	    return max

**Last Modified:** November/2018
