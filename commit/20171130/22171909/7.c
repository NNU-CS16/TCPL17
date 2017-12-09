#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct Node
 {
  int val;
  struct Node* next;
};

 struct Node* reverse(struct Node* head)
 {
    int a, i=0, j;
    struct Node *b, *c;
    c = head;
    while (c != NULL)
    {
        ++i;
	c = c -> next;        
    }
    for (i = i - 1; i > 0; --i)
    {   
         b = head;
         for(j = i; j > 0; --j)
         {
             if (b->next != NULL)
             {
		a = b -> val;
        	b -> val = b -> next -> val;
        	b -> next -> val = a;
        	b = b -> next;
             }
         }  
    }   
  return head;
 }

 int main()
 {
    struct Node *a, *b, *c, *n;
    a = (struct Node *)malloc(sizeof(struct Node)); 
    a->val=103;
    b = (struct Node *)malloc(sizeof(struct Node));
    b->val=105;
    c = (struct Node *)malloc(sizeof(struct Node));
    c->val=107;
    a -> next = b; 
    b -> next = c;
    c -> next =NULL;
    struct Node *head = a;
    n = reverse(head);
    while(n != NULL)
    {
         printf("%d\n", n->val);
         n = n -> next;
    }
    return 0;
}
