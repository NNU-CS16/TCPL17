#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *Ins(struct Node *head,struct Node *p)

{

	p->next=head;

	head=p;

	return head;

}
struct Node *construct(int arr[],int size)

{

	struct Node *head,*p;
	int i;

	head=NULL;

	for(i=size-1;i>=0;i--)

	{

		p=(struct Node *)malloc(sizeof(struct Node));

		p->val=arr[i];

		head=Ins(head,p);

	}



	return head;

}
void OutPut(struct Node *head)

{

	struct Node *np;

	np=head;

	if(np!=NULL)

	{

		printf("%d",np->val);

		printf("%c",np->next==NULL ? '\n' : ' ');

		np=np->next;

	}

}
int main()

{

	int size;
	int i;

	scanf("%d",&size);

	int a[size];

	for(i=0;i<size;i++)

		scanf("%d",a+i);

	struct Node *head=construct(a,size);

	OutPut(head);

	return 0;

}

