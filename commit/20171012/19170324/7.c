#include <stdio.h>
int main()
{
	int a,b,c,n;

	printf("请输入一个正3位数:");
	scanf("%d",&n);

	a=n/100;
	b=(n%100)/10;
	c=n%10;

	printf("%d\n",c*100+b*10+a*1);

	return 0;
}
