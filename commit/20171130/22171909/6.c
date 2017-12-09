 #include <stdio.h>
 #include <stdlib.h>
 
 struct Node
 {
  int val;
  struct Node *next;
 };

 struct Node *delete(struct Node *head, int val)
 {
  struct Node *a = head;
  if (a -> val == val)
  {
    if (a -> next != NULL) 
	a = a -> next;
    else 
    {
      free(head); 
      return NULL; 
    }
    free(head);
    head = a;
  } 
  while (a -> next != NULL)
  {
	while (a -> next != NULL && a -> next -> val != val) 
		a = a -> next;
	if (a -> next != NULL)
	{
	   struct Node *temp = a -> next;
	   a -> next = a -> next -> next;
	   free(temp);
	}
  }
  return head;
 }

 int main()
 {
  struct Node *head;
  head = (struct Node *)malloc(sizeof(struct Node));
  head -> val = 1;
  head -> next = NULL;
  head = delete(head, 1);
  printf("%p\n", head);
  return 0;
 }
