  #include <stdio.h>
  #include <stdlib.h>

  struct Node 
  {
	int date;
	struct Node *next;
  };

  struct Node *Create()
  {
        struct Node *p1, *p2, *p3, *p4, *p5;

        p1 = (struct Node *)malloc(sizeof(struct Node)); p1->date = 101;
        p2 = (struct Node *)malloc(sizeof(struct Node)); p2->date = 103;
        p3 = (struct Node *)malloc(sizeof(struct Node)); p3->date = 105;
	p4 = (struct Node *)malloc(sizeof(struct Node)); p4->date = 107;
	p5 = (struct Node *)malloc(sizeof(struct Node)); p5->date = 109;
        p1->next = p2;  p2->next = p3;  p3->next = p4;  p4->next = p5;  p5->next = NULL;

        return p1;
  }

  struct Node *reverse( struct Node *head )
  {
	struct Node *p = head, *p1 = p->next, *p2 = NULL;
	while(p1 != NULL)
	{
		p2 =  p1->next;
		p1->next = p;
		p = p1;
		p1 = p2;
	}
	head->next = NULL;
	return p;
  }

  void Output(struct Node *head)
  {
	struct Node *p;
        p=head;
        while(p != NULL)
	{
		printf("%d ", p->date );
		p = p->next;
	}
	printf("\n");
  }

  int main()
  {
	struct Node *head = Create();
	head = reverse(head);
	Output(head);
	return 0;
  }
	
		
