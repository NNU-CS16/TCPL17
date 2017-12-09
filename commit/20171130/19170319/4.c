#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int val;
    struct node* next;
};
struct node* insert(struct node* head,int val)
{
    struct node* p;
    struct node* temp;
    p = head;
    while (p->next != NULL && p->next->val < val)
        p = p->next;
    if (p->next != NULL)
    {
        p->next = (struct node*)malloc(sizeof(struct node));
        p = p->next;
        p->val = val;
        p->next = NULL;
    }
    else
    {
        temp->next = (struct node*)malloc(sizeof(struct node));
        temp->val = val;
        temp->next = p->next;
        p->next = temp;
    }
    return head;
}
struct node *creat()
{
        struct node *p1,*p2,*p3;
        p1 = (struct node *)malloc(sizeof(struct node));p1->val = 1;
        p2 = (struct node *)malloc(sizeof(struct node));p2->val = 2;
        p3 = (struct node *)malloc(sizeof(struct node));p3->val = 3;
        p1->next = p2;
        p2->next = p3;
        p3->next = NULL;
        return p1;
}
int main()
{
    struct node *head = creat();
    head = insert(head,4);
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ",p->val);
        p = p->next;
    }
    return 0;
}
