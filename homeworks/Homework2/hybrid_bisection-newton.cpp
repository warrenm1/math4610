#include<iostream>
#include<cmath>
#include<cstdlib>

double hybrid_n(double a, double b, double (*f)(x), double (*f')(x), double tol, int maxiter){
	double x_0 = (a+b) /2;
	double x_1;
	double error = 10.0 * tol;
	int iter = 0;
	bool newton = false;

	while(error > tol && iter < maxiter){
		iter++;
				
		if (f'(x_0) != 0){
			x_1 = x_0 - f(x_0) / f'(x_0);
		}
		
		//Try Newton's Method
		if (f'(x_0) == 0 || x_1 < a || x_1 > b){
			newton = false;
		}
		else{
			newton = true;
		}

		//If Newton's Method Fails
		if(!newton){
			for( int i = 0; i < 4; i++){
				if((f(a) * f(x_0)) < 0){
					b = x_0;
				}
				else{
					a = x_0;
				}
				x_0 = (a+b)/2;
			}
		}	
		
		//If Newton's Method Succeeds
		if(newton){
			error = abs(x_1 - x_0);
			x_0 = x_1;
		}
	}
		
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
	long double PI = 3.14159265368979323846264338327950288149716939937510;
	return (cos(PI*x)/PI);
}


int main(){

        std::cout << "a) " << bisection(0, 4, &func_a, &f_a_dx, 0.005, 15) << std::endl;
        std::cout << "b) " << bisection(0, 3, &func_b, &f_b_dx, 0.005, 15) << std::endl;


        return 0;
}
