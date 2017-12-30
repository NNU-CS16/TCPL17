	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include "cmd.h"
	void report(struct book *p)
	{
		double max, min;
		max = p->bookprice;
		min = max;
		int count = 0;
		struct book *shift1 = p;
		struct book *shift2 = p;
		struct book *highestprice = p;
		struct book *lowestprice = p;
    	while (shift1 != NULL)
		{
			count++;
			if (shift1->bookprice > max)
			{
				highestprice = shift1;
				max = shift1->bookprice;
			}
			if (shift1->bookprice < min)
			{
				lowestprice = shift1;
				min = shift1->bookprice;
			}
			shift1 = shift1->next;
		}
		printf("book count: %d\nhighest book and price: %s  %lf\nlowest book and price: %s  %lf\n", count, highestprice->booknumber, max, lowestprice->booknumber, min);
    	shift1 = p;
		count = 0;
		while (shift1 != NULL)
		{
			while (shift2 != NULL)
			{
				if (shift1 == shift2)
				{
					count++;
					break;
				}
				if (strcmp(shift2->bookauthor, shift1->bookauthor) == 0)
					break;
				shift2 = shift2->next;
			}
			shift1 = shift1->next;
			shift2 = p;
		}
		printf("author count: %d\n", count);
		shift1 = p;
		shift2 = p;
		count = 0;
		int mostauthor = 0;
		struct book *authormax = p;
		while (shift1 != NULL)
		{
			while (shift2 != NULL)
			{
				if (strcmp(shift1->bookauthor, shift2->bookauthor) == 0)
					count++;
				shift2 = shift2->next;
			}
			if (count > mostauthor)
			{
				mostauthor = count;
				authormax = shift1;
			}
			shift2 = p;
			count = 0;
			shift1 = shift1->next;
		}
		printf("who has the most book: %s %d\n", authormax->bookauthor, mostauthor);
	}




























