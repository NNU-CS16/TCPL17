#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* insert(struct Node* head,int val)
{
    struct Node* p;
    p = head;
    while (p -> next != NULL)
        p = p->next;
    p->next = (struct Node*)malloc(sizeof(struct Node));
    p = p->next;
    p->val = val;
    p->next = NULL;
    return head;
}
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
int main()
{
    struct Node *head = creat();
    head = insert(head,4);
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ",p->val);
        p = p->next;
    }
    return 0;
}
