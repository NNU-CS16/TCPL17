#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

void Output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%X\t%d\t%X\n", p, p -> val, p -> next);
        p = p -> next;
    }
}

struct Node *Createl()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> val = 2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> val = 3;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> val = 4;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}

struct Node* insert(struct Node* head, int val)
{
    struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
    newp -> val;
    newp -> next = head;
    head = newp;
    return head;
}

int main()
{
    struct Node *head = Createl();
    struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
    newp -> val = 5;
    head = insert(head, 5);
    Output(head);
    return 0;
}
    
