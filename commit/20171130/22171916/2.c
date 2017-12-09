#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int val;
 struct Node *next;
};
struct Node *Create1();
void Output(struct Node *head);

struct Node *insert(struct Node* head, int val)
{
 struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
 newp->val=val;
 newp->next=head;
 head=newp;
 return head;
}
struct Node *Create1()
{
 struct Node *p1, *p2, *p3;
 
 p1=(struct Node *)malloc(sizeof(struct Node));p1->val= 101;
 p2=(struct Node *)malloc(sizeof(struct Node));p1->val= 103;
 p3=(struct Node *)malloc(sizeof(struct Node));p1->val= 105;
 p1->next=p2;  p2->next=p3;  p3->next=NULL;
 
 return p1;


}         
void Output(struct Node *head)
{
  struct Node *p;

  p=head;
  while (p!=NULL)
   {
     printf("%X\t%d\t%X\n", p, p->val, p->next);
     p=p->next;
   }

}
int main()
{
 int val;
 scanf("%d",&val);
 struct Node *head=Create1();
 head=insert(head,val);
 Output(head);

 return 0;
}              
