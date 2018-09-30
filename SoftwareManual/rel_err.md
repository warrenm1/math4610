# Relative Error 
This file is to help you add code to calculate the relative error between a machine precision number and an "exact" value.

**Routine Name:**           rel_error

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler (gcc)

For example,

    gcc rel_error.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o rel_err rel_error.cpp

**Description/Purpose:** This routine is designed to calculate the relative error between a machine precision number and an "exact" value.

**Input:** Only two inputs are required for this routine, the machine precision number and the "exact" value, represented as x and y respectively.
	
	double rel_error(double x, double y);

**Output:** The routine returns the relative error from these two values given.

**Usage/Example:**

This routine is to be used when you want to see how the error affects the function as a whole.

**Implementation/Code:** The following is the code for rel_error(double x, double y).

	#include<iostream>
	#include<cmath>
	#include<cstdlib>

	double rel_error(double x, double y){
		double zero = 0.0;
		
		//base case
		if (x == zero){
			std::cout << "the machine precision number cannot be zero" << std::endl << "Now exiting...";
			
			return EXIT_FAILURE;
		}//if dividing by zero

		return (abs(x - y) / x);
	}//rel_error


**Last Modified:** September/2018
