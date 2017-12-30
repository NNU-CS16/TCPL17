#include "head.h"
void display()
{
    Struct book *head;
    struct book *p = (struct book*)malloc(sizeof(struct book));
    p = head;
    while(p != NULL)
    {
        printf("\t\t书名：%-30s\n\t\t作者：%-30s\n\t\tISBN:%-30s价格：%-30lf\n", p -> book_name, p -> author, p -> ISBN, p -> price);
		p = p -> next;
    }
}	

