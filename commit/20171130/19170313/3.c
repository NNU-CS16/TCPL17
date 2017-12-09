#include<stdio.h>
#include<stdlib.h>
struct Node
{
int val;
struct Node* next;
};
struct Node* insert(struct Node* head, int n);
struct Node *create();
struct Node *release(struct Node *head);
void output(struct Node *head);
int main()
{
int n;
scanf("%d",&n);
struct Node *p=(struct Node *)malloc(sizeof(struct Node));
p=create();
p=insert(p,n);
output(p);
p=release(p);
return 0;
}
struct Node* insert(struct Node* head,int n)
{
struct Node *q=(struct Node*)malloc(sizeof(struct Node));
struct Node *newp=(struct Node*)malloc(sizeof(struct Node));
if(head==NULL)
return NULL;
q=head;
while(q->next!=NULL)
q=q->next;
newp->val=n;
q->next=newp;
newp->next=NULL;
return head;
