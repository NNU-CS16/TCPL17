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
}

struct Node* create()
{
struct Node *p1,*p2,*p3;
p1=(struct Node*)malloc(sizeof(struct Node));p1->val=1;
p2=(struct Node*)malloc(sizeof(struct Node));p2->val=2;
p3=(struct Node*)malloc(sizeof(struct Node));p3->val=3;
p1->next=p2;p2->next=p3;p3->next=NULL;
return p1;
}

struct Node* release(struct Node *head)
{
struct Node *q;
if(head==NULL)
return NULL;
while(head!=NULL)
{
q=head;
head=head->next;
free(q);
}
free(head);
return NULL;
}

void output(struct Node *head)
{
struct Node *q;
q=head;
while(q!=NULL)
{
printf("%d\n",q->val);
q=q->next;
}
}
