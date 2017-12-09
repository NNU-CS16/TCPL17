#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};

struct Node* insert(struct Node* head, int val)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> val = val;
	temp -> next = NULL;
	head -> next = temp;
	return head;
}

int main()
{
	struct Node* a,* head = (struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&head->val);
	head -> next = NULL;
	int val;
	scanf("%d",&val);
	a = insert(head,val);
	while(a -> next != NULL)
	{
		printf("%d",a -> val);
		a = a -> next;
	}
	printf("%d\n",a -> val);
	return 0;
}
