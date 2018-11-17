import math


def func_a(x):
    return pow(x,2) - 3

def func_a_dx(x):
    return 2*x

def func_b(x):
    PI = 3.14159265358979323846264338327950288419716939937510
    return math.sin(PI*x)

def func_b_dx(x):
    PI = 3.14159265358979323846264338327950288419716939937510
    return math.cos(PI*x)/PI

def hybrid_n(a,b,func,func_dx,tol,maxiter):
    x_0 = (a+b)/2
    error = 10.0*tol
    iter = 0
    newton = False

    while error > tol and iter < maxiter:
        iter += 1

        if func_dx(x_0) != 0:
            x_1 = x_0 - func(x_0) / func_dx(x_0)

        #Try Newton's Method
        if func_dx(x_0) == 0 or x_1 < a or x_1 > b:
            newton = False
        else:
            newton = True

        #If Newton's Method Fails
        if not newton:
            for i in range(4):
                if func(a) * func(x_0) < 0:
                    b = x_0
                else:
                    a = x_0
                x_0 = (a+b)/2

        #If Newton's Method Succeeds
        if newton:
            error = abs(x_1 - x_0)
            x_0 = x_1

    return x_1


print(f"a) {hybrid_n(0,4,func_a,func_a_dx,0.005,15)}")
print(f"b) {hybrid_n(0,3,func_b,func_b_dx,0.005,15)}")