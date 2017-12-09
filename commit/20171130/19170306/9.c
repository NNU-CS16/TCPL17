#include<stdio.h>
#include<stdlib.h>
struct Node	
{
	int val;
	struct Node* next;		
};
struct Node* construct(int[],int);
void clear(struct Node*);
int main()
{
int arr[]={0,1,2,3,4};
struct Node* head=construct(arr,5);
clear(head->next->next);
while (head!=NULL)
	{
	printf(" %d ",head->val);
	head=head->next;
	}
printf("\n");
head->next->next=NULL;
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

void clear(struct Node* head)
{
if (head->next!=NULL)
	clear(head->next);
free(head);
return;
}
