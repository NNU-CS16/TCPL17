  /*计某数二进制形式中1的个数*/
  #include <stdio.h>
  int count1_in_bin(int n);

  int main()
  {
    int n;
    printf("请输入整数:");
    scanf("%d", &n);
    count1_in_bin(n);
    return 0;
  }

  int count1_in_bin(int n)
  {
    int m, i = 0;
    while (n != 0)
    {
      m = n % 2;              //转为二进制中数
      if (m == 1)
         i++;                //计算1的个数
      n = n / 2;
    }
    printf("%d\n", i);
  }
