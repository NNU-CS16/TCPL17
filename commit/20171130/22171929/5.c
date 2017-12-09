#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* delete(struct Node* head, struct Node* target);
int main()
{
	int a;
	scanf("%d",&a);
    struct Node *target;
    struct Node *head,*p0,*p,*p1,*p2,*p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->val = 2;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->val = 3;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
    head = p1;
	p0 = (struct Node *)malloc(sizeof(struct Node));
	p0->val = a;
    head = delete(head,p0);
	p = head;
	while (p != NULL)
    {
		printf("%d\t",p->val);
        p = p->next;
    }
    return 0;
}
struct Node* delete(struct Node* head, struct Node* target)
{
	struct Node *p,*prev;
	int x;
	p = head;
	prev = NULL;
	x = target->val;
    while (p != NULL)
    {
    	if (p->val == x)
            break;
        prev = p;
        p = p->next;
    }
	if (p == NULL)
		return head;
    if (p == head)
         head = head->next;
    else
         prev->next = p->next;
    free(p);
    return head;

}
	
