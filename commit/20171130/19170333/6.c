#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
int MAX (struct Node* head, int val);
struct Node* delect (struct Node* head, int val)
{
    struct Node* shift = NULL;
    struct Node* np = NULL;
    shift = head;
    if (head -> next == NULL && head -> val == val)
    {
        free (head);
        return NULL;
    }
    if (shift -> val == val)
    {
        head = shift -> next;
        free (shift);
        return head;
    }
    while (shift -> next != NULL)
    {
        if (shift -> next -> val == val && shift -> next -> next == NULL)
        {
            free (shift -> next);
            shift -> next = NULL;
            break;
        }
        if (shift -> next -> val == val)
        {
            np = shift -> next;
            shift -> next= shift -> next -> next;
            free (np);
        }
        shift = shift -> next;
    }
    return head;
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
    struct Node* target = head -> next;
    head = delect (head, 3);
    while (head != NULL)
    {
        printf ("%-2d\n", head -> val);
        head = head -> next;
    }
    return 0;
}

