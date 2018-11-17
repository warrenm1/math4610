# Bisection Method 
This is a file for the purpose of finding a single root given two endpoints on a function that are on opposite sides of the x-axis, using the Bisection Method.

**Routine Name:**           bisection

**Author:** Michael A. Warren

**Language:** Python. This code can be used using the Python compiler

For example,

    python bisection.py

will execute the file

**Description/Purpose:** This method will only produce a single root between a given continuous interval. 

**Input:** This routine takes a function, and three double variables, which represent the left-most interval, the right-most interval, the level of tolerance.

	bisection(function, a, b, tol);

**Output:** This routine uses the bisection method and returns a single root. 

It will check to see if both intervals are on opposite sides of the x-axis, for it will not work otherwise, even if there are at least two roots there.

It will check to see if the end values are the roots, starting with the left-most variable.

Then, it will use the Bisection method to produce an output.

**Usage/Example:**

N.B. The best way to use this is if and only if both ends of the interval are on opposite sides of the x-axis. This is also a great way to narrow the search down to closer to the root, especially if you are getting the function to the point where a Newton or Secant method can be used...see Hybrid Method.

	import math

	def func_a(x):
		return (pow(x,2) -3
	
	def func_b(x):
		PI = 3.14159265358979323846264338327950288419716939937510
		return math.sin(PI*x)


	print(f"a) {bisection(func_a,1,4,0.005)}")
	print(f"b) {bisection(func_b,0.001,1.5,0.005)}")

This gives the result:
	a) 1.73095703125
	b) 1.0008212890624997

**Implementation/Code:** The following is the code for the Bisection Method

	import sys

	def bisection(function,a,b,tol):
	    f_a = function(a)
	    f_b = function(b)
	    zero = 0.0

	    if tol <= 0:
	        print(f"Unable to process a tolerance of {tol}")
	        print("Please make sure tolerance > 0")
	        sys.exit(1)

	    if f_a*f_b > zero:
	        print("Unable to determine a root from the given endpoints")
	        print("Please pick two values on f(x) that reside on opposite sides of the x-axis")
	        sys.exit(1)

	    elif f_a*f_b == zero:
	        if f_a == zero:
	            return a
	        else:
	            return b

	    k = math.ceil((math.log(tol/math.fabs(b-a),2)) / math.log(0.5,2) + 1)
	
	    for i in range(k):
	        c = 0.5 * (b+a)
	        f_c = function(c)

	        if(f_a*f_c) < 0:
	            b = c
	            f_b = f_c
	        else:
	            a = c
	            f_a = f_c

	    return c
	
**Last Modified:** November/2018
