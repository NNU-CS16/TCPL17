#include <stdio.h>
#include <math.h>
int is_pow2(int n);

int main()
{
    int n, x;
    printf("n =");
    scanf("%d", &n);
    x = is_pow2(n);
    printf("%d\n", x);
    return 0;
}

int is_pow2(int n)
{
    int a = n, b = 0, i;
    for (i = 0; b == 0; ++i)
    {
      b = a & 1;
      a = a >> 1;
    }
    if (pow(2,i-1) == n)
      return 0;
    else
      return -1;
}
