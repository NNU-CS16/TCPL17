 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
	int val;
	struct Node* next;
 };

 struct Node* delete1(struct Node* head, struct Node* target);
 struct Node* delete2(struct Node* head, int val);
 void output(struct Node* head);
 
 int main()
{
	struct Node *head, *p1, *p2, *p3;
	head = (struct Node *)malloc(sizeof(struct Node));
			head->val = 60;
    p1 = (struct Node *)malloc(sizeof(struct Node));
            p1->val = 61;
    p2 = (struct Node *)malloc(sizeof(struct Node));
            p2->val = 61;
    p3 = (struct Node *)malloc(sizeof(struct Node));
            p3->val = 64;
	head->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
	head = delete2(head, 61);
	output(head);
	return 0;
}

 struct Node* delete2(struct Node* head, int val)
{
	struct Node *n;
	n = head;
	while (n != NULL)
	{
		if (n->val == val)
			head = delete1(head, n);
		n = n->next;
	}
	return head;
}

  struct Node* delete1(struct Node* head, struct Node* target)
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

 
