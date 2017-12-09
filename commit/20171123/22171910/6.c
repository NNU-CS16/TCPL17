/*统计子字符串在主字符串中出现次数*/
#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);

int main()
{
  char str[1000], substr[1000];
  printf("请输入主字符串str:");
  gets(str);
  printf("请输入子字符串substr:");
  gets(substr);
  printf("%d", count_substr(str, substr));
  return 0;
}

int count_substr(const char* str, const char* substr)
{
  int a = 0, i, j, m, n, k;
  n = strlen(str);                      //计算主字符串长度
  m = strlen(substr);                  //计算子字符串长度
  for (i = 0; i < n; i++)
  {
    if (str[i] == substr[0])          //开始比较字符串
    {
      k = i;
      for (j = 0; j < m; j++, i++)
      {
        if (str[i] != substr[j])
        break;
      }
      if (j == m)
         a++;                        //若子字符串出现，计数1次
      i = k + m;                    //已对比过的字符不再次对比
    }
  }
    return a;
}
