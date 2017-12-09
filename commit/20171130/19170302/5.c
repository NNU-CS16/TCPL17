#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int val;
        struct Node *next;
};

struct Node *delete(struct Node *head,struct Node *target);
struct Node *creat(int arr[],int size);
struct Node *insertBH(struct Node *head,struct Node *newp);
void output(struct Node *head);

int main()
{
        int arr[50];
        int size,i;
        scanf("%d",&size);
        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        struct Node *head=creat(arr,size);
        struct Node *target;
        int val;
        scanf("%d",&val);
        target->val=val;
        head=delete(head,target);
        output(head);
        return 0;
}

struct Node *delete(struct Node *head,struct Node *target)
{
        struct Node *prev,*p;
        prev=NULL;p=head;
        while(p!=NULL)
        {
                if(p->val==target->val)
                        break;
                prev=p;p=p->next;
        }
        if(p==NULL)
                return head;
        if(p==head)
                head=head->next;
        else
                prev->next=p->next;
        return head;
}

struct Node *creat(int arr[],int size)
{
        struct Node *head,*newp;
        int i;
        head=NULL;
        for(i=size-1;i>=0;i--)
        {
                newp=(struct Node *)malloc(sizeof(struct Node));
                newp->val=arr[i];
                head=insertBH(head,newp);
        }
        return head;
        
}

struct Node *insertBH(struct Node *head,struct Node *newp)
{
        newp->next=head;
        head=newp;
        return head;
}

void output(struct Node *head)
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


