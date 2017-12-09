#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int val;
   struct Node *next;
};
struct Node* merge(struct Node* head1, struct Node* head2);
struct Node* create1();
struct Node* create2();
struct Node* release(struct Node *head);
void output(struct Node *head);
struct Node* insert(struct Node *newp,struct Node *head);

int main()
{
   struct Node *head1,*head2,*head3;
       head1=create1();  head2=create2();
       head3=merge(head1,head2);
       output(head3);
       release(head1); release(head2);release(head3);
   return 0;
}

struct Node* create1()
{
   struct Node *p1,*p2,*p3;
   p1=(struct Node*)malloc(sizeof(struct Node));
   p1->val=1;
   p2=(struct Node*)malloc(sizeof(struct Node));
   p2->val=4;
   p3=(struct Node*)malloc(sizeof(struct Node));
   p3->val=5;
   p1->next=p2;p2->next=p3;p3->next=NULL;
   return p1;
}
 
struct Node* create2()
{
   struct Node *p1,*p2,*p3;
   p1=(struct Node*)malloc(sizeof(struct Node));
   p1->val=2;
   p2=(struct Node*)malloc(sizeof(struct Node));
   p2->val=3;
   p3=(struct Node*)malloc(sizeof(struct Node));
   p3->val=6;
   p1->next=p2;p2->next=p3;p3->next=NULL;
   return p1;
}
 
struct Node* merge(struct Node* head1, struct Node* head2)
{
   struct Node *p1=head1,*p2=head2,*head3=NULL,*newp;
   int num1=0,num2=0,i;
   while(p1!=NULL)
   {
      num1++;
      p1=p1->next;
   } 
   while(p2!=NULL)
   {
      num2++;
      p2=p2->next;
   }
   int arr[num1+num2];
   p1=head1;p2=head2;
   for(i=0;i<num1+num2;i++)
   {
   if(p1!=NULL&&(p2==NULL||p1->val<p2->val))
     {arr[i]=p1->val;p1=p1->next;}
   else
     {arr[i]=p2->val;p2=p2->next;}
   }
   for(i=num1+num2-1;i>=0;i--)
   {
   newp=(struct Node*)malloc(sizeof(struct Node));
   newp->val=arr[i];
   head3=insert(newp,head3);
   }
    return head3;
}

struct Node* insert(struct Node *newp,struct Node *head)
{
   newp->next=head; head=newp; return head;
}

struct Node *release(struct Node* head)
{
   struct Node *p;
   if(head==NULL) return NULL;
   while(head!=NULL)
   {
     p=head; head=head->next; free(p);
   }
   free(head); return NULL;
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

