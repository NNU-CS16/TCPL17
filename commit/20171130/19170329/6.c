  #include <stdio.h>
  #include <stdlib.h>

  struct Node
  {
	int val;
	struct Node *next;
  };

  struct Node *delete(struct Node *head, int val)
  {
	struct Node *p = head, *prev;
	
	prev = NULL;
	p = head;
	while(p != NULL)
	{
		if(p->val == val)
		{
			if(p == head )
				head = head->next;
			else
				prev->next = p->next;
		}
		prev = p;	
		p = p->next;
	}

		if(head == NULL)  return NULL;
		return head;
  }

  void output(struct Node *head)
  {
        struct Node *p;
        p=head;
        while(p!=NULL)
        {
                printf("%d ",p->val);
                p=p->next;
        }
        printf("\n");
  }

  int main()
  {
	int val;
	scanf("%d",&val);
	
	struct Node *p1, *p2, *p3;

        p1 = (struct Node *)malloc(sizeof(struct Node)); p1->val = 101;
        p2 = (struct Node *)malloc(sizeof(struct Node)); p2->val = 103;
        p3 = (struct Node *)malloc(sizeof(struct Node)); p3->val = 105;
        p1->next = p2;  p2->next = p3;  p3->next = NULL;
	
	struct Node *head = delete(p1, val);
	output(head);
	return 0;
  }

	
