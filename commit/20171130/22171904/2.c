#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node* next;
};

struct Node *Create()
{
	struct Node *p1,*p2;
	p1=(struct Node *)malloc(sizeof(struct Node));p1->val=125;
	p2=(struct Node *)malloc(sizeof(struct Node));p2->val=126;
	p1->next=p2;p2->next=NULL;
	return p1;
}
void Output(struct Node *head)
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%X\t%d\t%X\n",p,p->val,p->next);
		p=p->next;
	}
}

struct Node* insert(struct Node* head,int val)
{
	struct Node *newp=(struct Node*)malloc(sizeof(struct Node));
	newp->val=val;
	newp->next=head;
	head=newp;
	return head;

}

int main()
{
	int val;
	printf("Please input the value of val:");
	scanf("%d",&val);
	struct Node *head=Create();
	head=insert(head,val);
	Output(head);
	return 0;
}
