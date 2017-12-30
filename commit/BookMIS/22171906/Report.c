#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include "Book.h"
	void report(struct book *p)
	{
		double max, min;
		max = p->Price;
		min = max;
		int count = 0;
		struct book *shift1 = p;
		struct book *shift2 = p;
		struct book *highestprice = p;
		struct book *lowestprice = p;
    	while (shift1 != NULL)
		{
			count++;
			if (shift1->Price > max)
			{
				highestprice = shift1;
				max = shift1->Price;
			}
			if (shift1->Price < min)
			{
				lowestprice = shift1;
				min = shift1->Price;
			}
			shift1 = shift1->next;
		}
		printf("book count: %d\nhighest book and price: %s  %lf\nlowest book and price: %s  %lf\n", count, highestprice->ISBN, max, lowestprice->ISBN, min);
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
				if (strcmp(shift2->Author, shift1->Author) == 0)
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
				if (strcmp(shift1->Author, shift2->Author) == 0)
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
		printf("who has the most book: %s %d\n", authormax->Author, mostauthor);
	}

