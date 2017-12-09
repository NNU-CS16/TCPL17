#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* merge(struct Node* head1, struct Node* head2)
{
    struct Node* head = (struct Node* )malloc(sizeof(struct Node));
    struct Node* temp = head;
    while (1)
    {
	if (head1 -> val < head2 -> val)
	{
            temp -> val = head1 -> val;
	    if (head1 -> next == NULL) 
	        break;
	    head1 = head1 -> next;
	}
	else
	{
	    temp -> val = head2 -> val;
	    if (head2 -> next == NULL)
	        break;
	    head2 = head2 -> next;
	}
	temp -> next = (struct Node* )malloc(sizeof(struct Node));
	temp = temp -> next;
	}
	if (head1 -> next == NULL)
	    temp -> next = head2;
	else 
	    temp -> next = head1;
	return head;
}
int main()
{
    struct Node* head1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* head2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* shift1 = head1;
    struct Node* shift2 = head2;
    shift1 -> val = 0;
    shift2 -> val = 2;
    shift1 -> next = NULL;
    shift2 -> next = NULL;
    for (int i=1; i<4; i++)
    {
        shift1 -> next = (struct Node*)malloc(sizeof(struct Node));
        shift2 -> next = (struct Node*)malloc(sizeof(struct Node));
        shift1 = shift1 -> next;
        shift2 = shift2 -> next;
        shift1 -> val = i;
        shift2 -> val = i+2;
    }
    shift1 -> next = NULL;
    shift2 -> next = NULL;
    struct Node* shift = merge(head1, head2);
    while (shift -> next != NULL)
    {
        printf("%d", shift -> val);
        shift = shift -> next;
    }
    printf("%d\n", shift -> val);
    return 0;
}
