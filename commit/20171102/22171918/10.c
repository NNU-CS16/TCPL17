#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str);
int main ()
{
   char s[1000];
   scanf("%s",s);
   printf("%d\n",is_str_pal(s));
   return 0;
}
int is_str_pal(const char* str)
{
   int len=strlen(str);
   int i;
   for(i=0;i<len;i++)
      if(str[1]!=str[len-i-1])
      return -1;
      else 
      return 0;
}
  
