#include "Queue.h"
#include <iostream>

Queue::Queue(){
	head = tail = 0;
};

void Queue::enqueue(int x){
	if(!isFull()){
		if(tail < sizeof(q)/sizeof(*q)){
			q[tail] = x;
			tail++;
		}
		else	
			tail = 0;
	}
	else
		std::cout << "overflow \n";
};

void Queue::dequeue(){
	if(!isEmpty()){
		int x = q[head];
		if (head < sizeof(q)/sizeof(*q))
			head++;
		else
			head = 0;
	}
	else 
		std::cout << "underflow \n";
};

int Queue::getHead(){
	return q[head];
};

bool Queue::isEmpty(){
	return head == tail;
};

bool Queue::isFull(){
	if(head == tail +1)
		return true;
	return false;	
};



