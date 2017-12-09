#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* insert(struct Node* head, int val)
{
    struct Node* newp;
    newp = head;
    while ( newp -> next != NULL )
        newp = newp->next;
    newp -> next = (struct Node*)malloc(sizeof(struct Node));
    newp = newp->next;
    newp -> val = val;
    newp -> next = NULL;

    return head;
}

struct Node *Create(void)
{
    struct Node *p1, *p2,*p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));p1->val = 101;
    p2 = (struct Node *)malloc(sizeof(struct Node));p2->val = 102;
    p3 = (struct Node *)malloc(sizeof(struct Node));p3->val = 103;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    return p1;
}

int main ()
{
    struct Node *head = Create();
    int val = 104;
    head = insert(head, val);
    struct Node *p;
    p = head;
    while (p!=NULL)
    {
        printf("%d\t",p->val);
        p = p->next;
    }
    printf("\n");
    return 0;
}
