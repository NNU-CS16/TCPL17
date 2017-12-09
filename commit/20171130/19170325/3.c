#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *insert(struct Node * head, int val);
struct Node *Creat(void);

int main(void)
{
    struct Node *head = Creat();
    int val = 107;

    head = insert(head, val);

    struct Node *p;

    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");

    return 0;
}

struct Node *Creat(void)
{
    struct Node *p1, *p2, *p3;

    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 101;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->val = 102;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->val = 103;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;

    return p1;
}

struct Node *insert(struct Node * head, int val)
{
    struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = NULL, *prev = NULL;

    newp->val = val;
    newp->next = NULL;
    p = head;
    while (p != NULL)
    {
        prev = p;
        p = p->next;
    }
    prev->next = newp;

    return head;
}
