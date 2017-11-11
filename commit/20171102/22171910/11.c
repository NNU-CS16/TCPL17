  /*将某字符串反转输出*/
  #include <stdio.h>
  #include <string.h>
  void reverse(char* str);

  int main()
  {
    char n, str[n];
    printf("请输入字符串:");              //读入某字符串
    gets(str);
    reverse(str);
    printf("\n");
    return 0;
  }

  void reverse(char* str)              //设定函数使字符串取反
  {
    int n, i, j, a[n];
    n = strlen(str);                    //获得字符串长度
    for (i = 0, j = 0; j < n; i++, j++)
        a[j] = str[i];                  //令设字符数组记入原字符数组顺序
    for (i = 0, j = n - 1;
         j >= 0; i++, j--)
        str[i] = a[j];                 //使原字符数组取反
    for (i = 0; i <= n; i++)
        printf("%c", str[i]);
  }
