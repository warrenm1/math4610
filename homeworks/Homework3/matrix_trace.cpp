#include<vector>

template(typename T)
T mat_trace(std::vector<T> A[][]){
	T tr = 0;
	
	for(int i = 0; i < A[1].size(); i++){
		for(int j = 0; j < A.size(); j++){
			if(i == j)
				tr += A[i][j];
		}
	}

	return tr;
}
