/*在有序链表中插入新节点,使其依然有序*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* Create();
struct Node* insert(struct Node *head, int val1);
void Output(struct Node *head);

int main()
{
  int val1;
  printf("请输入新增元素值val1:");
  scanf("%d", &val1);
  struct Node *head;
  head = Create();
  head = insert(head, val1);
  Output(head);
  return 0;
}

struct Node *Create()       //创建链表
{
  struct Node *p1, *p2, *p3;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 60;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 63;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 66;
  p1 -> next = p2;
  p2 -> next = p3;
  p3 -> next = NULL;
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

struct  Node *insert(struct Node *head, int val1)
{
  struct Node *newp;
  struct Node *prev, *p;
  prev = NULL;
  p = head;
  newp = (struct Node *)malloc(sizeof(struct Node));
  newp -> val = val1;
  while (p != NULL && p -> val < val1)
  {
    prev = p;
    p = p -> next;
  }
  newp -> next = p;
  if (prev == NULL)
     head = newp;
  else
     prev -> next = newp;
  return head;
}
