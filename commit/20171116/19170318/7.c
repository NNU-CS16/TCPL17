#include <stdio.h>
#include <string.h>

int main()
{

	char temp[1010];
	int a[1010] = { 0 }, b[1010] = { 0 }, c[1010] = { 0 };
	int i;
	int lena, lenb, len;
	scanf( "%s", temp );
	lena = strlen( temp );
	for ( i = 0; i < lena; i++ )
		a[i] = temp[lena - i -1] - '0';
	scanf( "%s", temp );
	lenb = strlen( temp );
	for ( i = 0; i < lenb; i++ )
		b[i] = temp[lenb - i -1] - '0';
	len = lena > lenb ? lena : lenb;

	i = 0;
	while ( i < len )
	{
		c[i] += a[i] + b[i];
		c[i + 1] = c[i] / 10;
		c[i] = c[i] % 10;
		i++;
	}
	if ( c[i] > 0 ) len++;

	for ( i = len - 1; i >= 0; i-- ) printf( "%d", c[i] );
	printf( "\n" );

	return 0;

}
