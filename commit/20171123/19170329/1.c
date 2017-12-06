  #include <stdio.h>

  int f ( int i )
  {
	int j, max = 1;
	for( j = 1; j <= i; j++ )
	{
		if( (i % j) == 0 && j % 2 == 1 )
			max = j;
	}
	
	return max;
  }

  int main()
  {
	int n, s = 0, i;

	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		s += f (i);
	}
	printf("%d\n", s);

	return 0;
  }
