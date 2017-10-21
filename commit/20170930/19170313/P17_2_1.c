#include<stdio.h>
int main()
{
   int a;
   long int b;
   signed long int c;
   unsigned int d;
   unsigned long int e;
   short int f;
   signed short int g;
   unsigned short int h;

   printf("int size=%d\n",sizeof(a));
   printf("long int size=%d\n",sizeof(b));
   printf("signed long int size=%d\n",sizeof(c));
   printf("unsigned int size=%d\n",sizeof(d));
   printf("unsigned long int size=%d\n",sizeof(e));
   printf("short int size=%d\n",sizeof(f));
   printf("signed short int size=%d\n",sizeof(g));
   printf("unsigned short int size=%d\n",sizeof(h));

   return 0;
}

