#include <stdio.h>
int is_str_pal(const char* str)
{
  int i=0;
  int j=strlen(str)-1;
  while(i<j&&str[i]==str[j])
  {
    i++;
    j--;
  }
  if(i<j)
  return -1;
  else 
  return 0;
}
int main()
{
  const char* str;
  printf("输入字符串:\n");
  scanf("%s",str);
  is_str_pal;
  puts(str);
  return 0;
}
