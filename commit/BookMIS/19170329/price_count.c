void price_count(struct book *head)
{
	struct book *p, *p1, *p2 ;
	p = head;	p1 = head;	 p2 = head;
	double high = p->price, low = p->price;

	while(p != NULL)
	{
		p = p->next;
		if(high < p->price)
		{
			high = p->price;
			p1 = p;			
		}
		if(low > p->price)
		{
			low = p->price;
			p2 = p;
		}
	}
	printf("价格最高的图书是：%s", p1->name);
	printf("价格最低的图书是：%s", p2->name);
}
}	
