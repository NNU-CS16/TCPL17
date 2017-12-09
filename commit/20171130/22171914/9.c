#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node *delete(struct Node *head) 
{  
    struct Node *p,*q;  
    if(head==NULL)  
        return 0;  
    p=head->next;  
    while(p!=NULL)  
    {  
        q=p->next;  
        free(p);  
        p=q;  
    }  
    head->next=NULL;  
    return 1;  
}
struct Node *deletelist(struct Node *head)
{
  while(head!=NULL)
     head=delete(head);
  return NULL;
}
void clear(struct Node *head)
{
  delete(head);
  deletelist(head);
}
int main()
{
  struct Node *head;
  clear(head);
  return 0;
}  
