#include <stdio.h>
#include <stdlib.h>
struct Node *construct(int arr[], int size);
struct Node *InsertBeforeHead(struct Node *head,struct Node *newp);

struct Node
{
	int val;
	struct Node *next;
};

void Output(struct Node *head)
{
	struct Node *p=head;
	struct Node *q;
	if (head==NULL)
		return;
	while (p->next!=NULL)
	{
		q=p->next;
		free(p);
		p=q;
	}
	free(p);
	head=NULL;
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++)
        scanf("%d",arr+i);
    struct Node *head=construct(arr,size);
    Output(head);
    return 0;
}

struct Node *construct(int arr[],int size)
{
    struct Node *head,*newp; int i;
    head=NULL;
    for (i=size-1;i>=0;i--)
    {
        newp=(struct Node *)malloc(sizeof(struct Node));
        newp->val=arr[i];
        head=InsertBeforeHead(head,newp);
    }
    return head;
}	

struct Node *InsertBeforeHead(struct Node *head,struct Node *newp)
{
    newp->next=head;
    head=newp;
    return head;
}
