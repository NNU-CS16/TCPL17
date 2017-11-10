#include <stdio.h>
#include <math.h>
int is_prime (int n);

int main()
{
    int a,n,count=0;
    for (n = 2 ;n <= 10000 ; n++)
      {
        a = is_prime (n);
        if (a == 0)
        {
          count++;
          if (100 <= count <= 1000)
          printf ("%d\n",n);
        }
      }
     return 0;
}


int is_prime (int n)
{
    int i;
    for (i = 2 ; i <= sqrt(n) ; i++)
    {
      if (n % i == 0)
       return -1;
    }
    return 0;
}
