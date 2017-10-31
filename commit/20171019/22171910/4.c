/*求函数X^2+Y^2=N的所有整数解*/
#include<stdio.h>
#include<math.h>
int main()
{
  int a,x,b=1;
  float y;
  scanf("%d",&a);
  if(a<0) printf("error");        //限制a为非负数
  for(x=1;x<sqrt(a/2);x++)       //限制x<y
  {
    y=sqrt(a-x*x);
    if((int)y==y)               //判断y是否为整数
    {
      printf("%d %.0f\n",x,y);   //输出整数y
      b++;
    }
  }
  if(b==1) printf("No Solution");  //判断该式是否有解
  return 0;
}
