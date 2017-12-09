#include <stdio.h>
#include <stdlib,h>
struct Node
{
  int va1;
  struct Node* next;
};
struct Node *Create1(void);
struct Node* insert(struct Node* head,int va1);

struct Node *Create1(void)
{
   struct Node *p1,*p2,*p3;
   p1=(struct Node*)malloc(sizeof(struct Node));p1->val=10;
   p2=(struct Node*)malloc(sizeof(struct Node));p2->val=20;
   p3=(struct Node*)malloc(sizeof(struct Node));p3->val=30;
   p1->next=p2; p2->next=p3; p3->next=NULL;
   return p1;
}

struct Node* insert(struct Node* head,int va1)
{
  struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
  struct Node *a = NULL,*prev = NULL;
  newp->va1=va1;
  newp->next=NULL;
  a=head;
  while (a!=NULL)
  {
    prev=a;
    a=a->next;
  }
  prev->next=newp;
  return head;
}

int main(void)
{
    struct Node *head = Creat();
    int val = 107;
    head = insert(head, val);
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    return 0;
}
