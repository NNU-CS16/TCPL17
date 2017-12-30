#include "head.h"

void statistics()
{
    int c = 0;
    book* p0 = read();
    book* p1 = read();
    book* q1 = read();
    book* p2, *q2;
    book* p3, *q3;
    while(p0 != NULL)
    {
	c++;
	p0 = p0 -> next;
    }
    printf("\t\t图书总数为：%d\n", c);
    p3 = p1 -> next;
    while(p1 != NULL && p3 != NULL)
    {
	if (p1 -> price < p3 -> price)
	{
	    p2 = p3;
	    p1 = p1 -> next;
	}
	else
	{
	    p2 = p1;
	    p3 = p3 -> next;
	}
    }
    printf("\t\t价格最贵的图书!\n");
    printf("\t\t书名：%s\n", p2 -> book_name);
    printf("\t\t价格：%lf\n", p2 -> price);
    book* head = read();
    book* t = read();
    int i = 0;
    while(head != NULL)
    {
	book* shell = head -> next;
	while(shell != NULL)
	{
	    if (strcmp(head -> author, shell -> author) != 0)
		shell = shell -> next;
		else
		{
		    i++;
		    break;
		}
		head = head -> next;
	}
    }
    printf("\t\t作者人数：%d", c - i);
}

