#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* delete(struct Node* head,int val)
{
  struct Node *p;
  struct Node *q;
  if(head==NULL)  return NULL;
  p=head;
  while(p->next==NULL)
  {
    if(p->next==val)
    {
      q=p->next;
      p->next=p->next->next;
      free(q);
    }  
    else
    p=p->next;
  }
  return head;
}
int main()
{
  struct Node *head;
  int val;
  head=delete(head,val);
  return 0;
}
