# l-infinity Vector Norm 
This routine calculates the max absolute value of a given vector

**Routine Name:**           v_linf_norm

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python v_linf.py

**Description/Purpose:** This routine evaluates the absolute value of each element of the vector, and returns the max value.

**Input:** This routine takes a vector.

**Output:** This routine returns the maximum absolute value of the given vector.

**Usage/Example:**

	v = [1,2,3,4,5,6,7,8,-23]

	print(v_linf_norm(v))

Displays:
	
	23

**Implementation/Code:** The following is the code for v_linf_norm

	def v_linf_norm(v):
	    max = v[0]

	    for i in range(len(v)):
	        if max < abs(v[i]):
	            max = abs(v[i])
	
	    return max

**Last Modified:** November/2018
