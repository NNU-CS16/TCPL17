#include <stdio.h>
#include <stdlib.h>
struct Node *create2(int arr[], int n);
struct Node *InsertBeforeHead(struct Node *head, struct Node *shift);
struct Node
{
    int val;
    struct Node* next;
};
void output(struct Node *head);

struct Node* insert(struct Node* head, int val)
{
    struct Node *prev, *p, *shift;
    prev = NULL;
    p = head;
    while (p != NULL)
    {
	if (p -> val > shift -> val)
            break;
	prev = p;
	p = p -> next;
    }
    shift -> next = p;
    if (p == head)
	head = shift;
    else
	prev -> next = shift;
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
struct Node *create2(int arr[], int n)
{
    struct Node *head, *shift;
    int i;
    head = NULL;
    for (i = 0; i < n; i++)
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
int main( )
{
    int arr[3] = {101, 102,104};
    struct Node *shift;
    struct Node *head = create2(arr, 3);
    printf ("插入前:\n");
    output(head);
    shift = (struct Node *)malloc(sizeof(struct Node));
    int val = 103;
    shift -> val = 103;
    head = insert(head, val);
    printf ("插入后:\n");
    output(head);
    return 0;
}

