#include <stdio.h>
#include <string.h>
void reverse(char* str);
int main ()
{
   char s[1000];
   scanf("%s",s);
   reverse(s);
   printf("%s\n",s);
   return 0;
}
void reverse(char* str)
{
   char s[1000];
   strcpy(s,str);
   int i=strlen(s),j;
   for(j=0;j<i;j++)
     str[j]=s[i-j-1];
}
   
