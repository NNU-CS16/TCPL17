#include<stdio.h>
int main()
{
   int x,y;
   
   printf("x=");
   scanf("%d",&x);
   
   y=((x+2)*x+3)*x+1;
   printf("y=%d\n",y);
   
   return 0;
}
