 #include <stdio.h>
 #include <stdlib.h>

 struct Node 
 {
	int val;
	struct Node* next;
 };
 void output(struct Node *head);
 struct Node* insert(struct Node* head, int val);

 int main()
{
	struct Node *head = (struct Node *)malloc(sizeof(struct Node));
	head -> val = 6;
	int m;
	m = head->val;
	head -> next = NULL;
	head = insert(head, m);
	output(head);
	return 0;
}

 struct Node *insert(struct Node* head, int val)
{
	struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
	newp->val = val;
	newp->next = head;
	head = newp;
	return head;
}

 void output(struct Node *head)
{
	struct Node *p;
	p = head;
	while (p != NULL)
	{
		printf("%p\t%d\t%p\n", p, p->val, p->next);
		p = p->next;
	}
} 
