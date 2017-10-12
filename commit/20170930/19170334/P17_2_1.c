#include <stdio.h>

int main()

{
	int a;
	long int b;
	signed long int c;
	unsigned int d;
	unsigned long int e;
	short int f;
	signed short int g;
	unsigned short int h;


	printf ("size of int=%d\n",sizeof(a));
	printf ("size of long int=%ld\n",sizeof(b));
	printf ("size of signed long int=%ld\n",sizeof(c));
	printf ("size of unsigned int=%u\n",sizeof(d));
	printf ("size of unsigned long int=%lu\n",sizeof(e));
	printf ("size of short int=%hd\n",sizeof(f));
	printf ("size of signed short int=%hd\n",sizeof(g));
	printf ("size of unsigned short int=%hu\n",sizeof(h));


	return 0;
} 
