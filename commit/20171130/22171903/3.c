#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size);
struct Node* insert(struct Node* head, int val);

int main()
{
    int a[3] = {101, 102, 104};
    struct Node* p;
    p = construct(a, 3);
    printf("%p\n", insert(p, 103));
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

struct Node* insert(struct Node* head, int val)
{
    struct Node* p;
    struct Node* pi = (struct Node*)malloc(sizeof(struct Node));
    p = head;
    pi->val = val;
    if (p->next == NULL)
    {
	return NULL;
    }
    while (p->next != NULL)
    {
	p = p->next;
    }
    p->next = pi;
    pi->next = NULL;
    return head;
}
