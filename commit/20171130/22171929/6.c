#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* delete(struct Node *head,int val);
int main()
{
    int val;
    scanf("%d",&val);
    struct Node *head,*p,*p1,*p2,*p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->val = 1;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->val = 1;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
    head = p1;
    head = delete(head,val);
    p = head;
    while (p != NULL)
    {
        printf("%d\t",p->val);
        p = p->next;
    }
    return 0;
}
struct Node* delete(struct Node *head,int val)
{
	struct Node *prev,*p,*temp;
	p = head;
	prev = NULL;
	while (p != NULL)
	{
		if (p->val != val)
		{	
			prev = p;
			p = p->next;
		}
		else if (p->val == val)
		{
			if (p == head)
			{
				head = head->next;
				free(p);
				p = head;
			}
		 	else if (p != head)
			{
				prev->next = p->next;
				free(p);
				p = prev->next;
			}
		}
	}
	return head;
}			
