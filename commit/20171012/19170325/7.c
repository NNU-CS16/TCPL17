#include<stdio.h>
int main()
{
  int a,b,c,n;
  printf("请输入一个三位数：");
  scanf("%d",&n);
  a=n/100;
  b=(n-a*100)/10;
  c=n%10;
  printf("%d的逆序是%d%d%d\n",n,c,b,a);
  return 0;



}
