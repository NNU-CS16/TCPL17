#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node* delete(struct Node* head, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    struct Node* prev = head;
    struct Node* cur = head -> next;
    while (cur != NULL)
    {
        if (val == cur -> val)
        {
            prev -> next = cur -> next;
            cur = cur -> next;
        }
        else
        {
            prev = cur;
            cur = cur -> next;
        }
    }
    if (val == head -> val)
    {
        head = head -> next;
    }
    return head;
}

void output(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d\t", p -> val);
        p = p -> next;
    }
}

struct Node *create()
{
    struct Node *p1,*p2,*p3;
    p1 = (struct Node*)malloc(sizeof(struct Node));
    p1 -> val = 7;
    p2 = (struct Node*)malloc(sizeof(struct Node));
    p2 -> val = 9;
    p3 = (struct Node*)malloc(sizeof(struct Node));
    p3 -> val = 6;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Node *head;
    head = create();
    head = delete(head,n);
    output(head);
    printf("\n");
    return 0;
}
