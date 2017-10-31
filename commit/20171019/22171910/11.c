/*打印杨辉三角*/
#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("请输入杨辉三角行数");     //确定打印的杨辉三角行数
  scanf("%d",&n);
  for(i=1;i<=n;i++)                //定义数值大小
  {
    k=1;
    for(j=1;j<i;j++)
    {
      printf("%d ",k);           //输出相应值
      k=k*(i-j)/j;
    }
    printf("%ld ",k);
    printf("\n"); 
  }
  return 0;
}
