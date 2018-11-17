import math
import sys


def func_a(x):
    return (pow(x,2) -3)

def f_a_dx(x):
    return 2*x

def func_b(x):
    PI = 3.14159265358979323846264338327950288419716939937510
    return math.sin(PI*x)

def f_b_dx(x):
    PI = 3.14159265358979323846264338327950288419716939937510;
    return math.cos(PI*x)/PI


def newton(x_0,function, functionPrime, tol, maxiter):
    iter = 0
    error = 10.0*tol

    if functionPrime(x_0) == 0:
        print("Derivative is a horizontal line")
        print("Try using the Hybrid: Bisetion-Newton Method")
        sys.exit(1)

    while error > tol and iter < maxiter:
        iter += 1

        #Meat of the Newton's Method
        x_1 = x_0 - function(x_0) / functionPrime(x_0)

        #Updates Error for Tolerance Purposes
        error = abs(x_1-x_0)

        #Sets up x_0 for next possible loop
        x_0 = x_1

    return x_1


print(f"a) {newton(1,func_a,f_a_dx,0.005,15)}")
print(f"b) {newton(3,func_b,f_b_dx,0.005,15)}")