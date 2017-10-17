#include<stdio.h>
int main()
{
char c;
int i;
float x;
double z;
long int q;
signed long int w;
unsigned int e;
unsigned long int r;
short int t;
signed short int y;
unsigned short int u;

printf ("char size=%d\n",sizeof(c));
printf ("int size=%d\n",sizeof(i));
printf ("float size=%d\n",sizeof(x));
printf ("double size=%d\n",sizeof(z));
printf ("long int size=%d\n",sizeof(q));
printf ("signed long int size=%d\n",sizeof(w));
printf ("unsigned int size=%d\n",sizeof(e));
printf ("unsigned long int size=%d\n",sizeof(r));
printf ("short int size=%d\n",sizeof(t));
printf ("signed short int size=%d\n",sizeof(y));
printf ("unsigned short int size=%d\n",sizeof(u));

return 0;

}
