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
  newp->next=head;
  head=newp;
  return head;
}
int main()
{
  struct Node *head;
  struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
  head=insert(head,newp);
  return 0;
}

