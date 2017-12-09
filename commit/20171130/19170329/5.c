  #include <stdio.h>
  #include <stdlib.h>

  struct Node 
  {
	int date;
	struct Node *next;
  };

  struct Node *Create(int arr[], int n)
  {
	struct Node *head, *p, *newp;
	int i;
	head = (struct Node *)malloc(sizeof(struct Node));
	head->date = arr[0];
	head->next = NULL;
	p = head;
	for(i = 1; i < n; i++)
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		p->next = newp;
		newp->date = arr[i];
		p = p->next;
	}
	p->next = NULL;
	return head;
  } 

  struct Node *Search(struct Node *head, int date)
  {
	struct Node *target = head;
	while(target != NULL)
	{
		if(target->date == date)
			return target;
		target = target->next;
	}
  }
  
  struct Node *delete(struct Node* head, struct Node* target)
  {
	if(head == NULL)  return NULL;
	if(target == head) 
		head = head->next;
	else
	{
		struct Node *p = head;
		while( p->next != target ) 
		{
			p = p->next;
		}
		p->next = target->next;
	}
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

  int main()
  {
	int date;
	scanf("%d", &date);
	int arr[5] = {101, 103, 105, 107, 109};
	struct Node *head = Create(arr, 5);
	struct Node *target = Search(head, date); 
	head = delete( head, target );
	Output(head);
	return 0;
  }
