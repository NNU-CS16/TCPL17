#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size);
struct Node* merge(struct Node* head1, struct Node* head2);

int main()
{
    int a[3] = {101, 102, 104};
    int b[3] = {103, 105, 106};
    struct Node* p, *q;
    p = construct(a, 3);
    q = construct(b, 3);
    printf("%p\n", merge(p, q));
    return 0;
}

struct Node* construct(int arr[], int size)
{
    struct Node* head, *p, *q;
    int i;
    head = q =  (struct Node*)malloc(sizeof(struct Node));
    for (i = 0; i < size; i++)
    {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->val = arr[i];
        q->next = p;
        q = p;
    }
    q->next = NULL;
    return head;
}

struct Node* merge(struct Node* head1, struct Node* head2)  
{  
    struct Node *p, *q, *r, *pp;  
    p = head1->next;  
    q = head2->next;  
    pp = head1;  
    pp->next = NULL;  
    while(p != NULL && q != NULL) 
    {  
        if (p->val < q->val) 
	{  
            r = p;  
            p = p->next;  
        } 
	else 
	{  
            r = q;  
            q = q->next;  
        }  
        r->next = pp->next;  
        pp->next = r;  
        pp = r;  
    }  
    if (p) pp->next = p;  
    if (q) pp->next = q;  
    head2->next = NULL;  
    return pp;
}  

