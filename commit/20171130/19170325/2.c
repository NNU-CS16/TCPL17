#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};
struct Node *insert(struct Node *head, int val);
struct Node *Creat(void);
int main(void)
{
    int val;
    struct Node *head = Creat();
    struct Node *newp = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p;

    printf("Please input val :\n");
    scanf("%d", &val);
    head = insert(head, val);
    p = head;
    while (p != NULL)
    {
        printf("%d\n", p->val);
        p = p->next;
    }

    return 0;
}

struct Node *Creat(void)
{
    struct Node *p1, *p2, *p3;

    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 101;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->val = 103;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->val = 105;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;

    return p1;
}

struct Node *insert(struct Node *head, int val)
{
    struct Node *newp = (struct Node*)malloc(sizeof(struct Node));

    newp->next = head;
    newp->val = val;
    head = newp;

    return head;
}
