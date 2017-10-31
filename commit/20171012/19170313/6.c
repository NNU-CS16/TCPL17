#include<stdio.h>
int main()
{
int d;
scanf("%d",&d);

   int a,b,c;
   for(a=1;a<=d;a++)
{
   for(b=1;b<=13-a;b++)
   printf(" ");
   for(c=1;c<=2*a-1;c++)
   printf("*");
   printf("\n");
}


   int q,w,e;
   for(q=d+1;q<=2*d-1;q++)
{
   for(w=1;w<=13-2*d+q;w++)
   printf(" ");
   for(e=1;e<=4*d-2*q-1;e++)
   printf("*");
   printf("\n");
}

   return 0;
}
