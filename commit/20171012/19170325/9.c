#include<stdio.h>
int main()
{
  float a,b;
  int c;
  char d;
  printf("请输入浮点数1,整数，字符，浮点数2：");
  scanf("%f %d %c %f",&a,&c,&d,&b);
  printf("%c %d %.2f %.2f\n",d,c,a,b);
  return 0;
}
