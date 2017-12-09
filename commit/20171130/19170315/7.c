  #include <stdio.h>
  #include <stdlib.h>
  struct Node
  {
      int val;
      struct Node* next;
  };
  struct Node* InsertBeforeHead(struct Node* head, struct Node* newp);
  struct Node* Creat2(int ds[], int n);
  struct Node* reverse(struct Node* head);
  struct Node* reverse_it(struct Node* head);
  void Output(struct Node* head);

  int main()
  {
      int ds[4]={101,103,105,107};
      struct Node* head = Creat2(ds, 4);
      Output(head);
      head = reverse(head);
      Output(head);
      head = reverse_it(head);
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
 
  struct Node* reverse(struct Node* head)
  {
      if (head == NULL || head->next == NULL)
          return head;
      struct Node *p = head->next;
      struct Node *newhead = reverse(p);
      p->next = head;
      head->next = NULL;
      return newhead;
  }  

  struct Node* reverse_it(struct Node* head)
  {
      struct Node* newhead = NULL;
      struct Node* prev = NULL;
      struct Node* p = head;
      while (p != NULL)
      {
          struct Node* temp = p->next;
          if (temp == NULL)
          {
              newhead = p;
          }
          p->next = prev;
          prev = p;
          p = temp;
      }
      return newhead;
  } 

   void Output(struct Node* head)
  {
      struct Node* p;
      p = head;
      while (p != NULL)
      {
          printf("%d\t",p->val);
          p = p->next;
      }
      printf("\n");
  }
