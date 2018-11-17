import math
import sys


def func_a(x):
    return (pow(x,2) -3)

def func_b(x):
    PI = 3.14159265358979323846264338327950288419716939937510
    return math.sin(PI*x)

def bisection(function,a,b,tol):
    f_a = function(a)
    f_b = function(b)
    zero = 0.0

    if tol <= 0:
        print(f"Unable to process a tolerance of {tol}")
        print("Please make sure tolerance > 0")
        sys.exit(1)

    if f_a*f_b > zero:
        print("Unable to determine a root from the given endpoints")
        print("Please pick two values on f(x) that reside on opposite sides of the x-axis")
        sys.exit(1)

    elif f_a*f_b == zero:
        if f_a == zero:
            return a
        else:
            return b

    k = math.ceil((math.log(tol/math.fabs(b-a),2)) / math.log(0.5,2) + 1)

    for i in range(k):
        c = 0.5 * (b+a)
        f_c = function(c)

        if(f_a*f_c) < 0:
            b = c
            f_b = f_c
        else:
            a = c
            f_a = f_c

    return c


print(f"a) {bisection(func_a,1,4,0.005)}")
print(f"b) {bisection(func_b,0.001,1.5,0.005)}")