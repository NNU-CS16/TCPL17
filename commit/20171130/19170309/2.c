#include<stdio.h>
#include<stdlib.h>
struct Node
{
int val;
struct Node* next;
};
struct Node* insert(struct Node* head, int n);
struct Node *create();
struct Node* release(struct Node *head);
int main()
{
int n;
scanf("%d",&n);
struct Node *head=create(),*p;
p=insert(head,n);
printf("%d\n",p->val);
p=release(p);
return 0;
}

struct Node* insert(struct Node* head,int n)
{
struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
newp->val=n;
newp->next=head;
head=newp;
return head;
}

struct Node *create()
{
struct Node *p1,*p2,*p3;
p1=(struct Node *)malloc(sizeof(struct Node));p1->val=2;
p2=(struct Node *)malloc(sizeof(struct Node));p2->val=3;
p3=(struct Node *)malloc(sizeof(struct Node));p3->val=4;
p1->next=p2;p2->next=p3;p3->next=NULL;
return p3;
}

struct Node* release(struct Node *head)
{
struct Node *q;
while(head!=NULL)
{
q=head;
head=head->next;
free(q);
}
return NULL;
}
