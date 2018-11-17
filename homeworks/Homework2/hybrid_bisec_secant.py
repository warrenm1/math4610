import math


def func_a(x):
    return pow(x,2) -3

def func_b(x):
    PI = 3.14159265358979323846264338327950288419716939937510
    return math.sin(PI*x)

def hybrid_s(a,b,func,tol,maxiter):
    iter = 0
    c = (a+b)/2
    error = 10.0*tol
    secant = False

    while error > tol and iter < maxiter:
        iter += 1
        x = b - (b-a)/(func(b)-func(a))

        #Try Secant Method
        if x < a or x > b:
            secant = False
        else:
            secant = True

        #If Secant Method Fails
        if not secant:
            for i in range(4):
                if func(a)*func(c) < 0:
                    b = c
                else:
                    a = c

                c = (a+b)/2

        #If Secant Method Succeeds
        if secant:
            error = abs(b-a)

    return x


print(f"a) {hybrid_s(1,4,func_a,0.005,15)}")
print(f"b) {hybrid_s(0,3,func_b,0.005,15)}")