    #include <stdio.h>
    #include <string.h>
    int count_substr(const char* str, const char* substr)
    {
	int times = 0;
        char substr1[strlen(substr)];
	int i = 0, j = 0, temp = 0;
	for(i = 0; i<= strlen(str) - strlen(substr); )
	{
	    if(str[i] == substr[0])
	    {
	        temp = i;
		for(j = 0; j <= strlen(substr) - 1; j++, temp++)
		{
		    substr1[j] = str[temp];
		}
		if(strcmp(substr1, substr) == 0)
		{    
		    times++;
		    i = i + strlen(substr);
		}
		else
		    i++;
	    }
	    else
	        i++;
    	}
	return times;
    }

    int main()
    {
        char str[] = "soso";
	char substr[] = "so";
	printf("%d\n", count_substr(str, substr));
	return 0;
    }

