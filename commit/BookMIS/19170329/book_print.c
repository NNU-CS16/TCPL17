  #include "sadstory.h"


  void book_print(struct book *head)
  {
	struct book *p;
	p = head;
	while(p -> next != NULL)
	{
		printf("%s\t%s\t%s\t%lf\t%d", p->name, p->author, p->isbn, p->price, p->num);
		printf("\n");
		p = p->next;
	}
  }
