/*构造链表并返回头结点*/
#include <stdio.h>
#include <stdlib.h>
struct Node              //定义链表节点类型
{
  int val;
  struct Node* next;
};
struct Node* construct(int arr[1000], int size);
struct Node* BeforeHead(struct Node *head, struct Node *newp);
void Output(struct Node *head);

int main()
{
  int arr[1000],  size, i;
  printf("请输入数组长度size:");
  scanf("%d", &size);
  printf("请输入数组arr:");
  for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
  struct Node* head = construct(arr, size);
  Output(head);
  return 0;
}

void Output(struct Node *head)     //输出链表
{
  struct Node *p;
  p = head;
  while (p != NULL)
  {
    printf("%d\n", p -> val);
    p = p -> next;
  }
}

struct Node* BeforeHead(struct Node *head, struct Node *newp)  //设置插入链表节点形式
{
  newp->next = head;
  head = newp;
  return head;
}

struct Node* construct(int arr[1000], int size)        //将输入的数组编成链表
{
  struct Node *head, *newp;
  int i;
  head = NULL;
  for (i = size - 1; i >= 0; i--)
  {
    newp = (struct Node *)malloc(sizeof(struct Node));
    newp -> val = arr[i];
    head = BeforeHead(head, newp);
  }
  return head;
}
