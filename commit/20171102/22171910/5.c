  /*计算某数阶乘位数*/
  #include <stdio.h>
  int fac_bit_count(int n);

  int main()
  {
    int n;
    printf("请输入整数:");
    scanf("%d", &n);
    fac_bit_count(n);
    return 0;
  }

  int fac_bit_count(int n)
  {
    int m = 1, i, e = 0;
    for (i = 2; i <= n; i++)
    {
      m = m * i;
      while (m >= 10)
        m = m / 10, e++;
    }
    printf("%d\n", e + 1);
  }
