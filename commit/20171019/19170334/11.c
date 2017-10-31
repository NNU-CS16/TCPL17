#include <stdio.h>
#include <stdlib.h>
#define L 14
int main()
{
	int l;
	scanf("%d",&l);
	int a[L][L];
	int i,j,k;
	for(i=1;i<=l;i++)
	{
	a[i][1]=1;
	a[i][i]=1;
	}
	for(i=3;i<=l;i++)
	for(j=2;j<i;j++)
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	
	for(i=1;i<=l;i++){
	for(k=1;k<=l-i;k++)
	printf("   ");
	for(j=1;j<=i;j++)
	printf("%6d",a[i][j]);
	printf("\n");
	}
	printf("\n");
	return 0;
}
