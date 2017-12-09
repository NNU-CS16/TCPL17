#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int val;
        struct Node *next;
};

struct Node *insert(struct Node *head,int val);
struct Node *creat();
struct Node *insertBH(struct Node *head,struct Node *newp);
void output(struct Node *head);

int main()
{
        int val;
        scanf("%d",&val);
        struct Node *head=creat();
        head=insert(head,val);
        output(head);
        return 0;
}

struct Node *creat()
{
        int arr[10]={3,12,23,35,43,65,77,89,99,101};
        int i;
        struct Node *head,*newp;
        for(i=9;i>=0;i--)
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


struct Node *insert(struct Node *head,int val)
{
        struct Node *newp;
        newp=(struct Node *)malloc(sizeof(struct Node));
        newp->val=val;
        struct Node *prev,*p;
        prev=NULL;p=head;
        while(p!=NULL)
        {
                if(p->val>newp->val)
                        break;
                prev=p;p=p->next;
        }
        newp->next=p;
        if(p==head)
                head=newp;
        else
                prev->next=newp;
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
