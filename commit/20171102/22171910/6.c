  /*判断一个数是否为素数,并打印第100至1000个素数*/
  #include <stdio.h>
  #include <math.h>
  int is_prime(int n);

  int main()
  {
    int n, i, b, a[i];
    printf("请输入整数:");
    scanf("%d", &n);
    if (is_prime(n))
       printf("0\n");
    else
      printf("1\n");
    for (b = 0, i = 0; b < 1000 ; b++)      //计入前一千个素数
    {
      if (is_prime(b))
      {
        a[i] = b;
        i++;
      }
    }
    for (i = 99; i < 1000; i++)        //输出第100至第1000个素数
    printf("%d ", a[i]);
    return 0;
  }

  int is_prime(int n)          //判断整数是否为素数
  {
    int m;
    for( m = 2; m <= sqrt(n); m++)
    {
      if (n % m == 0)
      return 0;
    }
    return 1;
  }
