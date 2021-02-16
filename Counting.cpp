#include "Counting.h"
#include <iostream>
using namespace std;

Counting::Counting(int n){
	n = in;	
}

void Counting::counting_1(){
	sum = 0;
	for(auto r=0; r<n; r++){
		for(int c=0; c<n; c++){
			cout << "i ";
			sum = sum+1;
		}
		cout << "\n";
	}
	cout << sum << "\n";
}

void Counting::counting_2(){
	sum = 0;
	for(auto r=0; r<n; r++){
		for(int c=0; c<n; c++){
			cout << "i ";
		}
		sum = sum+n;
		cout << "\n";
	}
	cout << sum << "\n";
}

void Counting::counting_3(){
	sum = 0;
	for(auto r=0; r<n; r++){
		for(int c=0; c<n; c++){
			cout << "i ";
		}
		cout << "\n";
	}
	cout << n*n << "\n";
}

/*
for(int r : n){
	for(int c : n)
		cout << "\n";
		sum = sum+1;
}

for(int n=0; n<j; n++){
		for(int n=0; n<j; n++){
			cout << "i ";
		}
		cout << "\n";
	}
*/
