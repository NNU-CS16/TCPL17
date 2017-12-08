#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr);
int main()
{
    int a;
    char str1[100], str2[100];
    printf("请输入主串：\n");
    gets(str1);
    printf("请输入子串：\n");
    gets(str2);
    a = substr(str1, str2);
    printf("%d\n", a);
    return 0;
}
int substr(const char* str, const char* substr)
{
    int i = -1, j = 0, len;
    len = strlen(substr);
    for( ; *str; str++)
    {
       i++;
       if(*str == *substr)
       {
         while(*substr)
         {
             if(*substr == *str)
             {
               j++;
               str++;
               substr++;
             }
             else
               substr++;
         }
             if(j == len)
               return i;
             else
             {
               substr = substr - len + 1;
               str = str - j + 1;
             }
            
       }
    }  
    return i;     
}
