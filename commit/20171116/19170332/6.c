#include<stdio.h>
#include<string.h>

void k_reverse(char* str, int k)/*每k个字符进行一次反转*/
{
  int i;
  int temp;
  int len=strlen(str);
  for(i=0;k*(i+1)<=len;i++)
  {
      temp=str[k*i];
      str[k*i]=str[k*i+2];
      str[k*i+2]=temp;
  }
     printf("%s\n",str);
}

int main()
{
    char* str[1000];
    int k=3;
    scanf("%s",&str);
    k_reverse(str[1000],k);
    return 0;
}

