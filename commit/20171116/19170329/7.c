  #include <stdio.h>
  #include <string.h>

  int main()
  {
	int a[1000] = {0}, b[1000] = {0}, s[2000] = {0};
	char a1[1000], b1[1000];
	int i, j, x = 0, k = 0 ;
	int lena1, lenb1;	
	
	scanf("%s %s", a1, b1);
	
	lena1 = strlen( a1 );
	lenb1 = strlen( b1 );

	for( i = 0; i < lena1; i++ )
		a[i] = a1[i] - '0';
	for( j = 0; j < lenb1; j++ )
		b[j] = b1[j] - '0';

	for( i = lena1 - 1, j = lenb1 - 1; i >= 0, j >= 0; i--,j--)
	{
		s[k] = a[i] + b[j] + x;
		x = s[k] / 10;
		s[k] %= 10;
		k++;
	}

	while( i >= 0 )
	{
		s[k] = a[i] + x;
		x = s[k] / 10;
		s[k] %= 10;
		k++;
		i--;
	}
	while( j >= 0 )
	{
		s[k] = b[j] + x;
		x = s[k] / 10;
		s[k] %= 10;
		k++;
		j--;
	}
	
	if( x == 0 )
		k --;
	for( i = k ; i >= 0; i -- )
		printf("%d", s[i]);
	
	printf("\n");

	return 0;
  }	
