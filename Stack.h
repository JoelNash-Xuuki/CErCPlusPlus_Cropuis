class Stack{
private:
	int top = -1;	
	int max = sizeof(a)/sizeof(*a)-1;
	int a[4] = {11,30,49,43};
public:
	Stack();
	bool isEmpty();
	bool isFull();
	void push(int x);
	void pop();
	void getTop();
};
