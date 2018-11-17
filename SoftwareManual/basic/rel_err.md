# Relative Error 
This file is to help you add code to calculate the relative error between a machine precision number and an "exact" value.

**Routine Name:**           rel_error

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python rel_error.py

will execute the file.

**Description/Purpose:** This routine is designed to calculate the relative error between a machine precision number and an "exact" value.

**Input:** Only two inputs are required for this routine, the machine precision number and the "exact" value, represented as x and y respectively.
	
	rel_error(x, y);

**Output:** The routine returns the relative error from these two values given.

**Usage/Example:**

This routine is to be used when you want to see how the error affects the function as a whole.

	print(f"Relative error between 0.0000012345 and 0.0000023456 is {rel_error(0.0000012345,0.0000023456)}"
Results in the output of:
	Relative error between 0.0000012345 and 0.0000023456 is 0.9000405022276226

**Implementation/Code:** The following is the code for rel_error(x, y).
	
	import sys

	def rel_error(x,y):
		if x == 0.0:
			print("The machine precision number cannot be zero")
			sys.exit(1)	
			
		return abs(x - y) / x;

**Last Modified:** November/2018
