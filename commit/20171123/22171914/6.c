#include <stdio.h>
#include <string.h>
int count_substr(const char* str,const char* substr)
{
  int i,j,k,number=0;
  for(i=0;str[i]!='\0';i++)

  {
    for(j=i,k=0;str[j]==substr[k];j++,k++)
    {
      if(substr[k+1]=='\0')
      number++;
    }
  }
  printf("substr在str出现的次数为%d\n",number);
}
int main()
{
  char str[100],substr[100]; 
  int number;
  printf("请输入主串: ");
  gets(str);
  printf("请输入子串: ");
  gets(substr);
  count_substr;  
  printf("substr在str出现的次数为%d\n",number);
  return 0;

} 
