#include <stdio.h>
#include <stdlib.h>
struct Node* merge(struct Node* head1, struct Node* head2);
struct Node
{
    int val;
    struct Node* next;
};
int main()
{
	struct Node *head1, *head2;
	head1 = NULL;
	head2 = NULL;
	struct Node *p, *q;
	int i;
	printf("Please input lb1:");
	for (i = 4; i >= 0; i--)
	{	
		p = (struct Node *)malloc(sizeof(struct Node));
		scanf("%d",&p->val);
		p -> next = head1;
		head1 = p;
	}
	printf("Please input lb2:");
	for (i = 4; i >= 0; i--)
	{
		q = (struct Node *)malloc(sizeof(struct Node));
		scanf("%d",&q->val);
		q -> next = head2;
		head2 = q;
	}
	struct Node *k;
	k = merge(head1, head2);
	while (k != NULL)
	{
		printf("%d ",k -> val);
		k = k -> next;
	}
	return 0;
}
struct Node* merge(struct Node* head1, struct Node* head2)
{
	struct Node *head;
	head = NULL;
	struct Node *newp;
	while ((head1->next != NULL) || (head2->next != NULL))
	{
		if (head1->val <= head2->val)
		{   
			newp = (struct Node *)malloc(sizeof(struct Node));
			newp->val = head1->val;
			newp -> next = head;
			head = newp;
			head1 = head1->next;
		}
		if (head1->val > head2->val)
		{   
			newp = (struct Node *)malloc(sizeof(struct Node));
			newp->val = head2->val;
			newp -> next = head;
			head = newp;
			head2 = head2->next;
		}
	}
    return head;
}
