#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* create1();
struct Node* create2();
struct Node* merge(struct Node* head1, struct Node* head2)
{
    struct Node *p1, *p2, *shift;
    p1 = head1;
    p2 = head2 -> next;
    while(p1 -> next && p2)
    {
	if (p1 -> next -> val > p2 -> val)
	{
	    shift = p2 -> next;
	    p2 -> next = p2 -> next;
            p1 -> next = p2;
	}
	else
	    p1 = p1 -> next;
    }
    if(p2)
	p1 -> next = p2;
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
struct Node* create2()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> val = 2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> val = 4;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> val = 5;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}


int main( )
{
    struct Node *head1, *head2;
    head1 = (struct Node *)malloc(sizeof(struct Node));
    head2 = (struct Node *)malloc(sizeof(struct Node));
    head1 = create1();
    head2 = create2();
    merge(head1, head2);
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    while (head -> next)
    {
        printf ("%d", head -> next -> val);
        head = head -> next;
    }
    return 0;
}
