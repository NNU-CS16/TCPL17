#include <stdio.h>
#include <string.h>
int count_substr(const char* str,const char* substr);
int main()
{
    char str[50];
    char substr[20];
    int a;
    scanf("%s%s", str, substr);
    a = count_substr(str,substr);
    printf("%d", a);
    return 0;
}
int count_substr(const char* str,const char* substr)
{
    int a,i,j,len;
    a = 0;
    j = 0;
    len = strlen(substr);
    for(i = 0; str[i] != '\0'; i++)
    {
	while ((str[i] == substr[j]) && (substr[j] != '\0'))
        {
            i++;
            j++;
	}
        if (substr[j] == '\0')
        {
            j = 0;
            a++;
            i--;
	}
	if(str[i] != substr[j])
        {
	    j=0;
	}
    }
    return a;
}
