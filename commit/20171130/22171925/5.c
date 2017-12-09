#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node* delete(struct Node* head, struct Node* target)
{
    struct Node *shift;
    shift = head;
    if (head == target) 
{
	free(target); 
	return NULL; 
}
    while (shift -> next != target) 
    shift = shift -> next;
    shift -> next = target -> next;
    free(target);
    return head;
}

int main()
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head -> val = 1;
    head -> next = NULL;
    head = delete(head, head);
    return 0;
}
