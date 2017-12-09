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

void output(struct Node *head)
{
    struct Node *p;
    p=head;
    while (p!=NULL)
    {
    printf("%d",p->val);
    p=p->next;
    }
    printf("\n");
}
struct Node *reverse(struct Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    struct Node *p = head->next;
    struct Node *pa = reverse(p);
    p->next = head;
    head->next = NULL;
    return pa;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    struct Node *head = construct(a,n);
    head = reverse(head);
    output(head);
    return 0;
}

