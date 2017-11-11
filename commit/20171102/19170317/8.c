#include <stdio.h>
int LCM(int m, int n);

int main()
{
    int m, n;
    printf("请输入m,n的值:");
    scanf("%d%d", &m, &n);
    if (m < n)
    {
      int temp = m;
      m = n;
      n = temp;
    }
    LCM(m, n);
    return 0;
}

int LCM(int m, int n)
{
    if (m % n == 0)
      printf("LCM = %d\n", m);
    else
    {
      int i = 1, m1 = m;
      while (m1 % n != 0)
      {
        ++i;
        m1 = m * i;
      }
      printf("LCM = %d\n", m1);
    }
}
