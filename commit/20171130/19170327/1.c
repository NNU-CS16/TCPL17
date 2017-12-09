#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* construct(int arr[], int size)
{
	struct Node *p;
	struct Node* head = (struct Node*)malloc(sizeof(struct Node)); 
	head -> val = arr[0];
	p = head;
	for(int n = 1; n < size; n++)
	{
		p -> next = (struct Node*)malloc(sizeof(struct Node)); 
		p = p -> next; 
		p -> val = arr[n]; 
		p -> next = NULL;	    
	}
	return head;
}
int main()
{
	int size,n;
	scanf ("%d",&size);
	int arr[100];
	for(n = 0; n < size; n++)
		scanf("%d", &arr[n]);
	struct Node *p = construct (arr, size);     
	for ( ; p != NULL ; )
	{
		printf ("%d ", p -> val);
		p = p -> next;
	}
	printf ("\n");
	return 0;
}





