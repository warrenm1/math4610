#include<iostream>
#include<cmath>
#include<cstdlib>

double rel_error(double x, double y){
	double temp = x-y;

	double e_r = abs(temp)/x;

	return e_r;
}
