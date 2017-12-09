#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* reverse(struct Node* head)
{
    struct Node *p, *q, *r;
    p = head;
    q = p -> next;
    r = q -> next;
    p -> next = NULL;
    q -> next = p;
    while (r -> next != NULL)
    {
       p = r;
       p -> next = q;
       q = p -> next;
       r = q -> next;
       q -> next = p;
    }
    r -> next = q;
    head = r;
    return head;
}
int main()
{
    struct Node *p1;
    p1 = (struct Node *) malloc (sizeof(struct Node));
    p1 -> val = 1;
    struct Node *p2;
    p2 = (struct Node *) malloc (sizeof(struct Node));
    p2 -> val = 2;
    struct Node *p3;
    p3 = (struct Node *) malloc (sizeof(struct Node));
    p3 -> val = 3;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    struct Node *head;
    head = p1;
    printf("%p\n", reverse(head));
    return 0;
}
