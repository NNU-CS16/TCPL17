#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node* insert(struct Node* head, int val);
int main()
{
    struct Node n;
    struct Node *head,*p;
	head = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d",&head->val);
	head->next = NULL;
	int a;
	scanf("%d",&a);
	head = insert(head,a);
	p = head;
	while(p != NULL)
	{
		printf("%d",p->val);
		p = p->next;
	}
	return 0;
}
struct Node* insert(struct Node* head, int val)
{
	struct Node *p1;
	p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = val;
	p1->next = head;
	head = p1;
	return head;
}
	
