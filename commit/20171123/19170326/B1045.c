#include<stdio.h>

int main( )
{
	int i,k=-1;
	int count=0;
	int N;
	scanf("%d\n",&N);
	int a[100];
	int b[100];
	for( i=0; i<N; i++ )
		scanf("%d",&a[i]);
	if(a[0]<a[1])
	{
		count++;
		b[++k]=a[0];
	}
	for( i=1; i<N-1; i++ )
	{
		if( a[i]>a[i-1]&&a[i]<a[i+1] )
		{
			count++;
			b[++k]=a[i];
		}
	}
	if(a[N-2]<a[N-1])
	{
		count++;
		b[++k]=a[N-1];
	}
	printf("%d\n",count);
	for( i=0; i<count-1; i++ )
		printf("%d ",b[i]);
	printf("%d\n",b[i]);
	return 0;
}
