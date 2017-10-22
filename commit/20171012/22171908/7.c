#include<stdio.h>
int main() 
{
  int n,a,b,c,e;
  printf("n:");
  scanf("%d",&n);
  a=n/100;
  b=(n%100)/10;
  c=(n%100)%10;
  e=c*100+b*10+a;
  printf("%d\n",e);
  return 0;
}
