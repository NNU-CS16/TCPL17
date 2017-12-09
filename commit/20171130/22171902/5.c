#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
	struct Node* delete(struct Node* head, struct Node* target);
	struct Node* create();
	struct Node* release(struct Node *head);
	void output(struct Node *head);
int main()
{
	struct Node *head,*target;
	scanf("%d",&(target->val));
	head=create();
	head=delete(head,target);
	output(head);
	head=release(head);
	return 0;
}


struct Node* create()
{
	struct Node *p1,*p2,*p3;
	p1=(struct Node*)malloc(sizeof(struct Node));p1->val=1;
	p2=(struct Node*)malloc(sizeof(struct Node));p2->val=2;
	p3=(struct Node*)malloc(sizeof(struct Node));p3->val=3;
	p1->next=p2;p2->next=p3;p3->next=NULL;
	return p1;

}

struct Node* delete(struct Node* head,struct Node* target)
{
	struct Node *p,*prve;
	prve=NULL;p=head;
while(p!=NULL)
{

	if(p->val==target->val)
	break;
	prve=p;p=p->next;

}

	if(p==NULL)

	return head;

if(p==head)

	head=head->next;

else

	prve->next=p->next;

free(p);

	return head;

}



struct Node* release(struct Node *head)

{

struct Node *p;

if(head==NULL)

	return NULL;

while(head!=NULL)

{

	p=head;

	head=head->next;

free(p);

}

	free(head);

return NULL;

}

void output(struct Node *head)

{

struct Node *p=head;

while(p!=NULL)

{

	printf("%d\t",p->val);

	p=p->next;

}

	printf("\n");

}
