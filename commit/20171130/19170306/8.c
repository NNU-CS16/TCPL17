#include<stdio.h>
#include<stdlib.h>
struct Node	
{
	int val;
	struct Node* next;		
};
struct Node* construct(int[],int);
struct Node* merge(struct Node*,struct Node*);
int main()
{
int arr[]={2,5,7},arr2[]={1,3,9,11};
struct Node* head=construct(arr,3);
struct Node* head2=construct(arr2,4);
head=merge(head,head2);
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

struct Node* merge(struct Node* head1,struct Node* head2)
{
struct Node* newhead=NULL,*vicehead=NULL;
	if (head1->val<=head2->val)
		{
		newhead=head1;vicehead=head2;}
	else 	{
		newhead=head2;vicehead=head1;}
struct Node* insertpoint=NULL,*shift1=newhead,*shift2=vicehead;
struct Node* temp1,*temp2;
	temp1=shift1->next;
	temp2=shift2->next;
	shift1->next=shift2;
	shift2->next=temp1;
	shift2=temp2;
	insertpoint=shift1->next;
	shift1=shift1->next->next;	
	while (shift1!=NULL&&shift2!=NULL)
		{
		if (shift1->val>=shift2->val)
			{
			insertpoint->next=shift2;
			temp2=shift2->next;
			shift2->next=shift1;
			insertpoint=shift2;
			shift2=temp2;
			}
		else 	{
			shift1=shift1->next;
			insertpoint=insertpoint->next;
			}
		}
	if (shift1==NULL)
		insertpoint->next=shift2;
return newhead;
}	
