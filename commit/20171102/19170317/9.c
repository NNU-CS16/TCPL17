  #include <stdio.h>
  #include <math.h>
  int is_int_pal(int n);

  int main()
  {
      int n;
      printf("请输入一个整数n:");
      scanf("%d", &n);
      printf("%d\n", is_int_pal(n));
      return 0;
  }

  int is_int_pal(int n)
  {
      int a[100];
      int i = 0, flag = 0;
      while (n != 0)
      {
        a[i] = n % 10;
        n = n / 10;
        ++i;
      }
      int j = 0;
      i = i - 1;
      for ( ; i >= j; ++j,--i)
      {
        if (a[i] != a[j]) 
        {
           flag = -1;
           break;
        }
      }
      return flag;
  }
