#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
struct Node* do_reverse (struct Node* head, struct Node* Newhead);
struct Node* reverse (struct Node* head)
{
    return do_reverse (head, NULL);
}
struct Node* do_reverse (struct Node* np, struct Node* Newhead)
{
    if (np == NULL)
        return Newhead;
    else 
    {
        struct Node* shift = np -> next;
        np -> next = Newhead;
        return do_reverse (shift, np);
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
    head =  reverse(head);
    while (head != NULL)
    {
        printf ("%-2d\n", head -> val);
        head = head -> next;
    }
    return 0;
}

