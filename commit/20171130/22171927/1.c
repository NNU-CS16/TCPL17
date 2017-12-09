#include <stdio.h>
#include <stdlib.h>
struct Node* construct(int arr[], int size);
struct Node
{
	int val;
	struct Node* next;
};
int main()
{
	int arr[10];
	int j;
	printf("Please input arr[10]:");
	for (j = 0; j < 10; j++)
	{
		scanf("%d",&arr[j]);
	}
	int size = 10;
	struct Node *k;
	k = construct(arr, size);
	while (k != NULL)
	{
		printf("%d ",k -> val);
		k = k ->next;
	}
	return 0;
}
struct Node* construct(int arr[], int size)
{
	struct Node *head, *newp;
	head = NULL;
	int i;
	for(i = (size-1); i >= 0; i--)
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = arr[i];
		newp->next = head;
		head = newp;
	}
	return head;
}
