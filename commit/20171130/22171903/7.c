#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size);
struct Node* reverse(struct Node* head);

int main()
{
    int a[3] = {101, 102, 104};
    struct Node* p;
    p = construct(a, 3);
    printf("%p\n", reverse(p));
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

struct Node* reverse(struct Node* head)
{
    struct Node* p, * q, *r;
    int i = 0, j;
    p = head;
    q = p->next;
    r = NULL;
    if (q == NULL)
    	return head;
    while (q != NULL)
    {
	r = q->next;
	q->next = p;
	p = q;
	q = r;
   	i++;
    }
    head = p;
    for (j = 0; j < i; j++)
    	p = p->next;
    p->next = NULL;
    return head;
}
