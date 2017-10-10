#include <stdio.h>
int main()
{
    char c;  
    int i;
    float x;
    double z;
    long int a;
    signed long int b;
    unsigned int d;
    unsigned long int f;
    short int g;
    signed short int t;
    unsigned short int y;
   

         printf(" int size=%d\n",sizeof(i));
	 printf(" long int size=%d\n",sizeof(a));
	 printf(" signed long int size=%d\n",sizeof(b));
	 printf(" unsigned int size=%d\n",sizeof(d));
	 printf(" unsigned long int size=%d\n",sizeof(f));
	 printf(" short int size=%d\n",sizeof(g));
	 printf(" signed short int size=%d\n",sizeof(t));
	 printf(" unsigned short int size=%d\n",sizeof(y));
	 printf(" float size=%d\n",sizeof(x));
	 printf(" double size=%d\n",sizeof(z));
	 printf(" char size=%d\n",sizeof(c));
return 0;
}
