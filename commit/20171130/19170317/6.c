#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* delete(struct Node* head, int val);

int main()
{
	struct Node *p1;
	p1 = (struct Node *) malloc (sizeof(struct Node));
	p1 -> val = 1;
	struct Node *p2;
	p2 = (struct Node *) malloc (sizeof(struct Node));
	p2 -> val = 5;
	struct Node *p3;
	p3 = (struct Node *) malloc (sizeof(struct Node));
	p3 -> val = 1;
	p1 -> next = p2;
	p2 -> next = p3;
	p3 -> next = NULL;
	struct Node *head;
	head = p1;
	int val = 1;
	printf("%p\n", delete(head, val));

	return 0;
}

struct Node* delete(struct Node* head, int val)
{
	struct Node *prev, *p;
	prev = NULL;
	p = head;
	while (p != NULL)
	{
	  if (p -> val ==val)
		break;
	  prev = p;
	  p = p -> next;
	}
	if (p == NULL)
	  return NULL;
	if (p == head)
	  head = head -> next;
	else
	  prev -> next = p -> next;
	free(p);

	return head;
}
