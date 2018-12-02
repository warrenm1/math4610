# Cholesky & FS + BS
This routine encorporates methods and operations to solve a system of linear equations using the Cholesky Method.

**Routine Name:**           cholesky

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python Cholesky_solve.py

**Description/Purpose:** This routine uses the Matrix Generator to create a matrix and the solution (b), then, using matrix operations, it sets up and solves the system of equations using the Cholesky Method.

**Input:** This routine needs a matrix (A) and a vector (b). The matrix must be symmetric and diagonally dominant.

**Output:** This routine returns the solution of the system of linear equations as a vector (x).

**Usage/Example:**

	n = 5
	C = matrixGenerator.matrixGen(n)
	Ct = m_trans(C)
	A = m_mult(Ct,C)
	b = matrixGenerator.vectorGen(A)

	print(cholesky(A,b))

Results in: 

	[4197.925853760483, 3937.322868165986, 6691.534799717942, 5047.037374558576, 6583.32010519434]

**Implementation/Code:** The following is the code for cholesky

	from math import sqrt
	import matrixGenerator
	from LinearSystems.BackSubstitution import back_sub
	from LinearSystems.ForwardSubstitution import forward_sub
	
	#Adapted from https://rosettacode.org/wiki/Cholesky_decomposition#Python
	def cholesky(A,b):
	    L = [[0.0] * len(A) for _ in range(len(A))]
	    for i in range(len(A)):
	        for j in range(i+1):
	            s = sum(L[i][k] * L[j][k] for k in range(j))
	            if i == j:
	                L[i][j] = sqrt(A[i][i] - s)
	            else:
	                L[i][j] = (1.0 / L[j][j] * (A[i][j] - s))
	
	    y = back_sub(L,b)
	    L = m_trans(L)
	
	    return forward_sub(L,y)
	
	def m_trans(A):
	    At = []
	
	    for i in range(len(A)):
	        temp = []
	        for j in range(len(A[i])):
	            temp.append(A[j][i])
	
	        At.append(temp)
	
	    return At
	
	def m_mult(A,B):
	    C = []
	
	    for row in range(len(A)):
	        temp = []
	        for col in range(len(B[row])):
	            temp.append(v_dot(A[row],[i[col] for i in B]))
	
	        C.append(temp)
	
	    return C

	def v_dot(v,u):
	    prod = 0

	    for i in range(len(v)):
	        prod += v[i]*u[i]

	    return prod

**Last Modified:** November/2018
