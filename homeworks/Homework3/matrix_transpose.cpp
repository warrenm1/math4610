#include<vector>

template(typename T)
std::vector mat_trans(std::vector<T>& A[][]){
	std::vector<T> At[][];

	for(int i = 0; i < A[i].size(); i++)
		for(int j = 0; j < A.size(); j++)
			At[i][j] = A[j][i];

	return At;
}//mat_trans
