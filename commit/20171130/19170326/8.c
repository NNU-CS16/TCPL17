#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node* merge(struct Node* head1, struct Node* head2);
void output(struct Node *head);

int main( )
{
	struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p3=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p4=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p5=(struct Node *)malloc(sizeof(struct Node));
	p1->val=11;	p1->next=p2;
	p2->val=22;	p2->next=p3;
	p3->val=33;	p3->next=NULL;
	p4->val=44;	p4->next=p5;
	p5->val=55;	p5->next=NULL;
	struct Node *head=merge(p1,p4);
	output(head);
	
	return 0;
}

struct Node* merge(struct Node* head1, struct Node* head2)
{
	struct Node *p1=head1;
	struct Node *p2=head2;
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
	struct Node *prev=NULL;
	while(p1!=NULL&&p2!=NULL)
	{
		if(p1->val<p2->val)
		{
			p->val=p1->val;
			p->next=(struct Node *)malloc(sizeof(struct Node));
			prev=p;
			p=p->next;
			p1=p1->next;
		}
		else
		{
			p->val=p2->val;
			p->next=(struct Node *)malloc(sizeof(struct Node));
			prev=p;
			p=p->next;
			p2=p2->next;
		}
	}
	while(p1!=NULL)
	{
		p->val=p1->val;
		p->next=(struct Node *)malloc(sizeof(struct Node));
		prev=p;
		p=p->next;
		p1=p1->next;
	}
	
	while(p2!=NULL)
	{
		p->val=p2->val;
		p->next=(struct Node *)malloc(sizeof(struct Node));
		prev=p;
		p=p->next;
		p2=p2->next;
	}
	prev->next=NULL;
	free(p);
	return head;
}

void output(struct Node* head)
{
	struct Node *p=head;
	while(p!=NULL)
	{
		printf("%X %d %x\n",p,p->val,p->next);
		p=p->next;
	}
}


