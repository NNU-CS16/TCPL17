  #include <stdio.h>
  #include <stdlib.h>
  struct Node* insert(struct Node* head, int val);
  struct Node *Create();
  void Output(struct Node *head);
  
  struct Node
  {
        int date;
	struct Node *next;
  };


  int main()
  { 
	int val;
	scanf("%d", &val);
	struct Node *head = Create();
	head = insert( head, val );
	Output(head);
	return 0;
  }

  struct Node *Create()
  {
	struct Node *p1, *p2, *p3;
	
	p1 = (struct Node *)malloc(sizeof(struct Node)); p1->date = 101;
	p2 = (struct Node *)malloc(sizeof(struct Node)); p2->date = 103;
	p3 = (struct Node *)malloc(sizeof(struct Node)); p3->date = 105;
	p1->next = p2;	p2->next = p3;	p3->next = NULL;

	return p1;
  }    

  struct Node *insert(struct Node *head, int val)
  {
	struct Node *newp = (struct Node*)malloc(sizeof(struct Node));
        newp->date = val;
	newp->next = head;
	head = newp;
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
