#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[23];
	int i,j,n,temp;
	for(i=1;i<=N;i=i+2)
	if((i*i+2*i-1)/2>N)
	break;
	n=i-2;
	for(i=1;i<=(n+1)/2;i++)
	arr[i]=i-1;
	for(i=(n+1)/2;i<=n;i++)
	arr[i]=arr[n+1-i];
	for(i=1;i<=n;i++)
{
	for(j=1;j<=arr[i];j++)
	printf(" ");
	temp=n-2*arr[i];
       	for(j=1;j<=temp;j++)
	printf("*");
	printf("\n");
}
	N=N-(n*(n+2)-1)/2;
	if(N!=0)
	printf("%d\n",N);
	return 0;
}
