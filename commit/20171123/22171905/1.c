#include <stdio.h>

int doit( int N )
{
	int i;
	for ( i = N; i >= 1; i-- )
		if ( i % 2 && N % i == 0 ) return i;
}

int main()
{
	int N, i, sum = 0;
	printf("请输入一个正整数：");
	scanf("%d",&N);
	for ( i = 1; i <= N; i++ )
		sum += doit( i );
	printf("%d\n",sum);
}
