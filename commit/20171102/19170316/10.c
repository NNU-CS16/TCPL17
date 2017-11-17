#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{       int i;
        i=strlen(str);
        int k;
        for(k=0;k<(i/2);k++)
        if(str[k]==str[i-k-1])
        return 0;
        else return -1;
}
int main()
{
char s[100];
scanf("%s",s);
printf("%d",is_str_pal(s));
return 0;
}

