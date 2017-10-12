#include<stdio.h>
int main()
{
	char a;
	int b;
	float c;
	double d;
        long int e;
        signed long int f;
        unsigned int g;
        short int h;
        unsigned short int i;

	 printf("char  size=%ld\n",sizeof(a));
	 printf("int   size=%ld\n",sizeof(b));
	 printf("float size=%ld\n",sizeof(c));
	 printf("double size=%ld\n",sizeof(d));
	 printf("long int  size=%ld\n",sizeof(e));
	printf("signed long int size=%ld\n",sizeof(f));
        printf("unsigned int size=%ld\n",sizeof(g));
        printf("short int size=%ld\n",sizeof(h));
        printf("unsigned short int size=%ld\n",sizeof(i));

	 return 0;
}

