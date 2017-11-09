#include <stdio.h>
#include <string.h>
void reverse(char*str)
{
  int len=strlen(str);
  int a=len/2;
  char temp;
  int i;
  for(i=0;i<a;i++)
  {
    temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
  }
}
int main()
{
  char n[100];
  printf("输入一个字符串: ");
  scanf("%s",n);
  reverse;
  puts(n);
  return 0;
} 
