//本题要求编写程序，顺序读入浮点数1、整数、字符、浮点数2，再按照字符、整数、浮点数1、浮点数2的顺序输出

#include<stdio.h>
 int main()
{
  double a,b;
  int c;
  char d;
  scanf("%lf %d %c %lf",&a,&c,&d,&b);
  printf("%c %d %.2f %.2f",d,c,a,b);
 return 0;
}
						      
