#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* create1();
void output(struct Node *head);
struct Node* insert(struct Node* head, int val)
{
    struct Node *shift;
    shift -> val = val;
    shift -> next = head;
    head = shift;
    return head;
}
struct Node* create1()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> val = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> val = 2;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> val = 3;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    return p1;
}
void output(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf ("%d", p -> val);
        p = p ->next;
    }
}
int main( )
{
    int val;
    printf ("请输入val：");
    scanf ("%d", &val);
    struct Node *head = create1();
    struct Node *shift = (struct Node *)malloc(sizeof(struct Node));
    shift -> val = val;
    head = insert(head,val);
    output(head);
    return 0;
}
