#include <stdio.h>
int main()
{
	int A, B, D;
	scanf("%d %d %d", &A, &B, &D);
	int ans = A + B;
	int n[1000] = {0};
	int count = 0;
	if ( ans == 0 ) 
	{
		printf("0");
		return 0;
	}
	while ( ans > 0 ) 
	{
		n[count ++ ] = ans % D;
		ans /= D;
	}
	for ( int i = count - 1; i >= 0; i -- ) 
	{
		printf("%d", n[i]);
	}
	return 0;
}
