nclude<stdio.h>
#include<string.h>
void reverse(char *str)
{
   int i,j;
   char c;
   j=strlen(str);
   for (i=0;i<j/2;i++)
      {
         c=str[i];
         str[i]=str[j-1-i];
         str[j-1-i]=c;
      }
}
 

int main(void)
{
   char s[100];
   scanf("%s",s);
   reverse(s);
   printf("%s\n",s);
  return 0;
}
