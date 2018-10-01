#include<iosteam>
#include<cmath>
#include<cstdlib>

double hybrid_s(double a, double b, double (*f)(x), double tol, int maxiter){
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

double func_a(double x){
        return (pow(x,2) - 3);
}

double func_b(double x){
        long double PI = 3.14159265358979323846264338327950288419716939937510;
        return (sin(PI*x));
}


int main(){

        std::cout << "a) " << bisection(1, 4, &func_a, 0.005, 15) << std::endl;
        std::cout << "b) " << bisection(0, 3, &func_b, 0.005, 15) << std::endl;


        return 0;
}
