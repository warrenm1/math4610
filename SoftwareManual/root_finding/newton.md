## Newton's Method  
Finding the Root by using Tangent Lines

**Routine Name:**           newton()

**Author:** Michael A. Warren

**Language:** C++. This code can be used using the GNU C++ compiler (gcc)

For example,

    gcc newton.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o newton newton.cpp

**Description/Purpose:** Uses the Tangent Line at x_0 to find a value of x that is relatively close to the root. If it is not the root, it will take the value found as the new x_0. 

**Input:** double newton(double x_0, f(x), f'(x), double tol, int maxiter)

x_0 represents the initial x value as type double
f(x) is the function
f'(x) is its derivative...yes, you will have to compute it
tol is the tolerance as type double
maxiter is the maximum number of iterations as type integer

**Output:** The output will be the value closest to the root of type double

**Usage/Example:**

Used to find the root using a Tangent Line at the given point. 

Do not use when f'(x) = 0 at x_o
Might not be a good idea to use of the Tangent Line of x_0 results in a line crossing the x-axis farther away from the root.

In both cases, try the Hybrid: Bisection-Newton Method instead

**Implementation/Code:** The following is the code for newton(double, f(x), f'(x), double, int)

    #include<iostream>
    #include<cmath>
    #include<cstdlib>
    
    double newton(double x_0, (*f)(x), (*f')(x), double tol, int maxiter){
        iter = 0;
        error = 10.0 * tol;
        double x_1;
    
        if (f'(x_0) == 0){
            std::cout << "f'(x_0) is a horizontal line\nTry the Hybrid: Bisection-Newton Method.\nReturning an invalid value." << std::endl;
        }
    
        while(error > tol && iter < maxiter){
            iter++;
    
            //Meat of the Newton's Method
            x_1 = x_0 - f(x_0) / f'(x_0);
    
            //Updates Error for Tolerance Purposes
            error = abs(x_1 - x_0);
    
            //Sets up x_0 for the possible next loop
            x_0 = x_1;
        }
    
        //Returns the root
        return x_1;
    }


**Last Modified:** September/2018
