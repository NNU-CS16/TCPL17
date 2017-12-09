#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
void output(struct Node *head);
struct Node *InsertBeforeHead(struct Node *head, struct Node *shift);
struct Node* construct(int arr[], int size)
{
    int i;
    struct Node *head, *shift;
    head = NULL;
    shift = head;
    for (i = size - 1; i >= 0; i--)
    {   
        shift = (struct Node *)malloc(sizeof(struct Node));
	shift -> val = arr[i];
        head = InsertBeforeHead(head, shift);
    }
    return head;
}
struct Node *InsertBeforeHead(struct Node *head, struct Node *shift)
{
    shift -> next = head;
    head = shift;
    return head;
}
void output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
	printf ("%d", p -> val);
        p = p ->next;
    }
} 
int main( )
{
    int size;
    scanf ("%d", &size);
    int arr[size];
    for (int i = 0; i < size ; i++)
    {
	scanf ("%d", &arr[i]);
    }
    struct Node *head = construct(arr, size);
    output(head);
    return 0;
}
