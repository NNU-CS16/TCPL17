#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
Book *Countbook(Book *head)
{
	Book *p = head;
	int n = 0;
	double high = p -> price, low = p -> price;
	char hb[50], lb[50];
	while (p != NULL)
	{
		n++;
		if (high <= p -> price)
		{
			high = p -> price;
			strcpy(hb, p -> name);
		}
		if (low >= p -> price)
		{
			low = p -> price;
			strcpy(lb, p -> name);
		}
		p = p -> next;
	}
	printf("the number :%d\n", n);
	printf("the high price: %s\n", hb);
	printf("the low price: %s\n", lb);
	Book *p1 = head, *p2 = head;
	int count, temp = 0;
	char arr[20];
	while (p1 != NULL)
	{
		count = 0;
		while (p2 != NULL)
		{
			if (strcmp(p1 -> writer, p2 -> writer) == 0)
				count++;
			p2 = p2 -> next;
		}
		if (count > temp)
		{
			temp = count;
			strcpy(arr, p1 -> writer);
		}
		p1 = p1 -> next;
		p2 = p1;
	}
	printf("the writer who have the most:%s\n", arr);
	Book *p3 = head;
	Book *p4;
	int q = 0;
	while (p3 != NULL)
	{
		q++;
		p4 = head;
		while (p4 != p3)
		{
			if (strcmp(p3 -> writer, p4 -> writer) ==0)
			{
				q = q - 1;
				break;
			}
			p4 = p4 -> next;
		}
		p3 = p3 -> next;
	}
	printf("the number of writer:%d\n", q);
}

