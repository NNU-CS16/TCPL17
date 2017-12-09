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
	int i;
	struct Node *head = (struct Node *) malloc (sizeof(struct Node));
	head -> val = 1;
	struct Node *shift = (struct Node *) malloc (sizeof(struct Node));
	shift -> val = 2;
	head -> next = shift;
	shift -> next = NULL;
	printf("%p\n", insert(head, 0));
	
	return 0;
}

struct Node* insert(struct Node* head, int val)
{
	struct Node *newp = (struct Node *) malloc (sizeof(struct Node));
	newp -> val = val;
	newp -> next = head;
	head = newp;

	return head;
}
