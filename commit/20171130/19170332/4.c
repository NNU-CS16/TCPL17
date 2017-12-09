#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int val;
   struct Node* next;
};

struct Node *create()
{
    struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
    p1->val=101;
    struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
    p2->val=103;
    struct Node *p3=(struct Node *)malloc(sizeof(struct Node));
    p3->val=105;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    return p1;
}

struct Node* insert(struct Node* head,int val)
{
    struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
    newp->val=val;
    struct Node *p;
    struct Node *prev;
    prev=NULL;
    p=head;
    while(p!=NULL)
    {
       if(p->val>newp->val)
       break;
       prev=p;p=p->next;
    }
    newp->next=p;
    if(p==head)
      head=newp;
    else
      prev->next=newp;
    return head;
}

int main()
{
    int val;
    printf("please input val:\n");
    scanf("%d",&val);
    struct Node *head=create();
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
      printf("%d\n",p->val);
      p=p->next;
    }
    return 0;
}

