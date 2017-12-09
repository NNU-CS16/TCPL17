#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

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

struct Node *insert(struct Node * head, int val)
{
    struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = NULL, *prev = NULL;
    newp -> val = val;
    newp -> next = NULL;
    p = head;
    while (p != NULL)
    {
        prev = p;
        p = p -> next;
    }
    prev -> next = newp;
    return head;
}

int main(void)
{
    struct Node *head = Createl();
    int val = 10;
    head = insert(head, val);
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d ", p -> val);
        p = p -> next;
    }
    printf("\n");
    return 0;
}
