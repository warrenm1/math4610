#include<vector>

template(typename T>
std::vector vect_cross(std::vector<T> v, std::vector<T> u){
	std::vector<T> A[][];

	for(int i = 0; i < v.size(); i++)
		for(int j = 0; j < u.size(); j++)
			A[i][j] = v[i] * u[j];

	return A;
}//vect_cross
