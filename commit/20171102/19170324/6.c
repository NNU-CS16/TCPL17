#include <stdio.h>

int is_prime(int n);

int main()
{
	int a[1000],k,n;
	for(k=0,n=2;k<=1000;n++)
	   if(is_prime(n)==0) a[k++]=n;

	for(k=99;k<=999;k++)
	   printf("%d ",a[k]);

	printf("\n");
	return 0;
}

int is_prime(int n)
{
	int i,flag;
	for(i=2,flag=0;i<=n/2;i++)
	{
	   if(n%i==0)
	   {
		flag=-1;
		break;
	   }
	}

	return flag;
}
