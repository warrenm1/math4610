#include<iostream>

double newton(double x_0, (*f)(x), (*f')(x), double tol, int maxiter){
	iter = 0;
	error = 10.0 * tol;
	double x_1;

	if (f'(x_0) == 0){
		std::cout << "f'(x_0) is a horizontal line\nTry the Hybrid: Bisection-Newton Method.\nreturning an invalid response" << std::endl;
	}

	while(error > tol && iter < maxiter){
		iter++;
		
		//Meat of the Newton's Method
		x_1 = x_0 - f(x_0) / f'(x_0);

		//updates Error for Tolerance Purposes
		error = abs(x_1 - x_0);

		//sets up x_0 for the possible next loop
		x_0 = x_1;
	}

	//returns the root
	return x_1;
}

