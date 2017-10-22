/*Add up the input data*/
#include <stdio.h>
int main()
{
  int sum,x,y,n,a;

  sum=0,x=1;
  printf("n=  a=  \n");
  scanf("%d%d",&n,&a);            //输入n与a的值
  while(x<=n)
  {
    y=sum*10+a;                    //获取a或a...a(n个a)
    sum=sum+y;                    //求和
    x++;
  }

  printf("a+aa+aaa+...+aa...a(n个a)=%d\n",sum);  //输出所得结果

  return 0;
}
