/*计算并输出1至10的阶乘之和*/
#include <stdio.h>
int main()
{
  int a,b,c;

  for(a=2,b=1,c=1;a<=10;a++)    //设置循环
  {
    b*=a;                      //计算阶乘
    c+=b;                     //求和
  }
  printf("1!+2!+3!+...+10!=%d\n",c);

  return 0;
}


