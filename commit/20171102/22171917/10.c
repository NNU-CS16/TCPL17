#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str);

int main()
{
   char str[1000];
   scanf("%s",str);
   printf("%d\n",is_str_pal(str));
   return 0;
}

int is_str_pal(const char* str)
{
     char i,j;
     for(i=0,j=strlen(str)-1;j>i;i++,j--)
      if(str[i]!=str[j])
        return -1;
      else
        return 0;
}
    
