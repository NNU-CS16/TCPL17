#include <stdio.h>//返回 substr 在 str 中第一次出现的位置（数组下标）
#include <string.h>
int substr(const char* str, const char* substr);

int main()
{
    int res;
    char a[100];
    char b[100];
    printf ("主串：");
    scanf("%s", a);
	getchar();
    printf ("子串：");
    scanf("%s", b);
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
        if (strncmp(str+i,substr,len2)==0)
            return i;
    }
    return -1;

}
