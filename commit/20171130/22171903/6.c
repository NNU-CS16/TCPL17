#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size);
struct Node* delete(struct Node* head, int val);

int main()
{
    int a[3] = {101, 102, 104};
    struct Node* p;
    p = construct(a, 3);
    printf("%p\n", delete(p, 102));
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

struct Node* delete(struct Node* head, int val)
{
    struct Node* pp;
    struct Node* p;
    p = head->next;
    pp = p;
    while (p != NULL)
    {
	if (p->val == val)
	    pp = p->next;
	pp = p;
	p = p->next;
    }
    return head;
}
