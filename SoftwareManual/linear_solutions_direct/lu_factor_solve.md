# LU Factorization & FS + BS 
This routine utilized the LU Factorization with Forward and Back Substitutions.

**Routine Name:**           LU_factor

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python LU_Factorization.py

**Description/Purpose:** This routine uses GE to modify the matrix A into a single matrix (for storage purposes) representing the LU matrices, then uses Forward then Back Substitution to solve the System of Linear Equations

**Input:** This routine takes a square matrix (A) and an array of the same size (b).

**Output:** This routine returns the array representing the solution (x).

**Usage/Example:**

	A = [[0.02,0.01,0,0],[1,2,1,0],[0,1,2,1],[0,0,100,200]]
	b = [0.02,1,4,800]

	x = LU_factor(A,b)

	print(x)

Displays:

	[-24.560238800000015, 19.18047760000001, -12.800716400000006, 10.400955200000002]

**Implementation/Code:** The following is the code for LU_factor

	def LU_factor(A,b):
	    n = len(b)
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
	            A[i][k] = factor

	    return back_sub(A,forward_sub(A,b))


	def back_sub(A,b):
	    #initialize x as an array of 0s
	    x = [0 for i in range(len(b))]
	
	    #Init X_n
	    n = len(b)-1
	    x[n] = b[n]/A[n][n]
	
	    #Back Substitution logic
	    for k in range(n-1,-1,-1):
	        ax = 0
	        for i in range(n,k,-1):
	            ax += x[i]*A[k][i]
	        x[k] = (b[k] - ax) / A[k][k]
	
	    return x
	
	def forward_sub(A,b):
	    #initialize x as an array of 0s
	    x = [0 for i in range(len(b))]
	
	    #Init X_0
	    x[0] = b[0]
	
	    #Forward Substitution logic
	    for i in range(1,len(A)):
	        ax = 0
	        for j in range(i):
	            ax += x[j]*A[i][j]
	        x[i] = b[i] - ax
	
	    return x

**Last Modified:** November/2018
