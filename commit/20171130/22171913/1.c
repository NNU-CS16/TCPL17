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
    int *arr, size;
    int i = 0;
    printf("Please input the size of arr: ");
    scanf("%d", &size);
    arr = (int *)malloc(sizeof(int));
    printf("Please input arr: ");
    for(i = 0; i < size; i++)
    {
	scanf("%d", &arr[i]);
    }
    struct Node* head = construct(arr, size);
    struct Node* p;
    p = head;
    while (p != NULL)
    {
	printf("%d\n", p -> val);
	p = p -> next;
    }
    free(arr);
    return 0;
}
struct Node* construct(int arr[], int size)
{
    struct Node *head, *newp;
    int i = 0;
    head = NULL;
    newp = NULL;
    for(i = 0; i < size; i++)
    {
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp -> val = arr[i];
	newp -> next = head;
	head = newp;
    }
    return head;
}

