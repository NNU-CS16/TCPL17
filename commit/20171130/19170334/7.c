#include <stdio.h>//原地(in-place)反转链表
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next; 
};

struct Node* reverse(struct Node* head);

int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
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
	printf("原链表：1 2 3 4 5");
	getchar();
	printf("反转后：");
	reverse(head);
	for(shift = head -> next; shift != NULL; shift = shift -> next)
		printf("%d ", shift -> val);
	printf("\n");
	return 0;
}

struct Node* reverse(struct Node* head)
{
	if(head -> next == NULL || head -> next -> next == NULL) return head;
	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    struct Node* q = (struct Node*)malloc(sizeof(struct Node));
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
	p = head -> next;
	q = head -> next -> next;
	while(q != NULL)
	{
		t = q -> next;
		q -> next = p;
		p = q;
		q = t;
	}
	head -> next -> next = NULL;
	head -> next = p;
	return head;
}
