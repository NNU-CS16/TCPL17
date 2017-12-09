#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node *gen()
{
    struct Node *phead = NULL;
    for (int i=10; i>0; i--)
    {   
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p -> val = i;
        p -> next = phead;
        phead = p;
    }
    return phead;
}

void display(struct Node *phead)
{
    while (phead != NULL)
    {
        printf("%d\t",phead -> val);
        phead = phead -> next;
    }
    printf("\n");
}

struct Node* reverse(struct Node* phead)
{
    if (phead == NULL || phead -> next == NULL)
    {
        return phead;
      }
    struct Node *p = phead -> next;
    struct Node *newp = reverse(p);
    p -> next = phead;
    phead -> next = NULL;
        return newp;
}

int main ()
{   
    struct Node *phead = gen();
    display(phead);
    phead = reverse(phead);
    display(phead);
}
