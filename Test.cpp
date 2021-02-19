#include "Algorithms.h"
#include "Stack.h"
#include <iostream>

int main(){
	Stack s; 
	s.getTop();
	s.push(73);
	for(int i=0; i<5; i++)
		s.pop();

	s.push(76);
	s.getTop();
}

