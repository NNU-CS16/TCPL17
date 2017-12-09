#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
   struct Node* next;
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
        printf("%d",p->val);
		
		p = p->next;
	}
    return 0;
}
struct Node* construct(int arr[], int size)
{	
	int n,i;
	n = size  / sizeof(int);
	struct Node *head,*p;
	head = NULL;
	for (i = n - 1; i > -1; i--)
	{
		p = (struct Node*)malloc(sizeof(struct Node));
		p->val = arr[i];
		p->next = head;
		head = p;
	}
	return head;
}	
