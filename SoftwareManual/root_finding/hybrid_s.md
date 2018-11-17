## Hybrid: Bisection-Secant Method 
Combines the best of the Bisection and the Secant Methods to find the root

**Routine Name:**           hybrid_s()

**Author:** Michael A. Warren

**Language:** Python. This code can be used using the Python compiler

For example,

    python hybrid_bisec_secant.py

will execute the file.

**Description/Purpose:** This routine uses the Bisection Method in order to get a more precise root using the Secant Method

**Input:** a, b, func,  tol, maxiter

"a" represents the left side of the interval, which is also used as x_0 in the Secant Method
"b" represents the right side of the interval, which is also used as the x_1 in the Secant Method
"func" represents the function in question
"tol" represents the tolerance allowed
"maxiter" represents the maximum number of iterations allowed...usually 15

**Output:** This routine returns the value of the root

**Usage/Example:**

When implementing this routine, make sure that f(b)-f(a) does not equal 0, or we will have a problem.

	import math

	def func_a(x):
	    return pow(x,2) -3

	def func_b(x):
	    PI = 3.14159265358979323846264338327950288419716939937510
	    return math.sin(PI*x)

	print(f"a) {hybrid_s(1,4,func_a,0.005,15)}")
	print(f"b) {hybrid_s(0,3,func_b,0.005,15)}")

Display the roots:
	a) 3.8
	b) 1.7500000000000004

**Implementation/Code:** The following is the code for hybrid_s()

	import sys

	def hybrid_s(a,b,func,tol,maxiter):
	    iter = 0
	    c = (a+b)/2
	    error = 10.0*tol
	    secant = False

	    while error > tol and iter < maxiter:
	        iter += 1
	        x = b - (b-a)/(func(b)-func(a))

	        #Try Secant Method
	        if x < a or x > b:
	            secant = False
	        else:
	            secant = True

	        #If Secant Method Fails
	        if not secant:
	            for i in range(4):
	                if func(a)*func(c) < 0:
	                    b = c
	                else:
	                    a = c

	                c = (a+b)/2

	        #If Secant Method Succeeds
	        if secant:
	            error = abs(b-a)

	    return x


**Last Modified:** November/2018
