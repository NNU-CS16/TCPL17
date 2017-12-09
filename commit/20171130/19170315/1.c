  #include <stdio.h>
  #include <stdlib.h>
  struct Node
  {
      int val;
      struct Node* next;
  };
  struct Node* construct(int arr[], int size);
  struct Node *InsertBeforeHead(struct Node *head, struct Node *newp);
  void Output(struct Node *head);

  int main()
  {
      int arr[8] = {1,3,5,4,7,6,8,2};
      int b[8];
      int i, j;
      for (i = 7,j = 0; i >= 0, j < 8; i--, j++)
      {
          b[i] = arr[j];
      }
      int size = sizeof(b);
      struct Node *head = construct(b, size);
      Output(head);
      free(head);
      return 0;
  }

  struct Node *InsertBeforeHead(struct Node *head, struct Node *newp)
  {
      newp->next = head;
      head = newp;
      return head;
  }

  struct Node* construct(int arr[], int size)
  {
      int i;
      int n = size / sizeof(int);
      struct Node *head, *newp;
      head = NULL;
      for (i = 0; i < n; i++)
      {
          newp = (struct Node *)malloc(sizeof(struct Node));
          newp->val = arr[i];
          head = InsertBeforeHead(head, newp);
      }
      return head;
  }

  void Output(struct Node *head)
  {
      struct Node *pstu;
      pstu = head;
      while (pstu != NULL)
      {
          printf("%d ",pstu->val);
          pstu = pstu->next;
      }
      printf("\n");
  }
