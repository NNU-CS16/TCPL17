#include<stdio.h>
#include<string.h>
int count_substr(const char *str,char *substr)
{
  int count=0;
  int k=strlen(str);
  int j=strlen(substr);
  for (int i=0;i<=k-j;i++)
    {
     if (strncmp(str+i,substr,j)==0)
       {
         count++;
         i+=j-1;
       }
    }
  return count;
}
int main()
{
 char string[100];
 char substr[100];
 scanf("%s",string);
 scanf("%s",substr);
  
 char *str1,*str2;
 str1=string;
 str2=substr;
 printf("%d",count_substr(str1,str2));
 return 0;
}
