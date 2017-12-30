   #include "sadstory.h"


   void book_count (struct book *head)
   {
	struct book *p;
	p = head;
	int count = 0;
	while(p != NULL)
	{
		count++;
		p = p->next;
	}
	printf("图书总数为：%d", count);
   }

   void price_count(struct book *head)
   {
	struct book *p, *p1, *p2;
	p = head;
	p1 = NULL;
	p2 = NULL;
	int h_price = 0, l_price = head->price;
	while(p != NULL)
	{
		if(h_price < p->price)
		{
			h_price = p->price;
			p1 = p;
		}
		if(l_price > p->price)
		{	
			l_price = p->price;
			p2 = p;
		}
			
		p = p->next;
	}
	printf("价格最高的图书为：%s", p1->name);
	printf("价格最低的图书为：%s", p2->name);
  }

  void author_max_count(struct count *newhead)
  {
	struct count *p;
	p =  newhead;
	char author_max[20];
	strcpy(author_max, p->author);
	int max = p->num;
        p = p->next;

	while(p != NULL)
	{
		if(p->num > max)
		{
			strcpy(author_max, p->author);
			max = p->num;
		}
		p = p->next;
	}
	printf("拥有图书最多的作者是：%s", author_max);
  }

  void author_count(struct count *newhead)
  {
	struct count *p;
	p = newhead;
	int author_count = 0;
	while(p != NULL)
	{
		author_count++;
		p = p->next;
	}
	printf("作者数目为：%d", author_count);
  }
