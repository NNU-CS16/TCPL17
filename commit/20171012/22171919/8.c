#include<stdio.h>
int main()
{
   printf("a=");
   int a,b,c;
   scanf("%d",&a);
   b=a/16;
   c=a%16;
   printf("%d\n",b*10+c);
   return 0;
}
