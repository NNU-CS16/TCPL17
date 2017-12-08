#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node* merge(struct Node* head1, struct Node* head2)
{
    if (head1 == NULL)  
        return head2;  
    if (head2 == NULL)  
        return head1;  
    struct Node *head = NULL;  
    if (head1 -> val < head2 -> val)  
    {  
        head = head1;  
        head -> next = merge(head1 -> next, head2);  
    }  
    else  
    {  
        head = head2;  
        head -> next = merge(head1, head2 -> next);  
    }  
    return head;  
}  

void Output(struct Node *head)
{
    struct Node *p = head;

    while (p != NULL)
    {
         printf("%d ", p -> val);
         p = p -> next;
    }
}

struct Node * reverse(struct Node *head)
{
    struct Node *p = head;
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p -> next;
    }

    int *arr = (int *)malloc(count * sizeof(int));
    p = head;
    for (int i = 0;i < count;i++)
    {
        arr[i] = p -> val;
        p = p -> next;
    }
    p = NULL;
    for (int i = 0;i < count;i++)
    {
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp -> val = arr[i];
        newp -> next = p;
        p = newp;
    }
    head = p;
    return head;
}

int main(void)
{
    int a[5] = {1, 3, 5, 6, 8};
    int b[4] = {3, 6, 7, 9};
    struct Node *head1 = NULL, *head2 = NULL, *p, *newp;
    int i;
    for (i = 0; i < 5; i++)
    {
        newp = (struct Node *)malloc(sizeof(struct Node));
        newp -> val = a[i];
        newp -> next = head1;
        head1 = newp;
    }
    Output(head1);
    for (i = 0;i < 4;i++)
    {
        newp = (struct Node *)malloc(sizeof(struct Node));
        newp -> val = b[i];
        newp -> next = head2;
        head2 = newp;
    }
    Output(head2);
    head1 = merge(head1, head2);
    head1 = reverse(head1);
    Output(head1);
    printf("\n");
    return 0;
}
