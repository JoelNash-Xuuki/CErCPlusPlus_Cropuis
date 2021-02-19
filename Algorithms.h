#include<vector>

class Algorithms{
private:
	int n;	
	int sum;
	std::vector<int> a;
	int key;

public:
	Algorithms(std::initializer_list<int>);	
	void insertSort();
	void search(int x);
	void getSortLength();
	void max();
	void count_1();	
	void count_2();
	void count_3();
};
