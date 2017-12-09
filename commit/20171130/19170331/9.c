#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

void clear(struct Node* head);
void output(struct Node* head);

void clear(struct Node* head)
{
	struct Node *p=NULL;
	while (head!=NULL)
	{
		p=head;
		head=head->next;
		free(p);
	}
}

void output(struct Node* head)
{
	struct Node *p=head;
	while (p!=NULL)
	{
		printf("%X %d %x\n",p,p->val,p->next);
		p=p->next;
	}
}
int main( )
{
	struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p3=(struct Node *)malloc(sizeof(struct Node));
	p1->val=11;	p1->next=p2;
	p2->val=22;	p2->next=p3;
	p3->val=33;	p3->next=NULL;
	output(p1);
	clear(p1);
	output(p1);

	return 0;
}


