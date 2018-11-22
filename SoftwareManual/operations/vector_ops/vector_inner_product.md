# Vector Inner Product 
This routine performs the dot product on two vectors of the same size

**Routine Name**		v_dot

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python v_dot.py

**Description/Purpose:** This routine takes two vectors, and multiply the corresponding elements and sums them all together.

**Input:** This routine needs two vectors of the same numerical type.

**Output:** This routine returns a single value of the same numerical type as the vector

**Usage/Example:**

	v = [10,20,30]
	u = [10,10,10,10]

	product = v_dot(v,u)

	print(product)

Results in:

	600

**Implementation/Code:** The following is the code for v_dot()

	def v_dot(v,u):
	    prod = 0

	    for i in range(len(v)):
	        prod += v[i]*u[i]

	    return prod

**Last Modified:** November/2018
