#include<iostream>
#include<cmath>
#include<cstdlib>

double abs_error(double x, double y){
	double e_a = x-y;

	e_a = abs (e_a);	

	return e_a;
}

