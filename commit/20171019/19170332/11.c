#include<stdio.h>
int main()
{
 long i,j,n,k;
 printf("请输入要输出的杨辉三角的行数：");
 scanf("%ld",&n);
 for(i=1;i<=n;i++)
 {
  k=1;
  for(j=1;j<=i;j++)
  {
   printf("%5ld",k);
   k=k*(i-j)/j;
  }
  printf("\n");
 }
}
