#include<stdio.h>
int main()
{
  int i,sum=0;
  for(i=2;i<=100;i=i+2)
    sum=sum+i;
  printf("2+4+6+...+100=%d\n",sum);
  return 0;



}
