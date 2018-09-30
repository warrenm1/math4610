## Secant Method 
Similar to the Newton's Method, this routine finds the root without needing a derivative...lucky you.

**Routine Name:**           secant()

**Author:** Michael A. Warren

**Language:** C++. This code can be used using the GNU C++ compiler>(gcc)

For example,

    gcc secant.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o secant secant.cpp

**Description/Purpose:** This routine modifies the Newton's Method in certain cases that make finding the derivative of f(x) impossible

**Input:** double x_0, double x_1, f(x), double tol, int maxiter

x_0 represents the initial x value
x_1 represents the subsequent x value
N.B. both are needed in order to calculate the root using this routine
f(x) represents the function in question
tol is the level of tolerance in error
maxiter is the maximum number of iterations allowed...usually 15

**Output:** Returns the calculated root of type double

**Usage/Example:**

This routine is best used when you cannot calculate a derivative of f(x)

**Implementation/Code:** The following is the code for secant()

    #include<iostream>
    #include<cmath>
    #include<cstdlib>
    
    double secant(double x_0, double x_1, (*f)(x), double tol, int maxiter){
        int iter = 0;
        double error = 10.0 * tol;
        double x_2;
    
        if ((f(x_1) - f(x_0)) == 0){
            std::cout << <INSERT ERROR MESSAGE HERE>;
            return x_2;
        }
    
        while(error > tol && iter < maxiter){
            iter++;
    
            x_2 = x_1 - (x_1 - x_0) / (f(x_1) - f(x));
    
            error = abs(x_1 - x_0);
        }
    
        return x_2;
    }


**Last Modified:** September/2018
