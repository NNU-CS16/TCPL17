 #include <stdio.h>
 #include "cmd.h"
 #include <stdlib.h>

 void output(Book *head)
{
    Book *p=(Book *)malloc(sizeof(Book));
	p = head;
    while (p!=NULL)
    {
        printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\n",p->name,p->author,p->ISBN,p->price);
        p = p->next;
    }
}

