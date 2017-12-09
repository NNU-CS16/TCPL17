#include <stdio.h>  
#include <stdlib.h>  
  
struct Node  
{  
    int val;  
    struct Node *next;  
};  
  
struct Node *gen()  
{  
    struct Node *head = NULL;  
    for (int i = 10;i > 0;i--)
    {  
        struct Node * p = (struct Node *)malloc(sizeof(struct Node));  
        p -> val = i;  
        p -> next = head;  
        head = p;  
    }     
    return head;  
}  
  
void display(struct Node *head)  
{  
    while(head != NULL)  
    {     
        printf("%d", head -> val);  
        head = head -> next;  
    }     
    printf("\n");  
}  
  
struct Node* reverse(struct Node *head)  
{  
    if (head == NULL || head -> next == NULL)  
    {     
        return head;  
    }     
    struct Node *p = head -> next;  
    struct Node *pNewHead =  reverse(p);  
    p -> next = head;  
    head -> next = NULL;  
    return pNewHead;  
}  
 
struct node * do_reverse_tail(struct Node *head, struct Node *pNewHead)  
{  
    if(head == NULL)  
    {  
        return pNewHead;  
    }  
    else  
    {  
        struct Node *next = head -> next;  
        head -> next = pNewHead;  
        return do_reverse_tail(next, head);  
    }  
}  
  
struct Node * reverse_tail(struct Node *head)  
{  
    return do_reverse_tail(head, NULL);  
}  
  
struct Node * reverse_it(struct Node *head)  
{  
    struct Node *pNewHead = NULL;  
    struct Node *pPrev = NULL;  
    struct Node *pCur = head;  
    while (pCur != NULL)  
    {  
        struct Node *pTmp = pCur -> next;  
        if (pTmp == NULL)  
        {  
            pNewHead = pCur;  
        }  
        pCur-> next = pPrev;  
        pPrev = pCur;  
        pCur = pTmp;  
    }  
  
    return pNewHead;  
}  
  
int main()  
{  
    struct Node *head = gen();  
    display(head);  
    head = reverse_it(head);  
    display(head);  
} 
