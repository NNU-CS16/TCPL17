#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* insert(struct Node* head, int val)
{
	struct Node *p = (struct Node *)malloc(sizeof(struct Node)); 
	p -> val = val;
	p -> next = head;
	head = p;
	return head;
}
void output(struct Node* head) 
{
	struct Node *p = NULL; 
	for (p = head; p != NULL; )
	{
		printf ("%d %d\n", p -> val, p -> next);
		p = p -> next;
	}
}
int main()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *)malloc(sizeof(struct Node)); 
	p2 = (struct Node *)malloc(sizeof(struct Node)); 
	p3 = (struct Node *)malloc(sizeof(struct Node)); 
	p1 -> val = 1;
	p1 -> next = p2;
	p2 -> val = 2;
	p2 -> next = p3;
	p3 -> val = 3;
	p3 -> next = NULL;
	struct Node* head = p1; 
	head = insert(head,0); 
	output(head); 
	return 0;
}




