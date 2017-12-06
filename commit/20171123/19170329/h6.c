  #include <stdio.h>
  #include <string.h>
  int count_substr( const char* str, const char* substr );

  int main()
  {
	char str[100], substr[100];
        fgets(str, 100, stdin);
        fgets(substr, 100, stdin);
        printf("%d\n",count_substr( str, substr));
        return 0;
  }

  int count_substr(const char* str, const char* substr)
  {
        int len1 = strlen(str) - 1, len2 = strlen(substr) - 1;
        int count = 0, i, j;

	for(i = 0; i<len1;i++)
	{
		if(str[i] == substr[0])
		{
			for(j=0;j < len2;j++)
			{
				if(str[i+j] != substr[j])
					break;
			}
			if(j == len2)
			{
					
				count++;
				i += j - 1;
			}
		}
	}
	return count;
  }	
  
