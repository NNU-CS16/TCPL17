#include <stdio.h>
#include <stdlib.h>
struct Node
{
        int val;
        struct Node *next;
};
struct Node *construct(int arr[],int size);
struct Node *InsertBH(struct Node *head,struct Node *newp);
void Output(struct Node *head);

int main()
{
        int arr[50],i,size;
        scanf("%d",&size);
        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        struct Node *head=construct(arr,size);
        Output(head);
        return 0;
}

struct Node *construct(int arr[],int size)
{
        struct Node *head,*newp;
        int i;
        head=NULL;
        for(i=size-1;i>=0;i--)
        {
                newp=(struct Node *)malloc(sizeof(struct Node));
                newp->val=arr[i];
                head=InsertBH(head,newp);
        }
        return head;
}

struct Node *InsertBH(struct Node *head,struct Node *newp)
{
        newp->next=head;
        head=newp;
        return head;
}
 
void Output(struct Node *head)
{
        struct Node *p;
        p=head;
        while(p!=NULL)
        {
                printf("%d ",p->val);
                p=p->next;
        }
        printf("\n");
}


