#include "head.c"
void tianjia( )
{
    books *head;
    books *newp = (books *)malloc(sizeof(books));
    printf("书名:");
    scanf ("%s", newp -> name);
    printf("作者:");
    scanf ("%s", newp -> writer);
    printf ("ISBN:");
    scanf ("%s", newp -> ISBN);
    printf ("价格:");
    scanf ("%lf", &newp -> price);
    newp -> next = head;
    head = newp;
}
   
