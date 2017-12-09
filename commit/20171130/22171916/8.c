#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *InsertBeforeHead(struct Node *head,struct Node *newp)
{
    newp->next=head;
    head=newp;
    return head;
}
struct Node *construct(int arr[],int size)
{
    struct Node *head,*newp; int i;
    head=NULL;
    for(i=size-1;i>=0;i--)
    {
        newp=(struct Node *)malloc(sizeof(struct Node));
        newp->val=arr[i];
        head=InsertBeforeHead(head,newp);
    }
    return head;
}

struct Node *merge(struct Node *head1,struct Node *head2)
{
    int temp[1000];
    int i=0;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->val < head2->val)
        {
            temp[i++]=head1->val;
            head1=head1->next;
        }
        else
        {
            temp[i++]=head2->val;
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {
        temp[i++]=head1->val;
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        temp[i++]=head2->val;
        head2=head2->next;
    }
    return construct(temp,i);
}
void Output(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d",p->val);
        printf("%c",p->next==NULL ? '\n' : ' ');
        p=p->next;
    }
}
int main()
{
    int size1;
    scanf("%d",&size1);
    int a[size1];
    for(int i=0;i<size1;i++)
        scanf("%d",a+i);
    int size2;
    scanf("%d",&size2);
    int b[size2];
    for(int i=0;i<size2;i++)
        scanf("%d",b+i);
    struct Node *head1=construct(a,size1);
    struct Node *head2=construct(b,size2);
    struct Node *head=merge(head1,head2);
    Output(head);
    return 0;
}
