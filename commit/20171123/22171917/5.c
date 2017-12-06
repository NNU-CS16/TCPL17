#include <stdio.h>
int subs(const char* str, const char* substr);

int main()
{
  char str[50], substr[30];
  printf("请输入字符串:\n");
  gets(str);
  printf("请输入字符串:\n");
  gets(substr);
  printf("%d\n",subs(str,substr));
  return 0;
}

int subs(const char* str, const char* substr)
{
   char* arr;
   arr = strcasestr(str,substr);
   if (!arr)
    return -1;
   else
    return arr-str+1;
}
  
