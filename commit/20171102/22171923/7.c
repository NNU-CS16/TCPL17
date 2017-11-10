#include<stdio.h>
int GCD_recursive(int m,int n)
{
  int x=m%n;
  while(x)
  {
    if(n>x){m=n;n=x;}
    else m=x;
  }
  return n;
}
int GCD_iterative(int m,int n)
{
  if(m%n>0)
  return GCD_iterative(n,m%n);
  else return n;
  printf("%d\n",n);
}
int main()
{
  int m,n,a;
  printf("请输入两个正整数:\n");
  scanf("%d %d",&m,&n);
  if(n>m)
  {
    a=m;
    m=n;
    n=a;
  }
  printf("%d %d\n",GCD_recursive(m,n),GCD_iterative(m,n));
  return 0;
}
