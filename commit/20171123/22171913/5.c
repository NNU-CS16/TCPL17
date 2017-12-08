#include <stdio.h>
#include <string.h>
int Substr(const char* str, const char* substr);
int main()
{
    char str[10000];
    char substr[10000];
    printf("Please input: ");
    scanf("%s,%s", str, substr);
    printf("%d\n", Substr(str, substr));
    return 0;
}
int Substr(const char* str, const char* substr)
{
    int i, j, temp;
    for ( i = 0; i <= strlen(str) - 1; i++)
    {
	temp = i;
	if (str[i] == substr[j])
	{
            for (j = 0; j <= strlen(substr) - 1; i++, j++)
	    {
		if (str[i] != substr[j])
		    break;
		else
		    return i - strlen(substr);
	    }
	}
	i = temp;
   }
   return -1;
	        
}


    
