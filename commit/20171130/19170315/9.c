  #include <stdio.h>
  #include <stdlib.h>
  struct Node
  {
      int val;
      struct Node* next;
  };
  struct Node* Creat();
  struct Node* delete(struct Node* head);

  int main()
  {
      struct Node* head = Creat();
      head = delete(head);
      int flag = 1;
      if (head == NULL)
          flag = 0;
      printf("%d\n",flag);
      return 0;
  }

  struct Node* Creat()
  {
      struct Node *p1, *p2, *p3;
      p1 = (struct Node*)malloc(sizeof(struct Node));
      p1->val = 101;
      p2 = (struct Node*)malloc(sizeof(struct Node));
      p2->val = 103;
      p3 = (struct Node*)malloc(sizeof(struct Node));
      p3->val = 105;
      p1->next = p2;
      p2->next = p3;
      p3->next = NULL;
      return p1;
  }

  struct Node* delete(struct Node* head)
  {
      while (head != NULL)
      {
          struct Node *p;
          p = head;
          head = p->next;
          free(p);
      }
      return NULL;
  }
  
          
