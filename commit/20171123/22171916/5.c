#include<stdio.h>
#include<string.h>
int substr(const char* str, const char* substr)
{
  int j=strlen(str);
  int k=strlen(substr);
  for(int i=0;i<=j-k;i++)
    {
      while(strncmp(str+i,substr,k)==0)
        {
          return i;
        }
    }
  return -1;
}
int main()
{
  char str1[100];
  char str2[10];
  scanf("%[^\n]",str1);
  scanf("%s",str2);
  printf("%d",substr(str1,str2));
  return 0;
}
