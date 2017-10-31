#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a!=b&&a!=c)
   printf("A\n");
   if(b!=a&&b!=c)
   printf("B\n");
   if(c!=a&&c!=b)
   printf("C\n");
   return 0;
}   
