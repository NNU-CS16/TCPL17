#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* construct(int arr[],int size)
{
     struct Node *head=NULL,*newp=NULL;
     int i=0;
     for(i=0;i<size;i++)
     {
       newp=(struct Node *)malloc(sizeof(struct Node));
       newp->val=arr[i];
       newp->next=head;
       head=newp;
     }
     return head;
}
int main()
{
int size,*arr;
  printf("please input the size of arr:\n");
    scanf("%d",&size);
    arr=(int *)malloc(size * sizeof(int));
    printf("please input arr:\n");
    int i=0;
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    struct Node *head = construct(arr,size);
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
       printf("%d\n",p->val);
       p=p->next;
    }
    free(arr);
    return 0;
}

