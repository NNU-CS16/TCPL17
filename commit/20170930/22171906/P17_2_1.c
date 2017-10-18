#include<stdio.h>
int main()
{
 char c;
 int i;
 float x;
 double z;
 long int l;
 signed long int o;
 unsigned int v;
 short int e;

 printf("char size=%ld\n",sizeof(c));
 printf("int size=%ld\n",sizeof(i));
 printf("float size=%ld\n",sizeof(x));
 printf("double size=%ld\n",sizeof(z));
 printf("long int size=%ld\n",sizeof(l));
 printf("signed long int size=%ld\n",sizeof(o));
 printf("unsigned int size=%ld\n",sizeof(v));
 printf("short int size=%ld\n",sizeof(e));
 
 return 0;
}


