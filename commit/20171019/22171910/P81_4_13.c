/*判断整数n是否为素数*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;
  printf("请输入n(n>3)");
  scanf("%d",&n);               //输入某个整数
  for(i=2;i<=sqrt(n)+1;i++)
    if(n%i==0)
      break;
  if(i<=sqrt(n))                 //通过上一循环是否提前结束判断n是否为素数
    printf("%d不是素数\n",n);
  else
    printf("%d是素数\n",n);

   return 0;
}
