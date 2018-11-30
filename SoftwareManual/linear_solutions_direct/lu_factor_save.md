# LU Factorization 
This routine performs the Gauss Elimination on a matrix, then saves the factor used in the elimination.

**Routine Name:**           LU_factor

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

for example,

    python LU_Factorization_saveFactor.py

**Description/Purpose:** This routine is exactly like the Gauss Elimination, except it stores the factor used in the elimination process in the matrix's lower triangular portion.

**Input:** This routine takes a square matrix (A).

**Output:** This routine overwrites the inputted matrix and returns it.

**Usage/Example:**

	A = [[0.02,0.01,0,0],[1,2,1,0],[0,1,2,1],[0,0,100,200]]

	U = LU_factor(A)

	for i in range(len(U)):
	    print(U[i])

Displays:

	[1, 2, 1, 0]
	[0.02, 1.0, 2.0, 1.0]
	[0.0, -0.03, 100.0, 200.0]
	[0.0, 0.0, 0.00039999999999999996, -0.04999999999999999]

**Implementation/Code:** The following is the code for LU_factor

	import sys

	def LU_factor(A):
	    n = len(A)

	    for k in range(n-1):
	        maxi = k
	        max = 0
	        for q in range(k,n):
	            if A[q][k] > max:
	                max, maxi = A[q][k],q
	        if max == 0:
	            print("Not a Unique Solution")
	            sys.exit()
	        if maxi != k:
	            for r in range(k,n):
	                A[maxi][r],A[k][r] = A[k][r], A[maxi][r]

	        for i in range(k+1,n):
	            factor = A[i][k] / A[k][k]
	            for j in range(k,n):
	                A[i][j] = A[i][j] - factor * A[k][j]
	            A[i][k] = factor

	    return A

**Last Modified:** November/2018
