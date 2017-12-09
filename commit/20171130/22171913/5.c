#include <stdio.h>
#include <stdlib.h>
struct Node *delete(struct Node *head, struct Node *target);
void Output(struct Node *head);
struct Node
{
    int val;
    struct Node *next;
};
int main()
{
    struct Node *head, *p, *newp;
    int a[3] = {3, 5, 7};
    int i = 0;
    struct Node *target = (struct Node *)malloc(sizeof(struct Node));
    for (i = 0; i < 3; i++)
    {
	struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
	newp -> val = a[i];
	newp -> next = head;
	head = newp;
    }
    printf("Before:\n");
    Output(head);
    printf("Please input a number: \n");
    scanf("%d", &target -> val);
    target -> next = NULL;
    head = delete(head, target);
    printf("After:\n");
    Output(head);
    
    return 0;
}
struct Node *delete(struct Node *head, struct Node *target)
{
    struct Node *p = NULL, *prev = NULL;
    p = head;
    while (p != NULL)
    {
	if (p -> val == target -> val)
		break;
	prev = p;
	p = p -> next;
    }
    if (p == NULL)
	return head;
    if (p == head)
	head = head -> next;
    free(p);
    return head;
}
void Output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
	printf("%d\n", p -> val);
	p = p -> next;
    }
}
