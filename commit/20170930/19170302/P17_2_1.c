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

	printf("int size=%ld\n",sizeof(a));
	printf("long int size=%ld\n",sizeof(b));
	printf("signed long int size=%ld\n",sizeof(c));
	printf("unsigned int size=%ld\n",sizeof(d));
	printf("unsigned long int size=%ld\n",sizeof(e));
	printf("short int size=%ld\n",sizeof(f));
	printf("signed short int size=%ld\n",sizeof(g));
	printf("unsigned short int size=%ld\n",sizeof(h));

	return 0;
}

