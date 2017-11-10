#include <stdio.h>
int GCD_iterative(int m, int n);
int GCD_recursive(int m, int n);

int main()
{
    int m, n, GCD1, GCD2;
    printf("给出两个正整数m, n:");
    scanf("%d%d", &m, &n);
    if (m < n)
    {
      int temp = n;
      n = m;
      m = temp;
    } 
    GCD1 = GCD_iterative(m, n);
    GCD2 = GCD_recursive(m, n);
    printf("GCD1 = %d,GCD2 = %d\n", GCD1, GCD2);
    return 0;
}

int GCD_iterative(int m, int n)
{
    int r = m % n;
    while (r != 0)
    {
      m = n;
      n = r;
      r = m % n;
    }
    return n;
}

int GCD_recursive(int m, int n)
{
    int r = m % n;
    if (r != 0)
    {
      m = n;
      n = r;
      return GCD_recursive(m, n);
    }
    else
    return n;
}
