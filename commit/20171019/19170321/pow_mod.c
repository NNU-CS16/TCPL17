#include<stdio.h>
int main()
{
   int a,b,c,result,i;
   scanf("%d%d%d",&a,&b,&c);
   result=a%c;
   for(i=1;i<b;i++)
   result=(result*(a%c))%c;

   printf("%d\n",result);
   return 0;
}
