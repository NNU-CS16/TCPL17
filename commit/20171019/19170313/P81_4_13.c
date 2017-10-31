#include<stdio.h>
int main()
{
   int a,b;
   printf("请输入整数a(a>3):");
   scanf("%d",&a);
   for(b=2;b<=a/2;b++)
   if(a%b==0)
   break;
   if(b<a)
   printf("%d不是素数\n",a);
   else
   printf("%d是素数\n",a);
   return 0;
}
