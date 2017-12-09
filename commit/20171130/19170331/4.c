#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
struct Node *insert(struct Node *head, int val)
{
     struct Node *p = NULL, *prev = NULL;
     struct Node *newp = (struct Node *)malloc(sizeof(struct Node));

     newp->val = val;
     p = head;
     while (p!= NULL)
     {
         if (p->val > newp->val)
             break;
         prev = p;
         p = p->next;
     }
     newp->next = p;
     if (p == head)
         head = newp;
     else
        prev->next = newp;

     return head;
}
int main(void)
{
    int arr[3] = {5, 3, 1};
    struct Node *head = NULL, *newp;

    for(int i = 0; i < 3; i++)
    {
        newp = (struct Node*)malloc(sizeof(struct Node));
        newp->val = arr[i];
        newp->next = head;
        head = newp;
    }
    struct Node *p = NULL, *prev = NULL;

    p = head;
    while (p!= NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");

    int val = 4;
    head = insert(head, val);
    p = head;
    while (p!= NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");

    return 0;
}

