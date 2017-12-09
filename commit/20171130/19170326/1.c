#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node* construct(int arr[], int size); 
void output(struct Node *head);

int main( )
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	struct Node *head;
	head=construct(arr,size);
	output(head);

	return 0;
}

struct Node* construct(int arr[], int size)
{
	int i;
	struct Node *p=(struct Node *)malloc(sizeof(struct Node));
	struct Node *head=p;
	for(i=0; i<size-1; i++)
	{
		p->val=arr[i];
		p->next=(struct Node *)malloc(sizeof(struct Node));
		p=p->next;
	}
	p->val=arr[size-1];
	p->next=NULL;
	return head;
}

void output(struct Node *head)
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d %X\n",p->val,p->next);
		p=p->next;
	}
}

