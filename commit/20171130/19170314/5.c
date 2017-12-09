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
struct Node *delete(struct Node *head,struct Node *target)
{
    struct Node *prev=head;
    while(target!=NULL)
    {
        if(prev->next==target || prev==target)
            break;
        prev=prev->next;
    }
    if(head==NULL) return NULL;
    target==head ? (head=head->next) : (prev->next=target->next);
    free(target);
    return head;
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
struct Node *search(struct Node *head,int val)
{
    struct Node *p=head;
    while(p!=NULL)
    {
        if(p->val==val)
            break;
        p=p->next;
    }
    return p;
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);
    int val;
    scanf("%d",&val);
    struct Node *head=construct(arr,size);
    struct Node *p=search(head,val);
    head=delete(head,p);
    Output(head);
    return 0;
}
