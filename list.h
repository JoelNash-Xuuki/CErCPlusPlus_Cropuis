#include <stdio.h>

typedef char DATA;

struct linked_list {
	DATA d;
	struct linked_list *next;
};

typedef struct linked_list ELEMENT;
typedef ELEMENT* LINK;

LINK string_to_list(char s[]){

	LINK head;
	
	if(s[0] == '\0')
		return NULL;
	else {
		head = malloc(sizeof(ELEMENT));
		head -> d = s[0];
		head -> next = string_to_list(s + 1);
		return head;
	}
}

int count(LINK head){
	if(head == NULL)
		return 0;
	else{	
		printfhead -> d;
		return (1 + count(head -> next));
	}
}

LINK search(DATA c, LINK head){
	if(head == NULL)
		return NULL;
	else if (c == head -> d)
		return head;
	else
		return (search(c, head -> next));
}

void insert(LINK p1, LINK p2, LINK q){
	p1 -> next = q;
	q -> next = p2;
}

void deleteList(LINK head){
	if (head != NULL) {
		deleteList(head -> next);
		free(head);
	}
}

