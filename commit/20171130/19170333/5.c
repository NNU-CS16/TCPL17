#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
struct Node* delect (struct Node* head, struct Node* target)
{
    struct Node* shift = NULL;
    shift = head;
    if (head -> next == NULL)
    {
        head = NULL;
        free (head);
        return NULL;
    }
    else if (target -> next == NULL)
        free (target);
    else
    {
        while (shift -> next != target && shift != NULL)
            shift = shift -> next;
        shift -> next = target -> next;
        free (target);
        return head;
    }
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
    head = delect (head, target);
    while (head != NULL)
    {
        printf ("%-2d\n", head -> val);
        head = head -> next;
    }
    return 0;
}

