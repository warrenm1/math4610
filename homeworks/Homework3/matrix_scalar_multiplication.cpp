#include<vector>

template(typename T)
void mat_scalar(std::vector<T>& A, T s){
	for(int i = 0; i < A[1].size(); i++)
		for(int j = 0; j < A.size(); j++)
			A[i][j] *= s;

	return;
}//mat_scalar
