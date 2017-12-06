#include <stdio.h>
#include <string.h>
int Substr(const char* str,const char* substr);
int main()
{
    char str[100];
    char substr[50];
    int a;
    scanf("%s%s", str,substr);
    a = Substr(str,substr);
    printf("%d", a);
    return 0;
}
int Substr(const char* str,const char* substr)
{
    int b,a,i,j,len1,len2;
    j = 0;
    b = 0;
    len1 = strlen(str);
    len2 = strlen(substr);
    for (i = 0; str[i] != '\0'; i++)
    {
        while (str[i] == substr[j] && substr[j] != '\0')
        {   
	    i++;
            j++;
        }
             if (str[i] != substr[j] && str[i] != '\0')
             {
                 
                  j=0;
             }
              
        if (substr[j] == '\0')
            {
		a = i-j;
                i = len1;
	    }
    }
    if ((j == 0) || (j != len2))
        return -1;
    else
        return a;
}
