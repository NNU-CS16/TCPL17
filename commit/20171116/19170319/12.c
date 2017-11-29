#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1,const char* str2)
{
    int n = (strlen(str1) > strlen(str2)) ? strlen(str1) : strlen(str2);
    int i;
    for (i = 0;i < n;i++ )
    {
        if (str1[i] == str2[i])
            continue;
        if (str1[i] > str2[i])
            return 1;
        if (str1[i] < str2[i])
            return -1;
    }
    return 0;
}
int main()
{
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%d",my_strcmp(str1,str2));
    return 0;
}
