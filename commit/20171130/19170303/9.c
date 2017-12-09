#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *IBH(struct Node *head,struct Node *newp)
{
    newp -> next = head;
    head = newp;
    return head;
}

struct Node *construct (int arr[],int size)
{
    struct Node *head,*newp;
    int i;
    head=NULL;
    for (i=size-1; i>=0; i--)
    {
     newp = (struct Node *) malloc (sizeof (struct Node));
     newp -> val =arr[i];
     head=IBH(head,newp);
    }
    return head;
}

struct Node *deletehead (struct Node *head)
{
    struct Node *p;
    if(head == NULL) return NULL;
    p=head;
    head=head->next;
    free(p);
    return head;
}
void clear(struct Node *head)
{
 while (head != NULL)
     head=deletehead(head);
}
int main()
{
    int n,a[50];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    struct Node* head=construct(a,n);
    clear(head);
    return 0;
}
