#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node *IBH(struct Node *head,struct Node *newp);
struct Node *construct(int arr[],int size);
void output(struct Node *head);
struct Node *delete(struct Node *head,int val);

int main()
{
    int n;
    int a[100];
    printf("输入数组长度:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int val;
    scanf("%d",&val);
    struct Node *head = construct(a,n);
    head = delete(head,val);
    output(head);
    return 0;
}

struct Node *IBH(struct Node *head,struct Node *newp)
{
    newp -> next = head;
    head = newp;
    return head;
}

struct Node *construct (int arr[],int size)
{
    struct Node *head,*newp;
    int i;
    head=NULL;
    for (i=size-1; i>=0; i--)
    {
     newp = (struct Node *) malloc (sizeof (struct Node));
     newp -> val =arr[i];
     head=IBH(head,newp);
    }
    return head;
}

void output(struct Node *head)
{
    struct Node *p;
    p=head;
    while (p!=NULL)
    {
    printf("%d",p->val);
    p=p->next;
    }
    printf("\n");
}
struct Node *Delete(struct Node*head,struct Node *target)
{
    if(head == target && head->next==NULL) return NULL;
    if(head == target) 
    {
        head = head->next;
        return head;
    }
    struct Node *p;
    p=head;
    while(target != NULL)
    {
        if(p->next == target) break;
        p=p->next;
    }
    if(p->next != NULL)
        p->next=target->next;
    free(target);
    return head;
}
struct Node *delete (struct Node *head,int val)
{
    struct Node *p=head;
    while (p != NULL)
    {
    if(p->val == val)
        head=Delete(head,p);
    p=p->next;
    }
    return head;
}
