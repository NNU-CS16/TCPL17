#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1, const char* str2);

int main()
{
    const char* str1;
    const char* str2;
    char a[10], b[10];
    gets (a);
    gets (b);
    str1 = a;
    str2 = b;
    printf("%d\n", my_strcmp(str1, str2));
    return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
    int i , flag = 0;
    int len1 = strlen (str1);
    int len2 = strlen (str2);
    if (len1 > len2)
        len1 = len2;

    for (i = 0; i <= len2; i++)
    {
        if (str1[i] == str2[i] && i < len2)
	        continue;
    	if (str1[i] == str2[i] && i == len2)
	        return flag;
  	    if (str1[i] < str2[i])
	    {
	        flag = -1;
	        return flag;
	    }
	    if (str1[i] > str2[i])
        {
	        flag = 1;
	        return flag;
        }
    }
}
