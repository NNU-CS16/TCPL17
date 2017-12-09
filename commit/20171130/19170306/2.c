#include<stdio.h>
#include<stdlib.h>
struct Node	
{
	int val;
	struct Node* next;		
};
struct Node* construct(int[],int);
struct Node* insert(struct Node*,int);
int main()
{
int arr[]={0,1,2,3,4};
struct Node* head=construct(arr,5);
head=insert(head,-1);
while (head!=NULL)
	{
	printf(" %d ",head->val);
	head=head->next;
	}
printf("\n");
return 0;
}

struct Node* construct(int arr[],int size)
{
struct Node* head=NULL;
while (size-1>=0)
	{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->val=arr[size-1];
	temp->next=head;
	head=temp;
	size--;
	}
return head;
}

struct Node* insert(struct Node* head,int value)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->val=value;
temp->next=head;
head=temp;
return head;	
}
