#include <stdio.h>
#include <string.h>
void reverse(char* str);
int main ()
{
   char str[100];
   scanf("%s",str);
   reverse(str);
   printf("%s\n",str);
   return 0;
}
void reverse(char* str)
{
   char s[100];
   strcpy(s,str);
   int  len=strlen(s),a;
   for(a=0;a<len;a++)
     str[a]=s[len-a-1];
}
   
