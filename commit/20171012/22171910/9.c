#include <stdio.h>
int main()
{
  float a,d;   //定义浮点数
  int b;      //定义整数
  char c;    //定义字符
  scanf("%f %d %c %f",&a,&b,&c,&d);
  printf("%c %d %.2f %.2f\n",c,b,a,d);  //控制输出浮点数保留到小数点后两位
  
  return 0;
}
