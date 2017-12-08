#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* insert(struct Node* head, int val);
int main()
{
	int val;
	scanf("%d",&val);
	struct Node *head,*p,*p1,*p2,*p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->val = 2;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->val = 3;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
	head = p1;
	head = insert(head,val);
	p = head;
	while (p != NULL)
	{
		printf("%d\t",p->val);
		p = p->next;
	}
	return 0;
}
struct Node* insert(struct Node* head, int val)
{
	struct Node *p,*prev,*newp;
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp->val = val;
	prev = NULL;
	p = head;
	while (p != NULL)
	{
		if (p->val > newp->val)
			break;
		prev = p;
		p = p->next;
	}
	newp->next = p;
	if (p == head)
		head = newp;
	else
		prev->next = newp;
	return head;
} 
	
