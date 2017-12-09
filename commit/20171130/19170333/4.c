#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
int MAX (struct Node* shift, int val);
struct Node* insert (struct Node* head, int val)
{
    struct Node* newp = (struct Node*) malloc (sizeof (struct Node));
    newp -> val = val;
    struct Node* shift = NULL;
    shift = head;
    if (val <= shift -> val)
    {
        newp -> next = shift;
        head = newp;
    }
    else if (MAX (shift, val))
    {
        while (shift -> next != NULL)
            shift = shift -> next;
               
        shift -> next = newp;
        newp -> next = NULL;
    }
    else
    {
        while (shift -> next -> val > val)
            shift = shift -> next;
        newp -> next = shift -> next -> next;
        shift -> next = newp;
    }
    return head;
}
int MAX (struct Node* shift, int val)
{
    for (;shift -> val <= val && shift -> next != NULL; shift = shift -> next);
    if (shift -> next == NULL)
        return 1;
    return 0;
}
int main ()
{
    struct Node* head = (struct Node*)malloc (sizeof (struct Node));
    head -> val = 1;
    struct Node* p = NULL;
    p = head;
    for ( int i = 2; i < 6; i++)
    {
        p -> next = (struct Node*)malloc (sizeof (struct Node));
        p = p -> next;
        p -> val = i;
    }
    head = insert (head, 10);
    while (head != NULL)
    {
        printf ("%-2d", head -> val);
        head = head -> next;
    }
    return 0;
}

