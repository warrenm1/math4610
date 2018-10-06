#include<iostream>
#include<vector>

//this vector takes two vectors (larger as v, smaller as u) and makes them the same size
void toSameSize(std::vector<double>& v, std::vector<double>& u){
	if (u.size() > v.size())
		toSameSize(u,v);

	while((v.size() - u.size()) > 0)
		u.push_back(0);

	return;
}//toSameSize


std::vector vect_add(std::vector<double> v, std::vector<double> u){
	std::vector<double> w;
	
	if (v.size() - u.size() != 0)
		toSameSize(v,u);

	for(int i = 0; i < v.size(); i++)
		w.push_back(v[i] + u[i]);

	return w;
}//vect_add
