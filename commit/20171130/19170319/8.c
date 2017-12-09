#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int val;
    struct Node *next;
};
struct Node *creat(int a,int b,int c)
{
    struct Node *p1,*p2,*p3;
    p1 = (struct Node*)malloc(sizeof(struct Node));p1->val = a;
    p2 = (struct Node*)malloc(sizeof(struct Node));p2->val = b;
    p3 = (struct Node*)malloc(sizeof(struct Node));p3->val = c;
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
    printf("\n");
}
struct Node *merge(struct Node *head1,struct Node *head2)
{
    struct Node *head,*p1,*p2;
    p1 = head1;p2 = head2;
    head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = head;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->val < p2->val)
        {
            temp->val = p1->val;
            temp->next = (struct Node*)malloc(sizeof(struct Node));
            temp = temp->next;
            p1 = p1->next;
        }
        else
        {
            temp->val = p2->val;
            temp->next = (struct Node*)malloc(sizeof(struct Node));
            temp = temp->next;
            p2 = p2->next;
        }
    }
    while (p1 != NULL)
    {
        temp->val = p1->val;
        if (p1->next == NULL)
            break;
        temp->next = (struct Node*)malloc(sizeof(struct Node));
        temp = temp->next;
        p1 = p1->next;
    }
    while (p2 != NULL)
    {
        temp->val = p2->val;
        if (p2->next == NULL)
            break;
        temp->next = (struct Node*)malloc(sizeof(struct Node));
        temp = temp->next;
        p2 = p2->next;
    }
    return head;
}
int main()
{
    struct Node *head1 = creat(1,2,6);
    struct Node *head2 = creat(3,4,5);
    struct Node *head = merge(head1,head2);
    output(head1);
    output(head2);
    output(head);
    return 0;
}
