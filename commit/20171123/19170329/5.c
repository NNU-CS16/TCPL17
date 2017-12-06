  #include <stdio.h>
  #include <string.h>
  int substr1(const char* str, const char* substr);

  int main()
  {
	char str[100];
	char substr[100];
	fgets( str, 100, stdin ); fgets( substr, 100, stdin );
	printf("%d\n", substr1( str, substr));
	return 0;
  }

  int substr1(const char* str, const char* substr)
  {
	int flag=0,t=0;
	int len1 = strlen( str ) - 1, len2 = strlen( substr ) - 1;
	for(int i = 0 ; i < len1; i++)
	{
		if(str[i] == substr[0])
		{	
			t=i;
			for(int j = 0; j < len2; j++)
			{
				if( str[i + j] == substr[j] )
					flag++;
			}
			if(flag == len2)
				break;
			else
				t=-1;
		}
	}
	return t;
	
  }		 	
	
  
