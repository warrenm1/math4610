# Forward Substitution 
This routine executes the forward substitution to solve a linear system of equations

**Routine Name:**           forward_sub

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python ForwardSubstitution.py

**Description/Purpose:** This routine performs a forward substitution on an nxn lower triangular matrix.

**Input:** This routine takes an nxn matrix (A) and a size n array (b). The matrix is a lower triangular matrix.

**Output:** This routine returns a sized n array representing the solution of the linear system of equations.

**Usage/Example:**

	A = [[1,0,0,0],[7.1,1,0,0],[1,2,1,0],[24,1,0,1]]
	b = [1,4,8,-0.2]

	print(forward_sub(A,b))

Displays:

	[1, -3.0999999999999996, 13.2, -21.099999999999998]

**Implementation/Code:** The following is the code for forward_sub

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
