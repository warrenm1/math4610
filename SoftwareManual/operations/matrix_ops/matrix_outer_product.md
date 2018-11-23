# Kronecker Product 
Outer Product of two matrices

**Routine Name:**           m_kronecker

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python m_kronecker.py

**Description/Purpose:** This routine takes two matrices and computes the Outer Product of the two

**Input:** This routine requires two matrices of any size.

**Output:** This routine returns a single matrix of size ((rows in A)x(rows in B))X((cols in A)x(cols in B))

**Usage/Example:**

	A = [[1,2,1,4],[2,5,7,4],[7,4,2,7],[4,6,7,7]]
	B = [[1,1,4,3],[6,4,7,6],[4,3,4,3],[7,7,7,7]]

	for row in m_kronecker(A,B):
	    print(row)

Prints:

	[1, 1, 4, 3, 2, 2, 8, 6, 1, 1, 4, 3, 4, 4, 16, 12]
	[6, 4, 7, 6, 12, 8, 14, 12, 6, 4, 7, 6, 24, 16, 28, 24]
	[4, 3, 4, 3, 8, 6, 8, 6, 4, 3, 4, 3, 16, 12, 16, 12]
	[7, 7, 7, 7, 14, 14, 14, 14, 7, 7, 7, 7, 28, 28, 28, 28]
	[2, 2, 8, 6, 5, 5, 20, 15, 7, 7, 28, 21, 4, 4, 16, 12]
	[12, 8, 14, 12, 30, 20, 35, 30, 42, 28, 49, 42, 24, 16, 28, 24]
	[8, 6, 8, 6, 20, 15, 20, 15, 28, 21, 28, 21, 16, 12, 16, 12]
	[14, 14, 14, 14, 35, 35, 35, 35, 49, 49, 49, 49, 28, 28, 28, 28]
	[7, 7, 28, 21, 4, 4, 16, 12, 2, 2, 8, 6, 7, 7, 28, 21]
	[42, 28, 49, 42, 24, 16, 28, 24, 12, 8, 14, 12, 42, 28, 49, 42]
	[28, 21, 28, 21, 16, 12, 16, 12, 8, 6, 8, 6, 28, 21, 28, 21]
	[49, 49, 49, 49, 28, 28, 28, 28, 14, 14, 14, 14, 49, 49, 49, 49]
	[4, 4, 16, 12, 6, 6, 24, 18, 7, 7, 28, 21, 7, 7, 28, 21]
	[24, 16, 28, 24, 36, 24, 42, 36, 42, 28, 49, 42, 42, 28, 49, 42]
	[16, 12, 16, 12, 24, 18, 24, 18, 28, 21, 28, 21, 28, 21, 28, 21]
	[28, 28, 28, 28, 42, 42, 42, 42, 49, 49, 49, 49, 49, 49, 49, 49]

**Implementation/Code:** The following is the code for m_kronecker

	#taken from https://rosettacode.org/wiki/Kronecker_product#Python
	def m_kronecker(A,B):
	    return [[num1 * num2 for num1 in elem1 for num2 in B[row]] for elem1 in A for row in range(len(B))]

**Last Modified:** November/2018
