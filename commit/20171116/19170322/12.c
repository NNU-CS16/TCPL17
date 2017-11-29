    #include <stdio.h>
    int my_strcmp(const char* str1, const char* str2)
    {
        int i = 0, flag;
	while (*str1 && *str2)
	{
	    if(str1[i] != str2[i])
	    {
	        if(str1[i] > str2[i])
	            return 1;
	        if(str1[i] < str2[i])
	            return -1;
	    }
	    else
	    {	
	        if(str1[i] == str2[i] && str1[i] == '\0')
		    return 0;
		else
		    i++;
	    }
	}
    }
    int main()
    {
        char str1[1000], str2[1000];
	printf("plesae input str1:");
	scanf("%s", str1);
	printf("plesae input str2:");
	scanf("%s", str2);
        printf("%d", my_strcmp(str1, str2));
	return 0;
    }
