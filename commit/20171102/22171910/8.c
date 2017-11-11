  /*求某两个整数的最小公倍数*/
  #include <stdio.h>
  int LCM(int m, int n);

  int main()
  {
    int m, n;
    printf("请输入正整数m n:");
    scanf("%d%d", &m, &n);
    LCM(m, n);
    return 0;
  }

  int LCM(int m, int n)
  {
    int a, b, c, d, e, r;
    a = m;
    b = n;
    while (r != 0)         //求这两个整数的最大公约数
    {
      r = m % n;
      m = n;
      n = r;
    }
    c = a / m;
    d = b / m;
    e = c * d * m;           //通过最大公约数计算最小公倍数
    printf("%d", e);
  }
