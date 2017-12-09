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

struct Node *merge(struct Node *head1, struct Node *head2)
{
    int a[100];
    int i=0;
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->val < head2->val)
        {   
            a[i++]=head1->val;
            head1=head1->next;
        }
        else
        {
            a[i++]=head2->val;
            head2=head2->next;
        }
    }
    while (head1 != NULL)
    {
        a[i++]=head1->val;
        head1=head1->next;
    }
    while (head2 != NULL)
    {
        a[i++]=head2->val;
        head2=head2->next;
    }
    return construct(a,i);
}

int main()
{
    int n1,a[50];
    scanf("%d",&n1);
    for(int i=0; i<n1; i++)
        scanf("%d",&a[i]);
    int n2,b[50];
    scanf("%d",&n2);
    for(int i=0; i<n2; i++)
        scanf("%d",&b[i]);
    struct Node *head1=construct(a,n1);
    struct Node *head2=construct(b,n2);
    struct Node *newhead=merge(head1,head2);
    output(newhead);
    return 0;
}
