# Trace of a Matrix 
This routine calculates and returns the trace value of a matrix

**Routine Name:**           m_trace

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python m_trance.py

**Description/Purpose:** This routine sums together the diagonal values of the matrix and returns that value

**Input:** This routine requires a single matrix of a numerical data type

**Output:** This routine returns the trace value of that matrix of the same numerical data type

**Usage/Example:**

	A = [[1,2,3],[4,5,6],[7,8,9]]

	trace = m_trace(A)

	print(trace)

Displays:

	15

**Implementation/Code:** The following is the code for m_trace()

	def m_trace(A):
	    trace = 0

	    for i in range(len(A)):
	        for j in range(len(A[i])):
	            if i == j:
	                trace = trace + A[i][j]

	    return trace

**Last Modified:** November/2018
