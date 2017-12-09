#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* insert(struct Node* head, int val);

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
    int n;
    printf("请输入插入的值：");
    scanf("%d", &n);
    insert(head, n);
    getchar();
    for(shift = head -> next; shift != NULL; shift = shift -> next)
       printf("%d ", shift -> val);
    printf("\n");
    return 0;
}

struct Node* insert(struct Node* head, int val)
{
    struct Node* a = (struct Node*)malloc(sizeof(struct Node));
    struct Node* b = (struct Node*)malloc(sizeof(struct Node));
    struct Node* c = (struct Node*)malloc(sizeof(struct Node));
    struct Node* d = (struct Node*)malloc(sizeof(struct Node));
    struct Node* e = (struct Node*)malloc(sizeof(struct Node));
    head -> next = a;
    a -> val = 1;
    a -> next = b;
    b -> val = 2;
    b -> next = c;
    c -> val = 3;
    c -> next = d;
    d -> val = 4;
    d -> next = e;
    e -> val = 5;
    e -> next = NULL;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> val = val;
    if(val < a -> val) 
    {
      head -> next = temp; 
      temp -> next = a;
    }
    if(val > e -> val) 
    {
      e -> next = temp; 
      temp -> next = NULL;
    }
    struct Node* i = (struct Node*)malloc(sizeof(struct Node));
    struct Node* j = (struct Node*)malloc(sizeof(struct Node));
    int num = 0;
    if(val >= a -> val && val <= e -> val)
    {
      num++;
      for(i = a; i != e; i = i -> next)
      {
         j = i -> next;
	 if(i -> val <= val && val <= j -> val)
	   break;
      }
      i -> next = temp;
      temp -> next = j;
   }
   return head;
}
