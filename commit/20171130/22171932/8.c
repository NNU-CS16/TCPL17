#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node *merge(struct Node *head1,struct Node *head2)
{
    if(head1==NULL)
      return head2;
    if(head2==NULL)
      return head1;
    struct Node *head = NULL;
    if(head1 -> val < head2 -> val)
    {
      head = head1;
      head -> next = merge(head1 -> next, head2);
    }
    else
    {
      head = head2;
      head -> next = merge(head1, head2 -> next);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *head1;
    struct Node *head2;
    head = merge(head1,head2);
    return 0;
}
