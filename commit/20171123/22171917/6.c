#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);

int main()
{
   char str[100],substr[50];
   scanf("%s%s",str,substr);
   printf("%d\n",count_substr(str,substr));
   return 0;
}

int count_substr(const char* str, const char* substr)
{
   int i,sum=0;
   int a=strlen(str),b=strlen(substr);
   for(i=0;i<=a-b;i++)
   {
    if(strncmp(str+i,substr,b)==0)
    {
     sum++;
     i=i+b-1;
    }
   }
   return sum;
}
