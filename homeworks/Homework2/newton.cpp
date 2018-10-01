#include<iostream>

double newton(double x_0, double (*f)(x), double (*f')(x), double tol, int maxiter){
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

double func_a(double x){
        return (pow(x,2) - 3);
}

double f_a_dx(double x){
	return 2*x;
}

double func_b(double x){
        long double PI = 3.14159265358979323846264338327950288419716939937510;
        return (sin(PI*x));
}

double f_b_dx(double x){
	long double PI = 3.14159265358979323846264338327950288419716939937510;
	return (cos(PI*x)/PI);
}


int main(){

        std::cout << "a) " << newton(1, &func_a, &f_a_dx, 0.005, 15) << std::endl;
        std::cout << "b) " << newton(3, &func_b, &f_b_dx, 0.005, 15) << std::endl;


        return 0;
}
