#include<stdio.h>
#include<stdlib.h>
struct Node
{
int val;
struct Node* next;
};
struct Node* reverse(struct Node* head);
struct Node* create();
struct Node* release(struct Node *head);
void output(struct Node *head);

int main()
{
struct Node *head;
head=create();
head=reverse(head);
output(head);
head=release(head);
return 0;
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

struct Node* reverse(struct Node* head)
{
int num=0,i;
struct Node *p=head;
while(p!=NULL)
{
num++;
p=p->next;
}
int arr[num];
p=head;
for(i=0;i<num;i++)
{
arr[i]=p->val;
p=p->next;
}
p=head;
for(i=num-1;i>=0;i--)
{
p->val=arr[i];
p=p->next;
}
return head;
}

struct Node* release(struct Node *head)
{
struct Node *p;
if(head==NULL)
return NULL;
while(head!=NULL)
{
p=head;
head=head->next;
free(p);
}
free(head);
return NULL;
}

void output(struct Node *head)
{
struct Node *p=head;
while(p!=NULL)
{
printf("%d\t",p->val);
p=p->next;
}
printf("\n");
}
