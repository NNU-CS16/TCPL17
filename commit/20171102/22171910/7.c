  /*用辗转相除法求两个正整数的最大公约数*/
  #include <stdio.h>
  int GCD_recursive(int m, int n);
  int GCD_iterative(int m, int n);

  int main()
  {
    int a, m, n;
    printf("请输入正整数m n:");
    scanf("%d%d", &m, &n);
    a=GCD_recursive(m, n);
    printf("%d\n", a);
    GCD_iterative(m, n);
    return 0;
  }

  int (GCD_recursive(int m, int n))     //使用递归版本求最大公约数
  {
    int r;
    r = m % n;
    if (r == 0)
       return n;
    else
       return GCD_recursive(n, r);
  }

  int GCD_iterative(int m, int n)     //使用循环版本求最大公约数
  {
    int r;
    while (r != 0)
    {
      r = m % n;
      m = n;
      n = r;
    }
    printf("%d", m);
    printf("\n");
    return 0;
  }
