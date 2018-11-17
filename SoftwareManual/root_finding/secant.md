## Secant Method 
Similar to the Newton's Method, this routine finds the root without needing a derivative...lucky you.

**Routine Name:**           secant()

**Author:** Michael A. Warren

**Language:** Python. This code can be used using the Python compiler

For example,

    python secant.py

will execute the file.

**Description/Purpose:** This routine modifies the Newton's Method in certain cases that make finding the derivative of f(x) impossible

**Input:** x_0, x_1, function, tol, maxiter

"x_0" represents the initial x value
"x_1" represents the subsequent x value
N.B. both are needed in order to calculate the root using this routine
"function" represents the function in question
"tol" is the level of tolerance in error
"maxiter" is the maximum number of iterations allowed...usually 15

**Output:** Returns the calculated root

**Usage/Example:**

This routine is best used when you cannot calculate a derivative of f(x)

	import math

	def func_a(x):
	    return pow(x,2) - 3

	def func_b(x):
	    PI = 3.14159265358979323846264338327950288419716939937510;
	    return math.sin(PI*x)

	print(f"a) {secant(0,4,func_a,0.005,15)}")
	print(f"b) {secant(0,4,func_b,0.005,15)}")

This method displays the results of:
	a) 3.75
	b) 8165619676597689.0

**Implementation/Code:** The following is the code for secant()

	import sys

	def secant(x_0,x_1,function,tol,maxiter):
	    iter = 0
	    error = 10*tol

	    if function(x_1) - function(x_0) == 0:
	        print("Cannot procure a root with these parameters")
	        sys.exit(1)

	    while error > tol and iter < maxiter:
	        iter += 1

	        x_2 = x_1 - (x_1 - x_0)/(function(x_1) - function(x_0))

	        error = abs(x_1 - x_0)

	    return x_2


**Last Modified:** November/2018
