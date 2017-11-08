#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    int l;
    l=strlen(str);
   int i=0; 
   for(i=0;i<l;i++)
   {
   if(str[i]!=str[l-i-1])
   return -1;
   return 0;
   }
}
int main()
{
    char s[1000];
    scanf("%s",s);
    printf("%d",is_str_pal(s));
    return 0;
}

    
