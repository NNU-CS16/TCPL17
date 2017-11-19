#include <stdio.h>
int main()
{
	int a = 123;
	int b = 456;
	int n = 8;
	int d = 136;
	int d8[100]={};
	int i = 1;
	int q;
	scanf("%d%d%d",&a,&b,&n);
	d = a + b;//printf("%d",d%8);
	d8[0] = d % n;
	while ( d / n != 0 )
	{
		d = d / n;
		d8[i] = d % n;
		i++;
	}
	for ( int j = i - 1; j >= 0; j-- )
	{
		printf ( "%d\n",d8[j] );
	}

	return 0;
}
