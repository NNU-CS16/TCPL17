#include <stdio.h>
#include <stdlib.h>
struct Node* insert(struct Node* head, int val);
struct Node
{
	int val;
	struct Node* next;
};
int main()
{
	struct Node *head, *p1, *p2;
    p1 = (struct Node *)malloc(sizeof(struct Node)); p1->val = 101;
    p2 = (struct Node *)malloc(sizeof(struct Node)); p2->val = 102;
    head = (struct Node *)malloc(sizeof(struct Node)); head->val= 100;
    head->next = p1;  p1->next = p2; p2->next = NULL;
    int val;
    printf("Please input val:");
    scanf("%d",&val);
	struct Node *k;
	k = insert(head, val);
	while (k != NULL)
	{
		printf("%d ", k->val);
		k = k -> next;
	}
	return 0;
}
struct Node* insert(struct Node* head, int val)
{
	struct Node *p;
	struct Node *shift;
	shift = head;
	p = (struct Node *)malloc(sizeof(struct Node));
	p -> val = val;
	p -> next = NULL;
	while (shift -> next != NULL)
		shift = shift -> next;
	shift -> next = p;
	return head;
}
