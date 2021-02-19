#include "Algorithms.h"
#include <iostream>

Algorithms::Algorithms(std::initializer_list<int> lst){
	for(int d: lst)
		a.push_back(d);
};

void  Algorithms::insertSort(){	
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

void Algorithms::getSortLength(){
	for(int j = 0; j<a.size(); j++){
		std::cout << (a[j] + " ");
	}
};

void Algorithms::max(){
	int max = 0;
	for(n = 0; n < a.size(); n++){
		if(a[n] > max)
			max = a[n];
	}
	std::cout << max;
};


void  Algorithms::search(int x){	
	for(int n = 0; n < a.size(); n++){
		if (x == a[n])
			std::cout << "x matches with: " << a[n]; 
	}
};

