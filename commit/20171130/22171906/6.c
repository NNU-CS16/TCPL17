#include <stdio.h>
#include <stdlib.h>
struct Node
{   
    int val;
    struct Node* next;
};

struct Node* delete(struct Node *head, int val)
{
    struct Node *prev, *p;
    p = head;
    prev = NULL;
    while (p != NULL)
    {   
        if (p -> val != val)
        {
            prev = p;
            p = p ->next;
        }
        else if (p -> val == val)
        {   
            if (p == head)
            {   
                head = head -> next;
                free(p);
                 p = head;
            }
            else if (p != head)
            {
                prev -> next = p -> next;
                free(p);
                p = prev -> next;
            }
        }
    }
    return head;
}

int main ()
{
    int aim;
    scanf("%d",&aim);
    struct Node *head, *p1, *p2, *p3, *p;
    p1=(struct Node *)malloc(sizeof(struct Node));p1->val=101;
    p2=(struct Node *)malloc(sizeof(struct Node));p2->val=102;
    p3=(struct Node *)malloc(sizeof(struct Node));p3->val=102;
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
    head = p1;
    head = delete(head, aim);
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->val);
        p = p->next;
    }
    printf("\n");
    return 0;
}
