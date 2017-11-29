  #include <stdio.h>
  #include <assert.h>

  void my_strcpy( char* dest, const char* src )
  {
	assert(dest != NULL && src != NULL);
	
	while ( *src != '\0' )
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;	
  }

  int main()
  {
	char dest[100] = {0}, src[100];
	scanf("%s", src);
	scanf("%s",dest);
	my_strcpy( dest, src );
	printf("%s\n", dest);
	return 0;
  }
	
