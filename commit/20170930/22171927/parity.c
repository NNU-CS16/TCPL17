#include<stdio.h>
 
int main()
{
   int n = 10;
   int flag=1||0;   
   if(n%2!=0)
      flag=1;
   else
      flag=0;
   
   printf("%d\n",flag);
   return 0;
}
