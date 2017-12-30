  #include "sadstory.h"


  struct book *book_delete(struct book *head, char *isbn)
  {
	struct book *prev, *p;
	prev = NULL;	p = head;
	if(strcmp(head->isbn, isbn) == 0)
        {
                head = head->next;
        }

	else
	{

		while(p != NULL)
		{
			prev = p;
			p = p->next;
			if(strcmp(p->isbn, isbn) == 0)
		        {
        		         p = p->next;
				 prev->next = p;
		        }
		}
	}
	return head;
  }  

		
