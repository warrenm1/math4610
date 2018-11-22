# Vector Addition 
Taking two vectors and returns the sum of the elements.

**Routine Name:**           v_add

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python v_add.py

**Description/Purpose:** This routine takes two vectors. If the two are not the same size, it adds '0's to the end of the shorter one to make them the same size. It then adds the vectors, component by component.

**Input:** This routine requires two vectors.

**Output:** This routine returns a single vector that contains the sum of each elements of the two vectors inputted.

**Usage/Example:**

	v = [10,20,30]
	u = [10,10,10,10]

	v = v_add(v,u)

	print(v)

Gives the Output:

	[20, 30, 40, 10]

**Implementation/Code:** The following is the code for v_add()

	def toSameSize(v, u):
	    if len(u) > len(v):
	        toSameSize(u,v)

	    while len(v) - len(u) > 0:
	        u.append(0)


	def v_add(v, u):
	    w = []

	    if len(v) - len(u) != 0:
	        toSameSize(v,u);

	    for i in range(len(v)):
	        w.append(v[i] + u[i])

	    return w


**Last Modified:** November/2018
