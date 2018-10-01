#include<iostream>
#include<cmath>
#include<cstdlib>


double bisection(double (*f)(x), double a, double b, double tol){
	double root, zero, c, f_a, f_b, f_c;

	f_a = f(a);
	f_b = f(b);

	zero = 0.0;

	//base case checking
	if (f_a*f_b > zero){
		std::cout << "Unable to determine a root from the endpoints given. " << std::endl << "Please pick two values on f(x) that reside on opposite sides of the x-axis." << std::endl << std::endl << "Thank you. Now exiting...";
		return EXIT_FAILURE;
	}

	else if (f_a*f_b == zero){
		if (f_a == zero) 
			return a;
		else 
			return b;
	}

	if (tol <= 0){
		std::cout << "Unable to process a tolerance of " << tol << std::endl << "Please make sure it is > 0" << std::endl << "Now exiting...";

		return EXIT_FAILURE;
	}




	double k = ceil((log2(tol / abs(b - a))) / log2(0.5) + 1);

	for(int i = 0; i<k; i++){
		c = 0.5*(b+a);
		f_c = f(c);

		if ((f_a*f_c) < 0){
			b = c;
			f_b = f_c;
		}
		else{
			a = c;
			f_a = f_c;
		}
	}
	
	root = c;

	return root;
}






double func_a(double x){
	return (pow(x,2) - 3);
}

double func_b(double x){
	long double PI = 3.14159265358979323846264338327950288419716939937510;
	return (sin(PI*x));
}


int main(){

	std::cout << "a) " << bisection(&func_a, 1, 4, 0.005) << std::endl;
	std::cout << "b) " << bisection(&func_b, 0.001, 3, 0.005) << std::endl;
	

	return 0;
}
