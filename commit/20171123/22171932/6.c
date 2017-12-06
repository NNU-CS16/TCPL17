	#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);
int main()
{
    int a;
    char str[100], substr[10];
    printf("请输入主串：\n");
    gets(str);
    printf("请输入子串：\n");
    gets(substr);
    a = count_substr(str, substr);
    printf("%s在%s中出现了%d次。\n", substr, str, a);
    return 0;
}
int count_substr(const char* str, const char* substr)
{
    int a = 0, b, len, i = 0;
    len = strlen(substr);
    while(*str)
    {
       b = a;
       if(*str == *substr)
       {
          while(*substr)
          {
            if(*str == *substr)
            {
               str++;
               substr++;
               i++;
            }
            else 
            {
               substr++;
               continue;
            }
          }
            if(i == len)
            {
               a++;
               substr = substr - len;
            }
            else
               substr = substr - len;
       }
       if(a == b)
          str = str - i;
       else
          str = str - 1;
       i = 0;
       str++;
    }
    return a;
}
