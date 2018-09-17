#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>

void stand_approx(double (*f)(double), double& approx[], double x){
	double stapprox;
	int h = 1;

	while(h > 0){
		approx.push((f(x + h) - f(x)) / h);
		h = h / 2;
	}	

	return;
}
