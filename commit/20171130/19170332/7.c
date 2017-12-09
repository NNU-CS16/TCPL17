#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* create()
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
struct Node* reverse(struct Node* head)
{
   if(head==NULL||head->next==NULL)
        return head;
   struct Node *p=head->next;
   struct Node *pa=reverse(p);
   p->next=head;
   head->next=NULL;
   return pa;
}
 
int main()
{
   struct Node *head=create();
   struct Node *p;
   head=reverse(head);
   p=head;
   while(p!=NULL)
   {
   printf("%d\n",p->val);
   p=p->next;
   }
   return 0;
}

