# Bisection Method 
This is a file for the purpose of finding a single root given two endpoints on a function that are on opposite sides of the x-axis, using the Bisection Method.

**Routine Name:**           bisection

**Author:** Michael A. Warren

**Language:** c++. This code can be used using the GNU C++ compiler (gcc)

For example,

    gcc bisection.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o bisection bisection.cpp

**Description/Purpose:** This method will only produce a single root between a given continuous interval. 

**Input:** This routine takes a function, and three double variables. Remember to pass the function by reference,

	int main(){
		foo(&coolFunc);
	}

The order requested is the function, the left-most interval, the right-most interval, the level of tolerance.

	double bisection(double (*f)(x), double a, double b, double tol);

**Output:** This routine uses the bisection method and returns a single root in the form of a double. 

It will check to see if both intervals are on opposite sides of the x-axis, for it will not work otherwise, even if there are at least two roots there.

It will check to see if the end values are the roots, starting with the left-most variable.

Then, it will use the Bisection method to produce an output.

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for bisection(double\*, double, double, double)

	#include<iostream>
	#include<cmath>
	#include<cstdlib>
	
	
	double bisection(double (*f)(x), double a, double b, double tol){
	        double root, zero, c, f_a, f_b, f_c;
	
		//initialization
	        f_a = f(a);
	        f_b = f(b);
	
	        zero = 0.0;
	
	        //base case checking
	        if (f_a*f_b > zero){
	                std::cout << "Unable to determine a root from the endpoints given. " << std::endl << "Please pick two values on f(x) that reside on opposite sides of the x-axis." << std::endl << std::endl << "Thank you. Now exiting...";
	                return EXIT_FAILURE;
	        }//if endpoints are on the same side of the x-axis
		
	        else if (f_a*f_b == zero){
	                if (f_a == zero)
	                        return a;
	                else
	                        return b;
	        }//if an endpoint is the root
	
	        if (tol <= 0){
	                std::cout << "Unable to process a tolerance of " << tol << std::endl << "Please make sure it is > 0" << std::endl << "Now exiting...";
	
	                return EXIT_FAILURE;
	        }//if the tolerance is out of scope
	
	
	
		//setting max iterations
	        double k = ceil((log2(tol / abs(b - a))) / log2(0.5) + 1);
	

		//bisection
	        for(int i = 0; i<k; i++){
	                c = 0.5*(b+a);
	                f_c = f(c);
			
			if ((f_a*f_c) < 0){
				b = c;
				f_b = f_c;
			}//root on the left of center
			else{
				a = c;
				f_a = f_c;
			}//root on the right of center
		}//for loop implementing Bisection
	
		root = c;
		return root;
	}//Bisection Function
	
**Last Modified:** September/2018
