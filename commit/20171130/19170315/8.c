  #include <stdio.h>
  #include <stdlib.h>
  struct Node
  {
      int val;
      struct Node* next;
  };
  struct Node* InsertBeforeHead(struct Node* head, struct Node* newp);
  struct Node* Creat2(int ds[], int n);
  struct Node* merge(struct Node* head1, struct Node* head2);
  void Output(struct Node* head);

  int main()
  {
      int ds[4] = {102,104,106,108};
      int dy[4] = {101,103,105,107};
      struct Node* head1 = Creat2(ds, 4);
      struct Node* head2 = Creat2(dy, 4);
      struct Node* head = merge(head1,head2);
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

  struct Node* merge(struct Node* head1, struct Node* head2)
  {
      struct Node *head, *newp;
      head = NULL;
      struct Node *p1, *p2;
      p1 = head1;
      p2 = head2;
      while (p1 != NULL && p2 != NULL)
      {
          if (p1->val > p2->val)
          {
              newp = (struct Node*)malloc(sizeof(struct Node));
              newp->val = p1->val;
              head = InsertBeforeHead(head, newp);
              p1 = p1->next;
          }
          else
          {
              newp = (struct Node*)malloc(sizeof(struct Node));
              newp->val = p2->val;
              head = InsertBeforeHead(head, newp);
              p2 = p2->next;
          }
      }
      if (p1 != NULL)
      {
          newp = (struct Node*)malloc(sizeof(struct Node));
          newp->val = p1->val;
          head = InsertBeforeHead(head, newp);
          p1 = p1->next;
      }
      if (p2 != NULL)
      {
          newp = (struct Node*)malloc(sizeof(struct Node));
          newp->val = p2->val;
          head = InsertBeforeHead(head, newp);
          p2 = p2->next;
      }
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

