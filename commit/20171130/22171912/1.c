/*1.c_构造链表*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node* next;
};

struct Node* construct(int arr[], int size)
{
	int i;
	struct Node* head = NULL, *newp;
	for (i = size - 1; i >= 0; --i)
	{
		newp = (struct Node*)malloc(sizeof(struct Node));
		newp -> val = arr[i];
		newp -> next = head;
		head = newp;
	}
	return head;
}

int main()
{
	int i, *arr, size;
	printf("请输入数组大小size：");
	scanf("%d", &size);
	arr = (int *)malloc(size * sizeof(int));
	printf("请输入数组：");
	for (i = 0; i < size; ++i)
		scanf("%d", &arr[i]);
	struct Node* p = construct(arr, size);
	while (p != NULL)
	{
		printf("%d\t", p -> val);
		p = p -> next;
	}
	printf("\n");
	free(arr);
	return 0;
}
