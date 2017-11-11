#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str); 
int main()
{
const char str;
str=getchar();

if(is_str_pal(str)==0)
  printf("%s是回文数\n",str);
if(is_str_pal(str)==-1)
  printf("%s不是回文数\n",str);
return 0;
}
int is_str_pal(const char str)
{
int i,j;
int flag=0;
for(i=0,j=strlen(str)-1;j>i;i++,j--)
if( str[i]!=str[j])
{
flag=-1;
break;
}
return flag;
}
