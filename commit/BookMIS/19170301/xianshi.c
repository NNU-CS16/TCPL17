 #include "hehe.h"
 void xianshi ()
 {
    book* p = duqu ();	
    while (p != NULL)
    {
        printf("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
        p = p -> next;
    }
 }
