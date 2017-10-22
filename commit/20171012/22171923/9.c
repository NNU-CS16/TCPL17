#include<stdio.h>
int main()
{
  double a,d;
  int b;
  char c;
  printf("请输入浮点数1，整数，字符，浮点数2:");
  scanf("%lf,%d,%c,%lf",&a,&b,&c,&d);
  printf("%c,%d,%2lf,%2lf\n",c,b,a,d);
  return 0;
}
