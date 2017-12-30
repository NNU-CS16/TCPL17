#include "head.h"
void deletebook(struct Book* target)
{extern long int booknumber;
if (target==NULL)
	{
	printf("No this book\n");
	return;
	}
*(target->title)='\0';
booknumber--;
return;
}
