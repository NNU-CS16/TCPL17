#include<stdio.h>
#include<string.h>
int my_strcmp(const char *str1,const char *str2)
{
    int l1=strlen(str1),l2=strlen(str2),min,i;
    if(l1<l2) min=l1;
    else min=l2;
    for(i=0;i<min;i++)
    {
        if(str1[i]>str2[i]) return 1;
        if(str1[i]<str2[i]) return -1;
    }
    if(min==l1 && min!=l2) return -1;
    if(min==l2 && min!=l1) return 1;
    if(l1==l2) return 0;
}
int main()
{
    char str1[1000],str2[1000];
    scanf("%[^\n]",str1);
    scanf(" %[^\n]",str2);
    printf("%d\n",my_strcmp(str1,str2));
    return 0;
}
