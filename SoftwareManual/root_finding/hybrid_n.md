## Hybrid: Bisection-Newton Method 
A combination of the Bisection and the Newton Method to optimize the likelyhood of finding the root.

**Routine Name:**           hybrid_n()

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python hybrid_bisec_newton.py

will execute the file.

**Description/Purpose:** This routine uses the Bisection Method to get the approximation to be closer to the actual root, then switches to do the Newton Method. 
The purpose is to bypass the limitations of Newton's Method and get a more accurate result more often

**Input:** a, b, func, func_dx, tol, maxiter

"a" represents the left value in the interval
"b" represents the right value in the interval
"func" is the function in question
"func_dx" is the derivative of the function in question
"tol" is the level of tolerance allowed
"maxiter" is the maximum number of iterations, usually 15

**Output:** returns a root value

**Usage/Example:**

This routine is used to minimize the problems found in the Newton's Method and ensuring that you can find a root more often and more effectively than either the Bisection or the Newton Method alone.

	import math

	def func_a(x):
	    return pow(x,2) - 3

	def func_a_dx(x):
	    return 2*x

	def func_b(x):
	    PI = 3.14159265358979323846264338327950288419716939937510
	    return math.sin(PI*x)

	def func_b_dx(x):
	    PI = 3.14159265358979323846264338327950288419716939937510
	    return math.cos(PI*x)/PI


	print(f"a) {hybrid_n(0,4,func_a,func_a_dx,0.005,15)}")
	print(f"b) {hybrid_n(0,3,func_b,func_b_dx,0.005,15)}")

Produces the roots:
	a) 1.7320508100147276
	b) 2.000000000000001

**Implementation/Code:** The following is the code for hybrid_n()

	import sys

	def hybrid_n(a,b,func,func_dx,tol,maxiter):
	    x_0 = (a+b)/2
	    error = 10.0*tol
	    iter = 0
	    newton = False

	    while error > tol and iter < maxiter:
	        iter += 1

	        if func_dx(x_0) != 0:
	            x_1 = x_0 - func(x_0) / func_dx(x_0)

	        #Try Newton's Method
	        if func_dx(x_0) == 0 or x_1 < a or x_1 > b:
	            newton = False
	        else:
	            newton = True

	        #If Newton's Method Fails
	        if not newton:
	            for i in range(4):
	                if func(a) * func(x_0) < 0:
	                    b = x_0
	                else:
	                    a = x_0
	                x_0 = (a+b)/2

	        #If Newton's Method Succeeds
	        if newton:
	            error = abs(x_1 - x_0)
	            x_0 = x_1

	    return x_1

**Last Modified:** November/2018
