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

vector<vector<double>> matMatMult(vector<vector<double>> A, vector<vector<double>> B){
	vector<vector<double>> C;

	#pragma omp parallel for private(A, B, C)
		for(int i = 0; i < A.size(); i++){
			vector<double> v = {0};
			v.clear();

			for( int j = 0; j < A[i].size(); j++)
				v.push_back(A[i][j]);

			vector<double> temp = matVectMult(B,v);

			for(int j = 0; j < A[i].size(); j++)
				C[i][j] = temp[j];
		}
				

	return C;
}

int main(){
	vector<vector<double>> A = {{1,2,3},{1,3,2}};
	vector<vector<double>> B = {{5,3},{6,7},{7,2}};

	vector<vector<double>> C = matMatMult(A,B);

	for(int i = 0; i < C.size(); i++){
		for(int j = 0; j < C[i].size(); j++)
			cout << C[i][j] << " ";
		cout << endl;
	}

	return 0;
}
