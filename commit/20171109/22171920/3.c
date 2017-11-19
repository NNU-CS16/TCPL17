#include <stdio.h>
int stair(int N)
{
	int a=1, b=1, c, d, i;
	if (N==1||N==2)
	d=1;
	if (N>=3)
	{
		for (i=N-3; i>=0; i--)
		{
		c=a+b;
		a=b;
		b=c;
		}
	}
	d=c;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("the number of the ways to upstair is:%d\n", stair(N)%100007);
	return 0;
}
