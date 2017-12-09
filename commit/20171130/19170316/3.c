#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};

struct Node* insert(struct Node* head, int val)
{
	struct Node* shift;
	shift=head;
	while(shift->next!=NULL)
        shift=shift->next;
	shift->next=(struct Node*)malloc(sizeof(struct Node));
	shift=shift->next;
	shift->val=val;
	shift->next=NULL;
	return head;
}

struct Node *Create()
{
	struct Node *p1,*p2,*p3;
	p1 =(struct Node *)malloc(sizeof(struct Node));p1->val=1;
	p2 =(struct Node *)malloc(sizeof(struct Node));p2->val=2;
	p3 =(struct Node *)malloc(sizeof(struct Node));p3->val=3;
	p1->next=p2;
	p2->next=p3;
	p3->next=NULL;
	return p1;
}

int main ()
{
	struct Node *head=Create();
	int val=1;
	head=insert(head,val);
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
	printf("%d ",p->val);
	p=p->next;
	}
	return 0;
}
