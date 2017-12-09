#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int val;
   struct Node *next;
};
   struct Node* Creat();
   struct Node* delete(struct Node* head, int val);
   struct Node* Delete(struct Node* head, struct Node* target);
   void output(struct Node* head);

int main()
{
   struct Node* head = Creat();
   int val;
   scanf("%d", &val);
   head = delete(head, val);
   output(head);
   return 0;
}

struct Node* Creat()
{
   struct Node *p1, *p2, *p3;
   p1 = (struct Node*)malloc(sizeof(struct Node));
         p1->val = 102;
   p2 = (struct Node*)malloc(sizeof(struct Node));
         p2->val = 102;
   p3 = (struct Node*)malloc(sizeof(struct Node));
         p3->val = 103;
   p1->next = p2;
   p2->next = p3;
   p3->next = NULL;
   return p1;
}

struct Node* delete(struct Node* head, int val)
{
   struct Node *n;
   n = head;
   while (n != NULL)
   {
          if (n -> val == val)
              head = Delete(head, n);
          n = n -> next;
   }
   return head;
}

struct Node* Delete(struct Node* head, struct Node* target)
{
   struct Node *p, *prev;
   prev = NULL;
   p = head;

   while (p != NULL)
   {
          if (p = target) break;
          prev = p;
          p = p->next;
   }
   if (p == NULL)
       printf("NULL");
   if (p == head)
       head = head -> next;
   else
       prev -> next = p -> next;
   free (p);

   return head;
}

void output(struct Node* head)
{
    struct Node *p = head;
    while (p != NULL)
    {
           printf("%d\n",p->val);
           p = p->next;
     }
}

