#include <stdio.h>
#include <stdlib.h>
struct Node *insert(struct Node* head, int val);
struct Node *InsertBeforeHead(struct Node* head, struct Node *newp);
struct Node *Create2(int ds[], int n);
void Output(struct Node *head);
struct Node
{
    int val;
    struct Node* next;
};
int main()
{
    int ds[3] = {101, 103, 107};
    int val;
    struct Node *newp;
    struct Node * head = Create2(ds, 3);
    printf("Before:\n");
    Output(head);
    newp = (struct Node *)malloc(sizeof(struct Node));
    newp -> val = 105;
    head = insert(head, val);
    printf("After:\n");
    Output(head);
    return 0;
}
struct Node *insert(struct Node *head, int val)
{
    struct Node *newp, *prev, *p;
    prev = NULL;
    p = head;
    while (p != NULL)
    {
	if (p -> val > newp -> val)
		break;
	prev = p;
	p = p -> next;
    }
    newp -> next = p;
    if (p == head)
	head = newp;
    else
	prev -> next = newp;
    return head;
}
struct Node *Create2(int ds[], int n)
{
    struct Node *head, *newp;
    int i, val;
    head = NULL;
    for(i = 0; i < n; i++)
    {
	newp =(struct Node *)malloc(sizeof(struct Node));
	newp -> val = ds[i];
	head = insert(head, val);
    }
    return head;
}
void Output(struct Node *head)
{
    struct Node *p;
    p = head;
    while(p != NULL)
    {
	printf("%d\n", p -> val);
	p = p -> next;
    }
}
