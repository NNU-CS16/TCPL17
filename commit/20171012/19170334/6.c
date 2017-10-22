#include <stdio.h>

int main()
{
	int m,n,i,j;
	scanf("%d",&m);
	for(n=1;n<=m;n++)
{
	for(i=1;i<=m-n;i++)
	printf(" ");
	for(j=1;j<=(2*n)-1;j++)
	printf("*");
	printf("\n");
}

	for(n=m-1;n>=1;n--)
{
	for(i=m-n;i>=1;i--)
	printf(" ");
        for(j=(2*n)-1;j>=1;j--)
        printf("*");
	printf("\n");

}
	return 0;
}
