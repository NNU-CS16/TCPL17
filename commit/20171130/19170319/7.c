#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int val;
    struct Node *next;
};
struct Node* creat()
{
        struct Node *p1,*p2,*p3;
        p1 = (struct Node*)malloc(sizeof(struct Node));p1->val = 1;
        p2 = (struct Node*)malloc(sizeof(struct Node));p2->val = 2;
        p3 = (struct Node*)malloc(sizeof(struct Node));p3->val = 3;
        p1->next = p2;
        p2->next = p3;
        p3->next = NULL;
        return p1;
}
void output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d ",p->val);
        p = p->next;
    }
}
struct Node* reverse(struct Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
    struct Node *r;
    struct Node *p = head;
    struct Node *q = head->next;
    head->next = NULL;
    while (q)
    {
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head = p;
    return head;
}
int main()
{
    struct Node *head = creat();
    head = reverse(head);
    output(head);
    return 0;
}

