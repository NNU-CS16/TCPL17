#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node* delete(struct Node* head, int val);
void output(struct Node *head);

int main( )
{
	struct Node *p3=(struct Node *)malloc(sizeof(struct Node));
	p3->val=33;
	p3->next=NULL;
	struct Node *head=delete(p3,33);
	output(head);
	return 0;
}

struct Node* delete(struct Node* head, int val)
{
	struct Node *p=NULL;
	struct Node *prev=NULL;
	if(val==head->val)
	{
		prev=head;
		head=head->next;
		free(prev);
	}
	else
	{
		p=head->next;
		prev=head;
		while(p!=NULL)
		{
			if(val==p->val)
			{
				prev->next=p->next;
				free(p);
			}
			prev=p;
			p=p->next;
		}
	}
	return head;
}

void output(struct Node* head)
{
	struct Node *p=head;
	while(p!=NULL)
	{
		printf("%X %d %X\n",p,p->val,p->next);
		p=p->next;
	}
}
