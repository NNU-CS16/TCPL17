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
	struct Node *head;
	head = (struct Node *) malloc (sizeof(struct Node));
	head -> val = 0;
	struct Node *shift;
	shift = (struct Node *) malloc (sizeof(struct Node));
	shift -> val = 1;
	head -> next = shift;
	shift -> next = NULL;
	printf("%p\n", insert(head, 2));
	
	return 0;
}

struct Node* insert(struct Node* head, int val)
{
	struct Node *temp;
	temp = head;
	while (temp != NULL)
	  temp = temp -> next;
	struct Node *newp;
	newp = (struct Node *) malloc (sizeof(struct Node));
	newp -> val = val;
	newp -> next = NULL;
	temp = newp;

	return head;
}
