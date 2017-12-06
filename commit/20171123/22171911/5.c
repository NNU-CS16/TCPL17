#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Substr(const char* str, const char* substr)
{
    int i = 0, j;
    int len, k;
    len = strlen(substr);
    while (str[i] != '\0')
    {
	k = i;
	if (str[i] == substr[0])
        {   
	    for (j = 1; j < len; j++, i++)
	    {
	        if (str[i] != substr[j])
		    break;
	        if (j == len)
	            return k;
	    }
        }
        i++;
    }
    return -1;
}
int main( )
{
    char str[100], substr[100];
    printf ("请输入字符串str:");
    gets(str);
    printf ("请输入字符串substr:");
    gets(substr);
    printf ("%d", Substr(str, substr));
    return 0;
}



         
        
