#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
void clear(struct Node* head)
{
	struct Node* p, *q;
	for (p = head; p -> next != NULL; )
	{
		q = p;
		p = p -> next;
	       free(q);
	}
	free(p);
}
int main()
{
	int k;
	int a[4];
	for (k = 0; k < 4; k++)
		scanf ("%d", &a[k]);
	struct Node *head;
	head = (struct Node*)malloc(sizeof(struct Node)); 
	head -> val = a[0];                                         
	struct Node *p;  
	p = head;  
	for (k = 1; k < 5; k++)
	{
		p -> next = (struct Node*)malloc(sizeof(struct Node)); 
		p = p -> next; 
		p -> val = a[k]; 
		p -> next = NULL;
	}
	clear(head);
	return 0;
}


