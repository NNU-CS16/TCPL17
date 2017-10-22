#include<stdio.h>
int main()
{
  int x,a,b,c,m;
 
  scanf("%d\n",&x);
  
   c=x/100;
   b=(x/10)%10;
   a=x%10;
   m=a*100+b*10+c;
   printf("%d\n",m);
   return 0;
}
