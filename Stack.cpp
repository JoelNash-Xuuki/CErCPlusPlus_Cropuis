#include "Stack.h"
#include <iostream>

Stack::Stack(){
	top = -1;
};

bool Stack::isEmpty(){
	return top < 0;
};

bool Stack::isFull(){
	return top > max;
};

void Stack::push(int x){
	if(top >= max)
		std::cout << "overflow \n";
	else
		a[++top] = x;
};

void Stack::pop(){
	if(top < 0)
		std::cout << "underflow \n";
	else
		top--;
};

void Stack::getTop(){
		std::cout << a[top] << "\n";
};
