#include<stdio.h>
int is_pow(int n);
int main()
{
 int n;
 printf("请输入一个整数：");
 scanf("%d",&n);
 is_pow(n);
}
int is_pow(int n)
{
int i;
for (i=1;i<=n;i*=2)
  {
    if (i==n)
          {printf("0");}
  }
 printf("-1");
}
