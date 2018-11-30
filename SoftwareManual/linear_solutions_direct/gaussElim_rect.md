# Gauss Elimination for NonSquare Matrix 
This routine makes a nonsquare matrix a square matrix, then performs the gauss elimination routine on it.

**Routine Name:**           gauss_elim_nxm

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python GaussElimRect.py

**Description/Purpose:** This routine adds either rows or columns of elements very close to zero in order to make it square, to make the gauss elimination process easier.

**Input:** This routine takes a matrix (A) and an array (b).

**Output:** This routine overwrites the matrix A, and reorders b based on the pivots of A.

**Usage/Example:**

	A = [[0.02,0.01,0,0,7],[1,2,1,0,2],[0,1,2,1,8],[0,0,100,200,400]]
	b = [0.02,1,4,800]
	
	A,b = gauss_elim_nxm(A,b)

	for i in range(len(A)):
	    print(A[i])
	
	print()
	print(b)

Displays:

	[1, 2, 1, 0, 2]
	[0.0, 1.0, 2.0, 1.0, 8.0]
	[0.0, 0.0, 100.0, 200.0, 400.0]
	[0.0, 0.0, 0.0, -0.04999999999999999, 7.04]
	[0.0, 0.0, 0.0, 0.0, -2.826000000000001e-12]

	[1, 4.0, 800.0, -0.19999999999999996, -3.9999999999999994e-14]

**Implementation/Code:** The following is the code for gauss_elim_nxm

	def gauss_elim_nxm(A, b):
	    n = len(A)
	    m = len(A[0])

	    if n > m:
	        diff = n-m
	        for i in range(len(A)):
	            for j in range(diff):
	                A[i].append(0.00000000000001)
	        m = len(A[0])

	    if m > n:
	        diff = m-n
	        for i in range(len(A)):
	            temp = [0.00000000000001 for j in range(len(A[0]))]
	        for j in range(diff):
	            A.append(temp)
	            b.append(0.00000000000001)
	        n = len(A)

	    for k in range(n-1):
	        maxi = k
	        max = 0
	        for q in range(k,n):
	            if A[q][k] > max:
	                max, maxi = A[q][k],q

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
