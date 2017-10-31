#include<stdio.h>
#include<string.h>
int main()
{
char str[90];
char *p,*s;
int length;
gets(str);
length=strlen(str);
for(p=str+length-1;p!=str;p--)
{
if(*p==' ')
{for (s=p+1;*s!=' '&&*s;s++){printf("%c",*s);}printf(" ");}
}
for(s=str;*s!=' '&&*s;s++)
{printf("%c",*s);}
return 0;
}
