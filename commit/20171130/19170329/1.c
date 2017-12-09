  #include <stdio.h>
  #include <stdlib.h>
  struct Node* construct(int arr[], int size);
  void Output(struct Node *head);

  struct Node
  {
	int date;
	struct Node* next;
  };

  int main()
  {	
	int size;
	scanf("%d",&size);
	int arr[size], i;
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	struct Node* head = construct( arr, size );
	Output(head);
	return 0;
  }

  struct Node* construct(int arr[], int size)
  {
	struct Node *head, *newp; int i;
	head = (struct Node*)malloc(sizeof(struct Node));
	head->date = arr[0];
	head->next = NULL;
	newp = head;
	for(i = 1; i < size; i++)
	{
		newp->next = (struct Node*)malloc(sizeof(struct Node));
		newp = newp->next;
		newp->date = arr[i];
		newp->next = NULL;
	}
	return head;
  } 

  void Output(struct Node *head)
  {
	struct Node *p;
	p = head;
	while(p != NULL)
	{
		printf("%d ", p->date);
		p = p->next;
	}
	printf("\n");
  }
