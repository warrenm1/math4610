#include<iostream>

double secant(double x_0, double x_1, (*f)(x), double tol, int maxiter){
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
