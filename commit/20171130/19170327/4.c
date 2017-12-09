#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};

struct Node* insert(struct Node* head, int val)
{ 
	struct Node *n = (struct Node *)malloc(sizeof(struct Node)); 
	struct Node *p=head; 
	struct Node *prev=NULL; 
	n->val=val;
	n->next=NULL; 
	for ( ;p != NULL; )
	{
		if (n -> val < p -> val) 
		{
			if (p !=head)
			{
				n -> next = p;
				prev -> next =n;
			}
			else
			{
				n -> next = head;
				head = n;
			}
			break;
		}
		prev = p;
		p = p -> next;
	}
	if (n -> val > prev -> val)
		prev->next=n;
	return head;
}
void output(struct Node *head)
{
	struct Node *p;
	for (p = head; p != NULL; )
	{
		printf("%X %d %X\n", p, p -> val, p-> next);
		p = p -> next;
	}
}
int main()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *)malloc(sizeof(struct Node)); 
	p2 = (struct Node *)malloc(sizeof(struct Node)); 
	p3 = (struct Node *)malloc(sizeof(struct Node)); 
	p1 -> val = 11;
	p1 -> next = p2;
	p2 -> val = 22;
	p2 -> next = p3;
	p3 -> val = 33;
	p3 -> next = NULL;
	struct Node *head=insert(p1,12); 
	output(head);
	return 0;
}




