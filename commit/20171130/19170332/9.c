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
struct Node *DeleteHead(struct Node *head)
{
   struct Node *p;
   if(head==NULL)
   p=head;
   head=head->next;
   free(p);
   return head;
}
struct Node *DeleteList(struct Node *head)
{
   while(head!=NULL)
      head=DeleteHead(head);
   return NULL;
}
int main()
{
   struct Node *head=create();
   head=DeleteList(head);
   return 0;
}

