#include<vector>

template(typename T)
std::vector mat_vect_mult(std::vector<T>& A[][], std::vector<T>& x[]){
	std::vector<T> b[];

	for(int i = 0; i < A.size(); i++){
		b[i] = 0;

		for(int j = 0; j < x.size(); j++)
			b[i] += (A[i][j] * x[j]);
	}

	return b;
}//mat_vect_mult
