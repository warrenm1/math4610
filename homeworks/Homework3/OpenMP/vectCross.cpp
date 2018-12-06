#include<iostream>
#include<vector>
#include<omp.h>

using namespace std;


vector<vector<double>> vectCross(vector<double> v, vector<double> u){
	int rows = v.size();
	int cols = u.size();

	vector<vector<double>> A;

	A.resize(rows);
	for(int i = 0; i < rows; i++)
		A[i].resize(cols);


	#pragma omp parallel for private(rows, cols, A, v, u)
	{
		for(int i = 0; i < rows; i++)
			for(int j = 0; j < cols; j++)
				A[i][j] = v[i] * u[j];
	}

	return A;
}

int main(){
	vector<double> v = {2,3,4};
	vector<double> u = {5,6,7,2};


	vector<vector<double>> A = vectCross(v,u);

	for(int i = 0; i < A.size(); i++){
		for(int j = 0; j < A[i].size(); j++)
			cout << A[i][j] << " ";
		cout << endl;
	}

	return 0;
}
