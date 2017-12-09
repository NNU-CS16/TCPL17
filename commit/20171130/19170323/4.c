 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
	int val;
	struct Node *next;
 };
 struct Node *create();
 struct Node* insert(struct Node* head, int val);
 void output(struct Node* head);
 
 int main()
{
	struct Node* head = create();
	head = insert(head, 63);
	output(head);
	return 0;
}
 
 struct Node *create()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *)malloc(sizeof(struct Node));
			p1->val = 60;
	p2 = (struct Node *)malloc(sizeof(struct Node));
			p2->val = 61;
	p3 = (struct Node *)malloc(sizeof(struct Node));
			p3->val = 64;
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
	
	return p1;
}

 struct Node* insert(struct Node* head, int val)
{
	struct Node *pre, *p, *newp;
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp->val = val;
	pre = NULL;
	p = head;
	while (p != NULL)
	{
		if (p->val > val)
			break;
		pre = p;
		p = p->next;
	}

	newp->next = p;
	if (p == head)
		head = newp;
	else
		pre->next = newp;
	return head;
}

 void output(struct Node* head)
{
	struct Node *p;
	p = head;
	while (p != NULL)
	{
		printf("%p\t%d\t%p\n", p, p->val, p->next);
		p = p->next;
	}
}
