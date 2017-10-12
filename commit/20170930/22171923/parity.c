#include<stdio.h>
int main()
{
  int n;
  printf("n=");
  scanf("%d",&n);
  int flag=(n%2==0)?0:1;   //定义一个int型变量，（里面是什么意思不懂）
  printf("%d\n",flag);
  return 0;
}
