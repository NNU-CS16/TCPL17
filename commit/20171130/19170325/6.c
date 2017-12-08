#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
struct Node * delete(struct Node *head, int val)
{
    struct Node *p = NULL, *prev = NULL;

    p = head;
    while (p != NULL)
    {
        if (p->val == val)
            if (p == head)
                 head = head->next;
            else
                 prev->next = p->next;
        prev = p;
        p = p->next;
    }

    return head;
}
int main(void)
{
    struct Node *p = NULL, *head = NULL, *newp;
    int arr[3] = {5, 3, 1};

    for (int i = 0; i < 3; i++)
    {
        newp = (struct Node *)malloc(sizeof(struct Node));
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
    puts("\n");

    int val;
    printf("Please input val: \n");
    scanf("%d", &val);
    head = delete(head, val);

    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    putchar('\n');

    return 0;
}
