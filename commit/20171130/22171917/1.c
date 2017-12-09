#include <stdio.h>
#include <stdlib.h>
struct Node* construct(int arr[],int size);
struct Node
{
   int va1;
   struct Node* next;
};
struct Node* construct(int arr[],int size);
void Output(struct Node *head);

int main()
{
   int i,size,arr[10];
   scanf("%d",&size);
   for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
   struct Node *head=construct(arr,size);
   Output(head);
   return 0;
}

struct Node* construct(int arr[],int size)
{
   struct Node *head,*newp;
   int j;
   head=NULL;
   for(j=size-1;j>=0;j--)
   {
     newp=(struct Node *)malloc(sizeof(struct Node));
     newp-va1=arr[j];
     head=InsertBeforeHead(newp,head);
   }
   return head;
}

struct Node *InsertBeforeHead(struct Node *newp,struct Node *head)
{
  newp->next=head;
  head = newp;
  return head;
}

void Output(struct Node *head)
{
   struct Node *p;
   p=head;
   while(p!=NULL)
   {
     printf("%X\t%d\t%X\n",p,p->va1,p->next);
     p=p->next;
   }
} 
  
