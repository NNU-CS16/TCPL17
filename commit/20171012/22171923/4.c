#include<stdio.h>
int main()
{
  int i,n,sum;
  for(i=1,sum=0,n=1;i<=10;)
  {
    n*=i;
    sum=sum+n;
    i++;
  }
  printf("sum=%d\n",sum);
  return 0;
}

