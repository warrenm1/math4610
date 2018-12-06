#include<iostream>
#include<vector>
#include<omp.h>

using namespace std;

vector<double> matVectMult(vector<vector<double>> A, vector<double> x){
	vector<double> b;
	
	for(int i = 0; i < x.size(); i++)
		b.push_back(0);

	#pragma omp parallel for private(b, A, x)
		for(int i = 0; i < A.size(); i++)
			for(int j = 0; j < x.size(); j++)
				b[j] += A[i][j] * x[j];

	return b;
}

int main(){
	vector<vector<double>> A = {{1,2,3},{1,3,2}};
	vector<double> x = {5,3};

	vector<double> b = matVectMult(A,x);

	for(int i = 0; i < b.size(); i++)
		cout << b[i] << " ";

	return 0;
}
