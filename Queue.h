class Queue{
private:
	int head;
	int tail;
	int q[4];
public:
	Queue();
	void enqueue(int x);
	void dequeue();	
	int	getHead();
	bool isEmpty();
	bool isFull();
};
