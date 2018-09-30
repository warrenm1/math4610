## Hybrid: Bisection-Newton Method 
A combination of the Bisection and the Newton Method to optimize the likelyhood of finding the root.

**Routine Name:**           hybrid_n()

**Author:** Michael A. Warren

**Language:** C++. This code can be used usinga GNU C++ compiler(gcc)

For example,

    gcc hybrid_n.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o hybrid_n hybrid_n.cpp

**Description/Purpose:** This routine uses the Bisection Method to get the approximation to be closer to the actual root, then switches to do the Newton Method. 
The purpose is to bypass the limitations of Newton's Method and get a more accurate result more often

**Input:** double a, double b, f(x), f'(x), double tol, int maxiter

a represents the left value in the interval
b represents the right value in the interval
f(x) is the function in question
f'(x) is the derivative of the function in question
tol is the level of tolerance allowed
maxiter is the maximum number of iterations, usually 15

**Output:** returns a root value of type double

**Usage/Example:**

This routine is used to minimize the problems found in the Newton's Method and ensuring that you can find a root more often and more effectively than either the Bisection or the Newton Method alone.


**Implementation/Code:** The following is the code for hybrid_n()

    #include<iostream>
    #include<cmath>
    #include<cstdlib>
    
    double hybrid_n(double a, double b, (f*)(x), (*f')(x), double tol, int maxiter){
        double x_0 = (a+b) /2;
        double x_1;
        double error = 10.0 * tol;
        int iter = 0;
        bool newton = false;
    
        while(error > tol && iter < maxiter){
            iter++;
    
            //If f'(x_0) is not 0, start the Newtons Method and check if it is in scope
            if (f'(x_0) != 0)
                x_1 = x_0 - f(x_0) / f'(x_0);
    
            //Try Newton's Method
            if (f'(x_0) == 0 || x_1 < a || x_1 > b)
                newton = false;
            else
                newton = true;
    
            //If Newton's Method Fails
            if(!newton){
                if((f(a)*f(b)) > 0.0){
                    std::cout << <INSERT ERROR MESSAGE HERE>;
                }
    
                for(int i = 0; i < 4; i++){
                    if(f(x_0) == 0.0)
                        return x_0;
                    if((f(a)*f(x_0)) < 0)
                        b = x_0;
                    else
                        a = x_0;
      
                    x_0 = (a+b)/2;
                }
            }
    
            //If Newton's Method Succeeds-finish Newton's method
            if(newton){
                error = abs(x_1 - x_0);
                x_0 = x_1;
            }
        }
    
        return x_1;
    }


**Last Modified:** September/2018
