#include<stdio.h>

int GCD_recursive(int m,int n)
{	int i;
	while(n!=0)
	{i=m%n; m=n; n=i;}
	printf("%d", m);
}

int GCD_iterative(int m,int n)
{
	int i=m%n;
	if( i>0 )
	return GCD_recursive(n,i);	
	else printf("%d",n);
}

int main()
{
int m,n;
scanf("%d%d",&m, &n);
GCD_recursive(m,n);
return 0;
}
