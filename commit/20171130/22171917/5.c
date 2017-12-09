#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* delete(struct Node* head, struct Node* target);
struct Node* create();
void Output(struct Node *head);

int main()
{
	struct Node *head,*target;
	scanf("%d",&(target->val));
	head=create();
	head=delete(head,target);
	output(head);
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

struct Node* delete(struct Node* head, struct Node* target)
  {
      struct Node *prev, *p;
      prev = NULL;
      p = head;
      while (p != NULL)
      {
          if (p->val == target->val)  break;
          prev = p;
          p = p->next;
      }
      if (p == NULL)
          return head;
      if (p == head)
          head = head->next;
      else
          prev->next = p->next;
      return head;
  }
void Output(struct Node* head)
{
      struct Node* p;
      p = head;
      while (p != NULL)
      {
          printf("%d\n",p->val);
          p = p->next;
      }
}
