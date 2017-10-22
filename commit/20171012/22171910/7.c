#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  if(99>x)                     //确保该数为三位数
  printf("请输入三位数");
  else if(x>999)
  printf("请输入三位数");
  else
  {
    int a,b,c;
   
    c=x/100;
    b=(x/10)%10;
    a=x%10;
    x=a*100+b*10+c;       //获得逆序
   printf("%d\n",x);
  }
   return 0;
}
