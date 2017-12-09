#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr)
{
    int i = 0, j;
    int len, k = 0;
    len = strlen(substr);
    while (str[i] != '\0')
    {
        if (str[i] == substr[0])
        {
            for (j = 1; j < len; j++, i++)
            {
                if (str[i] != substr[j])
                    break;
                if (j == len)
		{
                    k++;
		    i--;
		}
	    }
	}
        i++;
    }
    return k;
}
int main( )
{
    char str[100], substr[100];
    printf ("请输入主串：");
    gets(str);
    printf ("请输入子串：");
    gets(substr);
    printf ("%d", count_substr(str, substr));
    return 0;
}    
