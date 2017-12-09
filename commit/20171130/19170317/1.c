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
	int size;
	printf("输入数组大小:\n");
	scanf("%d", &size);
	int arr[size];
	printf("输入数组元素:\n");
	int i;
	for (i = 0; i < size; ++i)
	  scanf("%d", &arr[i]);
	printf("%p\n", construct(arr, size));

	return 0;
}

struct Node* construct(int arr[], int size)
{
	struct Node *p[size];
	int i;
	for (i = 0; i < size; ++i)
	{
	  p[i] = (struct Node *) malloc (sizeof(struct Node));
	  p[i] -> val = arr[i];
	}
	for (i = 0; i < size - 1; ++i)
	  p[i] -> next = p[i+1];
	p[size-1] -> next = NULL;
	
	return p[0];
}
