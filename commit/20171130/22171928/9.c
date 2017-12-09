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
struct Node *DeleteHead(struct Node *head)
{
    struct Node *p;
    if(head==NULL) return NULL;
    p=head->next;
    free(head);
    return p;
}
void Output(struct Node *head)
{
    struct Node *p;
    p=head;
    if(p==NULL)
        printf("empty!\n");
    while(p!=NULL)
    {
        printf("%d",p->val);
        printf("%c",p->next==NULL ? '\n' : ' ');
        p=p->next;
    }
}
void clear(struct Node *head)
{
    while(head!=NULL)
        head=DeleteHead(head);
    printf("after:");
    Output(head);
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);
    struct Node *head=construct(arr,size);
    printf("before:");
    Output(head);
    clear(head);
    return 0;
}
