#include<stdio.h>
int main()
{
  int x,y;              //输入变量
  printf("x=");         //输出x
  scanf("%d",&x);      //格式化输入字符串，地址符
  y=x*x*x+2*x*x+3*x+1; //算式
  printf("y=%d",y);    //输出确定内容式样，y
  printf("\n");        //这个什么意思我也不懂
  return 0;
}
