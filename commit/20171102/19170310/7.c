#include<stdio.h>
int GCD_iterative(int m,int n);
{
  int temp;
  while(n%m!=0)
  {
   temp=m;m=n%m;n=temp;
  }
  return m;
}
int GCD_iterative(int m,int n)
{
  if (n%m!=0)
  return GCD_iterative(n%m,m);
  else return m;
}
int main()
{
  int m, n;
  scanf( "%d%d", &m, &n );
  if(n>m) 
  {
  m=m^n;n=m^n;m=m^n;
  }
  printf("%d %d\n",GCD_recursive(m,n),GCD_iterative(m,n));
  return 0;
}
