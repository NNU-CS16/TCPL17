#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node* reverse(struct Node* head);
struct Node
{
    int val;
    struct Node* next;
};
int main()
{
     struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));p1->val=103;
    p2 = (struct Node *)malloc(sizeof(struct Node));p2->val=105;
    p3 = (struct Node *)malloc(sizeof(struct Node));p3->val=107;
    p1 -> next = p2; p2 -> next = p3; p3 -> next =NULL;

    struct Node *head=p1;
    struct Node *j;
    j = reverse(head);
    while(j != NULL)
    {
        printf("%d\n",j->val);
        j = j -> next;
    }
    return 0;
}
struct Node* reverse(struct Node* head)
{
    int b,i=0,j;
    struct Node *p,*q;
    q = head;
    while (q != NULL)
    {
        i++;
	q = q -> next;        
    }
    for (i = i-1 ; i>0; i--)
    {   
         p = head;
         for(j=i; j > 0; j--)
         {
             if (p->next != NULL)
             {
		b = p -> val;
        	p -> val = p -> next -> val;
        	p -> next -> val = b;
        	p = p -> next;
             }
         }  
    }   

    return head;
}
    
