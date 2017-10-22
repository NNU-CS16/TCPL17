#include<stdio.h>
int main()
{
  int a,i=0,n,j=1,sum=0;
  printf("请输入a,n的值：");
  scanf("%d%d",&a,&n);
  while(j<=n)
  {
    i=i*10+a;
    sum=sum+i;
    j++;
  }
  printf("a+aa+aaa+...=%d\n",sum);
  return 0;



}
