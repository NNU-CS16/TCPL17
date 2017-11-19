#include <stdio.h>
int GCD_recursive(int,int);
int LCM(int,int);

int LCM(int m,int n)
{
	return m*n/GCD_recursive(m,n);
}

int GCD_recursive(int m,int n)
{
	int temp;
	while (n%m!=0)
	{
		temp=m;m=n%m;n=temp;
	}
return m;
}

int main()
{
	int n,m,temp;
	scanf("%d,%d",&n,&m);
	if (m>n) {temp=m;m=n;n=temp;}
	printf("%d\n",LCM(m,n));
	return 0;
}	
