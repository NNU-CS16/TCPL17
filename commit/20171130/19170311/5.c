#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
    struct Node* delete(struct Node* head, struct Node* target);
    void output(struct Node* head);

int main()
{
    struct Node *head, *p2, *p3;
    head = (struct Node*)malloc(sizeof(struct Node));
        head->val = 101;
    p2 = (struct Node*)malloc(sizeof(struct Node));
        p2->val = 102;
    p3 = (struct Node*)malloc(sizeof(struct Node));
        p3->val = 103;
    head->next = p2;
    p2->next = p3;
    p3->next = NULL;

    head = delete(head, p2);
    output(head);
    return 0;
}

struct Node* delete(struct Node* head, struct Node* target)
{
    struct Node *p, *prev;
    prev = NULL;
    p = head;

    while (p != NULL)
    {
          if (p == target) break;
          prev = p;
          p = p->next;
    }
    if (p == NULL)
       printf("NULL");
    if (p == head)
       head = head -> next;
    else
       prev -> next = p -> next;
    free (p);

    return head;
}

void output(struct Node* head)
{
     struct Node *p = head;
     while (p != NULL)
     {
        printf("%d\n",p->val);
        p = p->next;
     }
}

