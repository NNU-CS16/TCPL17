#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* insert(struct Node* head, int val)
{
    struct Node *newp = (struct Node*)malloc(sizeof(struct Node));
    newp -> val = val;
    struct Node *prev, *p;
    prev = NULL;
    p = head;
    while (p != NULL)
    {
        if (p -> val > val)
            break;
        prev = p;
        p = p->next;
    }
    newp -> next = p;
    p == head ? head = newp : (prev -> next = newp);
    return head;
}

struct Node *Create()
{
    struct Node *p1, *p2, *p3;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p1 -> val = 101;
    p2=(struct Node *)malloc(sizeof(struct Node));
    p2 -> val = 102;
    p3=(struct Node *)malloc(sizeof(struct Node));
    p3 -> val = 104;
    
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}

void Output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p!=NULL)
    {
        printf("%d", p->val);
        printf("%c", p->next == NULL ?"\n" : ' ');
        p = p -> next;
    }
}

int main ()
{
    int val;
    scanf("%d",&val);
    struct Node *head = Create();
    head = insert(head, val);
    Output(head);
    return 0;
}
