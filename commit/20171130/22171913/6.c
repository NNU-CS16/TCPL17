nclude <stdio.h>
#include <stdlib.h>
struct Node *delete(struct Node *head, int val);
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
    int val;
    for (i = 0; i < 3; i++)
    {
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp -> val = a[i];
	newp -> next = head;							        head = newp;
										    }
    printf("Before:\n");
    Output(head);
    printf("Please input val: \n");
    scanf("%d", &val);
    
    head = delete(head, val);
    printf("After:\n");
    Output(head);
    return 0;
}
struct Node *delete(struct Node *head, int val)
{
    struct Node *p, *prev;
    p = head;
    while (p != NULL)
    {
	if (p -> val == val)
	{
	    if (p == head)
	        head = head -> next;
            else
	        prev -> next = p -> next;
        }
        prev = p;
        p = p -> next;
    }
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

