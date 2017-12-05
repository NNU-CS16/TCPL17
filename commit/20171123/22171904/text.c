#include <stdio.h>
int main()
{
	unsigned char *p1;
	unsigned long *p2;
	p1=(unsigned char *)0x80100;
	p2=(unsigned long *)0x81000;
	printf("%p %p ",p1+5,p2+5);

	return 0;
}
