#include <stdio.h>
int is_prime(int n);
int main()
{
  int n = 2, i, m, j, b;
  for (i = 0;i <= 1000; )
  {
      m = is_prime(n);
      if (m == 0)
      {    
          i++;
          n = n + 1;
      }
      else
        n = n + 1;
      if (i >= 100 && m == 0)
      {
            n = n - 1;
            printf("%d ", n);
            n = n + 1;
      }
  }
    printf("\n");
    return 0;
}
int is_prime(int n)
{
    int a, c;
    if (n > 2)
    {
        for (c = 2;c <= n/2;c++)
        {
            a = n % c;
            if (a == 0)
            {
                return -1;
                break;
            }
        }
    }
    if (n = 2)
        return 0;
    if (c > n - 2)
        return 0;
}
