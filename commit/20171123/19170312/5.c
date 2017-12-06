#include<stdio.h>
#include<string.h>
int is(const char *str,const char *substr,int i,int len2)
{
    int flag=0,j;
    for(j=0;j<len2;i++,j++)
        if(str[i]!=substr[j])
        {
            flag=1;
            break;
        }
    if(flag==1) return 0;
    else return 1;
}
int substr(const char *str,const char *substr)
{
    int i,len1,len2;
    len1=strlen(str);
    len2=strlen(substr);
    for(i=0;i<len1;i++)
        if(is(str,substr,i,len2)==1)
            return i;
    return -1;
}
int main()
{
    char str[100],sub[100];
    scanf("%[^\n]",str);
    scanf(" %[^\n]",sub);
    printf("%d\n",substr(str,sub));
    return 0;
}
