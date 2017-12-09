#include <stdio.h>
#include <stdlib.h>
struct Node *reserve(struct Node *head);
struct Node *Create1();
struct Node
{
    int val;
    struct Node *next;
};
int main()
{
    struct Node *head = Create1();
    struct Node *n;
    n = reserve(head);
    while (n != NULL)
    {
	printf("%d\n", n -> val);
	n = n -> next;
    }
    return 0;
}
struct Node *reserve(struct Node *head)
{
    struct Node *newp;
    struct node *p;
    p = head;
    if (head == NULL || head -> next == NULL)
	return head;
    while (head -> next != NULL)
    {
	newp = head -> next;
	head -> next = newp -> next;
        newp -> next = p;
        p = newp;
    }
    return p;
}
struct Node *Create1()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> val = 101;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> val = 103;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> val = 105;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}

