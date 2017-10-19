#include<stdio.h>
int main()
{
	int i;
	int n=100,sum=0;

	for(i=0;i<=n;i+=2)
	sum+=i;

	printf("%d\n",sum);

	return 0;
}
