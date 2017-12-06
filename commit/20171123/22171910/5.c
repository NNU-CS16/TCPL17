/*记录字符串首次相同出现位置*/
#include <stdio.h>
#include <string.h>
int Substr(const char* str, const char* substr);

int main()
{
  char str[1000], substr[1000];
  printf("请输入主字符串str:");
  gets(str);
  printf("请输入子字符串substr:");
  gets(substr);
  printf("%d", Substr(str, substr));
  return 0;
}

int Substr(const char* str, const char* substr)
{
  int i, j, m, n, k;
  n = strlen(str);                    //计算主字符串长度
  m = strlen(substr);                //计算子字符串长度
  for (i = 0; i < n; i++)
  {
    if (str[i] == substr[0])        //字符串开始比较条件
    {
      k = i;
      for (j = 0; j < m; j++, i++)  //比较字符串
      {
	if (str[i] != substr[j])
	break;
      }
      if (j == m)                   //字符串相等条件
	 return k;
      i = k;
    }
  }
  return -1;                       //字符串不相等时返回-1
}
