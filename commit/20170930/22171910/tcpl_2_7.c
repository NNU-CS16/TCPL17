/*invert:将某位的二进制求反*/
#include<stdio.h>

unsigned int invert(unsigned int x,int p, int n)
{
  return x^(~(~0<<n)<<(p-n+1));        //定义invert函数
}

int main()
{
  unsigned int x,y;
  int p,n;
  printf("x=  p=  n=  \n");           //输入计算数值
  scanf("%d%d%d",&x,&p,&n);           //输入x,p,n
  y=invert(x,p,n);                    //使用y表示结果
  printf("%d\n",y);                  //输出结果
  return 0;
}
