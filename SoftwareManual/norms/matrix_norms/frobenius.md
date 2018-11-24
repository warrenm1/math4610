# Frobenius Norm (l2 Matrix Norm) 
This routine evaluates a given matrix and returns the l2 norm

**Routine Name:**           frobenius

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python frobenius.py

**Description/Purpose:** This routine sums the square of every element in the matrix, then calculates the square root.

**Input:** This routine takes a matrix.

**Output:** This routine returns a single value representing the square root of the square sum of each element of a matrix.

**Usage/Example:**

	A = [[1,2,1,4],[2,4,7,8],[6,3,6,5],[9,8,7,6]]

	print(frobenius(A))

Displays:

	8.888194417315589

**Implementation/Code:** The following is the code for frobenius

	def frobenius(A):
	    sum = 0
	    for i in range(len(A)):
	        for j in range(len(A[i])):
	            sum += abs(A[i][j])

	    return sum**(1/2)

**Last Modified:** November/2018
