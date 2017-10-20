#include<stdio.h>
int main()
{
   int sum=0,n=1,j=1;
 while(j<=10)
  {
     n=n*j;
     sum=sum+n;
     j++;
  }
    printf("1!+2!+3!+...+10!=%d\n",sum);
    return 0;



}
