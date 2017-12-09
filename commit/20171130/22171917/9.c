#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
void clear(struct Node * head);

void clear(struct Node * head)
{
    struct Node *q = head, *pr = NULL;
    while (q->next != NULL)
    {
       pr = q; q = q->next; free(pr);
    }
    free(q);
}

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    struct Node *head = NULL, *p = NULL;
    for (int i = 0; i < 10; i++)
    {
      struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
      newp->val = arr[i];  newp->next = head; head = newp;
    }
    clear(head);
    return 0;
}
