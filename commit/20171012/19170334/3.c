#include <stdio.h>

int main()

{
	int m,n,a;
	int b=0;
	int sum=0;
	scanf("%d,%d",&a,&n);
	for(m=1;m<=n;m++)
	{
	b=a+b*10;
	sum=sum+b;
	}
	printf("a+aa+aaa+...+aa...a(n个a)的值为%d\n",sum);
	return 0;
}
