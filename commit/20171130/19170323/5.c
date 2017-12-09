 #include <stdio.h>
 #include <stdlib.h>

 struct Node 
 {
	int val;
	struct Node *next;
 };

 struct Node* delete(struct Node* head, struct Node* target);
 void output(struct Node* head);

 int main()
{
    struct Node *head, *p2, *p3;
    head = (struct Node *)malloc(sizeof(struct Node));
            head->val = 60;
    p2 = (struct Node *)malloc(sizeof(struct Node));
            p2->val = 61;
    p3 = (struct Node *)malloc(sizeof(struct Node));
            p3->val = 64;
    head->next = p2;
    p2->next = p3;
    p3->next = NULL;
	

    head = delete(head, p2);
    output(head);
    return 0;
}

 struct Node* delete(struct Node* head, struct Node* target)
{
    struct Node *p, *pre;
	p = head;
	pre = NULL;
	while ( p != NULL )
	{
		if (p == target)
			break;
		pre = p;
		p = p->next;
	}
	if (p == NULL)
		return NULL;
	if (p == head)
		head = head->next;
	else 
		pre->next = p->next;
	free(p);
	return head;
}

 void output(struct Node* head)
{
	struct Node* p;
	p = head;
	while (p != NULL)
	{
		printf("%p\t%d\t%p\n", p, p->val, p->next);
		p = p->next;
	}
}

