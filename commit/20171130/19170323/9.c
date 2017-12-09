 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
	int val;
	struct Node *next;
 };

 void clear(struct Node *head);
 void output(struct Node* head);
 struct Node* deletehead(struct Node* head);

 int main()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *)malloc(sizeof(struct Node));
			p1->val = 60;
	p2 = (struct Node *)malloc(sizeof(struct Node));
			p2->val = 61;
	p3 = (struct Node *)malloc(sizeof(struct Node));
			p3->val = 63;
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
	printf("删除前：\n");
	output(p1);
	clear(p1);
	printf("删除后:\n");
	output(p1);
}

 struct Node* deletehead(struct Node* head)
{
	struct Node *p;
	if ( head == NULL )
		return NULL;
	p = head;
	head = head->next;
	free(p);
	return head;
}

 void clear(struct Node* head)
{
	while (head != NULL)
		head = deletehead(head);
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
