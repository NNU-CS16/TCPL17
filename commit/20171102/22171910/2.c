  /*设计函数将十进制转化为十六进制*/
  #include <stdio.h>
  void print_hex(int a);

  int main()
  {
    int a;
    printf("请输入一个十进制整数值:");
    scanf("%d", &a);
    print_hex(a);
    return 0;
  }

  void print_hex(int a)
  {
    int c, m, i=0, s[i];
    while (a != 0)
    {
      m = a % 16;        //取余，赋给数组a(仿照十进制转二进制方法)
      s[i] = m;
      i++;
      a = a / 16;
    }
    i--;
    for ( ; i>=0 ; i--)
    {
      if (s[i] == 10) printf("a");
      else if (s[i] == 11) printf("b");
      else if (s[i] == 12) printf("c");
      else if (s[i] == 13) printf("d");
      else if (s[i] == 14) printf("e");
      else if (s[i] == 15) printf("f");
      else printf("%d", s[i]);
    }
    printf("\n");
  }
