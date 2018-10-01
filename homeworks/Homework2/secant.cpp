#include<iostream>
#include<cmath>
#include<cstdlib>

double secant(double x_0, double x_1, double (*f)(x), double tol, int maxiter){
	int iter = 0;
	double error = 10.0 * tol;
	double x_2;

	if (f(x_1) - f(x_0) == 0){
		std::cout<<"Cannot procure a root with these parameters\nreturning void value...possibly crashing the program.\n";
		return x_2;
	}
	
	while(error > tol && iter < maxiter){
		iter++

		x_2 = x_1 - (x_1 - x_0) / (f(x_1) - f(x_0));
		
		error = abs(x_1 - x_0);
	}

	return x_2;
}


double func_a(double x){
        return (pow(x,2) - 3);
}

double func_b(double x){
        long double PI = 3.14159265358979323846264338327950288419716939937510;
        return (sin(PI*x));
}


int main(){

        std::cout << "a) " << bisection(0, 4, &func_a, 0.005, 15) << std::endl;
        std::cout << "b) " << bisection(0, 3, &func_b, 0.005, 15) << std::endl;


        return 0;
}
