#include <stdio.h>
int main()
{
	int n,a,b;

	printf("请输入一个十进制的数:");
	scanf("%d",&n);

	a=n>>4;
	b=n&((1<<4)-1);

	printf("%d\n",a*10+b*1);

	return 0;
}
