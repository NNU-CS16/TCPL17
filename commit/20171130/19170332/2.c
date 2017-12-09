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
   p1=(struct Node *)malloc(sizeof(struct Node));
   p1->val=101;
   p2=(struct Node *)malloc(sizeof(struct Node));
   p2->val=102;
   p3=(struct Node *)malloc(sizeof(struct Node));
   p3->val=103;
   p1->next=p2;
   p2->next=p3;
   p3->next=NULL;
   return p1;
}
struct Node* insert(struct Node* head,int val)
{
     struct Node *newp=(struct Node*)malloc(sizeof(struct Node));
     newp->val=val;
     newp->next=head;
     head=newp;
     return head;
}


int main()
{
   int val;
   printf("please input val:\n");
   scanf("%d",&val);
   struct Node *head=create();
   head=insert(head,val);
   struct Node * p=head;
   while(p!=NULL)
   {
     printf("%d\n",p->val);
     p=p->next;
   }
return 0;
}

