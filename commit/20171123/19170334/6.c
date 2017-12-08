#include<stdio.h>//返回 substr 在 str 中出现的次数
#include<string.h>
int count_substr(const char *str, const char *substr)
{
 int l1 = strlen(str);
 int l2 = strlen(substr);
 int sum = 0;
 for (int i=0; i<l1-l2+1; i++)
    {
        if(substr[0] == str[i] && strncmp(str+i, substr,l2) == 0)
        {
            sum += 1;
            i += l2;
        }
    }
    return sum;
}
int main()
{
    char str[100],substr[100];
    scanf("%s%s",str,substr);
    printf("%d\n",count_substr(str,substr));
    return 0;
}
