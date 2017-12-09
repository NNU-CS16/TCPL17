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
    p2=(struct Node *)malloc(sizeof(struct Node)); p2->val=103;
    p3=(struct Node *)malloc(sizeof(struct Node)); p3->val=105;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    return p1;
}
struct Node *insert(struct Node *head,int val)
{
    struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
    newp->val=val;
    newp->next=head;
    head=newp;
    return head;
}
void Output(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p!=NULL)
    {

        printf("%p\t%d\t%p\n",p,p->val,p->next);
        p=p->next;
    }
}
int main()
{
    int val;
    scanf("%d",&val);
    struct Node *head=create();
    head=insert(head,val);
    Output(head);
    return 0;
}
