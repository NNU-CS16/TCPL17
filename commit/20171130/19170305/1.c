#include<stdio.h>
#include<stdlib.h>
struct Node
{
int val;
struct Node* next;
};
struct Node* construct(int arr[], int size);
struct Node* insertbeforehead(struct Node *newp,struct Node *head);
void release(struct Node *head);
int main()
{
struct Node* head;
int size,i;
scanf("%d",&size);
int arr[size];
for(i=0;i<size;i++)
scanf("%d",arr+i);
head=construct(arr,size);
printf("%d\n"/*,head*/,head->val/*,head->next*/);
release(head);
return 0;
}

struct Node* construct(int arr[], int size)
{
struct Node *head,*newp;
int i;
head=NULL;
for(i=size-1;i>=0;i--)
{
newp=(struct Node *)malloc(sizeof(struct Node));
newp->val=arr[i];
head=insertbeforehead(newp,head);
}
return head;
}

struct Node* insertbeforehead(struct Node *newp,struct Node *head)
{
newp->next=head;
head=newp;
return head;
}

void release(struct Node *head)
{
struct Node *p=head;
struct Node *q;
if(head==NULL)
return;
while(p->next!=NULL)
{
q=p->next;
free(p);
p=q;
}
free(p);
head=NULL;
}
