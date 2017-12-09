/*将链表原地反转*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* Create();
void Output(struct Node* head);
struct Node* reverse(struct Node* head);

int main()
{
  struct Node* head = Create();
  head = reverse(head);
  Output(head);
  return 0;
}

struct Node* Create()       //创建链表
{
  struct Node *p1, *p2, *p3, *p4;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 60;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 61;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 62;
  p4 = (struct Node *)malloc(sizeof(struct Node)); p4 -> val = 63;
  p1 -> next = p2;
  p2 -> next = p3;
  p3 -> next = p4;
  p4 -> next = NULL;
  return p1;
}

void Output(struct Node *head)    //输出链表
{
  struct Node *p;
  p = head;
  while (p != NULL)
  {
    printf("%d\n", p -> val);
    p = p -> next;
  }
}

struct Node* reverse(struct Node* head)
{
  struct Node *p;
  if (head == NULL || head -> next == NULL)
     return head;
  p = head -> next;
  struct Node *shift = reverse(p);
  p -> next = head;
  head -> next = NULL;
  return shift;
}
