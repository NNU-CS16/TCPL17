 #include <stdio.h>
 #include <stdlib.h>
  
 struct Node
 {
	int val;
	struct Node* next;
 };

 struct Node* construct(int arr[], int size)
 {
  int n = 1;
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->val = arr[0];
  head->next = NULL;
  struct Node *alter = head;
  while(n < size)
  {
	alter->next = (struct Node *)malloc(sizeof(struct Node));
	alter = alter->next;
	alter->val = arr[n];
	alter->next = NULL;
	++n;
  }
  return head;
 }

 int main()
 {
  int i, arr[10], size;
  printf("请输入数组：");
  for (i = 0; i <10; ++i)
     scanf("%d", &arr[i]);
  printf("请输入数组大小：");
  scanf("%d", &size);
  struct Node *p;
  p = construct(arr,5);
  while(p->next != NULL)
  {
	printf("%d", p->val);
	p = p->next;
  }
  printf("%d\n", p->val);
  return 0;
 }
