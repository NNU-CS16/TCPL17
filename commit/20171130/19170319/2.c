#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int val;
    struct Node* next;
};
struct Node* insert(struct Node* head,int val)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node*));
    p->val = val;
    p->next = head;
    return p;
}
int main()
{
    struct Node* head = (struct Node* )malloc(sizeof(struct Node));
    struct Node* p = head;
    for (int i = 0;i < 5;i++)
    {
        p->next = (struct Node*)malloc(sizeof(struct Node));
        p->val = i;
        p = p->next;
        p->next = NULL;
    }
    p = insert(head,5);
    printf("%d",p->val);
    return 0;
}
