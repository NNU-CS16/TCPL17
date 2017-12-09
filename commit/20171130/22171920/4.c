#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};

struct Node* insert(struct Node* head, int val)
{
    struct Node *newp, *prev,*p;
    prev = NULL;
    p = head;
    newp = (struct Node *)malloc(sizeof(struct Node));
    newp -> val = val;
    while(p != NULL)
    {  
        if (p -> val > newp -> val)
            break;
 	    prev = p; 
            p = p -> next;
    }
    newp -> next = p;
    if (p == head)
        head = newp;
    else
	prev -> next = newp;
    return head;
}

int main()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));p1->val=103;
    p2 = (struct Node *)malloc(sizeof(struct Node));p2->val=105;
    p3 = (struct Node *)malloc(sizeof(struct Node));p3->val=107;
    p1 -> next = p2; p2 -> next = p3; p3 -> next =NULL;
 
    struct Node *head=p1;
    int val;
    scanf("%d", &val);
    struct Node *j;
    j = insert(head ,val);
    while(j != NULL)
    {
        printf("%d\n",  j->val);
        j = j -> next;
    }
    return 0;
}
