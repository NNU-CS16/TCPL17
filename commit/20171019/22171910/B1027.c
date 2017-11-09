/*打印沙漏*/
#include<stdio.h>
int main()
{
  int a,b,n,i,j,k;
  char c;
  scanf("%d %c",&a,&c);
  b=1;
  while(2*b*b-1<=a)
  {b++;}
  n=b-1;              //确定打印行数
  for(i=1;i<=n;i++)                      //打印沙漏上半部分
  {
    for(j=1;j<i;j++) printf(" ");
    for(k=1;k<=2*n-2*i+1;k++) printf("%c",c);
    printf("\n");
  }
  for(i=n-1;i>=1;i--)                   //打印沙漏下部分
  {
    for(j=i-1;j>=1;j--) printf(" ");
    for(k=2*n-2*i+1;k>=1;k--) printf("%c",c);
    printf("\n");
  }
  printf("%d",a-2*n*n+1);              //输出多余数字
  return 0;
}
