#include <stdio.h>
int main()
{
   int i=1,j=1,sum=1;
   while(i<=9)
    {  
      i=i+1;
      j=j*i;
      sum=sum+j;
    
    }   
   
   printf("1!+2!+3!+...+10!=%d\n",sum);
   return 0;

}
