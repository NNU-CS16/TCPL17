#include "overall.h"

void Show()
{
	BOOK* p = Load();	
    while (p != NULL)
    {
        printf("%s\t%s\t\t%s\t\t%lf\n", p -> ISBN, p -> name, p -> author, p -> price);
        p = p -> next;
    }
}
