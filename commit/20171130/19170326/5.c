#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node* delete(struct Node* head,struct Node* target);
void output(struct Node* head);

int main( )
{
	struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
	p1->val=11;
	p1->next=NULL;
	struct Node *head=NULL;
	head=delete(p1,p1);
	output(head);

	return 0;
}

struct Node* delete(struct Node* head,struct Node* target)
{
	struct Node *p=NULL;
	struct Node *prev=NULL;
	if(target==head)
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
			if(p==target)
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

void output(struct Node *head)
{
	struct Node *p=head;
	while(p!=NULL)
	{
		printf("%X %d %X\n",p,p->val,p->next);
		p=p->next;
	}
}
