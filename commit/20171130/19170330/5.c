#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* delete(struct Node* head, struct Node* target)
{
    struct Node *prev, *p;
    prev = NULL;
    p = head;
    int data;
    data = target -> val;
    while (p != NULL)
    {
        if (p -> val == data)
            break;
        prev = p;
        p = p -> next;
    }
    if (p == NULL)
        return head;
    if (p == head)
        head = head -> next;
    else 
        prev -> next = p -> next;
    free(p);
    return head;
}

int main ()
{   
    int aim;
    scanf("%d", &aim);
    struct Node *p1, *p2, *p3, *p4, *head;
    p1=(struct Node *)malloc(sizeof(struct Node));p1 -> val = 101;
    p2=(struct Node *)malloc(sizeof(struct Node));p2 -> val = 102;
    p3=(struct Node *)malloc(sizeof(struct Node));p3 -> val = 103;
    p4=(struct Node *)malloc(sizeof(struct Node));p4 -> val = 104;

    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = p4;
    p4 -> next = NULL;
    head = p1;
    struct Node *p0,*p;
    p0 =(struct Node *)malloc(sizeof(struct Node));p0 -> val = aim;
    head = delete(head, p0);
    p = head;
    while (p != NULL)
    {
        printf("%d\t",p->val);
        p = p->next;
    }
    printf("\n");
    return 0;
}
