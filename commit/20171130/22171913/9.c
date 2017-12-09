#include <stdio.h>
#include <stdlib.h>
void clear(struct Node *head);
struct Node *Create1();
struct Node
{
    int val;
    struct Node *next;
};
int main()
{
  
    struct Node *head = Create1();
    head = p1; 
    clear(head);
    return 0;
}
void clear(struct Node *head)
{
    struct Node *p, *p1;
    p = head;
    p1 = NULL;
    while (p != NULL)
    {
	p1 = p;
	p = p -> next;
	free(p1);
    }
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
