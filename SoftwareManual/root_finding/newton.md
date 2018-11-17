## Newton's Method  
Finding the Root by using Tangent Lines

**Routine Name:**           newton()

**Author:** Michael A. Warren

**Language:** Python. This code can be used using the Python compiler

For example,

    python newton.py

will execute the program

**Description/Purpose:** Uses the Tangent Line at x_0 to find a value of x that is relatively close to the root. If it is not the root, it will take the value found as the new x_0. 

**Input:** newton(x_0, function, functionPrime, tol, maxiter)

"x_0" represents the initial x value
"function" is the function
"functionPrime" is its derivative...yes, you will have to compute it
"tol" is the tolerance
"maxiter" is the maximum number of iterations

**Output:** The output will be the value closest to the root

**Usage/Example:**

Used to find the root using a Tangent Line at the given point. 

Do not use when functionPrime(x_0) == 0
Might not be a good idea to use of the Tangent Line of x_0 results in a line crossing the x-axis farther away from the root.

In both cases, try the Hybrid: Bisection-Newton Method instead

	import math

	def func_a(x):
	    return (pow(x,2) -3)

	def f_a_dx(x):
	    return 2*x

	def func_b(x):
	    PI = 3.14159265358979323846264338327950288419716939937510
	    return math.sin(PI*x)

	def f_b_dx(x):
	    PI = 3.14159265358979323846264338327950288419716939937510;
	    return math.cos(PI*x)/PI

	print(f"a) {newton(1,func_a,f_a_dx,0.005,15)}")
	print(f"b) {newton(3,func_b,f_b_dx,0.005,15)}")

This results in:
	a) 1.7320508100147276
	b) 3.0000000000000013

**Implementation/Code:** The following is the code for the Newton Method

	import sys

	def newton(x_0,function, functionPrime, tol, maxiter):
	    iter = 0
	    error = 10.0*tol

	    if functionPrime(x_0) == 0:
	        print("Derivative is a horizontal line")
	        print("Try using the Hybrid: Bisetion-Newton Method")
	        sys.exit(1)

	    while error > tol and iter < maxiter:
	        iter += 1

	        #Meat of the Newton's Method
	        x_1 = x_0 - function(x_0) / functionPrime(x_0)

	        #Updates Error for Tolerance Purposes
	        error = abs(x_1-x_0)

	        #Sets up x_0 for next possible loop
	        x_0 = x_1

	    return x_1

**Last Modified:** November/2018
