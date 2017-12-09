#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
struct Node *delete(struct Node *head, struct Node *target)
{
    struct Node *p = NULL, *prev = NULL;

    p = head;
    while (p != NULL)
    {
        if (p->val == target->val)
             break;
        prev = p;
        p = p->next;
    }
    if (p == NULL)
        return head;
    if (p == head)
        head = head->next;
    else
        prev->next = p->next;
    free(p);

    return head;
}

int main(void)
{
    struct Node *head = NULL, *p = NULL, *newp = NULL;
    int arr[3] = {1, 3, 5};
    struct Node *target = (struct Node *)malloc(sizeof(struct Node));

    for (int i = 0; i < 3; i++)
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
    printf("\n");

    printf("Please input the number you want to delete :\n");
    scanf("%d", &target->val);
    target->next = NULL;

    head = delete(head, target);
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    free(target);

    return 0;
}
