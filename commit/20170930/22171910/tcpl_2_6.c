/*setbits:set n bits of x to bits of y */
#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
  return x & ~(~(~0<<n) <<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
}
int main()
{
  unsigned x,y;
  int n,p,r;
  printf("x=  p=  n=  y=  \n");
  scanf("%d%d%d%d",&x,&p,&n,&y); //输入x,p,n,y的值
  r=setbits(x,n,p,y);  //运用setbits函数
  printf("%d \n",r);  //输出所得结果
  return 0;
}
