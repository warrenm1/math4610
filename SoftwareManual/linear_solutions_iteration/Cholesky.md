# Cholesky Factorization 
This routine covers the basic Cholesky Factorization without solving the system of linear equations.

**Routine Name:**           cholesky

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python Cholesky.py

**Description/Purpose:** This routine computes the Cholesky Factorization of a symmetric matrix. The routine is adapted from the routine found at https://rosettacode.org/wiki/Cholesky_decomposition#Python

**Input:** This routine takes a square matrix (A) that is symmetric and positive definite.

**Output:** This routine returns the Matrix L, which is a triangular matrix, such that LL^T = A

**Usage/Example:**

	A = [[1.06,0.41,1.84,-0.85,0.34],[0.41,6.2,1.86,2.88,-0.08],[1.84,1.68,7.01,-0.28,-0.36],[-0.85,2.88,-0.28,2.56,-0.7],[0.34,-0.08,-0.36,-0.7,1.94]]
	
	L = cholesky(A)

	for i in range(len(L)):
	    print(L[i])

Displays:

	[1.0295630140987, 0.0, 0.0, 0.0, 0.0]
	[0.3982272035664783, 2.457929025488658, 0.0, 0.0, 0.0]
	[1.7871659867373662, 0.39395030399624575, 1.913332405472275, 0.0, 0.0]
	[-0.8255929830036746, 1.305478535641495, 0.35601656575117135, 0.21765620667735164, 0.0]
	[0.3302371932014699, -0.08605188830471386, -0.4788966669186891, -0.6640033515836267, 1.0739161979621543]

**Implementation/Code:** The following is the code for cholesky

	from math import sqrt

	def cholesky(A):
	    L = [[0.0] * len(A) for _ in range(len(A))]
	    for i in range(len(A)):
	        for j in range(i+1):
	            s = sum(L[i][k] * L[j][k] for k in range(j))
	            if i == j:
	                L[i][j] = sqrt(A[i][i] - s)
	            else:
	                 L[i][j] = (1.0 / L[j][j] * (A[i][j] - s))
	    return L

**Last Modified:** November/2018
