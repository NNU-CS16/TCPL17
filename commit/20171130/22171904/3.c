#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node* next;
};
struct Node *Create()
{
	struct Node *p1,*p2,*p3;
	p1=(struct Node *)malloc(sizeof(struct Node));p1->val=125;
	p2=(struct Node *)malloc(sizeof(struct Node));p2->val=126;
	p3=(struct Node *)malloc(sizeof(struct Node));p3->val=124;
	p1->next=p2;
	p2->next=p3;
	p3->next=NULL;
	return p1;
}

struct Node *insert(struct Node *head,int val)
{
	struct Node *newp=(struct Node*)malloc(sizeof(struct Node));
	newp->val=val;
	struct Node *p=head;
	while(p!=NULL)
	{
		if(p->next==NULL)
			break;
		p=p->next;
	}
	p->next=newp;
	newp->next=NULL;
	return head;

}

void Output(struct Node *head)
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d",p->val);
		printf("%c",p->next==NULL?'\n':' ');
		p=p->next;
	}
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


