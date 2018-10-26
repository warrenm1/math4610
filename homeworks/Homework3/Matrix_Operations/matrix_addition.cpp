#include<vector>

template(typename T)
std::vector mat_add(std::vector<T> A[][], std::vector<T> B[][]){
	std::vector C[][];

	for(int i = 0; i < A[0].size(); i++)
		for(int j = 0; j < B.size(); j++)
			C[i][j] = A[i][j] + B[i][j];

	return C;
}
