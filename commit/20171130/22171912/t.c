#include <stdio.h>

int main ()
{
	int year = 1009, *p = &year;
	printf("%d\n", *p += 1);
    printf("%d\n", (*p)++);
    printf("%d\n", ++(*p));
    printf("%d\n", *p++);
	return 0;
}
