#include<stdio.h>
int main()
{  
  
  int a,n,x,y,i;

   printf("a,n=");
   scanf("%d%d\n",&a,&n);
   x=0,y=0,i=0;

   while(i<n)
   
   x=x*10+a;
   y=x+y;
   i++;
  
   printf("%d\n",y);
  

   return 0;
}
