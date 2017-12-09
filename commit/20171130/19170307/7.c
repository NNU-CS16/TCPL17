#include <stdio.h>
 #include <stdlib.h>

 struct Node 
 {
	int val;
	struct Node *next;
 };
 
 struct Node* reverse(struct Node* head);
 void output(struct Node* head);
 
 int main()
{
    struct Node *head, *p1, *p2, *p3;
    head = (struct Node *)malloc(sizeof(struct Node));
            head->val = 60;
    p1 = (struct Node *)malloc(sizeof(struct Node));
            p1->val = 61;
    p2 = (struct Node *)malloc(sizeof(struct Node));
            p2->val = 63;
    p3 = (struct Node *)malloc(sizeof(struct Node));
            p3->val = 64;
    head->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
	printf("反转之前：\n");
	output(head);
	head = reverse(head);
	printf("反转之后：\n");
	output(head);
	return 0;
}

 struct Node* reverse(struct Node* head)
{
	struct Node *p, *pre, *temp;
	p = head;
	pre = NULL;
	while (p != NULL)
	{
		temp = p;
		p = p->next;
		temp->next = pre;
		pre = temp; 
	}
	return pre;
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

