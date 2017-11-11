#include<stdio.h>
void print_hex(int a)
{
  int b, i = 0, c[10];
 
  while (a != 0)
  {
     b = a%16;
     c[i] = b;
     b = a/16;
     i++;
   }
   for ( ; i >= 0; i--)
   {
       if(c[i] == 10) 
           printf ("A");
       if(c[i] == 11) 
           printf ("B");
       if(c[i] == 12) 
           printf ("C");
       if(c[i] == 13)
           printf ("d");
       if(c[i] == 14)
           printf ("E");
       if(c[i] == 15)
           printf ("F");
       else printf ("%d",c[i]);
    }
 }
  int main( )
  {
    int a;
    scanf ("%d",&a);
    print_hex(a);
    return 0;
    }

