#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node *insert(struct Node *head, int val)
{
    struct Node *prev, *p;
    struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
    prev = NULL;
    p = head;
    while ( p != NULL)
    {
        if (p -> val > newp -> val)
            break;
        prev = p;
        p = p -> next;
    }
    newp -> next = p;
    if (p == head)
        head = newp;
    else
        prev -> next = newp;
        return head;
}

struct Node *InsertBeforeHead(struct Node *head, struct Node *newp)
{
    newp -> next = head;
    head = newp;
    return head;
}

struct Node *Create2(int ds[], int n)
{
    struct Node *head, *newp; int i;
    head = NULL;
    for (i = 0;i < n;i++)
        {
            newp = (struct Node *)malloc(sizeof(struct Node));
            newp -> val = ds[i];
            head -> InsertBeforeHead(head, newp);
        }
        return head;
}

void Output(struct Node* head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p -> val);
        p = p -> next;
    }
    printf("\n");
}


int main()
{
    int ds[3] = {2, 4, 8};
    struct Node *newp;
    struct Node *head = Create2(ds, 3);
    newp = (struct Node *)malloc(sizeof(struct  Node));
    int val = 6;
    newp -> val;
    head = insert(head, val); 
    Output(head);
    printf("插入后：\n");
    return 0;
}
