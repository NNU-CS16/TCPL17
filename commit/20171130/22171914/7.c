#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* reverse(struct Node* head)
{
  if(head==NULL||head->next==NULL)
  return head;
  struct Node* newhead=reverse(head->next);
  head->next->next=head;
  head->next=NULL;
  return newhead;
}
int main()
{
  struct Node *head;
  head=reverse(head);
  return 0;
} 
