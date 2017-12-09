 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
	int val;
	struct Node* next;
 };
 struct Node* construct(int arr[], int size);
 void output(struct Node *head);

 int main()
{
	int str[5];
	for ( int i = 0; i < 5; i++)
		scanf("%d", &str[i]);
	struct Node *head = construct( str, 5);
	output(head);
	return 0;
}

 struct Node* construct(int arr[], int size)
{
	struct Node *head, *newp;
	int i ;
	head = NULL;
	for (i = 0; i < size; i++)
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = arr[size-i-1];
		newp->next = head;
		head = newp;
	}
	return head;
}

 void output(struct Node *head)
{
	struct Node *p;
	p = head;
	while (p != NULL)
	{
		printf("%p\t%d\t%p\n", p, p->val, p->next);
		p = p->next;
	}
}
