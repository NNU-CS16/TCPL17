#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
typedef struct Node* ptrNode;
typedef ptrNode Node;
struct Node* merge (struct Node* head1, struct Node* head2)
{
    Node ha, hb, hc;
    Node c, r, p;
    c = (struct Node*)malloc (sizeof (struct Node));
    r = c;
    ha = head1 -> next;
    hb = head2 -> next;
    while ((ha != NULL) && (hb != NULL))
    {
        p = (struct Node*)malloc (sizeof (struct Node));
        if (ha -> val <= hb -> val)
        {
            p -> val = ha -> val;
            ha = ha -> next;
        }
        else
        {
            p -> val = hb -> val;
            hb = hb -> next;
        }
        r -> next = p;
        r = p;
    }
    if (ha == NULL)
    {
        while (hb != NULL)
        {
            p = (struct Node*) malloc (sizeof (struct Node));
            p -> val = hb -> val;
            hb = hb -> next;
            r -> next =p;
            r =p;
        }
    }
    if (hb == NULL)
    {
        while (ha != NULL)
        {
        p = (struct Node*) malloc (sizeof (struct Node));
        p -> val = ha -> val;
        ha = ha -> next;
        r -> next = p;
        r = p;
        }
    }
    r -> next = NULL;
    return c;
}
int main ()
{
    struct Node* head = (struct Node*)malloc (sizeof (struct Node));
    struct Node* np = (struct Node*)malloc (sizeof (struct Node));
    np -> val = 6;
    struct Node* mp = NULL;
    mp = np;
    head -> val = 1;
    struct Node* p = NULL;
    p = head;
    for ( int i = 3; i < 11; i += 2)
    {
        p -> next = (struct Node*)malloc (sizeof (struct Node));
        p = p -> next;
        p -> val = i;
    }
    for (int i = 4; i < 11; i += 2)
    {
        mp -> next = (struct Node*)malloc (sizeof (struct Node));
        mp = mp -> next;
        mp -> val = i;
    }
    head = merge (head, np);
    while (head != NULL)
    {
        printf ("%-2d\n", head -> val);
        head = head -> next;
    }
    return 0;
}
