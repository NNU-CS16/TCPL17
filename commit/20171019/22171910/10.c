#include<stdio.h>
int rem(int a,int b,int c);       //标明函数调用

int main()
{
  int a,b,c,d;
  printf("请输入整数a b c:");
  scanf("%d%d%d",&a,&b,&c);     //输入计算字符
  d=rem(a,b,c);                //调用自定义函数
  printf("%d",d);
  return 0;
}

int rem(int a,int b,int c)   //定义函数，计算a^b%c
{
  int i,d=1;
  for(i=1;i<=b;i++)
    d=(d*a)%c;
  return d;
}
