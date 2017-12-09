#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
struct Node * reverse(struct Node *head)
{
    struct Node *p = head;
    int count = 0;

    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    int *arr = (int *)malloc(count * sizeof(int));
    p = head;
    for (int i = 0; i < count; i++)
    {
        arr[i] = p->val;
        p = p->next;
    }
    p = NULL;
    for (int i = 0; i < count; i++)
    {
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp->val = arr[i];
        newp->next = p;
        p = newp;
    }
    head = p;

    return head;
}

int main(void)
{
    struct Node *p = NULL, *head = NULL;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp->val = arr[i];
        newp->next = head;
        head = newp;
    }

    p = head;
    while (p != NULL)
    {
         printf("%d ", p->val);
         p = p->next;
    }
    putchar('\n');

    head = reverse(head);

    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");

    return 0;
}
