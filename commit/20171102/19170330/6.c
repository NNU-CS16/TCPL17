#include <stdio.h>
int is_prime(int n)
{
        int i;
        for (i = 2; i <= n; i++)
        if (n % i == 0)
        return -1;
        else 
        return 0;
}

int main()
{
     int n, i=1, s[2000];
     for (n=2; n<=10000; n++)
    {
        if (is_prime(n)==0)
        {
            s[i]=n;
            i++;
        }
    }
      for (i=100; i <= 1000; i++)
      printf("%d", s[i]);
      printf("\n");
      return 0;
}
