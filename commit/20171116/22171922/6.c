#include<stdio.h>

void k_reverse( char *str, int k );
{

	char *p = str;
	char *q = str + k - 1;
	while ( p < q )
	{
		int t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}

}
