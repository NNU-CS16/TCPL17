#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};

struct Node* construct(int arr[], int size)
{
	struct Node *head = (struct Node *)malloc(sizeof(struct Node));
	head->val = arr[0];
	head->next = NULL;
	struct Node *alter = head;
	int num = 1;
	while(num < size)
	{
		alter->next = (struct Node *)malloc(sizeof(struct Node));
		alter = alter->next;
		alter->val = arr[num];
		alter->next = NULL;
		num++;
	}
	return head;
}

int main()
{
	int arr[10] = {1,2,3,4,5};
	struct Node *p;
	p = construct(arr,5);
	while(p->next != NULL)
	{
		printf("%d",p->val);
		p = p->next;
	}
	printf("%d\n",p->val);
	return 0;
}
