 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
  int val;
  struct Node *next;
 };

 struct Node* insert(struct Node* head, int val)
 {
  struct Node *a, *b, *c;
  c = (struct Node *)malloc(sizeof(struct Node));
  c->val = val;
  b = NULL;
  a = head;
  while (a != NULL)
  {
       if (a->val > c->val)
         break;
	   b = a;
	   a = a->next;
  }
  c->next = a;
  if (a == head)
      head = c;
  else
      b->next = c;
  return head;
 }

 int main()
 {
  int val;
  scanf("%d", &val);
  struct Node *head,*a,*b,*c,*d;
  b = (struct Node *)malloc(sizeof(struct Node));
  b->val = 1;
  c = (struct Node *)malloc(sizeof(struct Node));
  c->val = 2;
  d = (struct Node *)malloc(sizeof(struct Node));
  d->val = 3;
  b->next = c;
  c->next = d;
  d->next = NULL;
  head = b;
  head = insert(head, val);
  a = head;
  while (a != NULL)
  {
	printf("%d\t", a->val);
	a = a->next;
  }
  return 0;
 } 
