#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};

void clear(struct Node* head)
{
    struct Node *p = head, *newp = NULL;
    while (p->next != NULL)
    {   
        newp = p;
        p = p->next;
        free(newp);
    }
    free(p);
}

int main ()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head -> val = 2;
    clear (head);
    return 0;
}
