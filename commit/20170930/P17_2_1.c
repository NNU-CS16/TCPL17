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
unsigned long int g;
short int e;
signed short int h;
unsigned short int j;

printf("char size=%ld\n",sizeof(c));
printf("int size=%ld\n",sizeof(i));
printf("float size=%ld\n",sizeof(x));
printf("double size=%ld\n",sizeof(z));
printf("long int size=%ld\n",sizeof(a));
printf("signed long int size=%ld\n",sizeof(b));
printf("unsigned int size=%ld\n",sizeof(d));
printf("unsigned long int size=%ld\n",sizeof(g));
printf("short int size=%ld\n",sizeof(e));
printf("signed short int size=%ld\n",sizeof(h));
printf("unsigned short int size=%ld\n",sizeof(j));

return 0;
}
