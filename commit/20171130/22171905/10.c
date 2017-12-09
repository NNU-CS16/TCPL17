#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* create();
struct Node* insert(struct Node* head, int n);
void output(struct Node *head);
struct Node* release(struct Node *head);

int main()
{
	int n;
	scanf("%d",&n);
	struct Node *head;
	head=create();
	head=insert(head,n);
	output(head);
	head=release(head);
	return 0;
}

struct Node* create()
{
	struct Node *p1,*p2,*p3;
	p1=(struct Node*)malloc(sizeof(struct Node));p1->val=1;
	p2=(struct Node*)malloc(sizeof(struct Node));p2->val=3;
	p3=(struct Node*)malloc(sizeof(struct Node));p3->val=4;
	p1->next=p2;p2->next=p3;p3->next=NULL;
	return p1;
}

struct Node* insert(struct Node* head,int n)
{
	struct Node *newp=(struct Node*)malloc(sizeof(struct Node));
	struct Node *p;
	newp->val=n;
	p=head;
	if(head==NULL)
	{
		head=newp;
		newp->next=NULL;
		return newp;
	}
	while(p->next->val<=newp->val)
		p=p->next;
	newp->next=p->next;
	p->next=newp;
	return head;
}

void output(struct Node* head)
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d\t",p->val);
		p=p->next;
	}
	printf("\n");
}

struct Node* release(struct Node *head)
{
	struct Node *p;
	if(head==NULL)
		return NULL;
	while(p!=NULL)
	{
		p=head;
		head=p->next;
		free(p);
	}
	free(head);
	return NULL;
}
