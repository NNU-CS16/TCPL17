#ifndef TONGJI_H
#define TONGJI_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tongji(struct Book *head)
{
	int i;
	int b_count = 0;
	int au_count = 0;
	int book_most = 0;
	double price_highest = -1;
	double price_lowest = -1;
	struct Book *h = head;
	struct Book *l = head;
	struct Book *p = NULL;

	p = head;
	while( p != NULL )
	{
		b_count++;
		if( p->price > price_highest)
		{
			h = p;
			price_highest = p->price;
		}
		else
		{
			l = p;
			price_lowest = p->price;
		}
		p = p->next;
	}
	printf("图书数目为%d\n",b_count);
	printf("价格最高的图书为%s\n",h->bookname);
	printf("价格最低的图书为%s\n",l->bookname);

	return 0;
}

#endif
