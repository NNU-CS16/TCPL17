  #include <stdio.h>
  #include <stdlib.h>
  struct Node
  {
      int val;
      struct Node* next;
  };
  struct Node* InsertBeforeHead(struct Node* head, struct Node* newp);
  struct Node* Creat2(int ds[], int n);
  struct Node* delete(struct Node* head, int val);
  void Output(struct Node* head);

  int main()
  {
      int ds[4]={101,101,101,101};
      struct Node* head = Creat2(ds, 4);
      int val;
      scanf("%d",&val);
      struct Node* target = (struct Node*)malloc(sizeof(struct Node));
      target->val = val;
      head = delete(head, val);
      Output(head);
      free(head);
      return 0;
  }

  struct Node* InsertBeforeHead(struct Node* head, struct Node* newp)
  {
      newp->next = head;
      head = newp;
      return head;
  }

  struct Node* Creat2(int ds[], int n)
  {
      struct Node *head, *newp;
      head = NULL;
      int i;
      for (i = 0; i < n; i++)
      {
          newp = (struct Node*)malloc(sizeof(struct Node));
          newp->val = ds[i];
          head = InsertBeforeHead(head, newp);
      }
      return head;
  }

  struct Node* delete(struct Node* head, int val)
  {
      struct Node *prev, *p;
      prev = NULL;
      p = head;
      do
      {
          while (p != NULL)
          {
              if (p->val == val)
                  break;
              prev = p;
              p = p->next;
          }
          if (p == NULL)
              return head;
          if (p == head)
              head = head->next;
          else
              prev->next = p->next;
          free(p);
      }while(p != NULL);
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

