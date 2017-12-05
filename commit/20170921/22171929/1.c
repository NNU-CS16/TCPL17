#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node* construct(int arr[], int size);
int main()
{
	int arr[3];
	int  i;
	struct Node *head,*p;
	for (i = 0; i < 3; i++)
		scanf("%d",&arr[i]);
    head = construct(arr,sizeof(arr));
	p = head;
	while (p != NULL)
	{
		printf("%d\t%X\n",p->data,p->next);
		p = p->next;
	}
    return 0;
}
struct Node* construct(int arr[], int size)
{
	int i;
	struct Node *p1,*p2,*p3;
	p1 = (struct Node *)malloc(sizeof(struct Node));
	p1->data = arr[0];
	p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->data = arr[1];
	p3 = (struct Node *)malloc(sizeof(struct Node));
    p3->data = arr[2];
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
    return p1;
}

		
