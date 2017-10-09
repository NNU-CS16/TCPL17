#include<stdio.h>
int main()
{
   long int     a;
   int          i;
   signed long int    b;
   unsigned int d;
   unsigned long int  e;
   short int    f;
   signed int   z;
   signed short int   h;
   unsigned short int g;
 

   printf("long int           size=%ld\n",sizeof(a));
   printf("int                size=%ld\n",sizeof(i));
   printf("signed long int    size=%ld\n",sizeof(b));
   printf("unsigned int       size=%ld\n",sizeof(d));
   printf("unsigned long int  size=%ld\n",sizeof(e));
   printf("short int          size=%ld\n",sizeof(f));
   printf("signed int         size=%ld\n",sizeof(z));
   printf("signed short int   size=%ld\n",sizeof(h));
   printf("unsigned short int size=%ld\n",sizeof(g));

   return  0;
}
