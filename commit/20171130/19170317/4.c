#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* insert(struct Node* head, int val);

int main()
{
	struct Node *p1 = (struct Node *) malloc (sizeof(struct Node));
	p1 -> val = 1;
	struct Node *p2 = (struct Node *) malloc (sizeof(struct Node));
	p2 -> val = 2;
	struct Node *p3 = (struct Node *) malloc (sizeof(struct Node));
	p3 -> val = 4;
	p1 -> next = p2;
	p2 -> next = p3;
	p3 -> next = NULL;
	int val = 3;
	struct Node *head = p1;
	printf("%p\n", insert(head, val));

	return 0;
}

struct Node* insert(struct Node* head, int val)
{
	struct Node *shift;
	shift = head;
	while (val > (shift -> val))
	  shift = shift -> next;
	struct Node *ins;
	ins = (struct Node *) malloc (sizeof(struct Node));
	ins -> val = val;
	ins -> next = shift;

	return head;
}	
