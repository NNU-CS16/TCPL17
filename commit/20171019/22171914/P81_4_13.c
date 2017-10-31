#include <stdio.h>
int main()
{
  int a,b,c,n;
  printf("请输入n(n>3): "); 
  scanf("%d",&a);
  for(b=2;a>b;b++)
  {
    c=a%b;
    if(c==0)
    break;
    else
    continue;
  }
  if(c==0)
  printf("不是素数");
  else
  printf("素数");
  return 0;
}

     
