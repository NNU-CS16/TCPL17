  /*判断某字符串是否为回文字符串*/
  #include <stdio.h>
  #include <string.h>
  int is_str_pal(const char* str);

  int main()
  {
    char n, str[n];
    printf("请输入字符串:");
    gets(str);                   //逐个读入字符串中字符
    is_str_pal(str);
    return 0;
  }

  int is_str_pal(const char* str)         //设置函数，判断回文字符串
  {
    char n, i, j, m = 0;
    n = strlen(str);
    for (i = 0, j = n - 1; j > i; i++, j--)
    if (str[i] != str[j])                 //判断字符串首尾是否相等
    {
      m = -1;
      break;
    }
    printf("%d", m);
  }
