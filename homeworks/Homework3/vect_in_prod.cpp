#include<vector>

template<typename T>
T vect_inner(std::vector<T> v, std::vector<T> u){
	T prod = 0;
	
	for(int i = 0; i < v.size(); i++)
		prod += (v[i] * u[i]);

	return prod;
}//vect_inner
