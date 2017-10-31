#include <stdio.h>

int main()
{
  int x,g,s,b;
  printf("请输入一个正三位整数：");
  scanf("%3d",&x);
  
  b=x/100;
  s=(x-b*100)/10;
  g=x%10;
  
  if(g==0)
  {
    if(s==0)                        //输入值为x00时
      printf("%d\n",b);
    else                            //输入值为xx0时
      printf("%d%d\n",s,b);
  }
  else                              //输入值为xxx时
      printf("%d%d%d\n",g,s,b);
  
  return 0;
}
