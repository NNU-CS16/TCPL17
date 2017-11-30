    #include <stdio.h>
    int my_strlen(const char* str)
    {
	int i;
	for(i = 0; i<=10000; i++)
	    if(str[i] == '\0')
	        break;
	return i;
    }
    int main()
    {
	char str[1000];
        printf("please input str:");
	scanf("%s", str);
	printf("%d", my_strlen(str));    
    }
