#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* delete(struct Node* head, struct Node* target);

int main()
{
	int size;
	printf("请输入链表长度:\n");
	scanf("%d", &size);
	struct Node *p[size];
	printf("输入链表中的数据:\n");
	int i;
	for (i = 0; i < size; ++i)
	{
	  p[i] = (struct Node *) malloc (sizeof(struct Node));
	  scanf("%d", &(p[i] -> val));
	}
	for (i = 0; i < size - 1; ++i)
	  p[i] -> next = p[i+1];
	p[size - 1] -> next = NULL;
	struct Node* head = p[0];
	printf("请输入要删除的链表点(从1开始):\n");
	int j;
	scanf("%d", &j);
	struct Node* target = p[j-1];
	printf("删除后头节点为:\n%p\n", delete(head, target));
	
	return 0;
}

struct Node* delete(struct Node* head, struct Node* target)
{
	struct Node *p, *prev;
	p = head;
	if (target == head)
	{
	  if (target -> next == NULL)
	  {
		free(target);
		return NULL;
	  }
	  else
	  {
		head = target -> next;
		free(target);
		return head;
	  }
	}
	else
	{
	  while (p != NULL)
	  {
		if (p -> next = target)
		  break;
		prev = p; p = p -> next;
	  }
	  free(target);
	}
	return head;
}
