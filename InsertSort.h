#include<vector>

class Algorithms{
private:
	std::vector<int> a;
	int key;

public:
	InsertSort(std::initializer_list<int>);	
	void insertSort();
	void linearSearch(int x);
	void getSortLength();
};
