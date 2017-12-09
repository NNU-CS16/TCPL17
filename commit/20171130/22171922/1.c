#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node *InsertBeforeHead(struct Node *head,struct Node *newp)
{
    newp->next = head;
    head = newp;
    return head;
}
struct Node* construct(int arr[],int size)
{
    struct Node *head,*newp;int i;
    head=NULL;
    for(i=0;i<size;i++)
    {
        newp=(struct Node *)malloc(sizeof(struct Node));
        newp->val=arr[i];
        head=InsertBeforeHead(head,newp);
    }
    return head;
}
void output(struct Node *head)
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
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    struct Node *head=construct(arr,size);
    output(head);
    return 0;
}
