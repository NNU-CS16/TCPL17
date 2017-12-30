#include "head.c"
void xianshi( )
{
    books *head;
    books *p = (books*)malloc(sizeof(books));
    p = head;
    while (p != NULL)
    {
	printf ("%s%s%s%lf", p -> name, p -> writer, p -> ISBN, p -> price);
        p = p -> next;
    }
}
   
