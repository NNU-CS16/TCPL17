/*1.c_奇约数*/
#include <stdio.h>

int f(int x);

int main()
{
	int x;
	printf("请输入正整数x：");
	printf("%d\n",f(x));
	return 0;
}

int f(int x)
{
	int i;
	scanf("%d", &x);
	if (x == 1)
		return 1;
	else
	{
		for (i = x; i > 0; --i)
		{
			if (i % 2 == 1 && x % i == 0)
				break;
		}
		return i + f(x - 1);
	}
}
