#include<stdio.h>
#include<string.h>
int count_substr(const char* str, const char* substr)
{
   int len1=strlen(str);
   int len2=strlen(substr);
   int count=0;
   while(strlen(str)>=len2)
   {
       if(strncmp(str,substr,len2)==0)
       {
            count++;
            str=str+len2;
       }
       else
            str=str+1;
    }
    return count;
}
int main()
{
   char str[50],substr[30];
   scanf("%s%s",str,substr);
   printf("%d\n",count_substr(str,substr));
   return 0;
}
      
