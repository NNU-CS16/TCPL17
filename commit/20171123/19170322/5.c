    #include <stdio.h>
    #include <string.h>
    int substr_(const char* str, const char* substr)
    {
        char substr1[strlen(substr)];
	int i = 0, j = 0, temp = 0;
	for(i = 0; i<= strlen(str) - strlen(substr); i++)
	{
	    if(str[i] == substr[0])
	    {
	        temp = i;
		for(j = 0; j <= strlen(substr) - 1; j++, temp++)
		{
		    substr1[j] = str[temp];
		}
		if(strcmp(substr1, substr) == 0)
		    return i + 1;
	    }
	}
	return -1;
    }
    int main()
    {
        char str[] = "hello";
	char substr[] = "0";
	printf("%d\n", substr_(str, substr));
	return 0;
    }
