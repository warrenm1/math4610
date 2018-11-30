# Back Substitution 
This routine performs the back substitution on system of linear equations.

**Routine Name:**           back_sub

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python BackSubstitution.py

**Description/Purpose:** This routine performs a back substitution on a system of linear equations involving an nxn upper triangular matrix

**Input:** This routine takes an nxn matrix (A) and an array of size n (b). The matrix is an upper triangular matrix and doesn't the determinant of the matrix is not zero.

**Output:** This routine returns an array of size n representing the solution for the system of linear equations.

**Usage/Example:**

	A = [[1,2,3,4],[0,4,6,3],[0,0,7,4],[0,0,0,4]]
	b = [12,2,13,15]

	print(back_sub(A,b))

Displays:

	[1.625, -1.8839285714285716, -0.2857142857142857, 3.75]

**Implementation/Code:** The following is the code for back_sub

	import sys

	def back_sub(A,b):
	    #Check if determinant is 0
	    if m_det(A) == 0:
	        print("Please use a matrix with a determinant that is not 0")
	        sys.exit()

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

	#Taken from Matrix Determinant Operations in the Software Manual
	def m_det(A):
	    if len(A) != len(A[0]):
	        return 0
	    if len(A) == 1:
	        return A[0][0]
	    if len(A) == 2:
	        return A[0][0]*A[1][1] - A[1][0]*A[0][1]
	    det = 0
	    for j in range(len(A)):
	        det += ((-1)**j) * A[0][j] * m_det(m_reduced(A,0,j))
	    return det

	def m_reduced(A,i,j):
	    return [row[:j] + row[j+1:] for row in (A[:i] + A[i+1:])]

**Last Modified:** November/2018
