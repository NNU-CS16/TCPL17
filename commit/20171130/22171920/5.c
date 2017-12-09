#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};

struct Node* delete(struct Node* head, struct Node* target)
{
	struct Node *p,*prev;
	int x;
	p = head;
	prev = NULL;
	x = target->val;
    while (p != NULL)
    {
    	if (p->val == x)
            break;
        prev = p;
        p = p->next;
    }
	if (p == NULL)
		return head;
    if (p == head)
         head = head->next;
    else
         prev->next = p->next;
    free(p);

    return head;
}

int main()
{
    struct Node *head, *p1, *p2 ,*p3;
    p1 = (struct Node *)malloc(sizeof(struct Node)); p1->val = 6;
    p2 = (struct Node *)malloc(sizeof(struct Node)); p2->val = 9;
	p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 10;
    head = (struct Node *)malloc(sizeof(struct Node)); head->val= 3;
    head->next = p1;  p1->next = p2; p2->next = p3; p3->next = NULL;
	int val;
	printf("Please input val:");
	scanf("%d",&val);
    struct Node *target;
	target = (struct Node *)malloc(sizeof(struct Node)); target -> val = val;
    struct Node *k;
    k = delete(head, target);
    while (k != NULL)
    {
        printf("%d ",k -> val);
		k = k -> next;
	}
	printf("\n");

	return 0;
}

