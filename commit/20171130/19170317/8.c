#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* merge(struct Node* head1, struct Node* head2);

int main()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *) malloc (sizeof(struct Node));
	p1 -> val = 1;
	p2 = (struct Node *) malloc (sizeof(struct Node));
	p2 -> val = 3;
	p3 = (struct Node *) malloc (sizeof(struct Node));
	p3 -> val = 6;
	p1 -> next = p2;
	p2 -> next = p3;
	p3 -> next = NULL;
	struct Node *q1, *q2, *q3;
	q1 = (struct Node *) malloc (sizeof(struct Node));
	q1 -> val = 0;
	q2 = (struct Node *) malloc (sizeof(struct Node));
	q2 -> val = 2;
	q3 = (struct Node *) malloc (sizeof(struct Node));
	q3 -> val = 8;
	q1 -> next = q2;
	q2 -> next = q3;
	q3 -> next = NULL;
	struct Node *head1, *head2;
	head1 = p1;
	head2 = p2;
	printf("%p\n", merge(head1, head2));

	return 0;
}

struct Node* merge(struct Node* head1, struct Node* head2)
{
	struct Node *p, *q;
	p = head1;
	q = head2;
	struct Node *r[20];
	int i = 0;
	while (p != NULL && q != NULL)
	{
	  struct Node *r[i];
	  r[i] = (struct Node *) malloc (sizeof(struct Node));
	  if (p -> val <= q -> val)
	  {
		r[i] -> val = p -> val;
		p = p -> next;
	  }
	  else
	  {
		r[i] -> val = q -> val;
		q = q -> next;
	  }
	  i += 1;
	}
	if (p == NULL)
	{
	  while (q != NULL)
	  {
		r[i] = (struct Node *) malloc (sizeof(struct Node));
		r[i] -> val = q -> val;
		q = q -> next;
		i += 1;
	  }
	}
	else
	{
	  while (p != NULL)
	  {
		r[i] = (struct Node *) malloc (sizeof(struct Node));
		r[i] -> val = p -> val;
		p = p -> next;
		i += 1;
	  }
	}
	r[i-1] -> next = NULL;
	struct Node *head = r[0];

	return head;
}
