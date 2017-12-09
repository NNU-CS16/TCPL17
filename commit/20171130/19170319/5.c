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
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ",p->val);
        p = p->next;
    }
}
struct Node *delete(struct Node *head,struct Node *target)
{
    struct Node *prev,*p;
    p = head;
    prev = NULL;
    while (p != NULL)
    {
        if (head == target)
        {
            free(head);
            return NULL;    
        }
        if (p == target)
        {
            prev->next = p->next;
            free(p);    
        }
        prev = p;
        p = p->next;
    }
    return head;
}
int main()
{
    struct Node *head = creat();
    output(head);
    printf("\n");
    head = delete(head,head->next);
    output(head);
    return 0;
}
