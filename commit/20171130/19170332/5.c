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

struct Node* delete(struct Node* head,struct Node* target)
{
    struct Node *p,*prev;
    p=head;prev=NULL;
    while(p!=NULL)
    { 
      if(p->val==target)
         break;
      prev=p;
      p=p->next;
    }
    if(p==NULL)
       return NULL;
    if(p==head)
      head=head->next;
    else
      prev->next=p->next;
    free(p);
    return head;
}
int main()
{
    struct Node *target=(struct Node *)malloc(sizeof(struct Node));
    target=103;
    struct Node *head=create();
    head=delete(head,target);
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
       printf("%d\n",p->val);
       p=p->next;
    }
    return 0;
}

