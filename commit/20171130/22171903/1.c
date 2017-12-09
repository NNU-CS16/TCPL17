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
    int a[3] = {101,102,103};
    printf("%p\n", construct(a, 3));
    return 0;
}

struct Node* construct(int arr[], int size)
{
    struct Node* head, *p, *q;
    int i;
    head = q =  (struct Node*)malloc(sizeof(struct Node));
    for (i = 0; i < size; i++)
    {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->val = arr[i];
        q->next = p;
        q = p;
    }
    q->next = NULL;
    return head;
}
