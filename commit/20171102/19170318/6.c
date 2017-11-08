#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    for (int i=2;i<=sqrt(n);i++)
      if (n%i==0) return -1;
    return 0;
}

int main()
{

    int t=1,n=3;
    while (t<1000)
    {
      if (is_prime(n)==0) { t++; if (t>=100) printf("%d\n",n); }
      n++;
    }
    return 0;

}
