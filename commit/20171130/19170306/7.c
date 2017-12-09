#include<stdio.h>
#include<stdlib.h>
struct node 	{
		int val;
		struct node* next;
		};
struct node* construct(int[],int);
struct node* reverse(struct node*,struct node*);
int num;
int main()
{
static struct node* head;
int i,size;
scanf("%d",&size);
int arr[size];
for (i=0;i<size;i++)
	scanf("%d",arr+i);
num=size-1;
head=construct(arr,size-1);
head=reverse(NULL,head);
while (head!=NULL)
	{
	printf("%d ",head->val);
	head=head->next;
	}
return 0;
}

struct node* construct(int arr[],int size)
{
if (size==-1) return NULL;
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->val=arr[num-size];
temp->next=construct(arr,size-1);
return temp;
}

struct node* reverse(struct node* before,struct node* after)
{
struct node* new;
if (after->next!=NULL)
	new=reverse(after,after->next);
if (after->next==NULL)
new=after;
after->next=before;
return new;
}
