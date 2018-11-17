# Absolute Error 
This file is to add a bit of routine to your code to calculate the Absolute Error of two values formulated from a function.

**Routine Name:**           abs_error

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python abs_error.py

will execute the file.

**Description/Purpose:** This routine is to compute the absolute error between a machine precision number and the "exact" value.

**Input:** This routine takes two inputs, the machine precision number, and the "exact" value.

	abs_error(x, y);

**Output:** This routine will output a single value of type double that represents the absolute error.

**Usage/Example:**

This routine is to be used often to find out how precise your result is to the actual result and compare that to the level of tolerance.

	print(f"Absolute error between 0.0000012345 and 0.0000023456 = {abs_error(0.0000012345,0.0000023456)}"

Results in:
	Absolute error between 0.0000012345 and 0.0000023456 = 1.1111e-06

**Implementation/Code:** The following is the code for abs_error(x, y).

	def abs_error(x,y):
		return abs(x-y)

**Last Modified:** November/2018
