  #include <stdio.h>

  int main()
  {
	int sum = 0;
	int i = 0, j = 0;
	char c;
	c = getchar();

	while( c != '\n' )
	{
		if( c >= 'a' && c <= 'z')	
			sum += c - 96;
		else if(c >='A' && c <= 'Z')
			sum += c - 64;
		c = getchar();
	}

	while( sum != 0)
	{
		if(sum & 1 == 1) i++;
		else j++;
		sum >>= 1;
	}

	printf("%d %d\n", j, i);
	
	return 0;
  } 		
