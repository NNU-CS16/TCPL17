#include<stdio.h>
int main()
{
  int a,b;
  char x[16];
  float c;
  printf("请输入一个十进制整数：");
  scanf("%d",&a);
  printf("八进制为%0，十六进制为%x",a,a);
  for(b=0;b<=15;b++)
  {
    c=a/2;
    a=a/2;
    if(c==(float)a) 
      x[15-b]='0';
    else x[15-b]='1';
  }
  printf("二进制为%s",x);
  return 0;
}
