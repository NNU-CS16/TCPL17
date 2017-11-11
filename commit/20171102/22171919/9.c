#include <stdio.h>
int is_int_pal(int n)
{
	int x = 0,t=n;
	while (t != 0)
	{
		x = x * 10 + t%10;
		t=t/10;
	}
	if(x == n)
		return 0;
	else
		return -1;
}

int main()
{
	int n;
	printf("请输入一个数");
	scanf("%d",&n);
	printf("%d",is_int_pal(n));
	return 0;
}
