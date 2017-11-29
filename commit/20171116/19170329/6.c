  #include <stdio.h>
  #include <string.h>
  void k_reverse( char* str, int k );

  int main()
  {
	int k;
	char str[1000];

	scanf("%s %d", str, &k);
	k_reverse( str, k );
	printf("%s\n", str);

	return 0;
  }

  
  void k_reverse( char* str, int k )
  {
	char temp;
	int i, j =  k/2, len = strlen(str) ;
	int a = 0;

	while( len - a >= k )
	{
		
		for( i = 0; i < j; i++ )
		{
			temp = str[i + a] ;
			str[i + a] = str[k + a - i - 1];
			str[ k + a -i - 1] = temp;
		}
		
		a += k;
	}
			
  }

	
	

	
 	
	
