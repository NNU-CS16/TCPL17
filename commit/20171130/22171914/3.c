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
  newp=&val;
  if(head==NULL)
  {
    head=newp;
    return;
  }
  struct Node *p=head;
  struct Node *q=NULL;
  while(p!=NULL)
  {
    q=p;
    q->next=newp;

  }
  return head;
}
int main()
{
  struct Node *head;
  struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
  insert(head,newp);
  return 0;
}  


     
