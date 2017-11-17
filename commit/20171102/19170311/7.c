#include<stdio.h>

int GCD_iterative(int m,int n)
{
	int r;
	do
	{r=m%n;
	 if (r==0)
	 break;
	m=n;n=r;}
	while (1);

	return n;
}

int main(void)
{
	int a,b;

	scanf("%d %d",&a,&b);

	printf("%d\n",GCD_iterative(a,b));

	return 0;
}
