#include<stdio.h>
#include<string.h>
    int is(const char *str,const char *substr,int i,int len2)
{
    int flag = 0,j;

    for(j = 0;j < len2;i++,j++)
    if(str[i] != substr[j])
        {
            flag = 1;
            break;
        }
    if(flag == 1) return 0;
    else return 1;
}
    int count_substr(const char *str,const char *substr)
{
    int i,num = 0, len1,len2;

    len1 = strlen(str);
    len2 = strlen(substr);
    for(i = 0;i < len1;i++)
    if(is(str,substr,i,len2) == 1)
        {
            num++;
            i += len2-1;
        }
    return num;
}
    int main()
{
    char str[30], substr[30];

    scanf("%[^\n]",str);
    scanf(" %[^\n]",substr);
    printf("%d\n",count_substr(str,substr));
    return 0;
}
