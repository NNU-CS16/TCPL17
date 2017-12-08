#include <stdio.h>
int f(int x)
{
	if(x%2 != 0)
		return x;
	else
	{
		while(x%2 == 0)
		{
			x = x/2;
		}
		return x;
	}
}

int main()
{
	int N,x,sum=0;
	printf("请输入N=");
	scanf("%d",&N);
	for(x=1;x<=N;x++)
		sum=sum+f(x);
	printf("%d\n",sum);
	return 0;
}
