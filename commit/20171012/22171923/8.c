#include<stdio.h>
int main()
{
  int x,y;
  0<=x<=153;
  printf("请输入一个正整数：");
  scanf("%d\n",&x);
  y=x%16+x/16*10;
  printf("%d\n",&y);
  return 0;
}
