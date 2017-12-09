#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* delete(struct Node* head,struct Node* target)
{
  struct Node *p;
  if(head==NULL) return NULL;
  p=head;
  while(p!=target)
  {
    p=p->next;
  }
  free(p);
  return head;
}
int main()
{
  struct Node *head;
  struct Node *target;
  head=delete(head,target);
  return 0;
} 
