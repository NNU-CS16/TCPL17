#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int letter[26]={0};
    int i,len,max=0;
    scanf("%[^\n]",str);
    len=strlen(str);
    for(i=0;i<=len-1;i++)
        if(str[i]>='a'&&str[i]<='z')
            letter[str[i]-'a']++;
    for(i=0;i<=len-1;i++)
        if(str[i]>='A'&&str[i]<='Z')
            letter[str[i]-'A']++;
    for(i=0;i<=25;i++)
        if(letter[i]>max)
            max=letter[i];
    for(i=0;i<=25;i++)
        if(max==letter[i])
        {
            printf("%c %d\n",i+'a',max);
            break;
        }
}
