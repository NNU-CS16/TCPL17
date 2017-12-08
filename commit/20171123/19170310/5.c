#include<stdio.h>
int substr(const char *str,const char *substr)
{
    int a=strlen(str);
    int b=strlen(substr);
    for(int i=0;i<=a-b;i++)
    if(strncmp(str+i,substr,b)==0)
        return i;
    else
	return -1;
}
int main()
{
substr(const char *str,const char *substr);
}
