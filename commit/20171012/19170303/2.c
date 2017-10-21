#include<stdio.h>
int main()
{
      int sum,n=1;
   while(n<98) 
   {  
  sum+=n*(n+1)*(n+2);
  n=n+3;
   }
printf("sum=%d\n",sum);
return 0;
}
