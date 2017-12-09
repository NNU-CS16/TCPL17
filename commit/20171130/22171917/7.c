#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int val;
   struct Node *next;
};

struct Node* reserve(struct Node* head)
{
    struct Node *newp,*a;
    a = head;
    if (head == NULL || head -> next == NULL)
     return head;
    while (head->next != NULL)
    {
        newp = head->next; head -> next = newp -> next;
        newp -> next = a; a = newp;
    } return a;
}

int main()
{
    struct Node *head, *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 6;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->val = 9;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->val = 1;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->val= 2;
    head->next = p1;  p1->next = p2; p2->next = p3;
    p3->next = NULL;
    struct Node *b; b = reserve(head);
    while (b != NULL)
    {
        printf("%d ",b -> val);
        b = b -> next;
    }
    return 0;
}
