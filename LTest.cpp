#include<cstddef>
#include<iostream>

using namespace std;

class Node {
		public:
	  		int data;
	   	Node *next;
	};

void print_list(Node * n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

void push(struct Node ** head_ref, int new_data) {
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = ( * head_ref);
    ( * head_ref) = new_node;
}	

void listInsert(Node* l){
	Node * x = NULL;
	x = new Node();
	x->data = 99;
	x ->next = l;
	l->next = x; 
}

int main() {
	Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;
	Node * fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();	
	fourth = new Node();

	head->data = 1;
    head->next = second;

    second-> data = 2;
    second-> next = third;

	third -> data = 3;
	third -> next = fourth;

  	fourth -> data = 4;
  	fourth -> next = NULL;

	listInsert(head);

//	print_list(head);
}
