#include<stdio.h>

int bin_insert(int n, int m, int j, int i)
{
	int a[33];
	int p,q;
	int sum=0,dou=1;
	for(p=0; n!=0; p++)
	{
		a[p]=n%2;
		n/=2;
	}
	q=p;
	for(p=0; m!=0; p++)
	{
		a[j+p]=m%2;
		m/=2;
	}
	for(p=0; p<q; p++)
	{
		sum+=a[p]*dou;
		dou*=2;
	}
	return sum;
}

int main( )
{
	printf("%d\n",bin_insert(1024,19,2,6));
	return 0;
}
