#include<stdio.h>
int main()
{
  int x,y;
  printf("请输入正整数：");
  scanf("%d",&x);
  y=x%16+x/16*10;
  printf("%d\n",y);
  return 0;
}
