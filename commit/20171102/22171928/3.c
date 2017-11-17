#include <stdio.h>
int is_pow2(int n);
int main()
{
    int n, m;
    scanf("%d", &n);
    m = is_pow2(n);
    printf("%d\n",m);
    return 0;
}
int is_pow2(int n)
{
    int b = 0, c, d = 1;
    for ( ; ;d = 1 << b)
    {
      if (n == d)
{
        return 0;
        break;
}
        if (n > d)
            b++;
        if (n < d)
        {
            return -1;;
            break;
        }
    }
}
