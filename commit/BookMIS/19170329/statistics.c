  #include "sadstory.h"


  /* struct count
  {
	char author[20];
	int num;
	struct count *next;
  }; */


  struct count * statistics(struct book *head)
  {
	struct count *newp, *p1, *newhead;
	struct book *p;
	p = head;
	newp = (struct count *)malloc(sizeof(struct count));
	newhead = newp;
	strcpy(newp->author , p->author);
	newp->num = 1;
	newp->next = NULL;
	while( p != NULL)
	{
		p1 = newp;
		p = p->next;
		newp = (struct count *)malloc(sizeof(struct count));
		struct count *p2;
		p2 = newhead;
		while(p2 != NULL)
		{
			if(strcmp( p->author, p2->author) == 0)
			{
				p2->num ++;
			}
			else
			{
				p2 = p2->next;
			}
		}
		if( NULL == p2)
		{
			strcpy(newp->author , p->author);
			newp->next = NULL;
		}
	}
	return newhead;
  }
