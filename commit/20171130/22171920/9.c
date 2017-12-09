#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

void clear(struct Node * head)
{
    struct Node *p = head, *prev = NULL;

    while (p->next != NULL)
    {
       prev = p;
       p = p->next;
       free(prev);
    }
    free(p);
}


int main()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));p1->val=103;
    p2 = (struct Node *)malloc(sizeof(struct Node));p2->val=105;
    p3 = (struct Node *)malloc(sizeof(struct Node));p3->val=107;
    p1 -> next = p2; p2 -> next = p3; p3 -> next =NULL;

    struct Node *head=p1;

    clear(head);
    
    return 0;
}
