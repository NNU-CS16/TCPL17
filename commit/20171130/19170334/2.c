#include <stdio.h>//输入插入头部
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(struct Node* head, int val);

int main()
{
	int n;
	scanf("%d", &n);
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	construct(head, n);
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	for(shift = head -> next; shift != NULL; shift = shift -> next)
		printf("%d ", shift -> val);
	printf("\n");
	return 0;
}

struct Node* construct(struct Node* head, int val)
{
	struct Node* first;
	head -> next = first;
	first -> val = val;
	first -> next = NULL;
	return head;
}
