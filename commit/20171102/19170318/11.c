#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    char s[1000];
    strcpy(s,str);
    int len=strlen(s);
    for (int i=0;i<len;i++)
      str[i]=s[len-i-1];
}

int main()
{
    
    char s[1000];
    scanf("%s",s);
    reverse(s);
    printf("%s\n",s);
    return 0;

}
