#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* reverse(struct Node* head) 
{
	if(head == NULL || head -> next == NULL) 
		return head;
	else
	{
		struct Node *p=reverse(head->next); 
		head -> next -> next = head; 
		head -> next = NULL;
		return p;
	}
}
void output(struct Node *head)
{
	struct Node *p;
	for (p = head; p != NULL; )
	{
		printf("%X %d %X\n",p,p->val,p->next); 
		p=p->next; 
	}
}
int main()
{
	struct Node *p1, *p2, *p3, *p4;
	p1=(struct Node *)malloc(sizeof(struct Node)); 
	p2=(struct Node *)malloc(sizeof(struct Node)); 
	p3=(struct Node *)malloc(sizeof(struct Node)); 
	p4=(struct Node *)malloc(sizeof(struct Node)); 
	p1 -> val = 11;	p1 -> next = p2;
	p2 -> val = 22;	p2 -> next = p3;
	p3 -> val = 33;	p3 -> next = p4;
	p4 -> val = 44;	p4 -> next = NULL;
	struct Node *head=reverse(p1); 
	output(head); 
	return 0;
}


