#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(){
	LINK head = string_to_list("Hello");
/*
	printf("base case: %s\n", head);
	printf("Count: %i \n", count(head)); 
	search('l', head);
	printf("Search: %u \n", search('l', head));
	insert(head, head, search('l', head));
*/
	print_list(head);

	return 0;	
}
