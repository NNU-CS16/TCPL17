#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);

   if(a==b)
     printf("%d",c);
   else if(c==b)
     printf("%d",a);
   else
     printf("%d",b);

   return 0;
}
