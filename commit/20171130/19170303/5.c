#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *create()
{
    struct Node *p1,*p2,*p3;
    p1=(struct Node *)malloc(sizeof(struct Node)); p1->val=101;
    p2=(struct Node *)malloc(sizeof(struct Node)); p2->val=105;
    p3=(struct Node *)malloc(sizeof(struct Node)); p3->val=108;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    return p1;
}

void output(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p != NULL)
    {
        printf("%d\n",p->val);
        p=p->next;
    }
}

struct Node *delete(struct Node*head,struct Node *target)
{
    if(head == target && head->next==NULL) return NULL;
    if(head == target) 
    {
        head = head->next;
        return head;
    }
    struct Node *p;
    p=head;
    while(target != NULL)
    {
        if(p->next == target) break;
        p=p->next;
    }
    if(p->next != NULL)
        p->next=target->next;
    free(target);
    return head;
}
int main()
{
    int val;
    scanf("%d",&val);
    struct Node *p,*pa,*head;
    head=create();
    pa=head;
    while(pa != NULL)
    {
        if(pa->val == val)
            p=pa;
    pa=pa->next;
    }
    head=delete(head,p);
    output(head);
    return 0;
}
