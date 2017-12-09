 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
  int val;
  struct Node *next;
 };

 struct Node* insert(struct Node* head, int val)
 {
  struct Node *a;
  a = (struct Node *)malloc(sizeof(struct Node));
  a->val = val;
  a->next = head;
  return a;
 }

 int main()
 {
  struct Node *head, *p;
  int val;
  head = (struct Node *)malloc(sizeof(struct Node));
  scanf("%d", &head->val);
  head->next = NULL;
  scanf("%d",&val);
  p = insert(head,val);
  while(p->next != NULL)
  {
	printf("%d", p->val);
	p = p->next;
  }
  printf("%d\n", head->val);
  return 0;
 }
