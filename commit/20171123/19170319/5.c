#include <stdio.h>
#include <string.h>
int substr(const char* str,const char* substr)
{
    int i = 0,j = 0;
    int n = strlen(str);
    for (i = 0;i < n;i++)
    {
        if (str[i] == substr[j])
        {
            n = i + 2;
            j++;
        }
    }
    if (j == strlen(substr))
        return i - 1 - strlen(substr);
    else 
        return-1;
}
int main()
{
    char str1[20] = "I dislike C";
    char str2[10] = "like";
    printf("%d\n",substr(str1,str2));
    char str3[10] = "love";
    printf("%d",substr(str1,str3));
    return 0;
}
