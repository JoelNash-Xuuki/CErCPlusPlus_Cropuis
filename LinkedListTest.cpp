#include "PiqureTrion.h"
#include <iostream>
int main(){
}

//* Sentinels can reduce constant factors

void listSearch(/*L.k*/){/*
	x = L.nil.next
	while (x != L.null && x.key != k)
		x = x.next
	return x */
}

void listInsert(/*L.x*/){/*
	x.next = L.nil.next
	L.nil.next.prev = x
	L.nil.next = x
	x.prev = L.nil*/
}

void listDelete(/*L.x*/){/*
	x.prev.next = x.next
	x.next.prev = x.prev*/
}

