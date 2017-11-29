    #include <stdio.h>
    void my_strcpy(char* dest, const char* src)
    {
        while ( *src != '\0' )
        {
	    *dest = *src;
	    dest++;
	    src++;
        }
      	*dest = '\0';
    }
    int main()
    {
	char src[10000], dest[10000];
        printf("please input src:");
	scanf("%s", src);
        my_strcpy(dest, src);
	printf("%s\n", dest);
        return 0;    
    }
