#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
struct Node* insert(struct Node* head, int val)
{
    struct Node* newp = (struct Node*)malloc(sizeof(struct Node));
    newp -> val = val;
    newp -> next = head;
    head = newp;

    return head;
}
int main ()
{
    struct Node* head = (struct Node*)malloc (sizeof (struct Node));
    head -> val = 1;
    struct Node* p = NULL;
    p = head;
    for ( int i = 2; i < 5; i++)
    {
        p -> next = (struct Node*)malloc (sizeof (struct Node));
        p = p -> next;
        p -> val = i;
    }
    head = insert (head, 9);
    while (head != NULL)
    {
        printf ("%-2d", head -> val);
        head = head -> next;
    }
    return 0;
}

