# Absolute Error 
This file is to add a bit of routine to your code to calculate the Absolute Error of two values formulated from a function.

**Routine Name:**           abs_error

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler (gcc)

For example,

    gcc abs_error.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o abs_err abs_error.cpp

**Description/Purpose:** This routine is to compute the absolute error between a machine precision number and the "exact" value.

**Input:** This routine takes two inputs, the machine precision number, and the "exact" value.

	double abs_error(double x, double y);

**Output:** This routine will output a single value of type double that represents the absolute error.

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for abs_error(double x, double y).

	#include<cmath>
	#include<cstdlib>

	double abs_error(double x, double y){
		return abs(x - y);
	}


**Last Modified:** September/2018
