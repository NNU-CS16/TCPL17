#include "communal.h"
void display()
{
	book* p = read ();
	while (p != NULL)
	{
		printf("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> title, p -> author, p -> ISBN, p -> price);
		p = p -> next;
	}
}

