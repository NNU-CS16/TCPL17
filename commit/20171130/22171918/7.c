#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* reserve(struct Node* head);
int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* shift = head;
	int i;
	for (i = 0; i < 10; i++)
	{
		shift -> val = i;
		shift -> next = (struct Node*)malloc(sizeof(struct Node));
		shift = shift -> next;
	}
	shift -> next = NULL;
	head = reserve(head);
	shift = head;
	while (shift -> next != NULL)
	{
		printf("%d ", shift -> val);
		shift = shift -> next;
	}
	printf("%d\n", shift -> val);
	return 0;
}
struct Node* reserve(struct Node* head)
{
	struct Node* temp = head -> next;
	struct Node* p = head;
	struct Node* q = head -> next;
	while (temp != NULL)
	{
		temp = q -> next;
		q -> next = p;
		p = q;
		q = temp;
	}
	head -> next = 	NULL;
	return p -> next;
}

