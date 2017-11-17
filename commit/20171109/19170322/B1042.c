    #include <stdio.h>
    #include <string.h>
    int ascii[26];
    int main()
    {
        char c[1001];
	gets(c);
	int max = 0;
	char maxChar;
	for(int i = 0; i < strlen(c); ++i)
	{
	    if(c[i] >= 'A' && c[i] <= 'Z')
	        ++ascii[c[i] - 65];
	    else 
	        if(c[i] >= 'a' && c[i] <= 'z')
	            ++ascii[c[i] - 97];
        }
	for(int i = 0; i < 26; ++i)
	{
	    if(ascii[i] > max)
	    {
	        max = ascii[i];
	        maxChar = i + 97;
      	    }
	}
	printf("%c %d\n", maxChar, max);
        return 0;
    }
