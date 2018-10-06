#include<iostream>
#include<vector>

template<class T>
void vect_scal_mult(std::vector<T>& v, T s){
	for(int i = 0; i < v.size(); i++)
		v[i] = v[i] * s;

	return;
}//vect_scal_mult
