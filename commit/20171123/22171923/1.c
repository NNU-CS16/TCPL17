#include <stdio.h>
int odd(int n);
int main()
{
    int n, i, sum;
    scanf("%d", &n);
    for (i=1; i <= n; i++)
      sum += odd(i);
    printf("%d\n", sum);
    return 0;
}
int odd(int n)
{
    int i;
    for (i=n; i >= 1; i--)
      if (i%2 != 0 && n%i == 0) return i;
}
