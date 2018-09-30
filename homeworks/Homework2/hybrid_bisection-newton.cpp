#include<iostream>
#include<cmath>
#include<cstdlib>

double hybrid_n(double a, double b, (*f)(x), (*f')(x), double tol, int maxiter){
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

