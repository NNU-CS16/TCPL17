#include <stdio.h>
#include <stdlib.h>
struct Node* construct(int arr[],int size);
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
    int i;
    int arr[4];
    int size = 4;
    for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);
    struct Node *j;
    j = construct(arr,size);
    while (j != NULL)
    {
        printf("%X %d %X\n", j , j -> data, j -> next);
        j = j -> next;
    }
    return 0;
}
struct Node *construct(int arr[],int size)
{
    struct Node *head,*newp;
    int i;
    head = NULL;
    for (i = size - 1; i >= 0; i--)
    {
	newp = (struct Node *)malloc(sizeof(struct Node));
        newp->data = arr[i];
        newp->next = head;
        head = newp;
    }
    return head;

}
