#include "overall.h"

void Count_num()
{
	int i;
	BOOK* p = Load();
	while (p != NULL)
	{
		++i;
		p = p -> next;
	}
	printf("共有%d本书", i);
}

void Count_price()
{
	int max, min;
	BOOK* p1 = Load();
	BOOK* p2 = Load();
	min = p1 -> price;
	max = p2 -> price;
	while (p1 != NULL && p2 != NULL)
	{
		p1 = p1 -> next;
		if (min > p1 -> price)
		 	min = p1 -> price;
		p2 = p2 -> next;
		if (max < p2 -> price)
			max = p2 -> price;
	}
	printf("价格最低：%s；价格最高：%s\n", p1 -> name, p2 -> name);
}

