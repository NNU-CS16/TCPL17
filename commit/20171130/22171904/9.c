#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node *InsertBeforeHead(struct Node *head,struct Node *newp)
{
	newp->next=head;
	head=newp;
	return head;
}

struct Node *construct(int arr[],int size)
{
	struct Node *head,*newp; int i;
	head=NULL;
	for(i=size-1;i>=0;i--)
	{
		newp=(struct Node *)malloc(sizeof(struct Node));
		newp->val=arr[i];
		head=InsertBeforeHead(head,newp);
	}
	return head;
}
			   
struct Node *DeleteHead(struct Node *head)
{
	struct Node *p;
	if(head==NULL) 
		return NULL;
	p=head->next;
	free(head);
	return p;
}
			    
void Output(struct Node *head)
{
	struct Node *p;
	p=head;
	if(p==NULL)
		printf("The linked list is empty!\n");
	while(p!=NULL)
	{
		printf("%d",p->val);
		printf("%c",p->next==NULL ? '\n' : ' ');
		p=p->next;
	}
}
			   
void clear(struct Node *head)
{
	while(head!=NULL)
	head=DeleteHead(head);
	printf("删除后:");
	Output(head);
}
			  
int main()
{
	int size;
	printf("Please input the value of size:");
	scanf("%d",&size);
	int a[size];
	printf("Please the content of the array a:");
	for(int i=0;i<size;i++)
		scanf("%d",a+i);
	struct Node *head=construct(a,size);
	printf("删除前:");
	Output(head);
	clear(head);
	return 0;
}
