#include<stdio.h>
#include<string.h>
int is_str_pal(const char *str)
{
 int min=0,max,len;
 len=strlen(str);
 max=len-1;
 for(;min<=max+1;)
 {
  if(len==0||len==1)return 0;
  if(str[min]!=str[max])return -1;
  min++;max--;len-=2;
 }
}
int main()
{
 char s[1000];
 scanf("%s",s);
 printf("%d\n",is_str_pal(s));
 return 0;
}
