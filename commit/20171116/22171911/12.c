#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1, const char* str2)
{
    int i = 0;
    int num_1, num_2, num;
    for (i = 0; ;i++)
    {
	num_1 = str1[i] - '0';
	num_2 = str2[i] - '0';
	num = num_1 - num_2;
	if (num < 0)
	    return -1;
	if (num > 0)	
	    return 1;
	if (*str1 == '\0' || *str2 == '\0')
	{
	    return 0;
	    break;
	}
    }
}
int main( )
{
    int i, j;
    char str1[1000], str2[1000];
    printf ("请输入数组str1：");
    gets(str1);
    printf ("请输入数组str2：");
    gets(str2);
    printf ("%d",my_strcmp(str1, str2));
    return 0;
}
    
