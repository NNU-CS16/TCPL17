#include<stdio.h>
int main()
{
   int i=2,sum=0;
   while(i<=100)
   {
      sum=sum+i;
      i=i+2;
   }
   printf("2+4+6+...+100=%d\n",sum);  
   return 0; 
}	

