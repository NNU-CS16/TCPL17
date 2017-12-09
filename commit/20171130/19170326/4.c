#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node* insert(struct Node* head, int val);
void output(struct Node *head);

int main( )
{
	struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p3=(struct Node *)malloc(sizeof(struct Node));
	p1->val=11;
	p1->next=p2;
	p2->val=22;
	p2->next=p3;
	p3->val=33;
	p3->next=NULL;
	struct Node *head=insert(p1,12);
	output(head);
	
	return 0;
}

struct Node* insert(struct Node* head, int val)
{
	struct Node *p=head;
	struct Node *prev=NULL;
	struct Node *in=(struct Node *)malloc(sizeof(struct Node));
	in->val=val;
	in->next=NULL;
	while(p!=NULL)
	{
		if(in->val<p->val)
		{
			if(p!=head)
			{
				in->next=p;
				prev->next=in;
			}
			else
			{
				in->next=head;
				head=in;
			}
			break;
		}
		prev=p;
		p=p->next;
	}
	if(in->val>prev->val)
		prev->next=in;
	return head;
}

void output(struct Node *head)
{
	struct Node *p=head;
	while(p!=NULL)
	{
		printf("%X %d %X\n",p,p->val,p->next);
		p=p->next;
	}
}


