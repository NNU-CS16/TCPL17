#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size);
void clear(struct Node* head);

int main()
{
    int a[3] = {101, 102, 104};
    struct Node* p;
    p = construct(a, 3);
    clear(p);
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

void clear(struct Node* head)
{
    while (head->next != NULL);
    {
	head = head->next; 
    }
}
