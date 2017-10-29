#include<stdio.h>
int main()
{
  int a,b,c,x,y,z;
  printf("请输入a,b,c:");
  scanf("%d%d%d%d",&a,&b,&c);
  x=1;
  for(y=1;y<=b;y++)
  {
    x*a;
  }
  z=mod(x,c);
  printf("余数为:%d\n",z);
  return 0;
}
int mod(int x,int y)
{
  int n;
  n=x%y;
  return n;
}
