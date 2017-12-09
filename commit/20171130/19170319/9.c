#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
void clear(struct Node* head)
{
    while (head != NULL)
    {
        struct Node* p;
        p = head;
        head = head->next;
        free(p);
    }
}
struct Node* creat()
{
    struct Node *p1,*p2,*p3;
    p1 = (struct Node*)malloc(sizeof(struct Node));p1->val = 1;
    p2 = (struct Node*)malloc(sizeof(struct Node));p2->val = 2;
    p3 = (struct Node*)malloc(sizeof(struct Node));p3->val = 3;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
    return p1;
}
int main()
{
    struct Node *head = creat();
    clear(head);
    return 0;
}
