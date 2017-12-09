#include <stdio.h>//输入插入链表尾部
#include <stdlib.h>
struct Node
{
     int val;

     struct Node* next;
};

struct Node* insert(struct Node* head, int val);

int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	int n;
	scanf("%d", &n);
	insert(head, n);
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	for(shift = head -> next; shift != NULL; shift = shift -> next)
		printf("%d ", shift -> val);
	printf("\n");
	return 0;
}

struct Node* insert(struct Node* head, int val)
{
	struct Node* first = (struct Node*)malloc(sizeof(struct Node));
	struct Node* second = (struct Node*)malloc(sizeof(struct Node));
	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
	head -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = NULL;
	first -> val = 1;
	second -> val = 2;
	third -> val = val;
	return head;
}
