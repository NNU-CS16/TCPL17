#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *insertbeforehead(struct Node *head,struct Node *newp)
{
    newp->next=head;
    head=newp;
    return head;
}
struct Node *create(int arr[],int n)
{
    struct Node *head,*newp;
    int i;
    head=NULL;
    for(i=0;i<n;i++)
    {
        newp=(struct Node *)malloc(sizeof(struct Node));
        newp->val=arr[i];
        head=insertbeforehead(head,newp);
    }
    return head;
}
struct Node* Merge(struct Node* head1,struct Node* head2)
{
    struct Node *head = ( struct Node * )malloc( sizeof( struct Node ) );
    struct Node *temp=head;
    while(1)
    {
        if(head1->val<head2->val)
        {
            temp->val=head1->val;
            if(head1->next==NULL)
                break;
            head1=head1->next;
       }
       else
       {
            temp->val=head2->val;
            if(head2->next==NULL)
                break;
            head2=head2->next;
       }
       temp->next=(struct Node *)malloc(sizeof(struct Node));
       temp=temp->next;
     }
     if ( head1 -> next == NULL ) temp -> next = head2;
	else temp -> next = head1;
     return head;
}
int main()
{
    int a[4]={1,3,5,7};
    int b[4]={2,4,6,8};
    struct Node *head1=create(a,4);
    struct Node *head2=create(b,4);
    struct Node *temp=Merge(head1,head2);
    while(temp!=NULL)
    {
        printf("%d",temp->val);
        temp=temp->next;
    }
    return 0;
}
     
