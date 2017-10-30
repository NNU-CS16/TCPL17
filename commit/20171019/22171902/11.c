#include<stdio.h>
int yang(int i,int k);
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
for(i=0;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("    ");
		for(k=0;k<=i;k++)
			printf("%-4d    ",yang(k,i));
		printf("\n");
	}
	return 0;
}
int fun(int n)
{
	if(n)
		return n*fun(n-1);
	else 
		return 1;
}


int yang(int m,int n)
{
	return fun(n)/fun(m)/fun(n-m);
}

