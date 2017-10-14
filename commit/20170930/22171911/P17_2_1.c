#include<stdio.h>
int main( )
{
 int a;
unsigned int b;
short int c;
unsigned short int d;
float e;
double f;
char g;
unsigned char h;

printf("int size=%d\n",sizeof(a));
printf("unsigned int  size=%d\n",sizeof(b));
printf("short int  size=%d\n",sizeof(c));
printf("unsigned short int  size=%d\n",sizeof(d));
printf("float  size=%d\n",sizeof(e));
printf("double  size=%d\n",sizeof(f));
printf("char  size=%d\n",sizeof(g));
printf("unsigned char  size=%d\n",sizeof(h));

return 0;
}
