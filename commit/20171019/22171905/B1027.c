#include <stdio.h>
int main()
{
  int a,b,c,other;//输入整型abc等
  scanf("%d%d%d",&a,&b,&c);//表示有几个字节
  if(a==b&&a!=c)//如果a=b,a的阶层等于c
   {
    other=c;//则把c赋值给other
   }
    else if(a==c&&a!=b)//否则当a=c或a的阶层等于b
     {other=b;}//把b赋值给other
     else if(b==c&&b!=a)//当b=c或b的阶层等于a时
      {other=a;}//把a赋值给other
   printf("%d\n",other);//输出other并换行
  return 0;
}
