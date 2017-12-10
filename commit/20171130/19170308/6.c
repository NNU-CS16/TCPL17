#include<stdio.h>
#include<stdlib.h>
struct Node	
{
	int val;
	struct Node* next;		
};
struct Node* construct(int[],int);
struct Node* delete(struct Node*,int);
int main()
{
int arr[]={0,1,2,0,0,3,4,0};
struct Node* head=construct(arr,8);
head=delete(head,0);
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

struct Node* delete(struct Node* head,int target)
{
struct Node* beforehead=(struct Node*)malloc(sizeof(struct Node));
	beforehead->next=head;
struct Node* shift1=beforehead,*shift2=head;
while (shift2!=NULL)
	{
	if (shift2->val==target)
		{
		struct Node* temp;
		temp=shift2->next;
		free(shift2);
		shift1->next=temp;
		shift2=temp;
		continue; 
		}
	shift1=shift2;
	shift2=shift2->next;
	}
head=beforehead->next;
free(beforehead);	
return head;
}
