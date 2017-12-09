#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
void clear (struct Node* head)
{
    struct Node* shift = NULL;
    shift = head;
    while (head != NULL)
    {
        shift = head -> next;
        free (head);
        head = shift;
    }
    return;
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
    clear (head);
    while (head != NULL)
    {
        printf ("%-2d", head -> val);
        head = head -> next;
    }
    return 0;
}

