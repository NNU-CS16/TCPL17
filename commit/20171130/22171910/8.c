/*将两有序链表归并*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* Create1();
struct Node* Create2();
struct Node* merge(struct Node* head1, struct Node* head2);
void Output(struct Node* head);

int main()
{
  struct Node* head1 = Create1();
  struct Node* head2 = Create2();
  struct Node* head;
  head = merge(head1, head2);
  Output(head);
  return 0;
}

struct Node* Create1()       //创建链表1
{
  struct Node *p1, *p2, *p3;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 3;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 5;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 11;
  p1 -> next = p2;
  p2 -> next = p3;
  p3 -> next = NULL;
  return p1;
}

struct Node* Create2()       //创建链表2
{
  struct Node *p1, *p2, *p3;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 1;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 9;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 30;
  p1 -> next = p2;
  p2 -> next = p3;
  p3 -> next = NULL;
  return p1;
}

void Output(struct Node *head)    //输出总链表
{
  struct Node *p;
  p = head;
  while (p != NULL)
  {
    printf("%d\n", p -> val);
    p = p -> next;
  }
}

struct Node* merge(struct Node* head1, struct Node* head2)
{
  struct Node* head = NULL;
  if (head1 == NULL)          //链表返回条件
     return head2;
  if (head2 == NULL)
     return head1;
  if (head1 -> val <= head2 -> val)
  {
    head = head1;
    head1 = head1 -> next;
  }
  else
  {
    head = head2;
    head2 = head2 -> next;
  }
  head -> next = merge(head1,head2);  //递归调用该函数
}
