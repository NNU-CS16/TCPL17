#include<stdio.h>
int main()
{
int a;
long int b;
signed long int c;
double d;
unsigned int e;
unsigned long int f;
short int g;
signed short int h;
unsigned short int i;

printf("int size=%d\n",sizeof(a));
printf("long int size=%d\n",sizeof(b));
printf("signed long int size=%d\n",sizeof(c));
printf("double size=%d\n",sizeof(d));
printf("unsigned int size=%d\n",sizeof(e));
printf("unsigned long int size=%d\n",sizeof(f));
printf("short int size=%d\n",sizeof(g));
printf("signed short int size=%d\n",sizeof(h));
printf("unsigned short int size=%d\n",sizeof(i));

return 0;
}
