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

  struct Node *DeleteHead(struct Node *head)
  {
	struct Node *p;
	if(head == NULL)  return NULL;
	p = head;
	head = head->next;
	free(p);
	return head;
  }

  void clear(struct Node *head)
  {
	while(head != NULL)
		head = DeleteHead(head);
  }

  int main()
  {
	struct Node *head = Create();
	clear(head);
	
	return 0;
  }
