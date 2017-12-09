#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *insert(struct Node *head,int val)
{
    struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
    newp->val=val;
    struct Node *prev,*p;
    prev=NULL;p=head;
    while(p!=NULL)
    {
        if(p->val > val)
            break;
        prev=p; p=p->next;
    }
    newp->next=p;
    p==head ? head=newp : (prev->next=newp);
    return head;
}
struct Node *create()
{
    struct Node *p1,*p2,*p3,*p4;
    p1=(struct Node *)malloc(sizeof(struct Node)); p1->val=101;
    p2=(struct Node *)malloc(sizeof(struct Node)); p2->val=103;
    p3=(struct Node *)malloc(sizeof(struct Node)); p3->val=103;
    p4=(struct Node *)malloc(sizeof(struct Node)); p4->val=105;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=NULL;
    return p1;
}
void output(struct Node *head)
{
     struct Node *p=head;
     while(p->next!=NULL)
     {
         printf("%d",p->val);
         p=p->next;
     }
}
int main()
{
    int val;
    scanf("%d",&val);
    struct Node *head=create();
    head=insert(head,val);
    output(head);
    return 0;
} 
