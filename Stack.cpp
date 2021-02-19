#include "Stack.h"
#include <iostream>

Stack::Stack(){
	for(auto v : a)
		top++;
};

bool Stack::isEmpty(){
	return top < 0;
};

bool Stack::isFull(){
	return top > max;
};

void Stack::push(int x){
	if(top < 3 ){
		a[++top] = x;
	}
	else
		std::cout << "overflow \n";
};

void Stack::pop(){
	if(top == 0)
		std::cout << "underflow \n";
	else
		top--;
};

void Stack::getTop(){
	if(!isEmpty() && !isFull())
		std::cout << a[top] << "\n";
	std::cout << top;
};
