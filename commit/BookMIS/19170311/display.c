#include<stdio.h> 
#include "control.h"
void display ()
{
    book* p = duqu ();
	 printf("书名\t\t作者\t\t编号\t\t价格\n");	
    while (p != NULL)
    {
        printf("%-15s %-15s %-15d %-15lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
        p = p -> next;
    }
}
