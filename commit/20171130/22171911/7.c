#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* reverse(struct Node* head)
{
    struct Node *p, *t, *q;
    p = NULL;
    t = head -> next;
    q = t -> next;
    if (t == NULL || q == NULL)
	return t;
    while (q)
    {
	t -> next = p;
	p = t;
	t = q;
	q = q -> next;
    }
    t -> next = p;
    head -> next = t;
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
int main( )
{
    struct Node *head = create1();
    printf ("原链表：");
    output(head);
    head = reverse(head);
    printf ("反转后：");
    output(head);
    return 0;
}
     






    
