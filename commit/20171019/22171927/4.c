#include<stdio.h>
int main(void)
{
  int n,x,y;
  int flag=0;
  printf("请输入n的值:");
  scanf("%d",&n);
  int half=n/2;
  for(x=1; x<=half; ++x)
  {
    for(y=x;y<=half;++y)
    {
      if(x*x+y*y==n)
        {flag=1;
         printf("%d %d",x,y);
        }
     }
  }

  if(!flag)
     printf("No solutiom\n");
  return 0;
}
