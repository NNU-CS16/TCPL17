#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};
struct Node *merge(struct Node *head1, struct Node* head2);
void Output(struct Node *head);
struct Node *reverse(struct Node *head);

int main(void)
{
	int a[5] = {9, 7, 5, 3, 1};
	int b[4] = {8, 6, 4, 2};
	struct Node *head1 = NULL, *head2 = NULL, *p, *newp;
	int i;

	for (i = 0; i < 5; i++)
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = a[i];
		newp->next = head1;
		head1 = newp;
	}
	Output(head1);
	for (i = 0; i < 4; i++)
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = b[i];
		newp->next = head2;
		head2 = newp;
	}
	Output(head2);
	head1 = merge(head1, head2);
	head1 = reverse(head1);
	Output(head1);

	return 0;
}

void Output(struct Node *head)
{
	struct Node *p = head;

	while (p != NULL)
	{
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");
}

struct Node *merge(struct Node *head1, struct Node *head2)
{
	struct Node *head = NULL, *p1 = head1, *p2 = head2;

	while (p1 != NULL && p2 != NULL)
	{
		if (p1->val <= p2->val)
		{
			struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
			newp->val = p1->val;
			newp->next = head;
			head = newp;
			p1 = p1->next;
		}
		else if (p1->val > p2->val)
		{
			struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
			newp->val = p2->val;
			newp->next = head;
			head = newp;
			p2 = p2->next;
		}
	}
	if (p1 != NULL)
		while (p2 != NULL)
		{
			struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
			newp->val = p1->val;
			newp->next = head;
			head = newp;
			p1 = p1->next;
		}
	if (p2 != NULL)
		while (p2 != NULL)
		{
			struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
			newp->val = p2->val;
			newp->next = head;
			head = newp;
			p2 = p2->next;
		}

	return head;
}
struct Node * reverse(struct Node *head)
{
	struct Node *p = head;
	int count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	int *arr = (int *)malloc(count * sizeof(int));
	p = head;
	for (int i = 0; i < count; i++)
	{
		arr[i] = p->val;
		p = p->next;
	}
	p = NULL;
	for (int i = 0; i < count; i++)
	{
		struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = arr[i];
		newp->next = p;
		p = newp;
	}
	head = p;

	return head;
}
