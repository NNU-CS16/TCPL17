#include <stdio.h>//删除target结点
#include <stdlib.h>

struct Node
{
	int val;
    struct Node* next;
};

struct Node* delete(struct Node* head, struct Node* target); 

int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	struct Node* target = (struct Node*)malloc(sizeof(struct Node));
	struct Node* a = (struct Node*)malloc(sizeof(struct Node));
    struct Node* b = (struct Node*)malloc(sizeof(struct Node));
    struct Node* c = (struct Node*)malloc(sizeof(struct Node));
    struct Node* d = (struct Node*)malloc(sizeof(struct Node));
    struct Node* e = (struct Node*)malloc(sizeof(struct Node));
    head -> next = a;
    a -> val = 1;
    a -> next = b;
    b -> val = 2;
    b -> next = c;
    c -> val = 3;
    c -> next = d;
    d -> val = 4;
    d -> next = e;
    e -> val = 5;
    e -> next = NULL;
	printf("原链表：1 2 3 4 5\n");
	printf("删除：");
	scanf("%d", &target -> val);
	delete(head, target);
	if(head -> next == NULL) printf("NULL\n");
	else
	{
		for(shift = head -> next; shift != NULL; shift = shift -> next)
			printf("%d ", shift -> val);
		printf("\n");
	}
	return 0;
}

struct Node* delete(struct Node* head, struct Node* target)
{
	int num = 0;
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	struct Node* j = (struct Node*)malloc(sizeof(struct Node));
	struct Node* k = (struct Node*)malloc(sizeof(struct Node));
	for(shift = head -> next; shift != NULL; shift = shift -> next)
	{
		num++;
		if(shift -> val == target -> val)
			break;
	}
	j = head;
	k = head;
	for(int i = 0; i < num - 1; i++)
	{
		j = j -> next;
	}
	for(int i = 0; i < num + 1; i++)
    {
        k = k -> next;
    }
	j -> next = k;
	return head;
}
