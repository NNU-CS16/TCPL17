#include <stdio.h>
int gcd(int m,int n)
{
  if(n==0)
  return m;
  return gcd(n,m%n);
}
int LCM(int m,int n)
{
  return m*n/gcd(m,n);
}
int main()
{
  int m,n; 
  printf("输入两个数:\n");
  scanf("%d%d",&m,&n);
  LCM; 
  printf("最小公倍数是:%d\n",m*n/gcd(m,n));

  return 0;
} 









 
