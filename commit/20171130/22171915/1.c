#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};

struct Node* construct(int arr[], int size)
{

	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	head -> val = arr[0];
	head -> next = NULL;
	struct Node* temp = head;
	int i = 1;
	while (i < size)
	{
		temp -> next = ( struct Node * )malloc( sizeof( struct Node ) );
		temp = temp -> next;
		temp -> val = arr[i];
		temp -> next = NULL;
		i++;
	}
	return head;
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	struct Node* flag = construct(arr, 5);
	while (flag -> next != NULL)
	{
		printf("%d ", flag -> val);
		flag = flag -> next;
	}
	printf("%d\n", flag-> val);
	return 0;
}
