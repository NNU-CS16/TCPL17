#include<stdio.h>
int main()
{
  int x,g,s,b;
  
  printf("请输入一个正3位数：");
  scanf("%3d",&x);
  
  b=x/100;
  s=(x-100*b)/10;
  g=x%10;
  
  if(g!=0)  printf("%d%d%d\n",g,s,b);
    else if(s!=0)  printf("%d%d\n",s,b);
      else   printf("%d\n",b);

  return 0;
}
