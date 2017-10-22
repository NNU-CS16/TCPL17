#include<stdio.h>
int main()
{
	int i,s=1,sum=0;
	for (i=1;i<=10;i++)
	{
		s=s*i;
		sum=sum+s;
	}
	printf("%d",sum);
	return 0;
}
