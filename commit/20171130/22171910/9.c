/*删除链表的全部节点*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node* next;
};
struct Node* Create();
void clear(struct Node* head);
void Output(struct Node *head);

int main()
{
  struct Node* head = Create();
  clear(head);
  Output(head);
  return 0;
}

void Output(struct Node *head)    //输出链表,出现杂乱数字即为清空成功
{
  struct Node *p;
  p = head;
  while (p != NULL)
  {
    printf("%d\n", p -> val);
    p = p -> next;
  }
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

void clear(struct Node* head)
{
  struct Node *p;
  while (head != NULL)     //将链表内容全部删除
  {
    p = head;
    head = head -> next;
    free(p);              //释放节点
  }
}
