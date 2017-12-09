#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};

struct Node* insert(struct Node* head, int val)
{
	struct Node *p,*p1;
	p = head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p1 = (struct Node *)malloc(sizeof(struct Node));
	p1->val = val;
	p->next = p1;
	p1->next = NULL;
	return head;
}


int main()
{
	int i;
	scanf("%d",&i);
	struct Node *head,*p;
	head = (struct Node *)malloc(sizeof(struct Node));
	head->val = 1;
	head->next = NULL;
	head = insert(head,i);
	p = head;
	while (p != NULL)
	{
		printf("%d\t",p->val);
		p = p->next;
	}
	return 0;
}
