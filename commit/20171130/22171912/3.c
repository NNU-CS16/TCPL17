/*3.c_插入尾部*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* insert(struct Node* head, int val)
{
	struct Node* p;
    struct Node* newp = (struct Node*)malloc(sizeof(struct Node));
	newp -> val = 14;
	p = head;
    while (p -> next != NULL)
        p = p -> next ;
	newp -> next = NULL;
	p -> next = newp;
    return head;
}

struct Node* Create1()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node*)malloc(sizeof(struct Node));
    p1 -> val = 11;
    p2 = (struct Node*)malloc(sizeof(struct Node));
    p2 -> val = 12;
    p3 = (struct Node*)malloc(sizeof(struct Node));
    p3 -> val = 13;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}

int main()
{
    int val;
    struct Node* head = Create1();
	struct Node* p;
    head = insert(head, val);
	p = head;
    while (p != NULL)
    {
        printf("%d\t", p -> val);
        p = p -> next;
    }
    printf("\n");
    return 0;
}

