#include<stdio.h>
int main()
{
  int a,b,c,d=1,i;
  printf("请输入整数a b c:");
  scanf("%d%d%d",&a,&b,&c);
  for(i=1;i<=b;i++)
    d=(d*a)%c;
  printf("%d",d);
  return 0;
}
