#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node *InsertBeforeHead(struct Node *head,struct Node *p) 
{
	p -> next = head;
	head = p;
	return head;
}
struct Node *construct(int arr[],int size) 
{
	struct Node *head, *p;
	int i;
	head = NULL;
	for(i=size-1;i>=0;i--) 
	{
		p = (struct Node *)malloc(sizeof(struct Node)); 
		p -> val = arr[i]; 
		head = InsertBeforeHead(head,p);
	}
	return head;
}

struct Node *Delete(struct Node *head,struct Node *target) 
{
	struct Node *prev;
	for(prev = head; target != NULL; )
	{
		if (prev -> next == target || prev == target) 
			break;
		prev = prev -> next;
	}
	if(head == NULL) 
		return NULL; 
	if(target == head)
		head=head->next;
	else
		prev->next=target->next;
	free(target);
		return head;
}
struct Node* delete(struct Node* head, int val)
{
	struct Node *p;
	for(p = head; p != NULL; )
	{
		if (p -> val == val)
			head = Delete(head,p);
	        p = p -> next;
	}
	return head;
}
void Output(struct Node *head) 
{
	struct Node *p;
	p = head;
	if (p == NULL)
		printf("NULL\n");
	for ( ;p != NULL; )
	{
		printf("%p\t%d\t%p\n",p,p -> val,p -> next);
		p = p -> next;
	}
}


int main()
{
	int size; 
	scanf("%d",&size); 
	int arr[size]; 
	for(int i = 0; i < size; i++)
	       scanf("%d",arr+i); 
	int val;
	scanf("%d",&val); 
	struct Node *head = construct(arr,size); 
	head = delete(head,val); 
	Output(head); 
	return 0; 
}


		

