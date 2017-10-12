#include<stdio.h>
int main()
{
	char c;
	int i;
	float x;
	double z;
	long int a;
	signed long int b;
	unsigned int d;
	unsigned long int e;
	short int f;
	signed short int g;
	unsigned short int h;

	printf("char size=%d\n",sizeof(c));
	printf("int size=%d\n",sizeof(i));
	printf("float size=%d\n",sizeof(x));
	printf("double size=%d\n",sizeof(z));
	printf("long int size=%d\n",sizeof(a));
	printf("signed long int size=%d\n",sizeof(b));
	printf("unsigned int size=%d\n",sizeof(d));
	printf("unsigned long int size=%d\n",sizeof(e));
	printf("short int size=%d\n",sizeof(f));
	printf("signed short int size=%d\n",sizeof(g));
	printf("unsigned short int size=%d\n",sizeof(h));
	return 0;
}
