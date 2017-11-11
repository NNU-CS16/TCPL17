  /*判断某整数是否为回文数*/
  #include <stdio.h>
  #include <string.h>
  int is_int_pal(int n);

  int main()
  {
    int n;
    printf("请输入整数:");
    scanf("%d", &n);
    is_int_pal(n);
    return 0;
  }

  int is_int_pal(int n)     //判断该数是否为回文数
  {
    int a = 0, m;
    m = n;
    while (n)               //获得n的反向数
    {
      a = a * 10 + n % 10;
      n = n / 10;
    }
    if (m == a)
       printf("0");        //判断两者是否相等
    else
       printf("-1");
  }
