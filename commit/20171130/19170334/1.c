#include <stdio.h>//数组构造链表
#include <stdlib.h>

struct Node* construct(int arr[], int size); 

struct Node
{
	int val;
	struct Node* next;
};

struct Node* construct(int arr[], int size)
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	head -> next = temp;
	int n = 1;
	temp -> val = arr[0];
	while(n < size)
	{
		temp -> next = (struct Node*)malloc(sizeof(struct Node));
		temp = temp -> next;
		temp -> val = arr[n];
		n++;
		temp -> next = NULL;
	}
	return head;
}

int main()
{
	int a[100];
	int size;
	scanf("%d", &size);
	getchar();
	for(int i = 0; i < size; i++)
		scanf("%d", a + i);
	struct Node* head = construct(a, size);
	struct Node* shift;
	for(shift = head -> next; shift != NULL; shift = shift -> next)
		printf("%d ", shift -> val);
	printf("\n");
	return 0;
}
