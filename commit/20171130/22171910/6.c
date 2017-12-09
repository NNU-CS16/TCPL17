/*删除链表内某一数值对应的全部节点*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* Create();
struct Node* delete(struct Node* head, int val1);
void Output(struct Node* head);

int main()
{
  int val1, i;
  struct Node* head = Create();
  printf("请输入待删除数据:");
  scanf("%d", &val1);
  for (i = 0; i < 4; i++)          //循环检验是否含有相应数值对应指针至链表结束(题中对应4个节点)
      head = delete(head, val1);
  Output(head);
  return 0;
}

struct Node* Create()       //创建链表
{
  struct Node *p1, *p2, *p3, *p4;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 60;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 61;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 62;
  p4 = (struct Node *)malloc(sizeof(struct Node)); p4 -> val = 60;
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

struct Node* delete(struct Node* head, int val1)
{
  struct Node *prev, *p;
  prev = NULL;
  p = head;
  while (p != NULL)
  {
    if (p -> val == val1)    //寻找数值符合的目标链表
       break;
    prev = p;
    p = p -> next;
  }
  if (p == NULL)                    //未找到目标节点则不删除
     return head;
  if (p == head)                   //判断目标节点是否为头结点
     head = head -> next;
  else
     prev -> next = p -> next;
  free(p);                        //释放p对应节点空间
  return head;
  if (head == NULL)
     return NULL;
}
