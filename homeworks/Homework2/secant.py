import math
import sys


def func_a(x):
    return pow(x,2) - 3

def func_b(x):
    PI = 3.14159265358979323846264338327950288419716939937510
    return math.sin(PI*x)

def secant(x_0,x_1,function,tol,maxiter):
    iter = 0
    error = 10*tol

    if function(x_1) - function(x_0) == 0:
        print("Cannot procure a root with these parameters")
        sys.exit(1)

    while error > tol and iter < maxiter:
        iter += 1

        x_2 = x_1 - (x_1 - x_0)/(function(x_1) - function(x_0))

        error = abs(x_1 - x_0)

    return x_2


print(f"a) {secant(0,4,func_a,0.005,15)}")
print(f"b) {secant(0,4,func_b,0.005,15)}")