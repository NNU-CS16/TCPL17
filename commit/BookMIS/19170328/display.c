#include <stdio.h>
#include <stdlib.h>
#include "kyh.h"
void display(struct book *head)
{
	struct book *p=(struct book *)malloc(sizeof(struct book));
	p=head;
	while(p!=NULL)
	{
		printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\t库存:%d\n",p -> bookname,p -> author,p -> ISBN,p -> price, p -> booknum);
		p=p->next;
	}
}
