#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size);
struct Node* InsertBeforeHead(struct Node *newp, struct Node *head);
void Output(struct Node *head);

struct Node* construct(int arr[], int size)
{
    struct Node *head,*newp;
    int i;
    head = NULL;
    for (i=size-1; i>=0; i--)
    {
        newp = (struct Node *)malloc(sizeof(struct Node));
        newp -> val = arr[i];
        head = InsertBeforeHead(newp, head);
    }
    return head;
}

struct Node* InsertBeforeHead(struct Node *newp, struct Node *head)
{
    newp -> next = head;
    head = newp;
    return head;
}

void Output(struct Node *head)
{
    struct Node *p;
    p=head;
    while (p!=NULL)
    {
        printf("%X\t%d\t%X\n",p,p->val,p->next);
        p = p->next;
    }
}

int main ()
{
    int arr[4]={2,4,7,9},size=4;
    struct Node* head;
    head = construct(arr,size);
    Output(head);
    return 0;
}


    
