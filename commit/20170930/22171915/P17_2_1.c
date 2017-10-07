#include<stdio.h>
int main( )
{
 char c;
 int i;
 float f;
 double d;
 long int a;
 signed long int b;
 unsigned int x;
 unsigned long int y;
 short int p;
 signed short int q;
 unsigned short int r;

 printf("char size=%d\n",sizeof(c));
 printf("int size=%d\n",sizeof(i));
 printf("float size=%d\n",sizeof(f));
 printf("double size=%d\n",sizeof(d));
 printf("long int size=%d\n",sizeof(a));
 printf("signed long int size=%d\n",sizeof(b));
 printf("unsigned int size=%d\n",sizeof(x));
 printf("unsigned long int size=%d\n",sizeof(y));
}

