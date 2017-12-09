#define _GNU_SOURCEOURCE
#include <stdio.h>
#include <string.h>


int substr(const char* str, const char* substr)
{
    char* arr;
    arr = strcasestr(str,substr);
    if (!arr)
        return -1;
    else 
        return arr-str+1;
}

int main ()
{
    char* str;
    char* str1;
    scanf("%s%s",str,str1);
    char a;
    a = substr(str,str1);
    printf("%s",a);
    return 0;
}
