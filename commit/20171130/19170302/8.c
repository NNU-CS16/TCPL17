#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int val;
        struct Node *next;
}

struct Node *merge(struct Node *head1,struct Node *head2);
struct Node *creat(int arr[],int size);
strucr Node *insertBH(struct Node *head,struct Node *newp);
void output (struct Node *head);

int main()
{
        int str1[50],str2[50];
        int size1,size2,i,j;
        scanf("%d",&size1);
        for(i=0;i<size1;i++)
                scanf("%d",&str1[i]);
        scanf("%d",&size2);
        for(j=0;j<size2;j++)
                scanf("%d",&str2[j]);
        struct Node *head1=creat(str1,size1);
        struct Node *head2=creat(str2,size2);
        struct Node *head=merge(head1,head2);
        output(head);
        return 0;
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

struct Node *merge(struct Node *head1,struct Node *head2)
{
        if(head1==NULL)
                return head2;
        if(head2==NULL)
                return head1;
        struct Node *head=NULL;
        struct Node *p1=head1;
        struct Node *p2=head2;
        if(head1->val<head2->val)
        {
                head=head1;
                p1=head1->next;
        }
        else
        {
                head=head2;
                p2=head2->next;
        }
        struct Node *p=head;
        while(p1&&p2)
        {
                if(p1->val<p2->val)
                {
                        p->next=p1;
                        p1=p1->next;
                }
                else
                {
                        p->next=p2;
                        p2=p2->next;
                }
                p=p->next;
        }
        if(p1!=NULL)
        {
                p->next=p1;
        }
        else if(p2!=NULL)
        {
                p->next=p2;
        }
        return head;
}

void output (struct Node *head)
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


       



