#include <stdio.h>
#include "ListNodeBased.h"
#include "Node.c"

struct ListNodeBased {
	struct Node* head;
	int numItems;
	struct Node* curr;
	};


void addFirst(struct ListNodeBased lst, int item) {
	struct Node newNode;
	(&newNode)->next = (&lst)->head;
	(&lst)->head = &newNode;
	(&lst)->numItems++;	
}


int main(){
	struct ListNodeBased testList;
	//addFirst(testList, 3);

	return 0;
}
