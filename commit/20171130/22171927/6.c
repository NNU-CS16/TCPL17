#include <stdio.h>
#include <stdlib.h>
struct Node* delete(struct Node* head, int val);
struct Node* deleteone(struct Node* head, int val);
struct Node
{
    int val;
    struct Node* next;
};
int main()
{
    struct Node *head, *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node)); p1->val = 3;
    p2 = (struct Node *)malloc(sizeof(struct Node)); p2->val = 9;
    p3 = (struct Node *)malloc(sizeof(struct Node)); p3->val = 6;
	head = (struct Node *)malloc(sizeof(struct Node)); head->val= 3;
    head->next = p1;  p1->next = p2; p2->next = p3; p3->next = NULL;
    int val;
    printf("Please input val:");
    scanf("%d",&val);
    struct Node *k;
    k = delete(head, val);
    while (k != NULL)
    {
        printf("%d ",k -> val);
		k = k -> next;
	}
	return 0;
}
struct Node* deleteone(struct Node* head, int val)
{
	struct Node *prev, *p;
	prev = NULL; p = head;
	while (p != NULL)
	{
		if (p -> val == val)
			break;
		prev = p; p = p -> next;
	}
	if (p == NULL)
		return NULL;
	if (p == head)
		head = head -> next;
	else
		prev -> next = p -> next;
	free(p);
	return head;
}
struct Node* delete(struct Node* head, int val)
{
	struct Node *q;
	q = head;
	while (q != NULL)
		q = deleteone(head, val);
	return head;
}

