#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* delete(struct Node* head, struct Node* target);
struct Node* create1();
void output(struct Node *head);
int main( )
{   
    struct Node *head = create1();
    printf ("删除前:\n");
    output(head);
    int data = 1;
    struct Node *target;
    target = (struct Node *)malloc(sizeof(struct Node));
    target -> val = data;
    head = delete(head, target);
    printf ("删除后:\n");
    output(head);
    return 0;
}
struct Node* delete(struct Node* head, struct Node* target)
{   
    int data;
    struct Node *p;
    target = NULL;
    p = head;
    while (p != NULL)
    {
	if (p -> val == data);
	    break;
	target = p;
	p = p -> next;
    }
    if (p == NULL)
	return head;
    if (p == head)
	head = head -> next;
    else
	target -> next = p -> next;
    free(p);
    return head;
}
struct Node* create1()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> val = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> val = 2;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> val = 3;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}
void output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf ("%d", p -> val);
        p = p ->next;
    }
}



