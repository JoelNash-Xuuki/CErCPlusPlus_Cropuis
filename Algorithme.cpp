#include "InsertSort.h"
#include "Counting.h"

#include <iostream>
int main(){
	InsertSort in = {5,2,4,6,1,3};
	in.linearSearch(6);

	Counting counting = Counting(4);
	counting.counting_1();
	counting.counting_2();
	counting.counting_3();
}
