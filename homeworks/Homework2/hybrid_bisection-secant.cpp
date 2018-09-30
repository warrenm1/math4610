#include<iosteam>

double hybrid_s(double a, double b, (*f)(x), double tol, int maxiter){
	int iter = 0;
	double c = (a+b) / 2;
	double x_2;
	double error = 10.0 * tol;
	bool secant = false;

	if (f(x_1) - f(x_0) == 0)
		return x_2;

	while(error > tol && iter < maxiter){
		iter++;
		x_2 = b - (b-a)/(f(b)-f(a));

		//Try Secant Method
		if(x_2 < a || x_2 > b)
			secant = false;
		else
			secant = true;

		//If Secant Method Fails
		if(!secant){
			for(int i = 0; i < 4; i++){
				if((f(a) * f(c)) < 0)
					b = c;
				else
					a = c;

				c = (a+b)/2;
			}
		}

		//If Secant Method Succeeds
		if(secant)
			error = abs(b - a);
	}

	return x_2;
}
