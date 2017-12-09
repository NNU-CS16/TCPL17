#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};

struct Node* merge(struct Node* head1,struct Node* head2)
{
    struct Node *p,*q,*newp,*head;
    p = head1;
    q = head2;
    newp = NULL;
 
    while ((p != NULL)&&(q != NULL))
    {
        if (p->val > q -> val)
            {
                newp = q,
                
                q = q->next;
                
            }
        else
           { 
                newp = p,
                
                p = p->next;
                
	   }
    }
    while (p != NULL)
    {
	newp  = p;
        p = p->next;
       
    }
    while (q != NULL)
    {
	newp  = q;
        q = q->next;
        
    }
    return newp;
}

int main()
{
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));p1->val=103;
    p2 = (struct Node *)malloc(sizeof(struct Node));p2->val=105;
    p3 = (struct Node *)malloc(sizeof(struct Node));p3->val=107;
    p1 -> next = p2; p2 -> next = p3; p3 -> next =NULL;
    struct Node *q1, *q2, *q3;
    q1 = (struct Node *)malloc(sizeof(struct Node));q1->val=101;
    q2 = (struct Node *)malloc(sizeof(struct Node));q2->val=104;
    q3 = (struct Node *)malloc(sizeof(struct Node));q3->val=109;
    q1 -> next = q2; q2 -> next = q3; q3 -> next =NULL;

    struct Node *head1=p1;
    struct Node *head2=q1;
    struct Node *j;
    j = merge(head1,head2);
    while(j != NULL)
    {
        printf("%d\n",  j->val);
        j = j -> next;
    }

    return 0;
}
