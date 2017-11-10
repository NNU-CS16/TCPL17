#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str); 
int main()
{

char str[100];
scanf("%s", &str[0]);
printf("%d\n", is_str_pal(str));

return 0;
}
int is_str_pal(const char* str)
{
int b,c,i;
b=strlen(str);
c=b;
for(i=0;i<c/2;i++)
  {if(str[i]!=str[c-i-1])
   {return -1;}}
   return 0;
}
