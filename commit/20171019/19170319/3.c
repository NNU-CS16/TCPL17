#include<stdio.h>
int main()
{
  int x;
  int a[50];
  int i=0;
  scanf("%d",&x);
  if(x<0)
  {
    printf("fu ");
    x=-x;
  }
  for(i=0;x>=1;++i)
  {
    a[i]=x%10;
    x/=10;
  }
  for(;i>=0;--i)
  {
    switch (a[i])
    {
      case 0:printf("ling ");break;
      case 1:printf("yi ");break;
      case 2:printf("er ");break;
      case 3:printf("san ");break;
      case 4:printf("si ");break;
      case 5:printf("wu ");break;
      case 6:printf("liu ");break;
      case 7:printf("qi ");break;
      case 8:printf("ba ");break;
      case 9:printf("jiu");break;
      default:break;
    }
  }
  return 0;
}
