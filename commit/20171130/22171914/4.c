#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* insert(struct Node* head,int val)
{
  struct Node *newp;
  newp->val;
  struct Node *prev,*p;
  prev=NULL;p=head;
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
  struct Node *head;
  struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
  head=insert(head,newp);
  return 0;
}
