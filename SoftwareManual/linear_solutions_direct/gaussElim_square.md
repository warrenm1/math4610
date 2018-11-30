# Gauss Elimination for Square Matrix 
This routine performs the Gauss Elimination on a square matrix.

**Routine Name:**           gauss_elim_nxn

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python GaussElimSquare.py

**Description/Purpose:** This routine performs the Gauss Elimination on a unique, square matrix.

**Input:** This routine takes a unique square matrix (A) and an array of the same size (b).

**Output:** This routine overwrites the matrix with the RREF form. It also changes the order of b to match when the matrix had to pivot.

**Usage/Example:**

	A = [[0.02,0.01,0,0],[1,2,1,0],[0,1,2,1],[0,0,100,200]]
	b = [0.02,1,4,800]

	A,b = gauss_elim_nxn(A,b)

	for i in range(len(A)):
	    print(A[i])

	print()
	print(b)

Displays:

	[1, 2, 1, 0]
	[0.0, 1.0, 2.0, 1.0]
	[0.0, 0.0, 100.0, 200.0]
	[0.0, 0.0, 0.0, -0.04999999999999999]

	[1, 4.0, 800.0, -0.19999999999999996]

**Implementation/Code:** The following is the code for gauss_elim_nxn

	import sys

	def gauss_elim_nxn(A, b):
	    n = len(b)

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
	            b[maxi],b[k] = b[k],b[maxi]
	
	        for i in range(k+1,n):
	            factor = A[i][k] / A[k][k]
	            for j in range(k,n):
	                A[i][j] = A[i][j] - factor * A[k][j]
	            b[i] = b[i] - factor * b[k]

	    return A,b

**Last Modified:** November/2018
