/*删除链表的指定节点*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* Create();
struct Node* delete(struct Node* head, struct Node* target);
void Output(struct Node* head);

int main()
{
  struct Node* target;
  struct Node* head = Create();
  target = (struct Node *)malloc(sizeof(struct Node));
  printf("请输入待删除节点:");
  scanf("%d", &(target -> val));
  head = delete(head, target);
  Output(head);
  return 0;
}

struct Node* Create()       //创建链表
{
  struct Node *p1, *p2, *p3;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 60;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 61;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 62;
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

struct Node* delete(struct Node* head, struct Node* target)
{
  struct Node *prev, *p;
  prev = NULL;
  p = head;
  while (p != NULL)
  {
    if (p -> val == target -> val)    //寻找目标链表
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
