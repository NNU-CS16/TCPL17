#include<stdio.h>
int main()
{
   int p,q,sum;
   for(p=2,q=1,sum=1;p<=10;p++)
  {
  
    q=p*q;
    sum=sum+q;
  }
  printf("1!+2!+3!...+10!=%d\n",sum);

  return 0;
}
   
   
