#include <stdio.h>
int main()
{
char c;
int i;
float f;
double d;
long int l;
signed long int s;
unsigned int u;
unsigned long int q;
short int w;
signed short int e;
unsigned short int r;

printf("char size=%d\n",sizeof(c));
printf("int size=%d\n",sizeof(i));
printf("float size=%d\n",sizeof(f));
printf("double size=%d\n",sizeof(d));
printf("long int size=%d\n",sizeof(l));
printf("signed long int size=%d\n",sizeof(s));
printf("unsigned int size=%d\n",sizeof(u));
printf("unsigned long int size=%d\n",sizeof(q));
printf("short int size=%d\n",sizeof(w));
printf("signed short int=%d\n",sizeof(e));
printf("unsigned short int=%d\n",sizeof(r));

return 0;
}
