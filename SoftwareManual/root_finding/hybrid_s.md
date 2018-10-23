## Hybrid: Bisection-Secant Method 
Combines the best of the Bisection and the Secant Methods to find the root

**Routine Name:**           hybrid_s()

**Author:** Michael A. Warren

**Language:** C++. This code can be used using the GNU C++ compiler(gcc)

For example,

    gcc hybrid_s.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o hybrid_s hybrid_s.cpp

**Description/Purpose:** This routine uses the Bisection Method in order to get a more precise root using the Secant Method

**Input:** double a, double b, f(x), double tol, int maxiter
a represents the left side of the interval, which is also used as x_0 in the Secant Method
b represents the right side of the interval, which is also used as the x_1 in the Secant Method
f(x) represents the function in question
tol represents the tolerance allowed
maxiter represents the maximum number of iterations allowed...usually 15

**Output:** This routine returns the value of the root of type double

**Usage/Example:**

When implementing this routine, make sure that f(x_1)-f(x_2) does not equal 0, or we will have a problem.

**Implementation/Code:** The following is the code for hybrid_s()

    #include<iostream>
    #include<cmath>
    #include<cstdlib>
    
    double hybrid_s(double a, double b, (*f)(x), double tol, int maxiter){
        int iter = 0;
        double c = (a+b)/2;
        double x_2;
        double error = 10.0 * tol;
        bool secant = false;
    
        if((f(b) - f(a)) == 0){
            std::cout << <INSERT ERROR MESSAGE HERE>;
            return x_2;
        }
    
        while(error > tol && iter < maxiter){
            iter++;
            x_2 = b - (b-a)/(f(b)-f(a));
    
            //Try Secant Method
            if(x_2 < a || x_2 > b)
                secant = false;
            else
                secant = true;
    
            //If Secant Method Fails
            if(!secant){
                for(int i = 0; i < 4; i++){
                    if((f(a) * f(c)) < 0)
                        b = c;
                    else
                        a = c;
    
                    c = (a+b)/2;
                }
            }
    
            //If Secant Method Succeeds
            if(secant)
                error = abs(b-a);
        }
    
        return x_2;
    }


**Last Modified:** September/2018
