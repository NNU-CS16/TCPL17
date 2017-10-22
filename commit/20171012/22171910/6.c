/*打印字符菱形*/
#include <stdio.h>
int main()
{
  int i,j,k,n;
  printf("请输入菱形二分之一对角线行数N(N<13)");
  scanf("%d",&n);      //输入n

  if(n<13)             //限定N的范围
  {
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n-i;j++)
        printf(" ");
      for(k=1;k<=2*i-1;k++)
        printf("*");
      printf("\n");         //打印菱形上半部分
    }

    for(i=n-1;i>=1;i--)     
    {
      for(j=n-i;j>=1;j--)
        printf(" ");
      for(k=2*i-1;k>=1;k--)
        printf("*");
      printf("\n");        //打印菱形下半部分
    }
  }
  else
    printf("N取值应小于13\n");   //超出限定范围予以提醒
  return 0;
}
