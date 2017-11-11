#include<stdio.h>

int main()
{
    int m,n;
    printf("输入两个正整数：");
    scanf("%d%d",&m,&n);
    printf("(递归版本)%d和%d的最大公约数为：%d\n",m,n,GCD_recursive(m,n));
    printf("(迭代版本)%d和%d的最大公约数为：%d\n",m,n,GCD_iterative(m,n));   
   
    return 0;
}
   
int GCD_iterative(int m,int n)
{
    int a;
    while (n!=0)
    {
       a=m%n;
       m=n;
       n=a;
    }
     return m;
} 

int GCD_recursive(int m,int n)
{
    if (n==0)
     return m;
    else
     return GCD_recursive(n,m%n);
}
