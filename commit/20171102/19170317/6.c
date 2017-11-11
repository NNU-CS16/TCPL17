#include <stdio.h>
#include <math.h>
int is_prime(int n);

int main()
{
    int a, n, num=0;
    for (n = 2; num < 1000; ++n)
    {
      a = is_prime(n);
      if (a == -1)
      {
        ++num;
        if (100 <= num <= 1000)
          printf("%d   ", n);
      }
    }
    return 0;
}

int is_prime(int n)
{
    int m;
    for (m = 2; m <= sqrt(n); ++m)
    {
      if (n % m == 0)
        return 0;
    }
    return -1;
}
