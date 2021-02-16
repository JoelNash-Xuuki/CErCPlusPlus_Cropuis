#include "InsertSort.h"
#include <iostream>

InsertSort::InsertSort(std::initializer_list<int> lst){
	for(int d: lst)
		a.push_back(d);
}

void  InsertSort::insertSort(){	
	int i;
	for (int j = 1; j < a.size(); j++){
		key = a[j];
		i = j - 1;
		while (i >=0 && a[i] > key){
			a[i+1] = a[i]; 
			i = i - 1;
		}
		a[i+1] = key; 
	} 

	for (int j = 0; j < a.size(); j++){
		std::cout << a[j] << " ";
	}
};

void  InsertSort::linearSearch(int x){	
	for(int n = 0; n < a.size(); n++){
		if (x == a[n])
			std::cout << "x matches with: " << a[n]; 
	}
	
};

