# Vector Subtraction 
This routine takes two vectors and returns the difference between the elements

**Routine Name:**           v_sub

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python v_sub.py

**Description/Purpose:** This routine takes two vectors and checks to see if they are the same size. If not, it adds '0's to the end of the shorter one. Then it takes the difference of each vector, element by element, and returns the result.

**Input:** This routine requires two vectors.

**Output:** This routine returns a single vector containing the difference of the two.

**Usage/Example:**

	v = [10,20,30]
	u = [10,10,10,10]

	v = v_sub(v,u)

	print(v)

Results in:

	[0, 10, 20, -10]

**Implementation/Code:** The following is the code for v_sub()

	def toSameSize(v,u):
	    if len(u) > len(v):
	        toSameSize(u,v)

	    while len(v) - len(u) > 0:
	        u.append(0)

	def v_sub(v,u):
	    w = []

	    if len(v) - len(u) != 0:
	        toSameSize(v,u)

	    for i in range(len(v)):
	        w.append(v[i] - u[i])

	    return w

**Last Modified:** November/2018
