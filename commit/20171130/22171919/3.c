#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};

struct Node* insert(struct Node* head, int val)
{
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->val = val;
	temp->next = NULL;
	head->next = temp;
	return head;
}

int main()
{
	struct Node *head,*p;
	head = (struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&head->val);
	head->next = NULL;
	int val;
	scanf("%d",&val);
	p = insert(head,val);
	while(p->next != NULL)
	{
		printf("%d",p->val);
		p = p->next;
	}
	printf("%d\n",p->val);
	return 0;
}
