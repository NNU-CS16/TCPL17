#include<stdio.h>
#include<math.h>
int main()
{
int i,n,j;
printf("请输入大于3 的n值：");
j=sqrt(n);
scanf("%d",&j);
for(i=2;i<=j;i++)
	if(j%i==0)
	break;
	if(i<j)
	printf("不是素数\n");
	else
	printf("是素数\n");
	return 0;
}
