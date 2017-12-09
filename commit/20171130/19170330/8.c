#include <stdio.h>
#include <stdlib.h>
struct Node
{   
    int val;
    struct Node* next;
};

struct Node *Create(int n)
{
    struct Node *head, *tail, *p;
    head = (struct Node *)malloc(sizeof(struct Node));
    head -> next = NULL;
    p = head;
    while (n--)
    {
        tail = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&tail->val);
        tail->next=p->next;
        p->next=tail;
        p=tail;
    }
    return (head);
}

struct Node* merge(struct Node* head1, struct Node* head2)
{   
    struct Node *p1, *p2, *tail;
    p1 = head1 -> next;
    p2 = head2 -> next;
    tail = head1;
    free(head2);
    while (p1 && p2)
        if (p1 -> val < p2 -> val)
        {   
            tail -> next = p1;
            tail = p1;
            p1 = p1 -> next;
        }
        else 
        {
            tail -> next = p2;
            tail = p2;
            p2 = p2 -> next;
        }
        if (p1)   
            tail -> next =p1;
        else tail -> next = p2;
        return (head1);
}

int main ()
{   
    int n, m;
    struct Node *head1, *head2, *p;
    scanf("%d%d",&n,&m);
    head1 = Create(n);
    head2 = Create(m);
    p = merge(head1, head2);
    while (p -> next != NULL)
    {
        if (p -> next -> next != NULL)
            printf("%d\t",p->next->val);
        else 
            printf("%d\n",p->next->val);
        p=p->next;
    }
    return 0;
}
