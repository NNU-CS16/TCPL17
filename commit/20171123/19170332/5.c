#include<stdio.h>
#include<string.h>
int substr(const char* str, const char* substr)
{
  int n1=strlen(str);
  int n2=strlen(substr);
  int j=0,k=0;
  int count;
  for(j=0;j<n1;j++)
  {
   if(str[j]!=substr[k]) 
     continue;
   count=j+1;
   for(k=0;k<n2;k++,j++)
   {
    if(str[j]!=substr[k])
    count=-1;
   }
    if(count>=0) return count;
  }
  return -1;
}

int main()
{
   char str[100];char substr[100];
   int n=0;
   for(n=0;n<100;n++)
    scanf("%s%s",&str[n],&substr[n]);
   printf("%d\n",substr(str[100],substr[100]));
   return 0;
}

  
     

