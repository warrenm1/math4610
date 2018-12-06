#include<iostream>
#include<vector>
#include<omp.h>

using namespace std;


double vectDot(vector<double> v, vector<double> u){
	double product = 0;
	int size = 0;

	if(v.size() > u.size())
		size = u.size();
	else
		size = v.size();

	#pragma omp parallel for private(product, v, u)
	{
		for(int i = 0; i < size; i++)
			product += v[i] * u[i];
	}

	return product;
}

int main(){
	vector<double> v = {2,3,4,5,6,7,8};
	vector<double> u = {5,6,7,4,3,6,4};


	double prod = vectDot(v,u);

	cout << prod << endl;

	return 0;
}
