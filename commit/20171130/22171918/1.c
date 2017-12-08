#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* construct(int arr[], int size);
int main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;
	struct Node *p = construct(arr, size);
	while (p -> next != NULL)
	{
		printf("%d ", p -> val);
		p = p -> next;
	}
	printf("%d\n", p -> val);
	return 0;
}
struct Node* construct(int arr[], int size)
{
	int i, j = sizeof(struct Node);
	struct Node* head = (struct Node*)malloc(j);
	head -> val = arr[0];
	head -> next = NULL;
	struct Node* shift = head;
	for (i = 1; i < size; i++)
	{
		shift -> next = (struct Node*)malloc(j);
		shift = shift -> next;
		shift -> val = arr[i];
		shift -> next = NULL;
	}
	return head;
}
	
