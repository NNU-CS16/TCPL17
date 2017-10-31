#include<stdio.h>
int main()
{
	int n,m;
	int i,a[100];
	printf("Please input n(1<=n<=100),m(m>=0):");
	scanf("%d%d",&n,&m);
	printf("Please input the %d numbers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i>m)
		{
		a[i]=a[i-m];
		}
		else
		{
		a[i]=a[i+n-m];
		}
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}

