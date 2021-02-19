#include "Algorithms.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>

int main(){
	Queue q;
	q.dequeue();
	q.enqueue(10);
	std::cout << (q.getHead()) << "\n";
	q.dequeue();
	q.enqueue(13);
	q.enqueue(33);
	q.enqueue(46);
	q.enqueue(36);
	q.enqueue(56);
}

/*
	Stack s; 
		s.push(33);
		s.getTop();
		
		for(int i=0; i<4; i++)
			s.push(73+i);
		
		s.getTop();
		for(int i=0; i<5; i++)
			s.pop();
	
		s.push(75);
		s.getTop();
*/

