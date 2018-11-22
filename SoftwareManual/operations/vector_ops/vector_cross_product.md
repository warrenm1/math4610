# Vector Cross Product
This routine performs the Cross Product upon two vectors

**Routine Name:**           v_cross

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python v_cross.py

**Description/Purpose:** This routine takes two vectors of the same length, and performs the Cross Product on them, creating a matrix

**Input:** This routine requires two vectors of the same length of the same type.

**Output:** This routine returns a square matrix of the same type as the vectors passed in

**Usage/Example:**

	v = [10,20,30]
	u = [10,30,50,70]

	B = v_cross(v,u)

	for i in range(len(B)):
	    print(B[i])

Displays: 

	[100, 300, 500, 700]
	[200, 600, 1000, 1400]
	[300, 900, 1500, 2100]
	
**Implementation/Code:** The following is the code for v_cross()

	def v_cross(v,u):
	    A = []

	    for i in range(len(v)):
	        temp = []
	        for j in range(len(u)):
	            temp.append(v[i] * u[j])

	        A.append(temp)

	    return A

**Last Modified:** November/2018
