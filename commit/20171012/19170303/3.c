#include<stdio.h>
int main()
{
	int i,n,a,sum=0;
 printf("请输入n与a的值：");
 scanf("%d,%d",&n,&a);
 for(i=0;i<n;i++)
 { sum+=a;
 a=a*10+a;}
printf("sum=%d\n",sum);
return 0;
}
