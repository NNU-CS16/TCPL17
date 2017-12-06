#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr);

int main()
{
    int res;
    char a[100];
    char b[100];
    printf ("主串：");
    gets (a);
    printf ("子串：");
    gets (b);
    res = substr(a , b);
    printf ("%d\n" , res);
    return 0;
}

int  substr(const char* str, const char* substr)
{
    int len1 , len2;
    int i , j;
    len1 = strlen (str);
    len2 = strlen (substr);
    for (i = 0; i <= len1 - len2; i++)
    {
        if (strncmp(str+i,substr,len2)==0)//用来比较s1和s2字符串的前maxlen个字符。
            return i;//如果两个字符串相等的话，strncmp将返回0
    }
    return -1;

}

