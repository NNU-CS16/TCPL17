#include<stdio.h>
int GCD_iterative(int m, int n);
int GCD_recursive(int m, int n);
int main()
{
    int a,b,m,n;
    printf("请输入m和n:\n");
    scanf("%d%d",&m,&n);
    a=GCD_iterative(m,n);
    printf("最大公约数（循环算法）:%d\n",a);
    b=GCD_recursive(m,n);
    printf("最大公约数（递归算法）:%d\n",b);
    return 0;
}
int GCD_iterative(int m, int n)
{
    int i;
    do
    {
    if(m<n)
      n=n%m,i=n;
    else m=m%n,i=m;
    }
    while(i!=0);
    if(i==n)
      return m;
    else
      return n;
}
int GCD_recursive(int m,int n)
{
    int i;
    if(m<n)
       n=n%m,i=n;
    else m=m%n,i=m;
    if(i==0)
      {
      if(i==n)
         return m;
      else
         return n;
      }
    else
      return GCD_recursive(m,n);
}
