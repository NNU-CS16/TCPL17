#include <stdio.h>
int main ()
{
   int a,b,c;
   int m,n;
   n=1;
   scanf("%d",&m);
   
   for (a=m;a<=m+3;a++)
   for (b=m;b<=m+3;b++)
   for (c=m;c<=m+3;c++)
   
   if (a!=b && b!=c && c!=a) 
   if (n<6) 
{
   n++;
   printf("%d%d%d ",a,b,c); 
}
   else
{
   n=1;
   printf("%d%d%d\n",a,b,c);
}
   return 0;
}
